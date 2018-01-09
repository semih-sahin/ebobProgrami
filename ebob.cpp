#include <iostream>
#include <windows.h>
using namespace std;

int ebob(int x, int y){
	int temp;
	if (x<y){
		temp=x;
		for (temp; temp>=1; temp--){
			if (y%temp==0 && x%temp==0){
				return temp;
			}
		}
	}else{
		temp=y;
		for (temp; temp>=1; temp--){
			if (x%temp==0 && y%temp==0){
				return temp;
			}
		}
	}
}

int main(){
	int sayi1, sayi2;
	cout << "Ebobunu hesaplamak icin iki sayi girmeniz gerekiyor.\n\n";
	A10:
	cout << "Birinci sayiyi giriniz:";
	cin >> sayi1;
	if (sayi1<=0){
		cout << "POZITIF BIR SAYI GIRINIZ.";
		goto A10;
	}
	A20:
	cout << "Ikinci sayiyi giriniz:";
	cin >> sayi2;
	if (sayi2<=0){
		cout << "POZITIF BIR SAYI GIRINIZ.";
		goto A20;
	}
	cout << "EBOB(" << sayi1 << "," << sayi2 << ")= " << ebob(sayi1,sayi2) << "\n\n\n";
	system("pause");
	return 0;
}
