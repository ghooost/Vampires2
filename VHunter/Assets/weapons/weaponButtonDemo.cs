using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class weaponButtonDemo : MonoBehaviour {
	public Sprite def;
	public Sprite selected;
	public enum States {def,invisible,selected};
	// Use this for initialization
	private States mode;
	private Button button=null;

	public void setState(States state){
		if(button==null)
			button = GetComponent<Button> ();
		mode = state;
		if (mode == States.def) {
			button.image.enabled=true;
			button.image.overrideSprite = def;
		} else if (mode == States.selected) {
			button.image.enabled=true;
			button.image.overrideSprite = selected;
		} else {
			button.image.enabled=false;
		}
	}
}
