#include <iostream>

using namespace std;

void insertion_sort(int A[], int N)
{
	int i, key;
	for(int j=1; j<N; ++j)
	{
		key = A[j];
		i = j-1;
		while(i >= 0  && A[i] < key)
		{
			A[i+1] = A[i];
			--i;
		}
		A[i+1] = key;
	}
	


}	
int main()
{
	int A[6] = {1, 2, 3, 7, 6, 5};
	for(int i = 0; i<6; ++i)cout<<A[i];
        insertion_sort(A, 6);
	cout<<endl;
	for(int i = 0; i<6; ++i)cout<<A[i];
}

