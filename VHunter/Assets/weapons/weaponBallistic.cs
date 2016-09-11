using UnityEngine;
using System.Collections;

public class weaponBallistic : MonoBehaviour {

	private float speed = 5f;

	public float rotation=10f;
	public float g=9.8f;
	public GameObject blow;


	private float a = 0;
	private bool fired = false;
	private float curX;
	private Vector3 basePoint;
	private float maxX=0f;

	// Use this for initialization
	void Start () {
		//transform.GetComponent<Renderer> ().enabled = false;
	}

	public void Fire(Vector3 start, Vector3 top){
		basePoint = top;
		basePoint.z = start.z;
		float locX = top.x - start.x;
		float locY = top.y - start.y;

		if (locX < 1)
			locX = 1;

		a = -locY / locX / locX;
		maxX = locX;

		float t = Mathf.Sqrt (2*locY/g);
		speed = 2 * locX / t;

		curX = -locX;
		fired = true;
		//transform.GetComponent<Renderer> ().enabled = true;
	}

	// Update is called once per frame
	void Update () {
		if (fired) {
			float curY = curX * curX * a;
			float x = basePoint.x + curX;
			float y = basePoint.y + curY;
			transform.position = new Vector3 (x,y,basePoint.z);
			transform.Rotate (Vector3.forward*rotation);
			curX += speed*Time.deltaTime;
			if (curX > maxX) {
				Destroy (gameObject);
			}
		}
	}

	void OnTriggerEnter2D(Collider2D coll) {
		if (coll.gameObject.tag == "Enemy") {
			GameObject locBlow = (GameObject)Instantiate (blow,coll.gameObject.transform.position,Quaternion.identity);
			ParticleSystem ps=locBlow.GetComponent<ParticleSystem> ();
			ps.Play ();
			Destroy (locBlow, ps.duration);

			Destroy (gameObject);
			Destroy (coll.gameObject);

			if (coll.gameObject.name == "zombi") {
				GetComponentInParent<StartGame> ().onEvent (StartGame.EventMode.ZombiKilled);
			} else {
				GetComponentInParent<StartGame> ().onEvent (StartGame.EventMode.AimPracticeDone);
			};
		};
	}

}
