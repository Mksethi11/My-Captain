#include <iostream>
using namespace std;
int main()
{
int *p;
int arr[5];
p=arr;
cout<<"Enter elements: ";
for(int i=0;i<5;i++)
{
	cin>>arr[i];
	
}
cout<<"You entered: ";
for(int i=0;i<5;i++)
{
	cout<<*p<<endl;
	p++;
}
	return 0;
}
