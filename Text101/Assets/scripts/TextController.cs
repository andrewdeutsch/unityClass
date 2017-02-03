using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TextController : MonoBehaviour {
	public Text text;
	private enum States {beach, shell, chair, book, stairs, bird, crunch};
	private States myState;
	// Use this for initialization
	void Start ()
	{
		text.text = "Hello World";
		myState = States.beach;
	}
	// Update is called once per frame
	void Update ()
	{
		if 		(myState == States.beach) 	{state_beach();}
		else if (myState == States.stairs) 	{state_stairs();}
		else if (myState == States.chair) 	{state_chair();}
		else if (myState == States.book) 	{state_book();}
		else if (myState == States.shell) 	{state_shell();}
		else if (myState == States.bird) 	{state_bird();}
		else if (myState == States.crunch) 	{state_crunch();}
	}
	void state_beach ()
	{
		text.text = "You're an adorable dog. You're on a beach. It's gorgeous. You're having a tough " +
		"time believing how gorgeous it is. You take a look around. You see a stairwell, " +
		"a beach chair, and a sea shell off in the distance.\n\n" +
		"Press C to climb the stairs, S to sit in the chair, or P to pick up the shell.";
		if (Input.GetKeyDown (KeyCode.S)) {myState = States.chair;} 
		else if (Input.GetKeyDown (KeyCode.C)) {myState = States.stairs;}
		else if (Input.GetKeyDown (KeyCode.P)) {myState = States.shell;}

	}
	void state_stairs ()
	{
		text.text = "You climb up a winding set of stairs. You can't see the top "+
		"because they are covered in clouds. You can hear a sound coming from them, "+
		"though. It sounds like a song bird, but there is something unusual about "+
		"the song. You're trying to reach the clouds, but they keep rising.\n\n" +
		"Press R to return to the beach.";
		if(Input.GetKeyDown(KeyCode.R)){myState = States.beach;}
		
	}
	void state_chair ()
	{
		text.text = "You plop down in the chair. It might be the most comfortable chair "+
		"you've sat in. To the right of the chair you see a book.\n\n"+
		"Press P to pick up the book.";
		if (Input.GetKeyDown (KeyCode.P)) {myState = States.book;}
		
	}
	void state_book ()
	{
		text.text = "You pick up the book. It opens to a poem and a picture of sea shell: "+
		"There, inside, is a song. You were born to "+
		"hear it. You hear it now. "+
		"You were born to sing it. " +
		"Sing along.\n\n"+
		"Press C to climb the stairs. Press P to pick up the shell.";
		if (Input.GetKeyDown (KeyCode.C)) {myState = States.stairs;}
		else if (Input.GetKeyDown (KeyCode.P)){myState = States.shell;}
		
	}
	void state_shell ()
	{
		text.text = "You pick up the shell. You hear a beautiful song.\n\n"+ 
		"Press M to start to sing along. ";
		if (Input.GetKeyDown (KeyCode.M)) {myState = States.bird;}
	}
	void state_bird ()
	{
		text.text = "While singing a bird flies up to the shore line, singing along with "+
		"you. You watch as it draws a circle above you. In the circle, a history of "+
		"time plays out in a crudely animated style, as if on a screen.  The story "+
		"starts with the Big Bang, through the creation of earth, up until the present."+
		"It ends with you singing the song, and then everything reversing in seconds\n\n"+
		"Press S to stop singing";
		if (Input.GetKeyDown (KeyCode.S)) {myState = States.crunch;}
	}
	void state_crunch ()
	{
		text.text = "You pause for a moment, hesistant to continue, but the bird looks "+
		"at you reassuringly, as if to say it's going to be alright.\n\n"+
		"You sing louder than ever, until everything reverses, and time restarts.\n\n"+
		"Press R to restart the game.";
		if (Input.GetKeyDown (KeyCode.R)) {myState = States.beach;}

	}
}
