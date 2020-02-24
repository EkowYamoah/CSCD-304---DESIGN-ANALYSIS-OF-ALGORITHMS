#include <iostream>
  using namespace std;
 
void linearSearch(int a[], int n) {
  int temp = -1;
 
  for (int i = 0; i < 5; i++) {
    if (a[i] == n) {
      cout << "ELEMENT FOUND AT INDEX: " << i + 1 << endl;
      temp = 0;
      break;
    }
  }
 
  if (temp == -1) {
    cout << "OOPS!!! NO ELEMENT FOUND" << endl;
  }
 
}
 
int main() {
  int Array1[1000], item;
  cout << "PLEASE ENTER NUMBER OF ELEMENTS:";
  cin>>item;
  cout<<endl;
  for (int i = 0; i < item; i++) {
  	cout<<"ENTER ELEMENT "<<i+1<<" ";
    cin >> Array1[i];
  }
  cout << "PLEASE ENTER KEY TO SEARCH FOR:" << endl;
  int num;
  cin >> num;
 
  linearSearch(Array1, num);
 
  return 0;
}
