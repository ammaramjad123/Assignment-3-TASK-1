#include "Header.h"
void Player :: SetData(string n, int m) {
	Name = n;
	Matches = m;
}
void Player:: Display() {
	cout << "Name: " << Name << endl;
	cout << "Matches: " << Matches << endl;
}

void Batsman :: setData(string n, int m, int ts, int *pms) {
	SetData(n, m);
	Total_score = ts;
	for (int i = 0; i < m; i++) {
		Per_match_score[i] = pms[i];
	}
}


void Batsman::Calculate_Avg() {
	Average = Total_score / Matches;
}

void Batsman::Display() {
	Player::Display(); // Because of same name i am specifying it with class
	cout << "Total score: " << Total_score << endl;
	cout << "Per match score: ";
	for (int i = 0; i < Matches; i++) {
		cout << Per_match_score[i] << " ";
	}
	cout << endl;
	cout << "Average: " << Average << endl;
}

void Bowler :: setData(string n, int m, int now) {
	SetData(n, m);
	No_of_wickets = now;
}

void  Bowler:: Display() {
	Player::Display(); // Because of same name i am specifying it with class
	cout << "No. of wickets: " << No_of_wickets << endl;
}
