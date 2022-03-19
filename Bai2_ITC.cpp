#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char a[100], b[100];
	int vt=0;
	cout << "Moi ban nhap vao ho va ten: ";
	cin.getline(a,100);
	strcpy(b,a);
	cout << "\nHo: ";
	int i;
	for(i=0; i<strlen(a) ; i++){
		if(a[i]!= ' '){
			cout << a[i];
		} else break;
	}

	cout << "\nTen: ";
	for(i=0; i<strlen(b); i++){
		if(a[i] == ' ')
		vt=i;
	}
	for(i=vt; i<strlen(b) ; i++){
			cout << b[i];
	}	
	cout << endl;
return 0;
}