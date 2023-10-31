#include <iostream>
using namespace std;

int main() 
{
	int halloweenCandy = 2;
	int moreHalloweenCandy;
	int sum;

	int Halloween(halloweenCandy);
	{
		cout << "Halloween Candy Count: ";
		cout << halloweenCandy;
		cout << "\nAdd Candy: +";
		cin >> moreHalloweenCandy;

		sum = halloweenCandy + moreHalloweenCandy;
		cout << "Ur Candy Now: ";
		cout << sum << " :)";

		return 0;
	}
	
}