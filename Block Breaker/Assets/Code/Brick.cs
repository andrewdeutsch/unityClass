using UnityEngine;
using System.Collections;

public class Brick : MonoBehaviour {
	public AudioClip crash;
	public Sprite[] hitSprites;
	public static int breakableCount = 0;
	public GameObject smoke;
	private int timesHit;
	private bool isBreakable;
	private LevelManager levelManager;

	// Use this for initialization
	void Start ()
	{
		isBreakable = (this.tag == "Breakable");
		if (isBreakable) {
			breakableCount++;

		}

		timesHit = 0;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
		//breakableCount = int.FindGameObjectsWithTag<"Breakable">()
	}

	void OnCollisionEnter2D (Collision2D col)
	{
		AudioSource.PlayClipAtPoint(crash, transform.position);
		if (isBreakable) {
			HandleHits ();
		}
	}

	void HandleHits ()
	{
		Vector3 brickPos = this.transform.position;
		timesHit++;
		int maxHits = hitSprites.Length +1;
		if (timesHit >= maxHits) {
			breakableCount--;
			levelManager.BrickDestroyed ();
			Destroy (gameObject);
			PuffSmoke();
		} else {
			LoadSprites();
		}
	}

	void PuffSmoke ()
	{
		GameObject smokePuff = Instantiate(smoke, transform.position, Quaternion.identity) as GameObject;
		smokePuff.GetComponent<ParticleSystem>().startColor = gameObject.GetComponent<SpriteRenderer>().color;
	}


	void LoadSprites ()
	{
		int spriteIndex = timesHit - 1;
		if (hitSprites [spriteIndex]) {
			this.GetComponent<SpriteRenderer> ().sprite = hitSprites [spriteIndex];
		} else {
			Debug.LogError("no brick");
		}
	}
	// TODO  Remove this method once we can actually win

	void SimulateWin ()
	{
		
		levelManager.LoadNextLevel();
	}
}
