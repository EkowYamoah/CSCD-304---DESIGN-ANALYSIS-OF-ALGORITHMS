#include<iostream>
 
using namespace std;
 
int main(){
    int i,j,NoElements,loc,holder,min,A[30];
    cout<<"ENTER NUMBER OF ELEMENTS TO SORT: ";
    cin>>NoElements;

 
    for(i=0;i<NoElements;i++){
	cout<<"ENTER VALUE FOR INDEX "<<i<<": ";
        cin>>A[i];
    }
 
    for(i=0;i<NoElements-1;i++)
    {
        min=A[i];
        loc=i;
        for(j=i+1;j<NoElements;j++)
        {
            if(min>A[j])
            {
                min=A[j];
                loc=j;
            }
        }
 
        holder=A[i];
        A[i]=A[loc];
        A[loc]=holder;
    }
 
    cout<<"\nTHE LIST AFTER SELECTION SORT IS :";
    for(i=0;i<NoElements;i++)
    {
        cout<<A[i]<<" ";
    }
 
    return 0;
}
