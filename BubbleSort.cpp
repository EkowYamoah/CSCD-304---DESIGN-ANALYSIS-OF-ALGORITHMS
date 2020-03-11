#include<iostream>
using namespace std;


int main(){



int m;
	int NoElements;
	
	cout<<"ENTER THE NUMBER OF ELEMENTS TO SORT: ";
	cin>>NoElements;
	int A[NoElements];
		
		for(int m = 0; m<NoElements;m++){
			cout<<"ENTER VALUE FOR INDEX: "<<m<<endl;
			cin>>A[m];
			
			}
			cout<<"\n\n\nUNSORTED ARRAY: ";
			for(int m = 0; m<NoElements;m++){
			cout<<A[m]<<" ";
		}
	int i,j, holder;
		for(i=1;i<NoElements;i++){
			for(int j = NoElements;j>1;j--){
				if(A[j]<A[j-1]){
					holder = A[j];
					A[j] = A[j-1];
					A[j-1] = holder;
				}
			}
		}
		
		cout<<"\n\n\nTHE ARRAY AFTER BUBBLE SORT IS: "<<endl;
		m=1;
		while(m<NoElements+1){
			cout<<A[m]<<' ';
			m++;
		}
	return 0;	
	}
