using UnityEngine;
using System.Collections;
using System.Collections.Generic;



public class Cameraman : MonoBehaviour {

	private class CameraTask : Object {
		public virtual bool Do(Cameraman me){
			return false;
		} 
	}

	private class CameraMove : CameraTask {
		private Vector3 finalPosition;
		private float length;
		private float startTime;

		public CameraMove(Vector3 toPosition, float timeRemain){
			finalPosition=toPosition;
			startTime=Time.time;
			length=timeRemain;
		}
		public override bool Do (Cameraman me) {
			float t = Time.time-startTime;
			//Debug.Log (t+":"+finTime+":"+finalPosition);
			if (t >= length) {
				me.transform.position = finalPosition;
				return false;
			} else {
				me.transform.position = Vector3.Lerp (me.transform.position,finalPosition,t/length);
			}
			return true;
		}
	}

	private List<CameraTask> tasks;

	void Start () {
		tasks = new List<CameraTask> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (tasks.Count>0) {
			List<CameraTask> buf = new List<CameraTask> ();
			foreach (CameraTask task in tasks) {
				if (task.Do (this)) {
					buf.Add (task);
				}
			}
			tasks = buf;
		}
	}

	public void changePosition(Vector3 position, float timeRemain){
		tasks.Add (new CameraMove(position,timeRemain));		
	}
}
