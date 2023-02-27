#include <iostream>
#include <cmath>
using namespace std;

//double luasLingkaran(double r){
//	return M_PI*r*r;
//}
//
//int main(){
//	double r;
//	
//	cin>>r;
//	
//	cout<<"Luas Lingkaran: "<<luasLingkaran(r);
//	
    void absen(string name, int npm){
	cout<<name<<"_"<<npm;
}

int main(){
	string name;
	int npm;
	
	getline(cin, name);
	cin>>npm;
	
	absen(name, npm);
	
	return 0;
}
	

