#include <iostream>

using namespace std;

int my_min(int N, int A[])
{
	int k=0, min=A[0];
	for(int i=1; i<N; ++i)
		if(A[i] < min)
		{
			min = A[i];
			k = i;
		}
	return k;
}

int main(int argc, char *argv[])
{
	int buf, k, A[argc-1];
	int *a = A;
	for(int i=1; i<argc; ++i)
		A[i-1] = atoi(argv[i]);
	for(int i=0; i<argc-2; ++i)
	{
		k = my_min(argc-1-i, a);
		buf = A[i];
		A[i] = A[k+i];
		A[k+i] = buf;	
		++a;
	}
	for(int i = 0; i<argc-1; ++i)
		cout<<A[i]<<"  ";
	cout<<endl;
}
