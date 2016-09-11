using UnityEngine;
using System.Collections;


public class professor : MonoBehaviour {

	public enum States {def,standstill,walk};

	public float walkSpeed=1f;
	private Animator anim;


	public States curMode=States.def;

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator> ();
		if (curMode == States.walk) {
			anim.SetBool ("doWalk",true);
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (curMode == States.walk) {
			if (transform.position.x <= 0) {
				transform.Translate (walkSpeed * Time.deltaTime, 0, 0);
//				Camera.main.transform.Translate (walkSpeed * Time.deltaTime, 0, 0);
			}
		}
	}

	public void setMode(States mode){
		if (mode != curMode) {
			curMode = mode;
			if (curMode == States.walk) {
				anim.SetBool ("doWalk", true);
			} else {
				anim.SetBool ("doWalk", false);
			}
		}
	}
}
