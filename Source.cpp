#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;
int main() {
	
	ofstream file;
	ifstream fil;
	fil.open("C:\\Users\\Hafiz Usama\\Desktop\\name.txt");
	if (!fil) {
		cout << "Not found this file";
	}

	
	char t[15];
	while (fil >> t) {
		if (t[0] == 'e' || t[0] == 't') {
			cout << t << endl;
		}
	}
	
	file.close();
	fil.close();
		_getch();
}
