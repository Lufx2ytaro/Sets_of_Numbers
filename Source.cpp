#include<iostream>
#include"SetOfNum.h"

using namespace std;

int main()
{

	uint32_t temp[] = {1,1,1,1,1,2,3 };
	SetOfNum x{7,temp};
	
	x.show();

	SetOfNum y = x + 15;
	cout << endl;
	y.show();


	x += 5;
	
	cout << endl;
	x.show();
	cout << endl;
	++y;
	y.show();
	cout << endl;
	y++;
	y.show();
}

