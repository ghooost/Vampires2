using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StartGame : MonoBehaviour {

	public enum EventMode {
		DrawTrajectory,
		Fire,
		ZombiKilled,
		PresentProfessor,
		PresentWeapon0,
		PresentWeapon1,
		PresentWeapon2,
		PresentBat,
		StartAimPractice,
		AimPracticeMouseDown,
		AimPracticeMouseUpWrong,
		AimPracticeDragOk,
		AimPracticeMouseUpOk,
		AimPracticeDone
	}

	public GameObject oText;
	private Text cTxt;
	//private Animator anim;
	public GameObject demoWeapon;
	public weaponButtonDemo[] icons;

	private Transform bat;
	private Transform marker;
	private Transform marker2;
	//private string str1="";
	//private string str2="";

	void Start () {
		cTxt = oText.GetComponent<Text> ();
		//anim = GetComponent<Animator> ();
		for (int cnt = 0; cnt < icons.Length; cnt++)
			icons [cnt].setState (weaponButtonDemo.States.invisible);

		bat = transform.Find ("bat");
		marker = transform.Find ("marker");
		marker2 = transform.Find ("marker2");
		switchSprite (bat,false);
		switchSprite (marker,false);
		switchSprite (marker2,false);
	}

	public void onShowSlide(string text){
		//str1 = str2;
		//str2 = text;
		cTxt.text = text;
	}

	IEnumerator drawTrajectory(){
		trajectory tObj = transform.Find ("trajectory").GetComponent<trajectory> ();
		Vector3 start=transform.Find ("Professor").transform.position;
		Transform zombi = transform.Find ("zombi");
		for (;;) {
			Vector3 end=zombi.transform.position;
			Vector3 mid = new Vector3 ((end.x+start.x)/2f,2f,start.z);
			tObj.Draw (start,mid);

			yield return new WaitForSeconds (0.2f);
		}
	}

	IEnumerator drawTrajectory2(){
		trajectory tObj = transform.Find ("trajectory").GetComponent<trajectory> ();
		Vector3 start=transform.Find ("Professor").transform.position;
		Transform marker = transform.Find ("marker");
		for (;;) {
			Vector3 mid=marker.transform.position;
			tObj.Draw (start,mid);
			yield return new WaitForSeconds (0.1f);
		}
	}


	public void onEvent(EventMode mode){
		professor pro=transform.Find ("Professor").GetComponent<professor>();
		switch (mode) {
			case EventMode.DrawTrajectory:
				StartCoroutine ("drawTrajectory");
			break;
			case EventMode.Fire:
				Vector3 start=transform.Find ("Professor").transform.position;
				Vector3 end=transform.Find ("zombi").transform.position;
				Vector3 mid = new Vector3 ((end.x+start.x)/2f,2f,start.z);
				GameObject o = (GameObject)Instantiate (demoWeapon);
				o.transform.SetParent (transform);
				o.GetComponent<weaponBallistic> ().Fire (start,mid);
			break;
			case EventMode.ZombiKilled:
				StopCoroutine ("drawTrajectory");
				trajectory tObj = transform.Find ("trajectory").GetComponent<trajectory> ();
				tObj.Clear ();
			break;
			case EventMode.PresentProfessor:
				pro.setMode(professor.States.walk);
			break;
			case EventMode.PresentWeapon0:
				icons [0].setState (weaponButtonDemo.States.def);
			break;
			case EventMode.PresentWeapon1:
				icons [1].setState (weaponButtonDemo.States.def);
			break;
			case EventMode.PresentWeapon2:
				icons [2].setState (weaponButtonDemo.States.def);
			break;
			case EventMode.PresentBat:
				pro.setMode(professor.States.standstill);
				Vector3 newPos = Camera.main.transform.position;
				newPos.x = 5f;
				Camera.main.GetComponent<Cameraman> ().changePosition (newPos,2);
				switchSprite (bat,true).position=new Vector3(10f,0.5f,-5f);
			break;
			case EventMode.StartAimPractice:
				switchSprite (marker, true).position = new Vector3 (5f, 0f, -5f);
				switchSprite (marker2, true).position = new Vector3 (5.6f, 2.1f, -4.95f);
				icons [0].setState (weaponButtonDemo.States.selected);
				onShowSlide ("Перенесите красный маркер на зеленый кружок");
			break;
			case EventMode.AimPracticeMouseDown:
				onShowSlide ("Запомнили? Красный маркер на зеленый кружок");
				StartCoroutine ("drawTrajectory2");
			break;
			case EventMode.AimPracticeMouseUpWrong:
				onShowSlide ("Нет-нет, держите мышь нажатой пока красный маркер не будет внутри зеленого круга");
				switchSprite (marker, true).position = new Vector3 (5f, 0f, -5f);
				StopCoroutine ("drawTrajectory2");
				transform.Find ("trajectory").GetComponent<trajectory> ().Clear ();
			break;
			case EventMode.AimPracticeDragOk:
				onShowSlide ("Отлично! Видите, траектория чесночной гранаты достигла порождения ада? Отпускайте клавишу!");
			break;
			case EventMode.AimPracticeMouseUpOk:
				switchSprite (marker, false);
				switchSprite (marker2, false);

				Vector3 start1=transform.Find ("Professor").transform.position;
				Vector3 mid1=transform.Find ("marker").transform.position;
				GameObject o1 = (GameObject)Instantiate (demoWeapon);
				o1.transform.SetParent (transform);
				o1.GetComponent<weaponBallistic> ().Fire (start1,mid1);
				onShowSlide ("И-И-И-И");
			break;
			case EventMode.AimPracticeDone:
				StopCoroutine ("drawTrajectory2");
				trajectory tObj1 = transform.Find ("trajectory").GetComponent<trajectory> ();
				tObj1.Clear ();
				onShowSlide ("Тыдыщь! В жизни твари стоять на месте не будут и маркеров никто не поставит, но смысл вы уловили.");

			break;
		}
	}
		
	private Transform switchSprite(Transform o,bool mode){
		o.GetComponent<Renderer> ().enabled = mode;
		return o;
	}
}
