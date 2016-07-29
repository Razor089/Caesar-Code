#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void leggiDatiEScrivi(string nomeFile, string &text, int key);
void leggiDatiEDecritta(int key);
string encrypt(string text, int key);
string decrypt(string text, int key);

int main(int opt, char* args[]){
	string nomeFile = args[2];
	string text;

	if(atoi(args[1]) == 0){
		cout << "Criptazione in corso\n"; 

		srand((unsigned)time(0));
		int i = (rand()%10)+1;

		cout << "Chiave di criptazione generata\n";

		leggiDatiEScrivi(nomeFile, text, i);

		cout << "Criptazione conclusa\n";
		cout << i << endl;
	} else if(atoi(args[1]) == 1){
		cout << "Decriptazione in corso\n";

		int key = atoi(args[2]);
		leggiDatiEDecritta(key);

		cout << "Decriptazione conclusa\n";
	}

	cout << "Programma terminato\n";

	return 0;
}

void leggiDatiEScrivi(string nomeFile, string &text, int key){
	ifstream iflux (nomeFile);
	ofstream oflux ("hidden.txt");
	ofstream kflux ("key.txt");
	cout << "Inizio lettura del file\n";
	while(getline(iflux,text)){
		oflux << encrypt(text, key) + "\n";
	}
	kflux << key;
	iflux.close();
	oflux.close();
	kflux.close();
	cout << "File criptato generato\n";
	return;
}
void leggiDatiEDecritta(int key){
	cout << "Inizio lettura file ";
	string text;
	ifstream iflux ("hidden.txt");
	ofstream oflux ("cleared.txt");
	while(getline(iflux,text)){
		oflux << decrypt(text, key) + "\n";
	}
	iflux.close();
	oflux.close();
	cout << "File in chiaro generato\n";
	return;
}

string encrypt(string text, int key){
	string crypted;
	for(int x = 0; x < text.size(); x++){
		crypted += text[x]+key;
	}

	return crypted;
}

string decrypt(string text, int key){
	string decrypted;
	for (int i = 0; i < text.size(); ++i){
		decrypted += text[i]-key;
	}
	return decrypted;
}
