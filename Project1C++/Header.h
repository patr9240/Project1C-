#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
/*
Author: Chad Ostler - D'Arcey Taylor - Patrick Ross - Ryan Jameson
Date: August 9, 2016.
Project 2
Professor: Matt Wilson
*/

using namespace std;

//Declare prototypes
void PrintMenu();
void OpeningDescription();

//Declare Classes
//Character class
class Character {

	struct {
		string Name;
		int Health;
		int Humanity;
		vector<string> Items;

	};
public:
	void move() {

	}//end of move
	void attack() {

	}//end of attack

	//random chance to critically strike with an attack; true = crit, false = not crit
	bool crit() {
		int randNum = rand() % 100 + 1;
		if (randNum >= 90) {
			return true;
		}
		else {
			return false;
		}
	}//end of crit
	void avoidance() {


	}//end of avoidance
	void health() {

	}//end of health
	void useItem() {

	}//end of useItem
	void getItem() {

	}//end of getItem
	void setItem() {

	}//end of setItem
	void humanity() {

	}//end of humanity

};//end of Character class

//Enemy class
class Enemy {
	struct {
		string Name;
		int Health;
		int Damage;
	};
public:
	void health() {
		
	}//end of health
	void attack() {

	}//end of attack
	 //random chance to critically strike with an attack; true = crit, false = not crit
	bool crit() {
		int randNum = rand() % 100 + 1;
		if (randNum > 75) {
			return true;
		}
		else {
			return false;
		}
	}//end of crit
	bool avoidance() {
		int randNum = rand() % 100 + 1;
		if (randNum > 85) {
			return true;
		}
		else {
			return false;
		}
	}//end of avoidance
	void encounter() {

	}//end of encounter
	void boss() {

	}//end of boss
};//end of Enemy class

//NPC class
class NPC {
public:
	struct {
		string Name;

	};
	void encounter() {

	}//end of encounter
};//end of NPC class