#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
 
using namespace std;

int main() {
	char huruf[20];
	char pindah[20];
	
	cout << "Masukkan Sembarang Kata = ";
	gets_s(huruf);
	/* Proses */
	strcpy(pindah, huruf);
	cout << "Pemindahannya = " << pindah;
	
	_getch();
	return 0;
}