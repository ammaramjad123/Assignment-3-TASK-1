// TASK 1 //
#include "Header.h"
int main() {
	Batsman B;
	Bowler Bl;
	int pms[100];
	string n;
	int m, ts, now;
	cout << "Enter name: ";
	cin >> n;
	cout << "Enter number of matches: ";
	cin >> m;
	cout << "Enter total score: ";
	cin >> ts;
	cout << "Enter per match scores: ";
	for (int i = 0; i < m; i++) {
		cin >> pms[i];
	}
	cout << "Enter number of wickets: ";
	cin >> now;
	B.setData(n, m, ts, pms);
	Bl.setData(n, m, now);
	B.Calculate_Avg();
	cout << endl << "Batsman information: " << endl;
	B.Display();
	cout << endl << "Bowler information: " << endl;
	Bl.Display();

	system("pause");
	return 0;
}