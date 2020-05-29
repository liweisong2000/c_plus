#include<iostream>
using namespace std;

int main()
{
 long long world;
 long long US;
 double percent;
 long double worlds;
 long double USs;
 cout << "Enter the world's population : ";
 cin >> world;
 cout << "Enter the population of the US : ";
 cin >> US;
 worlds = world;
 USs = US;
 percent = (USs * 100) / worlds;
 cout << "The population of the US is " << percent << "% of the world population" << endl;
 return 0;
}
