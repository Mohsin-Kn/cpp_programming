

#include<iostream>

using namespace std;

int main()
{
	
//	int x, n;
//	cout << "Enter the number of items:" << "\n";
//	cin >>n;
//	int *arr = new int(n);
//	cout << "Enter " << n << " items" << endl;
//	for (x = 0; x < n; x++) {
//		cin >> arr[x];
//	}
//	cout << "You entered: ";
//	for (x = 0; x < n; x++) {
//		cout << arr[x] << " ";
//	}
//	return 0;
//}
	 int size ;
    cin>>size;
  int *arr= new int [size];
for(int i=0;i<size;i++)
{
	cout<<"arr["<<i<<"] ";
    cin>>arr[i];
}
for(int i=0;i<size;i++)
{
	cout<<*(arr+i)<<" ";
}
 delete[]arr;
 arr=NULL;

  
}
