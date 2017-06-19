/***********
Fun Mad Lib
***********/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	string Instructions, Instructions_2;
	string verb1, verb2, verb3, verb4, verb5, verb6, verb7;
	string ger1, ger2, ger3, ger4;
	string prep1, prep2, prep3;
	string adj1, adj2, adj3, adj4;
	string noun1, noun2, noun3, noun4, noun5, noun6, noun7, noun8;
	string adverb1, adverb2, adverb3, adverb4;
	int one, two;

	//greeting of player 
	cout << endl << endl << endl << "Hello! Welcome to Lisa's Mad Lib." << endl << endl;
	cout << "Do you need instructions on how to play Mad Lib?" << endl;
	cout << "Please enter Y or N: ";
	cin >> Instructions;

	//whether or not they want instructions
	if (Instructions == "Y")
	{
		//instructions for the game
		cout << endl << "Okay!" << endl << endl;
		cout << "     Basically the game has a script or a storyline in mind." << endl;
		cout << "Within the storyline, there are some words that I have taken out. These words " << endl;
		cout << "can be articles, numbers, adverbs, verbs, nouns - any part of speech." << endl << endl;
		cout << "     Before you know what the storyline is, I will ask you for a random set of" << endl;
		cout << "words. These words correlate with the words I have already taken out." << endl;
		cout << "After you have entered all the necessary words to fill in the blanks\," << endl;
		cout << "I will insert the words into the storyline template and it may (or may not)" << endl;
		cout << "create a funny story!" << endl << endl;

		//checking clarification
		cout << "Do you understand the logic of the game now?" << endl;
		cout << "Please enter Y or N: ";
		cin >> Instructions_2;
		cout << endl << endl;

		//moving on to the game
		if (Instructions_2 == "Y")
		{
			cout << "Awesome! Let's get started with the game then." << endl;
		}
		//finishing the game? - figure out how to make this happen!!!
		else if (Instructions_2 == "N")
		{
			cout << "If you still don't understand how to play..." << endl;
			cout << "At this point, it may be better for you just to ask someone" << endl;
			cout << "near you or to ask me in person." << endl << endl;
			cout << "You can email me at: clisa928@gmail.com" << endl << endl;
		}

	}
	else if (Instructions == "N")
	{
		cout << endl << "Great! That probably means you have played before." << endl;
		cout << "Then we can go ahead and begin with the game." << endl;
	}

	//inputting the necessary information 
	cout << endl << "          |    |";
	cout << endl << "         _|    |_";
	cout << endl << "         \\      /";
	cout << endl << "          \\    / ";
	cout << endl << "           \\  /  ";
	cout << endl << "            \\/    " << endl << endl;
	cout << "Follow the instructions below to provide the required type of words." << endl;
	cout << "\tNote - Please only use ONE-WORD answers." << endl;
	cout << "\tIf you choose to use a compound word, that is acceptable." << endl;
	cout << "\tIf you choose to use a hyphen in between two words (i.e. \"x-box\"), that" << endl;
	cout << "\tis also acceptable." << endl << endl;

	cout << "Please insert the following: " << endl;
	cout << "1. Insert a noun (for your female progtagonist): ";
	cin >> noun1; //og GIRL

	cout << "2. Insert a noun (an object): ";
	cin >> noun2; //og Rock

	cout << "3. Insert a verb (that is NOT a gerund [ends in -ing]): ";
	cin >> verb1; //og fish 

	cout << "4. Insert an adjective: ";
	cin >> adj1; // og perfect 	

	cout << "5. Insert a noun (that denotes a group [i.e. \"flock\"]): ";
	cin >> noun3; //collection

	cout << "6. Insert a verb that is a gerund (ends in -ing): ";
	cin >> ger1; //looking

	cout << "7. Insert a comparative adjective (ends with -er): ";
	cin >> adj2; //better

	cout << "8. Insert a gerund (hopefully you know what this is by now): ";
	cin >> ger2; //searching

	cout << "9. Insert a singular noun (that denotes time): ";
	cin >> noun4; //day after day 

	cout << "10. Insert a past-tense verb: ";
	cin >> verb2; //consumed

	cout << "11. Insert two gerunds: ";
	cin >> ger3; cout << ", "; cin >> ger4; //eating and drinking 

	cout << "12. Insert a noun (place): ";
	cin >> noun5; //earth

	cout << "13. Insert an adverb (usually ends in -ly): ";
	cin >> adverb1; //suddenly 

	cout << "14. Insert a past-tense verb: ";
	cin >> verb3; //slipped

	cout << "15. Insert a preposition (i.e. on, into, above, etc.): ";
	cin >> prep1; //into 

	cout << "16. Insert a verb: ";
	cin >> verb4; //wonder

	cout << "17. Insert a noun: ";
	cin >> noun6; //life 

	cout << "18. Insert a verb: ";
	cin >> verb4; //wish 

	cout << "19. Insert a past-tense verb: ";
	cin >> verb5; //spent

	cout << "20. Insert an adverb: ";
	cin >> adverb2; //differently 

	cout << "21. Insert a past-tense verb: ";
	cin >> verb6; //satisfied 

	cout << "22. Insert an adverb: ";
	cin >> adverb3;

	cout << "23. Insert a preposiiton: ";
	cin >> prep2; //underneath

	cout << "24. Insert a noun (body part): ";
	cin >> noun7; //foot 

	cout << "25. Insert an adverb: ";
	cin >> adverb4; //immediately 

	cout << "26. Insert a noun (body part): ";
	cin >> noun8; //head

	cout << "27. Insert a past-tense verb: ";
	cin >> verb7; //breathed

	cout << "28. Insert an adjective: ";
	cin >> adj3; //fresh

				 //actual game 
	cout << endl << endl;
	cout << "\t\t   The Story of the " + noun1 + " and the " + noun2
		<< endl << endl;
	cout << "     There once was a " + noun1 + " who liked to " + verb1 + " along a stream."
		<< endl << endl;
	cout << "She wanted to find one " + adj1 + " " + noun2 + " that she could add to her"
		<< endl << endl;
	cout << noun3 + ". The problem was, however, that she always seemed to be " + ger1
		<< endl << endl;
	cout << "for a " + adj2 + " one. This resulted in her " + ger2 + " " + noun4 + " after " + noun4 + " for"
		<< endl << endl;
	cout << "a \"" + adj2 + "\"" + " " + noun2 + " than the one she had found the " + noun4 + " before."
		<< endl << endl;
	cout << "     Eventually, she was so " + verb2 + " by her determination to find the " + noun2
		<< endl << endl;
	cout << "that she stopped " + ger3 + " and " + ger4 + ". Where on " + noun5 + " could she find what"
		<< endl << endl;
	cout << "she was " + ger1 + " for? There seemed to be no end to this goal." << endl << endl;
	cout << "     Just as she was thinking this, suddenly she spotted it - the perfect rock!"
		<< endl << endl;
	cout << "She reached down to grab it. But as she reached down, " + adverb1 + ", she " + verb3
		<< endl << endl;
	cout << prep1 + " the water."
		<< endl << endl;
	cout << "     As she " + verb3 + " further and further beneath the surface, she began to"
		<< endl << endl;
	cout << verb4 + "..."
		<< endl << endl << endl;
	cout << "\t\"What a waste of my " + noun6 + ". I " + verb4 + " - that I had " + verb5 + " my " + noun6 + " " + adverb2
		<< endl << endl;
	cout << "\tIf I had known it was going to end here, I would have lived my " + noun6
		<< endl << endl;
	cout << "\twith more meaning. I would have been " + verb6 + " with what I already had\""
		<< endl << endl << endl;
	cout << "    " + adverb3 + " she felt a" + noun2 + " " + prep2 + " her " + noun7 + ". She " + adverb4 + " used her"
		<< endl << endl;
	cout << noun7 + " to push against it. Her " + noun8 + " popped up above the water and she " + verb7
		<< endl << endl;
	cout << "a breath of " + adj3 + " air. Never again would she be happy just to be alive and to" << endl << endl;
	cout << "be content with what rock she had." << endl;


	//original script 
	/*	cout << endl << endl;
	cout << "\t\t   The Story of the Girl and the Rock	" << endl << endl;
	cout << "     There once was a girl who liked to fish along a stream." << endl << endl;
	cout << "She wanted to find one perfect rock that she could add to her" << endl << endl;
	cout << collection. The problem was, however, that she always seemed to be looking" << endl << endl;
	cout << "for a better one. This resulted in her searching day after day for" << endl << endl;
	cout << "a \"better\" rock than the one she had found the day before." << endl << endl;
	cout << "     Eventually, she was so consumed by her determination to find the rock" << endl << endl;
	cout << "that she stopped eating and drinking. Where on earth could she find what" << endl << endl;
	cout << "she was looking for? There seemed to be no end to this goal." << endl << endl;
	cout << "     Just as she was thinking this, suddenly she spotted it - the perfect rock!" << endl << endl;
	cout << "She reached down to grab it. But as she reached down, suddenly, she slipped" << endl << endl;
	cout << "into the water." << endl << endl;
	cout << "     As she slipped further and further beneath the surface, she began to" << endl << endl;
	cout << "wonder..." << endl << endl << endl;
	cout << "\t\"What a waste of my life. I wish - that I had spent my life differently" << endl << endl;
	cout << "\tIf I had known it was going to end here, I would have lived my life" << endl << endl;
	cout << "\twith more meaning. I would have been satisfied with what I already had\"" << endl << endl << endl;
	cout << "    Suddenly she felt a rock underneath her foot. She immediately used her" << endl << endl;
	cout << "foot to push against it. Her head popped up above the water and she breathed" << endl << endl;
	cout << "a breath of fresh air. Never again would she be happy just to be alive and to" << endl << endl;
	cout << "be content with what rock she had." << endl;*/


	cout << endl;
	cout << endl;

	system("Pause");
	return 0;
}