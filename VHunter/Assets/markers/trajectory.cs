using UnityEngine;
using System.Collections;

public class trajectory : MonoBehaviour {

	public GameObject item;
	public int nItems;

	private Renderer[] items;

	private Vector3 lastStart;
	private Vector3 lastTop;

	// Use this for initialization
	void Start () {
		items = new Renderer[nItems];
		for (int cnt = 0; cnt < nItems; cnt++) {
			GameObject o = (GameObject)Instantiate (item); 
			items [cnt] = o.GetComponent<Renderer> ();
			items [cnt].transform.SetParent (transform);
			items [cnt].enabled = false;
		}
	}
		

	public void Draw(Vector3 start, Vector3 top){
		if (start == lastStart && top == lastTop)
			return;
		lastStart = start;
		lastTop = top;
		float locX = top.x - start.x;
		float locY = top.y - start.y;

		if (locX < 1)
			locX = 1;
		
		float a = -locY / locX / locX;

		float dX = locX * 2/nItems;
		float curX = -locX;
		for (int cnt = 0; cnt < nItems; cnt++) {
			curX += dX;
			float curY = a * curX * curX;
			Renderer r=items[cnt];
			r.transform.position=new Vector3(curX+top.x,curY+top.y,start.z);
			items [cnt].enabled = true;
		}	
	}

	public void Clear(){
		lastStart = Vector3.zero;
		lastTop = Vector3.zero;
		for (int cnt = 0; cnt < nItems; cnt++)
			items [cnt].enabled = false;
	}
}
