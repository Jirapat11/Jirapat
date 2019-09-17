#include<iostream>
using namespace std;
void main()
{
 int num[2][3];
 int a = 1;

 for(int i = 0 ; i < 2 ; i++)
  for(int j = 0 ; j <3 ; j++)
  {
   cout << "Input " << i+1 << " " << j+1 << " : " ;
   cin >> num[i][j];
  }
 cout << "**********Display**********\n";
 for(int i = 0 ; i < 2 ; i++)
  for(int j = 0 ; j < 3 ; j++)
   {
   cout << num[i][j] << " ";
   if (a % 3 == 0)
    cout << endl;
   a++;
   }
 cout << "**********Transpose Matrix**********\n";
 for(int i = 0 ; i < 3 ; i++)
  for(int j = 0 ; j < 2 ; j++)
   {
   cout << num[j][i] << " ";
   if (a % 2 == 0)
    cout << endl;
   a++;
   }
}