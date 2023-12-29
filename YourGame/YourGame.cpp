// Author: Parker Padgett
// Assignment: Your Game
// Description: This game will start the user off in a room without any recolection of how they got there.
// The user will have to go through several rooms with various challenges in order to escape. If they fail, they will die.
// Date: 10/29/2021


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

// Function Declaration
void firstDecision();
void easyGame();
void mediumGame();
void hardGame();
void easyGuessingGame();
void easyMathGame();
void easyRiddleGame();
void mediumGuessingGame();
void mediumMathGame();
void mediumRiddleGame();
void hardGuessingGame();
void hardMathGame();
void hardRiddleGame();

// Constants

// Main Function ----------------------------------------------------------------------------------------------------------------------
int main()
{
	// Variable declaration
	string name;
	char difficulty = 'e';
	int door;
	char playAgain;

	do
	{
		// Title and Description
		cout << "Title: Your Game - Saw" << endl;
		cout << "Description: This game will start the user off in a room without any recolection of how they got there." << endl;
		cout << "The user will have to go through several rooms with various challenges in order to escape. If they fail, they will die." << endl << endl;

		// Asking for users name
		cout << "What is your first name?: ";
		cin >> name;
		cout << endl;

		// Asking if the user wants to play a easy, medium, or hard difficulty game.
		cout << "Okay " << name << ". Do you want to play a easy, medium, or hard game?" << endl;
		cout << "Please enter 'e' for easy, 'm' for medium, or 'h' for hard." << endl;
		cin >> difficulty;

		// Clear screen
		system("CLS");

		// Start Easy Game ----------------------------------------------------------------------------------------------------------------------------------------------
		if (difficulty == 'e' || difficulty == 'E')
		{
			cout << "You wake up in a room dazed and confused. How did you get there you wonder.. " << endl;
			cout << "You look around and see three doors and a table with a note on it." << endl;

			// Ask user to keep looking around or read note until they read the note
			firstDecision();

			// After reading note, pick which door to go into
			cout << "Upon further inspection, you notice that door 1 says 'Guessing Game', door 2 says 'Math', and door 3 says 'Riddle'." << endl << endl;
			easyGame();
		}

		// Start Medium Game ---------------------------------------------------------------------------------------------------------------------------------------------
		if (difficulty == 'm' || difficulty == 'M')
		{
			cout << "You wake up in a room dazed and confused. How did you get there you wonder.. " << endl;
			cout << "You look around and see three doors and a table with a note on it." << endl;

			// Ask user to keep looking around or read note until they read the note
			firstDecision();

			// After reading note, pick which door to go into
			cout << "Upon further inspection, you notice that door 1 says 'Guessing Game', door 2 says 'Math', and door 3 says 'Riddle'." << endl << endl;
			mediumGame();
		}

		// Start Hard Game -----------------------------------------------------------------------------------------------------------------------------------------------
		if (difficulty == 'h' || difficulty == 'H')
		{
			cout << "You wake up in a room dazed and confused. How did you get there you wonder.. " << endl;
			cout << "You look around and see three doors and a table with a note on it." << endl;

			// Ask user to keep looking around or read note until they read the note
			firstDecision();

			// After reading note, pick which door to go into
			cout << "Upon further inspection, you notice that door 1 says 'Guessing Game', door 2 says 'Math', and door 3 says 'Riddle'." << endl << endl;
			hardGame();
		}

		// Asking user if they would like to play again
		do
		{
			cout << "Would you like to play again? Enter 'y' for yes or 'n' for no." << endl;
			cin >> playAgain;
		} while (playAgain != 'y' && playAgain != 'Y' && playAgain != 'n' && playAgain != 'B');

		if (playAgain == 'n' || playAgain == 'N')
		{
			cout << "Thank you for playing!" << endl;
			exit(0);
		}

		if (playAgain == 'y' || playAgain == 'Y')
			system("CLS");

	} while (playAgain == 'y' || playAgain == 'Y');

	return 0;
}

// Fucntion definitions -------------------------------------------------------------------------------------------------------------------------------------------
void firstDecision()
{
	// Local variables
	string name;
	char noteOrLook;

	do
	{
		cout << "Do you read the note or continue to look around? Enter 'n' to read the note or 'l' to keep looking around." << endl;
		cin >> noteOrLook;

		if (noteOrLook == 'n')
		{
			cout << "The note reads: '" << name << ". I have been watching you for some time. I have decided to choose you to participate in my game." << endl;
			cout << "As you can see, there are three doors in this room. Behind each door is a challenge that you must complete. Be careful though.." << endl;
			cout << "failure to complete the challenge will result in your death!" << endl;
			cout << "Under the table there are three keys labeled 1, 2, and 3. Pick a key and go through the designated door to start the game.'" << endl << endl;
		}
		else
			cout << "You continue to look around. The only thing you can find is three keys taped underneath the table. You should read the note." << endl << endl;
	} while (noteOrLook != 'n');
}

void easyGame()
{
	// Local Variables
	int door;
	int secondDoorChoice;
	char gameStoppage;

	// Asking which door user wants to go through
	cout << "Which door do you decide to go in? Enter 1, 2, or 3." << endl << endl;
	cin >> door;

	if (door == 1)
	{
		// Easy Guessing Game
		cout << "You grab the key labled 1 and go through the first door." << endl;
		cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
		cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
		cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
		cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
		cout << "Type a number into my keypad to start guessing.'" << endl << endl;
		easyGuessingGame();

		// Ask user if they would like to continue or not
		do
		{
			cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
			cin >> gameStoppage;

			if (gameStoppage == 'c')
				cout << "Continuing." << endl << endl;
			else if (gameStoppage == 's')
			{
				cout << "Ending Game. Thank you for playing" << endl << endl;
				exit(0);
			}
		} while (gameStoppage != 'c' && gameStoppage != 's');

		// Second Door Choice
		cout << "In the next room there are two more doors. This time they do not have anything written on them." << endl;
		cout << "There are two keys labeled 1 and 2. Which do you choose? Enter 1 or 2." << endl;
		cin >> secondDoorChoice;

		if (secondDoorChoice == 1)
		{
			// Easy Math Game
			cout << "You grab the key labeled 1 and go through the first door." << endl;
			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			easyMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Easy Riddle Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			easyRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Easy Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
		else if (secondDoorChoice == 2)
		{
			// Easy Riddle Game
			cout << "You grab the key labeled 2 and go through the second door." << endl;
			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			easyRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Easy Math Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			easyMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Easy Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
	}
	else if (door == 2)
	{
		// Easy Math Game
		cout << "You grab the key labeled 1 and go through the first door." << endl;
		cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
		cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
		cout << "You approach the table and the paper reads:" << endl << endl;
		easyMathGame();

		// Ask user if they would like to continue or not
		do
		{
			cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
			cin >> gameStoppage;

			if (gameStoppage == 'c')
				cout << "Continuing." << endl << endl;
			else if (gameStoppage == 's')
			{
				cout << "Ending Game. Thank you for playing" << endl << endl;
				exit(0);
			}
		} while (gameStoppage != 'c' && gameStoppage != 's');

		// Second Door Choice
		cout << "In the next room there are two more doors. This time they do not have anything written on them." << endl;
		cout << "There are two keys labeled 1 and 2. Which do you choose? Enter 1 or 2." << endl;
		cin >> secondDoorChoice;

		if (secondDoorChoice == 1)
		{
			// Easy Guessing Game
			cout << "You grab the key labeled 1 and go through the first door." << endl;
			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			easyGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Easy Riddle Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			easyRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Easy Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
		else if (secondDoorChoice == 2)
		{
			// Easy Riddle Game
			cout << "You grab the key labeled 2 and go through the second door." << endl;
			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			easyRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Easy Guessing Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			easyGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Easy Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
	}
	else if (door == 3)
	{
		// Easy Riddle Game
		cout << "You grab the key labeled 3 and go through the first door." << endl;
		cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
		cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
		cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
		cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
		easyRiddleGame();

		// Ask user if they would like to continue or not
		do
		{
			cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
			cin >> gameStoppage;

			if (gameStoppage == 'c')
				cout << "Continuing." << endl << endl;
			else if (gameStoppage == 's')
			{
				cout << "Ending Game. Thank you for playing" << endl << endl;
				exit(0);
			}
		} while (gameStoppage != 'c' && gameStoppage != 's');

		// Second Door Choice
		cout << "In the next room there are two more doors. This time they do not have anything written on them." << endl;
		cout << "There are two keys labeled 1 and 2. Which do you choose? Enter 1 or 2." << endl;
		cin >> secondDoorChoice;

		if (secondDoorChoice == 1)
		{
			// Easy Guessing Game
			cout << "You grab the key labeled 1 and go through the first door." << endl;
			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			easyGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Easy Math Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			easyMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Easy Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
		else if (secondDoorChoice == 2)
		{
			// Easy Math Game
			cout << "You grab the key labeled 2 and go through the second door." << endl;
			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			easyMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Easy Guessing Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			easyGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Easy Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
	}
}

void mediumGame()
{
	// Local Variables
	int door;
	int secondDoorChoice;
	char gameStoppage;

	// Asking which door user wants to go through
	cout << "Which door do you decide to go in? Enter 1, 2, or 3." << endl << endl;
	cin >> door;

	if (door == 1)
	{
		// Medium Guessing Game
		cout << "You grab the key labled 1 and go through the first door." << endl;
		cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
		cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
		cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
		cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
		cout << "Type a number into my keypad to start guessing.'" << endl << endl;
		mediumGuessingGame();

		// Ask user if they would like to continue or not
		do
		{
			cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
			cin >> gameStoppage;

			if (gameStoppage == 'c')
				cout << "Continuing." << endl << endl;
			else if (gameStoppage == 's')
			{
				cout << "Ending Game. Thank you for playing" << endl << endl;
				exit(0);
			}
		} while (gameStoppage != 'c' && gameStoppage != 's');

		// Second Door Choice
		cout << "In the next room there are two more doors. This time they do not have anything written on them." << endl;
		cout << "There are two keys labeled 1 and 2. Which do you choose? Enter 1 or 2." << endl;
		cin >> secondDoorChoice;

		if (secondDoorChoice == 1)
		{
			// Medium Math Game
			cout << "You grab the key labeled 1 and go through the first door." << endl;
			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			mediumMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Medium Riddle Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			mediumRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Medium Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
		else if (secondDoorChoice == 2)
		{
			// Medium Riddle Game
			cout << "You grab the key labeled 2 and go through the second door." << endl;
			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			mediumRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Medium Math Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			mediumMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Medium Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
	}
	else if (door == 2)
	{
		// Medium Math Game
		cout << "You grab the key labeled 1 and go through the first door." << endl;
		cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
		cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
		cout << "You approach the table and the paper reads:" << endl << endl;
		mediumMathGame();

		// Ask user if they would like to continue or not
		do
		{
			cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
			cin >> gameStoppage;

			if (gameStoppage == 'c')
				cout << "Continuing." << endl << endl;
			else if (gameStoppage == 's')
			{
				cout << "Ending Game. Thank you for playing" << endl << endl;
				exit(0);
			}
		} while (gameStoppage != 'c' && gameStoppage != 's');

		// Second Door Choice
		cout << "In the next room there are two more doors. This time they do not have anything written on them." << endl;
		cout << "There are two keys labeled 1 and 2. Which do you choose? Enter 1 or 2." << endl;
		cin >> secondDoorChoice;

		if (secondDoorChoice == 1)
		{
			// Medium Guessing Game
			cout << "You grab the key labeled 1 and go through the first door." << endl;
			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			mediumGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// medium Riddle Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			mediumRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Medium Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
		else if (secondDoorChoice == 2)
		{
			// Medium Riddle Game
			cout << "You grab the key labeled 2 and go through the second door." << endl;
			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			mediumRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Medium Guessing Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			mediumGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Medium Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
	}
	else if (door == 3)
	{
		// Medium Riddle Game
		cout << "You grab the key labeled 3 and go through the first door." << endl;
		cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
		cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
		cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
		cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
		mediumRiddleGame();

		// Ask user if they would like to continue or not
		do
		{
			cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
			cin >> gameStoppage;

			if (gameStoppage == 'c')
				cout << "Continuing." << endl << endl;
			else if (gameStoppage == 's')
			{
				cout << "Ending Game. Thank you for playing" << endl << endl;
				exit(0);
			}
		} while (gameStoppage != 'c' && gameStoppage != 's');

		// Second Door Choice
		cout << "In the next room there are two more doors. This time they do not have anything written on them." << endl;
		cout << "There are two keys labeled 1 and 2. Which do you choose? Enter 1 or 2." << endl;
		cin >> secondDoorChoice;

		if (secondDoorChoice == 1)
		{
			// Medium Guessing Game
			cout << "You grab the key labeled 1 and go through the first door." << endl;
			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			mediumGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Medium Math Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			mediumMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Medium Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
		else if (secondDoorChoice == 2)
		{
			// Medium Math Game
			cout << "You grab the key labeled 2 and go through the second door." << endl;
			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			mediumMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Medium Guessing Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			mediumGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Medium Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
	}
}

void hardGame()
{
	// Local Variables
	int door;
	int secondDoorChoice;
	char gameStoppage;

	// Asking which door user wants to go through
	cout << "Which door do you decide to go in? Enter 1, 2, or 3." << endl << endl;
	cin >> door;

	if (door == 1)
	{
		// Hard Guessing Game
		cout << "You grab the key labled 1 and go through the first door." << endl;
		cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
		cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
		cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
		cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
		cout << "Type a number into my keypad to start guessing.'" << endl << endl;
		hardGuessingGame();

		// Ask user if they would like to continue or not
		do
		{
			cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
			cin >> gameStoppage;

			if (gameStoppage == 'c')
				cout << "Continuing." << endl << endl;
			else if (gameStoppage == 's')
			{
				cout << "Ending Game. Thank you for playing" << endl << endl;
				exit(0);
			}
		} while (gameStoppage != 'c' && gameStoppage != 's');

		// Asking User if they want to stop


		// Second Door Choice
		cout << "In the next room there are two more doors. This time they do not have anything written on them." << endl;
		cout << "There are two keys labeled 1 and 2. Which do you choose? Enter 1 or 2." << endl;
		cin >> secondDoorChoice;

		if (secondDoorChoice == 1)
		{
			// Hard Math Game
			cout << "You grab the key labeled 1 and go through the first door." << endl;
			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			hardMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Hard Riddle Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			hardRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Hard Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
		else if (secondDoorChoice == 2)
		{
			// Hard Riddle Game
			cout << "You grab the key labeled 2 and go through the second door." << endl;
			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			hardRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Hard Math Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			hardMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Hard Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
	}
	else if (door == 2)
	{
		// Hard Math Game
		cout << "You grab the key labeled 1 and go through the first door." << endl;
		cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
		cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
		cout << "You approach the table and the paper reads:" << endl << endl;
		hardMathGame();

		// Ask user if they would like to continue or not
		do
		{
			cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
			cin >> gameStoppage;

			if (gameStoppage == 'c')
				cout << "Continuing." << endl << endl;
			else if (gameStoppage == 's')
			{
				cout << "Ending Game. Thank you for playing" << endl << endl;
				exit(0);
			}
		} while (gameStoppage != 'c' && gameStoppage != 's');

		// Second Door Choice
		cout << "In the next room there are two more doors. This time they do not have anything written on them." << endl;
		cout << "There are two keys labeled 1 and 2. Which do you choose? Enter 1 or 2." << endl;
		cin >> secondDoorChoice;

		if (secondDoorChoice == 1)
		{
			// Hard Guessing Game
			cout << "You grab the key labeled 1 and go through the first door." << endl;
			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			hardGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Hard Riddle Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			hardRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Hard Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
		else if (secondDoorChoice == 2)
		{
			// Hard Riddle Game
			cout << "You grab the key labeled 2 and go through the second door." << endl;
			cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
			cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
			cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
			cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
			hardRiddleGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Hard Guessing Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			hardGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Hard Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
	}
	else if (door == 3)
	{
		// Hard Riddle Game
		cout << "You grab the key labeled 3 and go through the first door." << endl;
		cout << "Once in the room you see a makeshift bridge that goes over a hole of large spikes." << endl;
		cout << "In front of the bridge is a creepy looking leprachaun with a long white beard." << endl;
		cout << "It is looking at you with a grin on its face. You approach it cautiously and it speaks." << endl;
		cout << "It says, 'My name is Willy the leprachaun! in order to pass over my bridge you must answer my riddle.'" << endl << endl;
		hardRiddleGame();

		// Ask user if they would like to continue or not
		do
		{
			cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
			cin >> gameStoppage;

			if (gameStoppage == 'c')
				cout << "Continuing." << endl << endl;
			else if (gameStoppage == 's')
			{
				cout << "Ending Game. Thank you for playing" << endl << endl;
				exit(0);
			}
		} while (gameStoppage != 'c' && gameStoppage != 's');

		// Second Door Choice
		cout << "In the next room there are two more doors. This time they do not have anything written on them." << endl;
		cout << "There are two keys labeled 1 and 2. Which do you choose? Enter 1 or 2." << endl;
		cin >> secondDoorChoice;

		if (secondDoorChoice == 1)
		{
			// Hard Guessing Game
			cout << "You grab the key labeled 1 and go through the first door." << endl;
			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			hardGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Hard Math Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			hardMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Hard Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
		else if (secondDoorChoice == 2)
		{
			// Hard Math Game
			cout << "You grab the key labeled 2 and go through the second door." << endl;
			cout << "Once in the room you notice that it is very dark except for one spot in the middle of the room." << endl;
			cout << "A table with single piece of paper, a pen, and a black box with a slit in it is lit up by the spotlight." << endl;
			cout << "You approach the table and the paper reads:" << endl << endl;
			hardMathGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Hard Guessing Game
			cout << "On the way into the next room you think to yourself, 'Man I hope this is almost over. I don't know how much longer I can last here.'" << endl;
			cout << "In the next room there is one more door. There is also a table just like the first room, it has a note on it." << endl;
			cout << "The note says: 'Congratulations on making it this far. I am very impressed. Beyond this next door is the final room." << endl;
			cout << "Complete the challenge in that room to finally be freed.'" << endl;
			cout << "Excited, you hurry to the last challenge!" << endl << endl;

			cout << "Once in the room you see a person standing in the middle.. You hesitate and then walk up to them and notice the person is actually a robot." << endl;
			cout << "The scary thing is, the robot is an exact replica of yourself." << endl;
			cout << "There is a button on the robot that says play. With nothing else to do in the room, you press the button." << endl;
			cout << "An audio recording comes from the robot saying, 'This is a guessing game. You have to guess a number 1 through 100." << endl;
			cout << "Type a number into my keypad to start guessing.'" << endl << endl;
			hardGuessingGame();

			// Ask user if they would like to continue or not
			do
			{
				cout << "*If you would like to continue the game enter 'c'. If not enter 's'.*" << endl;
				cin >> gameStoppage;

				if (gameStoppage == 'c')
					cout << "Continuing." << endl << endl;
				else if (gameStoppage == 's')
				{
					cout << "Ending Game. Thank you for playing" << endl << endl;
					exit(0);
				}
			} while (gameStoppage != 'c' && gameStoppage != 's');

			// Ending of Hard Game
			cout << "You yell, 'YES!'" << endl;
			cout << "You had finally done it! Beyond this last door must be freedom! You rush through the door into the next room." << endl;
			cout << "The door closes behind you. The room is small and all white. You look around confused and furious that this isn't the end." << endl;
			cout << "All of a sudden smoke starts coming under the door. You panick and try to cover your nose but it is too late." << endl;
			cout << "You go unconscious." << endl;
			cout << "Later you wake up in your own bed.. You freak out for a second, but then you are relieved." << endl;
			cout << "You cant help but wonder if it was all a dream.. It felt to real you say to yourself. 'It must have been!' you think to yourself." << endl;
			cout << "From then on, you still don't know if it was real or not." << endl << endl;

			cout << "Congratulations. You have successfully completed the game." << endl;
		}
	}
}

void easyGuessingGame()
{
	srand(time(0));
	int correct_num = rand() % 100;
	int choice = 0;
	int attempts = 10; // Declaring amount of attempts

	do
	{
		cout << "You have " << attempts << " attempts to guess the correct number" << endl;
		attempts--; // Telling user how many attempts they have and sutracting one for everytime they enter a number

		cout << "Guess an integer between 1 and 100: ";
		cin >> choice;

		if (choice > correct_num && choice < 101) // Checking to see if user guessed too high an is still a valid input
		{
			cout << endl;
			cout << "You guessed too high! The ceiling drops a little. Try again";
		}

		if (choice < correct_num && choice > 0) // Checking to see if user guessed to low and is still a valid input
		{
			cout << endl;
			cout << "You guessed too low! The ceiling drops a little. Try again";
		}

		if (choice > 100 || choice < 1) // Input validation
			cout << "Invalid input. Please enter an integer between 1 and 100" << endl;

		if (attempts == 0) // If user runs out of attempts tell them and end loop
		{
			cout << endl << endl;
			cout << "You have ran out of attempts to guess the correct number. Time to die." << endl;
			cout << "The ceiling closes all the way and you are crushed." << endl;
			cout << "Game Over" << endl;
			exit(0);
		}

		if (choice == correct_num) // If user guesses correctly tell them and end loop
		{
			cout << endl << endl;
			cout << "The cieling raises all the way back up to the top." << endl;
			cout << "The screen says, 'you have guessed the number correctly!! Congratulations! Move on to the next room.'" << endl;
			cout << "You continue hesitantly." << endl;
		}

		cout << endl << endl;
	} while (choice != correct_num && attempts >= 1);
}

void easyMathGame()
{
	// Local variables
	int mathAnswer;

	// Math problem
	cout << "'In order to get past this room you have to solve a math problem." << endl;
	cout << "You have one attempt so you better think hard. Write the answer as a single integer and put the piece of paper in the box.' " << endl << endl;
	cout << "Solve for x: -4x - 12 = -36" << endl;
	cin >> mathAnswer;
	cout << endl;

	if (mathAnswer == 6)
	{
		cout << "Congrats! Move on to the next room." << endl;
		cout << "Relieved, thinking you have a chance to survive all of the challenges, you go forward into the next room." << endl;
	}
	else if (mathAnswer != 6)
	{
		cout << "A second piece of paper spits back out of the box. This paper reads:" << endl;
		cout << "'You have answered the problem incorrectly.'" << endl;
		cout << "A man appears out of the dark corner and you hear the cock of a shotgun." << endl;
		cout << "Game over." << endl;
		exit(0);
	}
}

void easyRiddleGame()
{
	// Local variables
	int riddleGuess = 0;
	int riddleAttempts = 2;

	do
	{
		riddleAttempts--;
		// Easy riddle
		cout << "A man wanted to enter an exclusive club but did not know the password that was required." << endl;
		cout << "He waited by the door and listened. A club member knocked on the door and the doorman said," << endl;
		cout << "'twelve.' The member replied, 'six' and was let in. A second member came to the door and" << endl;
		cout << "the doorman said, 'six.' The member replied, 'three' and was let in. The man thought he had" << endl;
		cout << "heard enough and walked up to the door. The doorman said, 'ten' and the man replied, 'five.'" << endl;
		cout << "But he was not let in. What should he have said?" << endl;
		cout << "Enter the number the man should have said as an integer." << endl << endl;
		cin >> riddleGuess;

		if (riddleAttempts == 0)
		{
			cout << "Willy says hiding a maniacal laughter, 'You have run out of attempts.. I give you permission to go ahead and cross anyways.'" << endl;
			cout << "With no other way to go, you hesitantly cross the bridge. Half way over the bridge opens up and you fall into the hole." << endl;
			cout << "Game over." << endl;
			exit(0);
		}

		if (riddleGuess == 3)
		{
			cout << "Willy says in shock, 'OH! You have guessed correctly! Go ahead and cross and move into the next room.'" << endl;
			cout << "You safely cross the bridge and the door opens for you to enter the next room. You continue." << endl << endl;
		}

		if (riddleGuess != 3 && riddleAttempts != 0)
		{
			cout << "Willy says, 'Incorrect!! You better think harder!'" << endl;
			cout << "Willy says, 'You have " << riddleAttempts << " attempt remaining.'" << endl << endl;
		}
	} while (riddleGuess != 3 && riddleAttempts >= 1);
}

void mediumGuessingGame()
{
	srand(time(0));
	int correct_num = rand() % 100;
	int choice = 0;
	int attempts = 8; // Declaring amount of attempts

	do
	{
		cout << "You have " << attempts << " attempts to guess the correct number" << endl;
		attempts--; // Telling user how many attempts they have and sutracting one for everytime they enter a number

		cout << "Guess an integer between 1 and 100: ";
		cin >> choice;

		if (choice > correct_num && choice < 101) // Checking to see if user guessed too high an is still a valid input
		{
			cout << endl;
			cout << "You guessed too high! The ceiling drops a little. Try again";
		}

		if (choice < correct_num && choice > 0) // Checking to see if user guessed to low and is still a valid input
		{
			cout << endl;
			cout << "You guessed too low! The ceiling drops a little. Try again";
		}

		if (choice > 100 || choice < 1) // Input validation
			cout << "Invalid input. Please enter an integer between 1 and 100" << endl;

		if (attempts == 0) // If user runs out of attempts tell them and end loop
		{
			cout << endl << endl;
			cout << "You have ran out of attempts to guess the correct number. Time to die." << endl;
			cout << "The ceiling closes all the way and you are crushed." << endl;
			cout << "Game Over" << endl;
			exit(0);
		}

		if (choice == correct_num) // If user guesses correctly tell them and end loop
		{
			cout << endl << endl;
			cout << "You have guessed the number correctly!! Congratulations! Move on to the next room." << endl;
		}

		cout << endl << endl;
	} while (choice != correct_num && attempts >= 1);
}

void mediumMathGame()
{
	// Local variables
	int mathAnswer;

	// Math problem
	cout << "In order to get past this room you have to solve a math problem." << endl;
	cout << "Solve for x: 6(2x+2)+12 = 48" << endl;
	cin >> mathAnswer;
	cout << endl;

	if (mathAnswer == 2)
	{
		cout << "Congrats! Move on to the next room." << endl;
		cout << "Relieved, thinking you have a chance to survive all of the challenges, you go forward into the next room." << endl;
	}
	else if (mathAnswer != 2)
	{
		cout << "A second piece of paper spits back out of the box. This paper reads:" << endl;
		cout << "'You have answered the problem incorrectly.'" << endl;
		cout << "A man appears out of the dark corner and you hear the cock of a shotgun." << endl;
		cout << "Game over." << endl;
		exit(0);
	}
}

void mediumRiddleGame()
{
	// Local variables
	string riddleGuess;
	int riddleAttempts = 3;

	do
	{
		riddleAttempts--;
		// Medium riddle
		cout << "I come in many colors and I am very thin. I am found in every country, even in your home." << endl;
		cout << "I am very important. You can be very creative with me, and I can even help you learn." << endl;
		cout << "What am I?" << endl << endl;
		cin >> riddleGuess;

		if (riddleAttempts == 0)
		{
			cout << "Willy says hiding a maniacal laughter, 'You have run out of attempts.. I give you permission to go ahead and cross anyways.'" << endl;
			cout << "With no other way to go, you hesitantly cross the bridge. Half way over the bridge opens up and you fall into the hole." << endl;
			cout << "Game over." << endl;
			exit(0);
		}

		if (riddleGuess == "paper" || riddleGuess == "Paper")
		{
			cout << "Willy says in shock, 'OH! You have guessed correctly! Go ahead and cross and move into the next room.'" << endl;
			cout << "You safely cross the bridge and the door opens for you to enter the next room. You continue." << endl << endl;
		}

		if (riddleGuess != "paper" && riddleGuess != "Paper" && riddleAttempts != 0)
		{
			cout << "Willy says, 'Incorrect!! You better think harder!'" << endl;
			cout << "Willy says, 'You have " << riddleAttempts << " attempt remaining.'" << endl << endl;
		}
	} while (riddleGuess != "paper" && riddleGuess != "Paper" && riddleAttempts >= 1);
}

void hardGuessingGame()
{
	srand(time(0));
	int correct_num = rand() % 100;
	int choice = 0;
	int attempts = 7; // Declaring amount of attempts

	do
	{
		cout << "You have " << attempts << " attempts to guess the correct number" << endl;
		attempts--; // Telling user how many attempts they have and sutracting one for everytime they enter a number

		cout << "Guess an integer between 1 and 100: ";
		cin >> choice;

		if (choice > correct_num && choice < 101) // Checking to see if user guessed too high an is still a valid input
		{
			cout << endl;
			cout << "You guessed too high! The ceiling drops a little. Try again";
		}

		if (choice < correct_num && choice > 0) // Checking to see if user guessed to low and is still a valid input
		{
			cout << endl;
			cout << "You guessed too low! The ceiling drops a little. Try again";
		}

		if (choice > 100 || choice < 1) // Input validation
			cout << "Invalid input. Please enter an integer between 1 and 100" << endl;

		if (attempts == 0) // If user runs out of attempts tell them and end loop
		{
			cout << endl << endl;
			cout << "You have ran out of attempts to guess the correct number. Time to die." << endl;
			cout << "The ceiling closes all the way and you are crushed." << endl;
			cout << "Game Over" << endl;
			exit(0);
		}

		if (choice == correct_num) // If user guesses correctly tell them and end loop
		{
			cout << endl << endl;
			cout << "You have guessed the number correctly!! Congratulations! Move on to the next room." << endl;
		}

		cout << endl << endl;
	} while (choice != correct_num && attempts >= 1);
}

void hardMathGame()
{
	// Local variables
	int mathAnswer;

	// Math problem
	cout << "In order to get past this room you have to solve a math problem." << endl;
	cout << "Solve for x: .5(6-2(2-x)+4) = 16" << endl;
	cin >> mathAnswer;
	cout << endl;

	if (mathAnswer == 13)
	{
		cout << "Congrats! Move on to the next room." << endl;
		cout << "Relieved, thinking you have a chance to survive all of the challenges, you go forward into the next room." << endl;
	}
	else if (mathAnswer != 13)
	{
		cout << "A second piece of paper spits back out of the box. This paper reads:" << endl;
		cout << "'You have answered the problem incorrectly.'" << endl;
		cout << "A man appears out of the dark corner and you hear the cock of a shotgun." << endl;
		cout << "Game over." << endl;
		exit(0);
	}
}

void hardRiddleGame()
{
	{
		// Local variables
		string riddleGuess;
		int riddleAttempts = 3;

		do
		{
			riddleAttempts--;
			// Medium riddle
			cout << "I am related to the water, but I am not wet." << endl;
			cout << "I am related with a shadow, but I am multi colored." << endl;
			cout << "I am an illusion, but I show what is real. " << endl;
			cout << "What am I?" << endl << endl;
			cin >> riddleGuess;

			if (riddleAttempts == 0)
			{
				cout << "Willy says hiding a maniacal laughter, 'You have run out of attempts.. I give you permission to go ahead and cross anyways.'" << endl;
				cout << "With no other way to go, you hesitantly cross the bridge. Half way over the bridge opens up and you fall into the hole." << endl;
				cout << "Game over." << endl;
				exit(0);
			}

			if (riddleGuess == "mirror" || "Mirror")
			{
				cout << "Willy says in shock, 'OH! You have guessed correctly! Go ahead and cross and move into the next room.'" << endl;
				cout << "You safely cross the bridge and the door opens for you to enter the next room. You continue." << endl << endl;
			}

			if (riddleGuess != "mirror" && riddleGuess != "Mirror" && riddleAttempts != 0)
			{
				cout << "Willy says, 'Incorrect!! You better think harder!'" << endl;
				cout << "Willy says, 'You have " << riddleAttempts << " attempt remaining.'" << endl << endl;
			}
		} while (riddleGuess != "mirror" && riddleGuess != "Mirror" && riddleAttempts >= 1);
	}
}