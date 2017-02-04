using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class NumberWizard : MonoBehaviour {
	// Use this for initialization
	int max;
	int min;
	int guess;

	public int maxGuessesAllowed = 5;
	
	public Text text; 

	void Start () {
		StartGame();
	}
	
	void StartGame () {
		max = 1001;
		min = 1;
		NextGuess ();
//		guess = Random.Range(min, max);
//		text.text = guess.ToString();
//		Debug.Log(guess);
//		//max = max + 1;
		
		
	}

	public void GuessLower(){
		max = guess;
		NextGuess();
	}

	public void GuessHigher(){
		min = guess;
		NextGuess();
	}
	
	void NextGuess () {
		guess = Random.Range(min,max+1);
		text.text = guess.ToString();
		maxGuessesAllowed = maxGuessesAllowed - 1;
		if (maxGuessesAllowed <= 0){
			Application.LoadLevel("Win");
		}
	}
}
