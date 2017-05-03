/*
This program created by Nathanael Bunge, Purmon Greene, and Jaydon Buls.
April 2017, North Polk High School

In this program, the user embarks on a journey through a day in the life of a chosen character.
By using simple inputs and outputs, a story is told of a very twisted day. The user is in a quest to survive, while controlling the decisions his character makes, meaning this is a "choose-your-own-adventure" style game.
*/

#include <iostream> //Allows input and output
#include <string> //Allows string input
#include <cstdbool> // Allows true/false statements
#include <windows.h> //Allows sleep statement, so the program can rest before termination
#include <stdlib.h> //Allows the screen to clear or pause
using namespace std;

//Begin global variable declarations
int userChoice; //Which option has the user chosen at each prompt?
bool reincarnation = true, pathChosen = false; // Has the user chose reincarnation, and have they chosen a story line?
string reincarnateChoice; //Does the user want to reincarnate?
int counting = 5; //Global counting variable, used to control loop termination at points

				  //Begin main program
int main() {

	//Begin function prototypes
	void storyPath1();
	void storyPath2();
	void storyPath3();
	void programTermination();
	void coolDesign();


	coolDesign();
	cout << "\nWelcome to ";
	Sleep(100);
	cout << "The Adventures ";
	Sleep(100);
	cout << "of Three!" << endl;
	Sleep(2000);
	cout << "\n\nPlease choose a character. Enter the number of the character you choose and hit Enter." << endl;
	Sleep(2000);
	cout << "1. Baydon Juls - a slightly idiotic young adult\n";
	Sleep(750);
	cout << "2. Gurmon Preene - the black one\n";
	Sleep(750);
	cout << "3. Bathanael Nunge - the young sprout of the group" << endl;
	Sleep(1500);
	coolDesign();
	Sleep(1500);
	while (reincarnation == true) { //As long as the user has not chosen to end the game, this replays the game
		while (pathChosen == false) {
			Beep(523, 750); // 523 hertz (C5) for 750 milliseconds    
			cout << "\nYour choice --> ";
			Sleep(1000);
			cin >> userChoice;
			if (userChoice == 1) { //These if/then/else statements initialize a storyline based on the input number
				pathChosen = true;
				storyPath1();
			}
			else if (userChoice == 2) {
				pathChosen = true;
				storyPath2();
			}
			else if (userChoice == 3) {
				pathChosen = true;
				storyPath3();
			}
			else
				pathChosen = false;
		}
		cout << "\n*********\n\n" << "Would you like to reincarnate? Type 'yes' to reincarnate or 'no' to exit the game, and press Enter." << endl;
		cin >> reincarnateChoice;
		cout << "\n";
		if (reincarnateChoice == "no") { //If the user chooses not to reincarnate, this causes the loop to terminate 
			reincarnation = false;
			programTermination();
		}
		else if (reincarnateChoice == "yes") { //If the user chooses to reincarnate, this allows the loop to continue
			reincarnation = true;
			pathChosen = false;
			system("CLS");//Clears screen to prepare for reincarnation - tidies up output
			coolDesign();
			//The title screen is reprinted here in a more prompt manner - the user has already seen the timed 'animations' prior
			cout << "\nWelcome to The Adventures of Three!" << endl;
			cout << "\n\nPlease choose a character. Enter the number of the character you choose and hit Enter." << endl;
			Sleep(1000);
			cout << "1. Baydon Juls - a slightly idiotic young adult\n";
			Sleep(750);
			cout << "2. Gurmon Preene - the black one\n";
			Sleep(750);
			cout << "3. Bathanael Nunge - the young sprout of the group" << endl;
			coolDesign();

		}
	}
	return 0;
}

//------------------------Storylines begin below this line, control program ends at this line-----------------------------------------

//This function controls the storyline of Character 1 - Baydon Juls
void storyPath1() {
	system("CLS"); //Clears screen to tidy up output
	cout << "You've entered the Story of Baydon Juls." << endl;
	cout << "\nYou wake up to the sound of tornado sirens in the middle of the night. Do you rush downstairs (1) or remain asleep (2)?" << endl;
	cin >> userChoice;
	cout << "\n\n";
	if (userChoice == 1) {
		cout << "You rush downstairs and realize it's very cold. Do you turn on the heater (1) or start a fire in the fireplace (2)?" << endl;
		cin >> userChoice;
		cout << "\n\n";
		if (userChoice == 1) {
			cout << "You fail to remember that your window has a leak. Water drips into the wall socket and shorts the wires, ";
			cout << "causing a fire. You perish in flames." << endl;
		}
		else if (userChoice == 2) {
			cout << "Things get out of hand when you remember that you never did call the chimney sweep last week like your wife ";
			cout << "reminded you. You perish in flames." << endl;
		}
		else if (userChoice != 1 && userChoice != 2)
			cout << "Invalid selection." << endl;
	}

	else if (userChoice == 2)
		cout << "The tornado ends up taking your life within minutes. Sorry!" << endl;

	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

}

//This function controls the storyline of Character 2
void storyPath2() {
	system("CLS");//Clears screen to tidy up output

}


		//This function controls the storyline of Character 3
void storyPath3() {
	system("CLS");//Clears screen to tidy up output
	cout << "You've entered the Story of Bathanael Nunge." << endl;

	string text1 = "You wake up in the morning to your alarm....do you get up (1), or hit snooze (2)?";
	string text2 = "You go to work, and risk being late(1), or do you call in and lie about what happened(2) ? ";
	string text3 = "You die because you fell and hit the corner of your dresser and get brain damage… you actually recovered from the brain damage but you've now become paralyzed and have committed suicide. You are now dead. Reincarnate as a different character(1)? End the program(2)?";
	string text4 = "After several hours of working your co - worker Lisa asks you what you’re doing after work.Lie and say you're busy (1)? Tell her you don't have anything going on(2) ? ";
	string text5 = "Lisa seemed pretty disappointed at your answer, but you could care less, YOU GETTIN PAYED... Work is over and you can now go home.As you walk over to your car you notice an old lady getting mugged.Help the old lady(1) ? It's none of your business so you drive away(2)?";
	string text6 = "Lisa asks you if you would go out to dinner with her, what do you do ? Tell her yes and go to dinner(1).Run(2) ? ";
	string text7 = "Dinner went well and you drive her back home, however she asks if you can come in and keep her company, what do you do ? Step inside with her(1) Run(2)";
	string text8 = "Suddenly you wake up and find yourself tied to a chair in what seems like a basement.Scream for help(1).Attempt to untie yourself(2).";
	string text9 = "Despite your tries to make your situation better, nothing happens and you remain in your chair.Suddenly from the shadow emerges your co - worker Lisa, and she's holding a dagger and is wearing a severed goat head. She starts speaking in tongues and stabs the hell out of your neck. You are now dead. Reincarnate as a different character(1)? End the program(2)?";
	string text10 = "You run and you run till you pass out due to exhaustion, but mainly because you get hit by a car.You are passed out(1).You are unconscious(2)";
	string text11 = "You go back home and head over to your house to unlock your door however, in the corner of your eye you see your neighbor's dog plating a landmine in your yard. Ignore your dog defecating on your fine trim lawn(1). Confront your neighbor on your issue with the dog placing the mud monkeys and let him have it(2).";
	string text12 = "You hastily walk over to your neighbors house and pound on his door.Upon him opening the door, you let him have it.Yelling, spitting and screaming so many curse words that we would have to raise our game’s age rating.After you're done telling your neighbor how insignificant his existence is, you wait for his response. Suddenly he falls over and is flat on his back. He is now dead from a heart attack as he was over 90 years old. It probably would have been a good idea to let you know that before we gave you the choice of yelling at your neighbor because a dog made some butt noodles on your grass. So yeah... you are now a murderer. Run(1). Walk back to your house like nothing happened(2).";
	string text13 = "You walk back into your house, it is dark inside, but you swore you left the light on when you left to go to work.Suddenly you hear a sound.Continue on into the house(1).Look for a weapon(2).";
	string text14 = "nonchalantly, you walk through the house and catch the scent of cake.You then stop by the kitchen where a triple chocolate mousse cake is begging to be eaten.Grab a piece o' cake which you probably deserve(1). Keep on walking through the house (2).";
	string text15 = "You take a hefty slice of cake from the platter and grossly inhale the magnificent delicacy.And then you start sobbing uncontrollably because the cake was so the greatest thing you've ever had. So you take another slice and another slice until the cake is no more. BUT YOU DEMAND MORE. Quench your thirst for chocolate(1). Use your willpower to fight off the urge for more cake so you can get on with your life(2).";
	string text16 = "You get back into your car and drive to the nearest bakery to claim what is yours.Upon spotting a grocery store with a cake displayed in the window, your floor it and ram into the entrance of the store, running over at least seven people innocently getting their afternoon groceries.Among the chaos you hastily make your way over to the cake and find out it was only plastic.Suddenly your thirst for chocolate turns into a thirst for blood for the fabrication of cakes beauty.Head for the weapons department to roll some heads(1).Fight the urge!Enough blood has been spilled!!!(2).";
	string text17 = "Arming yourself to the brim, you prepare yourself for the fight of your life  but then you hear the sound of police sirens and take cover to take them on.Lock and load(1).Realise what you're doing and surrender(2).";
	string text18 = "The sound of the police's footsteps boom as adrenaline pumps through your veins. Turn the corner and blast them away(1). Face the fact that this is the end and take your life(2).";
	string text19 = "There were hallucinogens in one of the cake slices you ate.None of the above happened and the reality of the situation is, is that you ran out the door of your house screaming, tripped over nothing and land headfirst onto one of your neighbor's dog’s grass sausages, passed out for several hours. wake up and go back into the house(1) Remain in the dogs chocolate cucumbers(2)";
	string text20 = "while walking through the house, another loud noise is heard and it seems that it came from upstairs.Investigate and ascend up the stairs(1) Go and find a weapon(2)";
	string text21 = "While looking for a weapon you come across two items, a poker from the fireplace, and a conveniently placed hand gun.But you can only take one weapon because you’re going to need the other hand free so that you can film this like that one game out last.Grab the poker(1).Pick up the handgun(2)";
	string text22 = "Slowly going up the stairs, the noises get louder and more frequent.A light is on in one of the room.Check out the room(1).keep walking(2)";
	string text23 = "There is nothing in the room, stop being paranoid.Keep walking(1) continue on through the house.(2)";
	string text24 = "Creeping down the hall way your breath gets shallow and your heart beating out of your chest.You get to the bedroom where the noises are coming from.open the door(1).just leave(2)";
	string text25 = "You kick down the door and a robber is seen attempting to steal your flat screen T.V.Use your(weapon) to stop the robber(1).The TV looks heavy so help him out(2)";
	string text26 = "Using your(weapon) you successfully have stopped the robber.Turn on the tv and watch some sports(1) Clean the robbers blood off your body(2)";
	string text27 = "upon further inspection, you realize that you never owned a flat screen tv, let alone a two story house or a fine trimmed lawn.This is not your house.Run(1) Leave the house like nothing happened(2)";
	string text28 = "Getting back into your car you drive to your actual house, the small green one across the street and not the large two story orange house you were once at.Today's events have left you exhausted would you like to go to sleep or stay up and screw around? Sleep(1) Stay (2)";
	string text29 = "You hastily walk over to help the person out, but suddenly he pulls out a .50 cal desert eagle.You bleed out for several hours in excruciating pain and then die.You didn't die of blood loss, you die because you've drowned yourself with your own tears as you were crying like a little bish.Reincarnate as a different character ? (1) End the program(2)";
	string text30 = "Congratulations!You have successfully survived ONE WHOLE DAY as Bathanael Nunge!The next day consists of more situation and a hell ton of action!!!However… we left the lense on the camera(which was Baydons fault) and weren't able to record the story. So that's it for now!!!Play another story(1).Exit the program(2) ";
	string text31 = "You stay up.But there is nothing to do in your house because you don't own a flat screen tv, or fun cake. So you go outside remembering nothing but a bright light before your consumed into darkness. Well schit (1) Not even mad(2)";
	int num = 1;



	cout << text1 << endl;
	cout << "\n\n";
	while(num < 40 && num > 0) {
		cin >> userChoice;
		cout << "\n\n";
	}
	if (userChoice == 1 && num == 1) {
		cout << text2 << endl;
		cout << "\n\n";
		num = 4;
	}
	else if (userChoice == 2 && num == 1) {
		cout << text3 << endl;
		cout << "\n\n";
		num = 45;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text4 ---------//
	else if (userChoice == 1 && num == 4) {
		cout << text4 << endl;
		cout << "\n\n";
		num = 5;
	}
	else if (userChoice == 2 && num == 4) {
		cout << text4 << endl;
		cout << "\n\n";
		num = 6;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text5 ---------//
	else if (userChoice == 1 && num == 5) {
		cout << text5 << endl;
		cout << "\n\n";
		num = 29;
	}
	else if (userChoice == 2 && num == 5) {
		cout << text5 << endl;
		cout << "\n\n";
		num = 11;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text6 ---------//
	else if (userChoice == 1 && num == 6) {
		cout << text6 << endl;
		cout << "\n\n";
		num = 7;
	}

	else if (userChoice == 2 && num == 6) {
		cout << text6 << endl;
		cout << "\n\n";
		num = 10;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text7 ---------//
	else if (userChoice == 1 && num == 7) {
		cout << text7 << endl;
		cout << "\n\n";
		num = 8;
	}
	else if (userChoice == 2 && num == 7) {
		cout << text7 << endl;
		cout << "\n\n";
		num = 10;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text8 ---------//
	else if (userChoice == 1 && num == 8) {
		cout << text8 << endl;
		cout << "\n\n";
		num = 9;
	}
	else if (userChoice == 2 && num == 8) {
		cout << text8 << endl;
		cout << "\n\n";
		num = 9;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text9 ---------//
	else if (userChoice == 1 && num == 9) {
		cout << text9 << endl;
		cout << "\n\n";
		num = 45;
	}
	else if (userChoice == 2 && num == 7) {
		cout << text7 << endl;
		cout << "\n\n";
		num = 45;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text10 ---------//
	else if (userChoice == 1 && num == 10) {
		cout << text10 << endl;
		cout << "\n\n";
		num = 8;
	}
	else if (userChoice == 2 && num == 10) {
		cout << text10 << endl;
		cout << "\n\n";
		num = 8;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text11 ---------//
	else if (userChoice == 1 && num == 11) {
		cout << text11 << endl;
		cout << "\n\n";
		num = 13;
	}
	else if (userChoice == 2 && num == 11) {
		cout << text11 << endl;
		cout << "\n\n";
		num = 12;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text12 ---------//
	else if (userChoice == 1 && num == 12) {
		cout << text12 << endl;
		cout << "\n\n";
		num = 10;
	}
	else if (userChoice == 2 && num == 12) {
		cout << text12 << endl;
		cout << "\n\n";
		num = 13;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;




	//-------- text13 ---------//
	else if (userChoice == 1 && num == 13) {
		cout << text13 << endl;
		cout << "\n\n";
		num = 14;
	}
	else if (userChoice == 2 && num == 13) {
		cout << text13 << endl;
		cout << "\n\n";
		num = 21;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text14 ---------//
	else if (userChoice == 1 && num == 14) {
		cout << text14 << endl;
		cout << "\n\n";
		num = 15;
	}
	else if (userChoice == 2 && num == 14) {
		cout << text14 << endl;
		cout << "\n\n";
		num = 20;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text15 ---------//
	else if (userChoice == 1 && num == 15) {
		cout << text15 << endl;
		cout << "\n\n";
		num = 16;
	}
	else if (userChoice == 2 && num == 15) {
		cout << text15 << endl;
		cout << "\n\n";
		num = 20;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text16 ---------//
	else if (userChoice == 1 && num == 16) {
		cout << text16 << endl;
		cout << "\n\n";
		num = 17;
	}
	else if (userChoice == 2 && num == 16) {
		cout << text16 << endl;
		cout << "\n\n";
		num = 19;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text17 ---------//
	else if (userChoice == 1 && num == 17) {
		cout << text17 << endl;
		cout << "\n\n";
		num = 18;
	}
	else if (userChoice == 2 && num == 17) {
		cout << text17 << endl;
		cout << "\n\n";
		num = 19;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text18 ---------//
	else if (userChoice == 1 && num == 18) {
		cout << text18 << endl;
		cout << "\n\n";
		num = 19;
	}
	else if (userChoice == 2 && num == 18) {
		cout << text18 << endl;
		cout << "\n\n";
		num = 19;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text19 ---------//
	else if (userChoice == 1 && num == 19) {
		cout << text19 << endl;
		cout << "\n\n";
		num = 20;
	}
	else if (userChoice == 2 && num == 19) {
		cout << text19 << endl;
		cout << "\n\n";
		num = 8;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text20 ---------//
	else if (userChoice == 1 && num == 20) {
		cout << text20 << endl;
		cout << "\n\n";
		num = 22;
	}
	else if (userChoice == 2 && num == 20) {
		cout << text20 << endl;
		cout << "\n\n";
		num = 21;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text21 ---------//
	else if (userChoice == 1 && num == 21) {
		cout << text21 << endl;
		cout << "\n\n";
		num = 22;
	}
	else if (userChoice == 2 && num == 21) {
		cout << text21 << endl;
		cout << "\n\n";
		num = 22;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text22 ---------//
	else if (userChoice == 1 && num == 22) {
		cout << text22 << endl;
		cout << "\n\n";
		num = 23;
	}
	else if (userChoice == 2 && num == 22) {
		cout << text22 << endl;
		cout << "\n\n";
		num = 24;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text23 ---------//
	else if (userChoice == 1 && num == 23) {
		cout << text23 << endl;
		cout << "\n\n";
		num = 22;
	}
	else if (userChoice == 2 && num == 23) {
		cout << text23 << endl;
		cout << "\n\n";
		num = 22;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text24 ---------//
	else if (userChoice == 1 && num == 24) {
		cout << text24 << endl;
		cout << "\n\n";
		num = 25;
	}
	else if (userChoice == 2 && num == 24) {
		cout << text24 << endl;
		cout << "\n\n";
		num = 28;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text25 ---------//
	else if (userChoice == 1 && num == 25) {
		cout << text25 << endl;
		cout << "\n\n";
		num = 26;
	}
	else if (userChoice == 2 && num == 25) {
		cout << text25 << endl;
		cout << "\n\n";
		num = 29;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text26 ---------//
	else if (userChoice == 1 && num == 26) {
		cout << text26 << endl;
		cout << "\n\n";
		num = 27;
	}
	else if (userChoice == 2 && num == 26) {
		cout << text26 << endl;
		cout << "\n\n";
		num = 27;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text27 ---------//
	else if (userChoice == 1 && num == 27) {
		cout << text27 << endl;
		cout << "\n\n";
		num = 10;
	}
	else if (userChoice == 2 && num == 27) {
		cout << text27 << endl;
		cout << "\n\n";
		num = 28;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text28 ---------//
	else if (userChoice == 1 && num == 28) {
		cout << text28 << endl;
		cout << "\n\n";
		num = 30;
	}
	else if (userChoice == 2 && num == 28) {
		cout << text28 << endl;
		cout << "\n\n";
		num = 31;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text29 ---------//
	else if (userChoice == 1 && num == 29) {
		cout << text29 << endl;
		cout << "\n\n";
		num = 45;
	}
	else if (userChoice == 2 && num == 29) {
		cout << text29 << endl;
		cout << "\n\n";
		num = 45;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text30 ---------//
	else if (userChoice == 1 && num == 30) {
		cout << text30 << endl;
		cout << "\n\n";
		num = 45;
	}
	else if (userChoice == 2 && num == 30) {
		cout << text30 << endl;
		cout << "\n\n";
		num = 45;
	}
	else if (userChoice != 1 && userChoice != 2)
		cout << "Invalid selection." << endl;

	//-------- text31 ---------//
	else if (userChoice == 1 && num == 31) {
		cout << text31 << endl;
		cout << "\n\n";
		num = 8;
	}
	else if (userChoice == 2 && num == 31) {
		cout << text31 << endl;
		cout << "\n\n";
		num = 8;
	}

}

	//-------------------------Other functions begin below this line----------------------------------------------------------------------

	//This function controls the termination of the program; termination is time-based
	void programTermination() {
		while (counting >= 1) { //This short loop efficiently counts down termination while avoiding five separate statements
			cout << "Game over - this window will close automatically in " << counting << " seconds." << endl;
			counting--;
			Sleep(1000);
		}
	}

	void coolDesign() {
		int outCount = 0;
		while (outCount <= 40) {
			cout << "*";
			Sleep(10);
			outCount++;
		}
		cout << endl;
	}
