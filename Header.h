#include<iostream>
#include<string>
using namespace std;

class Player {
protected:
	string Name;
	int Matches;
public:
	void SetData(string n, int m);
	void Display();
};

class Batsman : public Player {
protected:
	int Total_score;
	int Per_match_score[100]; // Randomly setting the size but will ask user below it
	float Average;
public:
	void setData(string n, int m, int ts, int *pms);
	void Calculate_Avg();
	void Display();
};

class Bowler : public Player {
protected:
	int No_of_wickets;
public:
	void setData(string n, int m, int now);
	void Display();
};