#include <iostream>
#include <iostream>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) : nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
};

class manusia {
public:
	string jenisKelamin;

	manusia(string pNama) : jenisKelamin(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~manusia() {
		cout << "orang dihapus\n" << endl;
	}
};