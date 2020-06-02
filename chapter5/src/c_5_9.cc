#include<iostream>
#include<string>
using namespace std;

int main()
{
 int i;
 string word = "done";
 string words;
 cout << "Enter words (to stop, type the word done):" << endl;
 for(i=0;words!=word;++i)
 {
  cin >> words; 
 }
 cout << "You entered a total of " << --i << " words" << endl;
 return 0;
}
