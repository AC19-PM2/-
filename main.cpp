//Sveshnikov Artem 19-PM-2 Variant 15 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	int pos,k,p;
	string s1;
	string s2;
	p=0;
	char nameopen[255];	
	cout<< "Vvedite ima faiva"<<endl;
	cin>>nameopen;
	fstream fch;
	fch.open(nameopen,ios::in);
	if (!fch)
	{
		cout<<"Fail s takim imenem ne naiden"<<endl;
		do {
			cout<<"Povtorite vvod :"<<endl;
			cin>>nameopen;
			fch.open(nameopen,ios::in);
		}while(!fch);
	}
	getline(fch,s1);
	cout<<"Schitannaia stroka: "<<endl;
	cout<<s1<<endl;
	fch.close();
	pos=s1.find("password:");	
	if (pos==-1)
	cout<<"Podstrok ne obnoruzhenno"<<endl;
	else{
		while (pos!=-1){
			p=p+pos;
			s1.erase(pos+10,8);
			s1.insert(pos+10,"********");
			pos=s1.find("password:",p);
	
		}
	}
	cout<<"Rezultat :"<<endl;
	cout<<s1<<endl;
	return 0;
}

