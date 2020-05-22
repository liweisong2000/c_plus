#include<iostream>
using namespace std ;

int main()
{
 const  int degrees = 37 ;
 const  int minutes = 51 ;
 const  int seconds = 19 ;
 const  double degree = 37.8553 ;
 cout << "Enter a latitude in degrees , minutes , and seconds: " << endl ;
 cout << "First , enter the degrees: " << degrees << endl ;
 cout << "Next, enter the minutes of arc: "<< minutes << endl ;
 cout << "Finally ,enter the seconds of arc: "<< seconds << endl ;
 cout << degrees << " degrees" << minutes << " minutes, " << seconds <<  " seconds = " <<degree << " degrees" <<endl ; 
 return 0 ;
}
