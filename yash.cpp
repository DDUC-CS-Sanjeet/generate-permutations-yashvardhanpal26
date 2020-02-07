#include<iostream>
//#include <stdio.h>
#include <stdlib.h>
using namespace std;
int x=1;
void permutation(char arr[],int start, int last)
{
	if(last==start+1)
	{
		cout<<x++<<" ->>> "<<arr;
		cout<<endl;
	}
	else
	{
		for(int i=start;i<last;i++)
		{
			swap(arr[start],arr[i]);
			permutation(arr,start+1,last);
			swap(arr[start],arr[i]);
		}
	}
	
}
int main()
{
	int n,i;
	cout<<"enter number of char \n";
	cin>>n;
	char a= 'a';
	char *array=new char [n+1];
	for(i=0;i<n;i++)
	{
		array[i]= a++;
		
	}
	array[n]='\0';
	
	if(n<=0)
	{
		cout<<" not valid \n";
	}
	else
	{
		cout<<"\n total no of permutation";
		permutation(array,0,n);
	}
	return 0;
}
