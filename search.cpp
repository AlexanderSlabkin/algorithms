#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc < 3)
		cout<<"Too few argumenst"<<endl;
	
	else
	{
        	int k = 0, key = atoi(argv[1]);
		for(int i=2; i<argc; ++i)
			if(key==atoi(argv[i]))
			{	
				k=i;
				break;
			}
		if(k == 0)
			cout<<"NIL"<<endl;
		else 
			cout<<k<<endl;
	}
}
