#include <stdlib.h>
#include "Header.h"

/*
Author: Chad Ostler - D'Arcey Taylor - Patrick Ross - Ryan Jameson
Date: August 9, 2016.
Project 2
Professor: Matt Wilson
*/

void Intro() {
	//text here
}

//Declare Classes
//Character class
class Character {
	
	string Name;
	int Health;
	Area Curr;
	vector<string> Items;

public:

	Character(string Name) {
		setName(Name);
		setHealth(100);
	    
	};

	void move(int direction) {
		
		switch (direction) {
		//UP
		case 1:
			break;
		//DOWN
		case 2:
			break;
		//LEFT
		case 3:
			break;
		//RIGHT
		case 4:
			break;
		//ERROR
		default:
			break;
		}

	}//end of move
	void attack() {

	}//end of attack
	void crit() {

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

	string getName() {
		return Name;
	}//end of getName

	void setName(string Name) {
		this->Name = Name;
	}

	int getHealth() {
		return Health;
	}//end of getName

	void setHealth(int Health) {
		this->Health = Health;
	}

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
	void crit() {

	}//end of crit
	void avoidance() {

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

struct Area {
	string Name;
	int width;
	int height;
};
