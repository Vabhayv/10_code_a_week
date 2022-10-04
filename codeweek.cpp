#include <iostream>
using namespace std;

int main() {
	int p[4],count;
	for(int i=0; i<4; i++)
	cin>>p[i];
	count=0;
	for(int i=0; i<4; i++)
	{
	  if (p[i]>=10){
	     count=count+1;
	  }
	     else
	     count=count+0;
	}
	cout<<count;
	return 0;
}