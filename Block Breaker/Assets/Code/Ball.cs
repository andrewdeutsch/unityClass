using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {
	public Paddle paddle;
	private bool hasStarted = false;
	private Vector3 paddleToBallVector;
	// Use this for initialization
	void Start () {
		//paddle = GameObject.FindObjectOfType<Paddle>();
		paddleToBallVector = this.transform.position - paddle.transform.position;

	}
	// Update is called once per frame
	void Update ()
	{
		if (!hasStarted) {
			//lock the ball relative to the paddle
			this.transform.position = paddle.transform.position + paddleToBallVector;

			//wait for mouse press to launch
			if (Input.GetMouseButton (0)) {
				this.GetComponent<Rigidbody2D>().velocity = new Vector2 (2f, 10f);
				hasStarted = true;
			}

		}
	}
	void OnCollisionEnter2D (Collision2D collision)
	{

		Vector2 tweak = new Vector2(Random.Range(0f, 0.2f), Random.Range(0f, 0.2f));
		if (hasStarted) {
			GetComponent<AudioSource> ().Play ();
			GetComponent<Rigidbody2D>().velocity += tweak;
			//print(GetComponent<Rigidbody2D>().velocity);
		}
	}
}
