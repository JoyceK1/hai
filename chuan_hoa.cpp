#include <iostream>
#include <string.h>

using namespace std;

void input(char s[100]){
	cout << "\nMoi ban nhap ho va ten: ";
	cin.getline(s,100);
}

void check(char s[100],int n){
	n=strlen(s);
	int i=0;	
	do {
		char j = s[i];
		if (j>32 && j<64 || j>90 && j<97 || j>=0 && j<32 || j>122)
			input(s);
		i++;
	}while (i<=n);
} 

int main() {
	char s[100];
	int n;
	input(s);
	check(s,n);
	char *token = strtok ( s ," ");
    string x[100];
    int size =0;
    while( token != NULL){                               
    	x[size]= token;           
    	size++;                    
    	token= strtok(NULL," ");         
    }

    cout <<"\nHo: " << x[0];
    cout<<"\nTen dem: ";
    for (int i = 1;i < size-1;i++){
    	cout<<x[i]<< " ";
	}
	cout <<"\nTen: " << size[x-1]<< endl;
}
//nguyen ngoc khai