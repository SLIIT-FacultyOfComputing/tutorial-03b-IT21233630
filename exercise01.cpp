#include <iostream>
#include <iomanip>

using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No\t" << "Name\t\t" << "Marks\t" << endl;
 for (int r = 0; r < 5; r++) {
     cout <<  r+1 
          << "\t"
          <<  names[r]<<"\t\t"
          << setiosflags(ios::fixed)<<setprecision(3)
          << marks[r] <<"\t"<< endl;
       // cout << setw(4) << /n;
         // cout << '\n';
 }
}