#include<iostream>
using namespace std;
#include <string>  

int main () {
	cout<<"===== PROGRAM MENGIDENTIFIKASI KONSONAN DAN VOKAL ====="<<endl;
	
//	Input Nilai Dari User
	string text,newText= "";
	int konsonan = 0, vokal = 0, ng = 0, jumlahHuruf = 0;
	char *split;
	cout<<"Masukan Text Anda \t\t: ";
	getline(cin,text);


	cout<<endl<<"===== HASIL IDENTIFIKASI ====="<<endl;
	for (int i = 0; i < text.length(); i++) {
		//	Identifikasi Huruf Vokal
		if (text[i] == 'a' || text[i] == 'i' || text[i] == 'u' || text[i] == 'e' || text[i] == 'o' || text[i] == 'A'
		|| text[i] == 'I' || text[i] == 'U' || text[i] == 'E' || text[i] == 'O') {
			vokal++;
		} else {
		// Identifikasi Huruf Konsonan			
			 if (text[i] != ' ') {
			 	konsonan++;
			 }
		}
				
//		Identifikasi Jumlah Kata Yang Mengandung 'ng'
		
		if (text[i] != ' ') {
			jumlahHuruf++; // Identifikasi Jumlah Huruf
			newText += text[i];
				if (i == text.length()-1) {

					for (int x  = 0; x < newText.length(); x++) {
					if (newText[x] == 'n' && newText[x+1] == 'g') {
						ng++;
						x = newText.length();
					}
			}
				}
		} else {
			for (int x  = 0; x < newText.length(); x++) {
					if (newText[x] == 'n' && newText[x+1] == 'g') {
						ng++;
						x = newText.length();
					}
			}
			newText = "";
		}
		
		
	}
	


	cout<<"Jumlah Huruf\t\t\t: "<<jumlahHuruf<<endl;
	cout<<"Jumlah Huruf Vokal\t\t: "<<vokal<<endl;
	cout<<"Jumlah Huruf Konsonan\t\t: "<<konsonan<<endl;
	cout<<"Jumlah Kata Yang Terdapat 'ng'\t: "<<ng<<endl;
	
	
	
	
	
}
