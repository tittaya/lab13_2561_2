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
	int i,j;
	for(i=1;i<N;i++){
		for(int k=0;k<N;k++){
			if(k==i) cout << "[" << d[k] << "]";
			else cout << d[k] << " ";
		}
		int g=0;
		for(j=0;j<i;j++){
			if(d[j]<d[i]){
				g++;
				swap(d,i,j);
			}
		}
			cout << "==>" << " ";
			for(int k=0;k<N;k++){
				if(k==(j-g)) cout << "["<< d[k] << "]";
				else cout << d[k] << " ";
			}
			cout << "\n";
	}

}




int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array: ";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array: ";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
