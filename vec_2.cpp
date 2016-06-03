#include <iostream>
#include <vector>
using namespace std;
int main()
 {
// Declare size of two dimensional array and initialize.
 vector< vector<int> > vecvec(3, vector<int>(2,0));
 vecvec[0][0] = 0;
 vecvec[0][1] = 1;
 vecvec[1][0] = 10;
 vecvec[1][1] = 11;
 vecvec[2][0] = 20;
 vecvec[2][1] = 21;
cout << "Loop by index:" << endl;
int ii, jj;
 for(ii=0; ii < 3; ii++)
 for(jj=0; jj < 2; jj++)
 cout << vecvec[ii][jj] << endl;
 system ("pause");
 }