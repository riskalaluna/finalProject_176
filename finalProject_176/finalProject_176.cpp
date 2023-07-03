#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
	int y;
public: 
	bidangDatar() {
		x = 0;
		y = 0;
	}

	virtual void input() {}
	virtual float Luas(int a) { 
		return 0; }
	virtual float Keliling(int a) {
		return 0; }
	virtual void cekUlang() { 
		return; }
	void setX(int a) {
		this->x = a;
	}
	void setY(int b) {
		this->y = b;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};

class Lingkaran :public bidangDatar {
private:
	int x;
public:
	void input() {
		int x;
		cout << "Masukkan Jejari : ";
		cin >> x;
		setX(x);
	}
	float Luas() {
		int x = getX();
		return 3.14 * x * x;
	}
	float Keliling() {
		int x = getX();
		return 3.14 * 2 * x;
	}
	void cekUlang() {
		return;
	}
};

class PersegiPanjang :public bidangDatar {
private:
	int x;
	int y;
public:
	void input() {
		int x;
		cout << "Masukkan Panjang : ";
		cin >> x;
		setX(x);
		int y;
		cout << "Masukkan Lebar : ";
		cin >> y;
		setY(y);
	}
	float Luas() {
		int x = getX();
		int y = getY();
		return x * y;
	}
	float Keliling() {
		int x = getX();
		int y = getY();
		return x + x + y + y;
	}
	void cekUlang() {
		return;
	}
};

int main() {
	Lingkaran Lingkaran;
	cout << "Lingkaran dibuat: " << endl;
	Lingkaran.input();
	cout << "Luas Lingkaran: " << Lingkaran.Luas() << endl;
	cout << "Keliling Lingkaran: " << Lingkaran.Keliling() << endl;

	PersegiPanjang PersegiPanjang;
	cout << "PersegiPanjang dibuat: " << endl;
	PersegiPanjang.input();
	cout << "Luas PersegiPanjang: " << PersegiPanjang.Luas() << endl;
	cout << "Keliling PersegiPanjang " << PersegiPanjang.Keliling() << endl;

	return 0;

}