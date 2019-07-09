#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc < 4)
		cout<<"Too few arguments"<<endl;
	int n=0;
	while(atoi(argv[n+1]) != 2)
		++n;
	bool A[n], B[n];
	for(int i = 1; i < n+1; ++i)
	{
		stringstream ss(argv[i]), ss2(argv[i+n+1]);
		ss >> A[i-1];
		ss2 >> B[i-1];
	}
	bool C[n+1], flag = 0;
	bool *a = &A[n-1], *b = &B[n-1], *c = &C[n];
	while(a != A-1)
	{
		if(!(*a || *b || flag))
		{
			*c = 0;
			--a, --b, --c;
			continue;
		}
		if(*a && *b && flag)
		{
			*c = 1;
			--a, --b, --c;
			continue;
		}
		if(*a && *b)
		{
			*c = 0;
			flag = 1;
			--a, --b, --c;
			continue;
		}
		if(*a || *b)
		{
			flag = 0;
			*c = 1;
			--a, --b, --c;
			continue;
		}
		if(flag)
		{
			flag = 0;
			*c = 1;
			--a, --b, --c;
			continue;
		}
		flag = 0;
		*c = 0;
		--a, --b, --c;
	}
	cout<<endl;
	if(flag)
		*c = 1;
	else
		*c = 0;
	for(int i = 0; i<n+1; ++i)
		cout<<C[i];
	cout<<endl;
}
