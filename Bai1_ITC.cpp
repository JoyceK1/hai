#include <iostream>
#include <math.h>
using namespace std;

void xuat(int a[],int n){
	for (int i=0;i<n;i++){
		cout << a[i] << "\t";
	}
	cout << endl;
}

void tangdan(int a[], int n){
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			if (a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	cout << "\nMang sau khi sap xep la: ";
	xuat(a,n);
}
void sapxep(int a[], int n){
	int i, j;
    for (i = 0; i < n - 1;i++)
    for (j = i + 1; j < n;j++)
    if ((a[i] % 2 != 0 && a[j] % 2 == 0) || (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i]>a[j])
        || (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i]<a[j]))
    {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }	
    cout << "Mang sap xep chan le : ";
    xuat(a,n);
}      
int timx(int a[], int n,int x){
	for (int i=0; i<n; i++){
		if (a[i]==x)
			return i;

	}
	 return -1;
}
void xoa(int a[], int n, int x){
	cout << "\nMoi ban nhap x: "; cin >> x;
	int vt=timx(a, n, x);
	if(vt==-1)
		cout <<"\nKhong tim thay phan tu "<<x<< " muon xoa.";
	else
	{
		cout << "\nDa tim thay!!!\n";
		for(int i=vt; i<=n-2; i++)
			a[i] = a[i+1]; 
		n--;
	}
	cout << "\nMang sau khi xoa: ";
	xuat(a,n);	 
}

int main(){
	int a[100];
	int n,x;
	cout << "Moi ban nhap so luong phan tu cua mang: "; cin >>n;
	for (int i=0; i<n; i++){
		cout << "a[" << i << "]= ";
		cin>>a[i];
	}
	cout << "\nMang da nhap:";
	for(int i=0; i<n; i++){
		cout <<a[i]<< "\t\t";
	}
// mang tang dan
	cout << "\n\n------------------------------------\n";
	tangdan(a,n);
// sap xep chan le
	cout << "\n\n------------------------------------\n";
	sapxep(a,n);
// tim x va xoa neu co
	cout << "\n\n------------------------------------\n";
	xoa(a,n,x);
return 0;
}