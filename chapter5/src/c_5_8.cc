#include<iostream>
#include<cstring>
using namespace std;

int main()
{
 int i;
 int compare = 1;
 const char * word = "done";
 char words[20];
 cout << "Enter words (to stop, type the word done):" << endl;
  for(i = 0;compare != 0; ++i)
  {
   cin >> words,cin.get();
   compare = strcmp(words,word);
  }
 i = i -1;
 cout << "You entered a total of " << i << " words." << endl;
 return 0;
}
