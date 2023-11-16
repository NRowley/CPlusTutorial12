#include <iostream>
#include <string>
using namespace std;

struct Character
{
	Character() {
		Name = "Default";
		Health = 100.f;
	}

	string Name;
	float Health;

	float getHealth() {
		return Health;
	}
};


int main() {
	for (int i = 0; i < 10000000; i++) {
		Character* PtrToChar = new Character();
		PtrToChar->Name = "Killian " + i;
		cout << PtrToChar->Name << endl;
		cout << PtrToChar->getHealth() << endl;
		//delete the ptr to free up memory
		delete PtrToChar;
	}
	

	system("pause");
}