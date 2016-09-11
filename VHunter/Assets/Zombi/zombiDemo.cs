using UnityEngine;
using System.Collections;


public class zombiDemo : MonoBehaviour {
	public enum States {standstill,walk};

	public float walkSpeed=-1f;
	// Update is called once per frame
	//private Animator anim;

	public States curMode=States.walk;

	void Start(){
		//anim = GetComponent<Animator> ();
	}
/*
	public void standStill(){
		if (curMode!=States.standstill) {
			curMode = States.standstill;
			anim.SetTrigger("doStand");
		}
	}
*/
	public void onStep(){
		transform.Translate (walkSpeed, 0, 0);
	}
}
