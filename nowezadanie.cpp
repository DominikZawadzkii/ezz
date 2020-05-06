#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int t[10];
	int naj=t[0];
	for (int i=0; i<10; i++) {
		if(naj<t [i])
		naj=t[i]; 
	}
	ifstream wyjscie;
	ofstream wyjscie;
	
	wej.open ("we.txt");
	wyj.open ("wy.json");
	{
	if (wej.good()) 
		while (!wej.eof())
		for (int i=0; i<10; i++)
		wej>>t[i];
	}

	wyj<<" [  \n { \n "max" : " " <<naj ;	
	
	wej.close () ;
	wyj.close () ;
	return 0;
}
