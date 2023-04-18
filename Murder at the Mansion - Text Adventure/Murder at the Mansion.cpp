#include <iostream>
#include <string>
using namespace std;

int main() {

	// Murder at the Mansion
	// 4 characters - Mr. Blue, Miss Red, Mr. Green, and Mrs. White. Mr. Green kills Mrs. White in the library with a knife.
	// Choice 1 - Leave or stay
	// Choice 2 - Which room
	// Choice 3 - Who dunnit

	cout << "MURDER AT THE MANSION\n";
	cout << "---------------------\n";
	cout << endl;

	cout << "Welcome to Murder at the Mansion! Here you will be introduced to several characters, one of which will soon meet their untimely demise, and you must find the culprit!\n";
	cout << endl;

	cout << "We begin our story in the foyer; standing around you is Mr. Blue, Miss Red, Mr. Green, and Mrs. White.\n";
	cout << "You've been invited to a party at Mrs. White's house. Everyone makes their introductions and you settle in, sampling the snacks and making light conversation.\n";
	cout << "Mrs. White excuses herself while Mr. Green idles in the kitchen, Mr. Blue expresses interest in visiting the library, and Miss Red visits the master bedroom to use the powder room.\n";
	cout << "Suddenly, the power to the house cuts and you hear a scream. Just as quickly, the power returns. You stand alone in the living room, debating your next move.\n";
	cout << endl;

	// Q for continue or quit
	int answer1 = 0;
	for (int i = 0; i < 3 && answer1 != 1 && answer1 != 2; i++) {
		cout << "Would you like to: \n";
		cout << "1) Investigate for the source of the scream\n";
		cout << "2) Get the heck out of there\n";
		cin >> answer1;
	}
	if (answer1 == 1) {
		
		cout << "You collect yourself and decide to go searching the house.\n";
	}
	else if (answer1 == 2) {

		cout << "You can't be bothered dying today, so you swiftly vacate the premises.\n";
		cout << "GAME OVER";
		return 0;
	}
	else {
		cout << "Invalid input\n";
		return 0;
	}

	//Q for which room
	int answer2 = 0;
	for (int i = 0; i < 3 && answer2 != 1 && answer2 != 2 && answer2 != 3; i++) {
		cout << "You find yourself surrounded by several rooms. Which will you investigate first?\n";
		cout << "1) The Kitchen\n";
		cout << "2) The Library\n";
		cout << "3) The Master Bedroom\n";
		cin >> answer2;
	}

	if (answer2 == 1) {

		cout << "You make your way to the kitchen but find no sign of anyone. Before you can turn around however, you feel a knife being thrust into your back. The killer got you! Game over.\n";
		return 0;
	}
	else if (answer2 == 2) {

		cout << "The scream sounded like it may have come from upstairs, so you climb your way up to the library. You see everyone else already gathered here, standing around poor Mrs. White's body! She's been killed!\n";
	}
	else if (answer2 == 3) {

		cout << "You make your way to the master bedroom but find no sign of anyone. Before you can turn around however, you feel a knife being thrust into your back. The killer got you! Game over.\n";
		return 0;
	}
	else {
		cout << "Invalid input\n";
		return 0;
	}


	cout << "Mr. Blue, Miss Red, and Mr. Green are standing around Mrs. White's body, staring in shock and confusion.\n";
	cout << "'Who could have done such a thing?!' exclaimed Miss Red.\n";
	cout << "'Stabbed in the back at her own party! Such a shame.' responded Mr. Green.\n";
	cout << "'We need to call the police at once!' said Mr. Blue.\n";
	cout << "Something smells fishy to you here. Blood is pooling around Mrs. White and you can see signs of a struggle in the room. This was certainly not an accident.\n";
	cout << "One of these other guests must have killed Mrs. White. But who? There aren't many clues to go on. Maybe something one of them has said shows the truth.\n";

	//Q for who dunnit
	int answer3 = 0;
	for (int i = 0; i < 3 && answer3 != 1 && answer3 != 2 && answer3 != 3; i++) {
		cout << "1) Mr. Blue\n";
		cout << "2) Miss Red\n";
		cout << "3) Mr. Green\n";
		cin >> answer3;
	}
	if (answer3 == 1) {

		cout << "'Mr. Blue! You must be the one who killed Mrs. White!'\n";
		cout << "'M-me?! I've done no such thing!' he retorts.\n";
		cout << "'Nice try, explain that to the authorities!'\n";
		cout << "The police arrive and you explain your suspicions of Mr. Blue. After interrogating all of the guests, they find no evidence or motive of Mr. Blue committing the crime. You were unable to find the culprit yourself\n";
		cout << "Game over!";
		return 0;
	}
	else if (answer3 == 2) {

		cout << "'Miss Red! You must be the one who killed Mrs. White!'\n";
		cout << "'M-me?! I've done no such thing!' she retorts.\n";
		cout << "'Nice try, explain that to the authorities!'\n";
		cout << "The police arrive and you explain your suspicions of Miss Red. After interrogating all of the guests, they find no evidence or motive of Miss Red committing the crime. You were unable to find the culprit yourself\n";
		cout << "Game over!";
		return 0;
	}
	else if (answer3 == 3) {

		cout << "'Mr. Green! You must be the one who killed Mrs. White!'\n";
		cout << "'W-what on Earth would you make you believe something like that?!' he exclaims back.\n";
		cout << "'How did you know she was stabbed in the back? All we see is her blood, no weapon. Quite suspicious if you ask me.'\n";
		cout << "'I-it was simple deduction! There is blood everywhere, what else would have caused that' Mr. Green responds.\n";
		cout << "'And would you have gotten this knife from the kitchen? I saw you there before the lights went out.'\n";
		cout << "'A-alright these accusations are getting out of hand! I will not be saying anything more' Mr. Green is visibly flustered.\n";
		cout << "When the police arrive, you express your suspicions of Mr. Green. The police search his person and find a bloody knife. You have found the culprit!";
		return 0;
	}
	else {
		cout << "Invalid input.";
		return 0;
	}






}
