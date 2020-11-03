#include <iostream>
using namespace std;
int main() {
	int scores;
	cout << "ÇëÊäÈëÄãµÄ³É¼¨" << endl;
	cin >> scores;
	if (scores >= 90) cout << "A" << endl;
	else if(scores>=80)  cout << "B" << endl;
	else if(scores>=70)  cout << "C" << endl;
	else if (scores >= 60)  cout << "D" << endl;
	else  cout << "E" << endl;
}