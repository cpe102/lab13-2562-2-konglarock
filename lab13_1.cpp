#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	for(int i=1;i<N;i++){
		T temp = d[i];
		int k=i-1;
		for(int i = 0; i < 10; i++){
			if (k==i-1)
				cout<<"["<<d[i]<<"]";
			else
				cout<<d[i]<<" ";
		}	
		cout<<"==> ";
		while (k>=0 && temp>d[k]){
			swap(d,k,k+1);
			k--;
		}
		for(int i = 0; i < 10; i++){
			if (k==i-1)
				cout<<"["<<d[i]<<"]";
			else
				cout<<d[i]<<" ";
		}
		cout<<"\n";
		
		

	}


}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
