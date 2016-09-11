using UnityEngine;
using System.Collections;

public class markerStart : MonoBehaviour {
	// Update is called once per frame
	private StartGame startGame;
	//private bool dragging=false;
	private Transform marker2;
	void Start(){
		startGame = GetComponentInParent<StartGame> ();
		marker2 = transform.parent.Find ("marker2");
	}

	void OnMouseDown(){
		startGame.onEvent (StartGame.EventMode.AimPracticeMouseDown);
	}

	void OnMouseUp(){
		if (Vector2.Distance (transform.position, marker2.position) < 0.26f) {
			startGame.onEvent (StartGame.EventMode.AimPracticeMouseUpOk);
		} else {
			startGame.onEvent (StartGame.EventMode.AimPracticeMouseUpWrong);
		}
	}

	void OnMouseDrag() {
		transform.position = mousePos();
		if (Vector2.Distance (transform.position, marker2.position) < 0.26f) {
			startGame.onEvent (StartGame.EventMode.AimPracticeDragOk);
		} else {
			startGame.onEvent (StartGame.EventMode.AimPracticeMouseDown);
		}
	}

	private Vector3 mousePos(){
		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Plane xy = new Plane(Vector3.forward, new Vector3(0, 0, -5f));
		float distance;
		xy.Raycast(ray, out distance);
		return ray.GetPoint(distance);
	}
}
