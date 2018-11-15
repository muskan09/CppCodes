/*#include<iostream>
using namespace std;

int main()
{
    // an array with 3 rows and 2 columns.
    int x[3][2] = {{0,1}, {2,3}, {4,5}};

    // output each array element's value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }

    return 0;
}*/
#include<iostream>
using namespace std;

int main() {
   int mat[3][3]; // matrix can have max 3 rows and 3 cols
   int i, j;
   cout << "Enter"<< endl;
   for ( i = 0; i < 3; i++ ) { // outer loop iterates over each row
      for ( j = 0; j < 3; j++ ) { // inter loop iterates over each column
         cin >> mat[i][j];
      }
   }
   // display the matrix
   cout << "the matrix:-" << endl;
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         cout << mat[i][j] << " ";
      }
      cout << endl;
   }
   return 0;
}


