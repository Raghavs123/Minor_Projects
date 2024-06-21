/*#include<iostream>
using namespace std;
int main () {*/
/*int i,j,k,n;
cout<<"Enter the value of n ";
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(k=1;k<=2*i-1;k++){
        cout<<"*";
    }
    cout<<endl;
}*/

 /*int i,j,n;   
    cin>>n;   
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++) {
            if(i+j>=n+1 )
             cout<<"*";
             else
             cout<<" ";
        }
       cout<<endl;  
    }

    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

int i,j,k,n;
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=i-1;j++){
        cout<<"  ";
    }
    for(k=n;k>=2*i-1;k--){
        cout<<" *";
    }
    cout<<endl;*/

/*int main() {

int row,col;
cout<<"row ";
cin>>row;
cout<<"col ";
cin>>col;

for(int i=1; i<=row; i++) {
for(int j=1; j<=col; j++) {
cout<<"* ";
}
cout<<endl;
}
    return 0;
}

Output :
row 3
col 4
* * * * 
* * * * 
* * * * 

#include <iostream>
using namespace std;
int main() {

    int row,col;
    cout<<"row ";
    cin>>row;
    cout<<"col ";
    cin>>col;
    
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

Output :
row 5
col 5
* 
* * 
* * * 
* * * * 
* * * * *

#include <iostream>
using namespace std;
int main() {

    int row,col;
    cout<<"row ";
    cin>>row;
    cout<<"col ";
    cin>>col;
    
    for(int i=0; i<row; i++){
        for(int j=0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

Output :
row 5
col 5
* 
* * 
* * * 
* * * *

#include<iostream>
using namespace std;
int main () {
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

Output :
1
22
333
4444
55555

#include<iostream>
using namespace std;
int main () {
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
Output :
1
12
123
1234
12345

#include<iostream>
using namespace std;
int main () {
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            cout<<i;
        }
        cout<<endl;
    }

Output :
11111
2222
333
44
5*/

/****Note : Agar j ko n pe depend karaya or i pe depend nahi karaya to let's say 12345 <--- ye as it is copy hoga next rows me i.e no. of columns if 5 initially then 5 hi rahenge
in all rows i.e no. of columns are constant.
But if j ko i pe depend karwaya then no. of columns initially let's say 5 the, to successive rows me they would decrease.
In short, If j depends on n, then no. of columns would remain constant in successive rows.
And If j depends on i, then no. of columns would decrease/increase accordingly in successive rows.

i.e*/

/*int main() {
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

Output :
5
* * * * * 
* * * * * 
* * * * * 
* * * * *

int main() {
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

Output :
5
* 
* * 
* * * 
* * * * 
* * * * *

int main() {
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=5;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }


Output :
5
* * * * * 
* * * * 
* * * 
* * 
* 
*/

//return 0;
//}

//Advanced Pattern
/*#include<iostream>
using namespace std;
int main () {
 int lines;
cout<<"Enter number of lines";
cin>>lines;
int numbers=1,x,space=lines/2;
for(int i=1; i<=lines;  i++)
{x=i;
for(int j = 1;j<=space;j++)
cout<<" ";
for(int k=1;k<=numbers;k++)
  {if(k<=numbers/2)
    {cout<<x;
     x++;
    }
     else
        {cout<<x;
         x--;
       }
 }
if(i==(lines+1)/2 && (lines%2)==0)
{
}
else if(i<(lines+1)/2)
{space=space-1;
numbers=numbers+2;
}
else
{space=space+1;
numbers=numbers-2;
}
cout<<endl;
}

return 0;
}*/

/*#include <iostream>
using namespace std;

int main (){
int i,j,k;
for(i=1;i<=5;i++){
for(j=1;j<=5-i;j++){
cout<<" ";
}
for(k=1;k<=2*i-1;k++){ // Hollow Star Pyramid Pattern (Upper Part)
if(k==1 || k==(2*i-1)){
cout<<"*";
}
else{
cout<<" ";
}
}
cout<<endl;
}
return 0;
}*/

/*#include <iostream>
using namespace std;

int main (){
int i,j,k;
for(i=5;i>=1;i--){
for(j=1;j<=5-i;j++){
cout<<" ";
}
for(k=1;k<=2*i-1;k++){ // Hollow Star Pyramid Pattern (Lower Part)
if(k==1 || k==(2*i-1) ){
cout<<"*";
}
else{
cout<<" ";
}
}
cout<<endl;
}
return 0;
}*/

/*#include <iostream>
using namespace std;

int main (){
int i,j,k;
for(i=1;i<=5;i++){
for(j=1;j<=5-i;j++){
cout<<" ";
}
for(k=1;k<=2*i-1;k++){
if(k==1 || k==(2*i-1)){
cout<<"*";
}
else{
cout<<" ";
}
}
cout<<endl;
}
for(i=4;i>=1;i--){
for(j=1;j<=5-i;j++){
cout<<" ";
} // Hollow Diamond or Star Pattern Method 1 (for size = 5 or n = 5)
for(k=1;k<=2*i-1;k++){
if(k==1 || k==(2*i-1)){
cout<<"*";
}
else{
cout<<" ";
}
}
cout<<endl;
}

return 0;
}*/

/*#include<iostream>
using namespace std;

int main () {

for(int i=5;i<=9;i++){
for(int j=1;j<=9;j++){
if(i==j || i+j==10)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
} // Hollow Diamond or Star Pattern Method 2 (for size = 5 or n = 5)
for(int i=2;i<=5;i++){
for(int j=1;j<=9;j++){
if(i==j || i+j==10)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
return 0;
}*/

/*#include<iostream>
using namespace std;

int main () {

for(int i=1;i<=5;i++){
for(int j=1;j<=5;j++){
if(i+j==6)
cout<<"*";
else
cout<<" ";
}
for(int j=4;j>=1;j--){
if(i+j==6)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
} // Hollow Diamond or Star Pattern Method 3 (for size = 5 or n = 5)
for(int i=4;i>=1;i--){
for(int j=1;j<=5;j++){
if(i+j==6)
cout<<"*";
else
cout<<" ";
}
for(int j=4;j>=1;j--){
if(i+j==6)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
return 0;
}*/

/*#include<iostream>
using namespace std;

int main () {
for(int i=1;i<=5;i++){
for(int j=1;j<=5;j++){
if(i+j==6 || i==5 || j==5)
cout<<"*";
else
cout<<" ";
}
for(int j=4;j>=1;j--){
if(i+j==6 || i==5 )
cout<<"*";
else
cout<<" ";
}
cout<<endl;
} // Hollow Diamond Match Box Type Pattern (for size = 5 or n = 5)
for(int i=4;i>=1;i--){
for(int j=1;j<=5;j++){
if(i+j==6 || i==5 || j==5)
cout<<"*";
else
cout<<" ";
}
for(int j=4;j>=1;j--){
if(i+j==6 || i==5 )
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
return 0;
}*/

/*#include<iostream>
using namespace std;

int main () {

for(int i=1;i<=5;i++){
for(int j=1;j<=6;j++){
if(i+j>6)
cout<<"*";
else
cout<<" ";
}
for(int j=5;j>=1;j--){
if(i+j>6)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
} // Diamond Pattern (for size = 5 or n = 5)
for(int i=4;i>=1;i--){
for(int j=1;j<=6;j++){
if(i+j>6)
cout<<"*";
else
cout<<" ";
}
for(int j=5;j>=1;j--){
if(i+j>6)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}

return 0;
}*/

/*#include<iostream>
using namespace std;

int main () {
int n;
cin>>n;

for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(i+j>n+1)
cout<<"*";
else
cout<<" ";
}
for(int j=n-1;j>=1;j--){
if(i+j>n+1)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
} // Diamond Pattern (for any size n)
for(int i=n-1;i>=1;i--){
for(int j=1;j<=n;j++){
if(i+j>n+1)
cout<<"*";
else
cout<<" ";
}
for(int j=n-1;j>=1;j--){
if(i+j>n+1)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
return 0;
}*/

/*#include<iostream>
using namespace std;

int main (){
int i,j,k;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(i==j)
        cout<<"*";
        else
        cout<<" ";
    }
    for(j=3;j>=0;j--){
        if(i==j)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}                      // Printing X Pattern for size = 5 or n = 5.
for(i=3;i>=0;i--){
    for(j=0;j<5;j++){
        if(i==j)
        cout<<"*";
        else
        cout<<" ";
    }
    for(j=3;j>=0;j--){
        if(i==j)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}
return 0;
}*/

/*#include<iostream>
using namespace std;

void pattern (int n){    // Function for printing Star Pattern of size n given by user
int i,j,k;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j)
        cout<<"*";
        else
        cout<<" ";
    }
    for(j=n-2;j>=0;j--){
        if(i==j)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}                      // Printing X Pattern for size = 5 or n = 5.
for(i=n-2;i>=0;i--){
    for(j=0;j<n;j++){
        if(i==j)
        cout<<"*";
        else
        cout<<" ";
    }
    for(j=n-2;j>=0;j--){
        if(i==j)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}
}
int main (){
pattern(5);
return 0;
}*/

/*#include<iostream>
using namespace std;

int main (){
int i,j;

for(i=1;i<=5;i++){                          // RS Letter Pattern for size 5
    for(j=1;j<=5;j++){
        if(i==1 || j==1 || i==5 || j==5)
        cout<<"* ";
        else
        cout<<"  ";
    }
    for(j=7;j<=11;j++){
        if(i==1 || j==7 || i==5)
        cout<<"* ";
        else
        cout<<"  ";
    }
    cout<<endl;
}
for(i=4;i>=1;i--){
    for(j=1;j<=5;j++){
        if(j==1 || i==5 || i+j==6)
        cout<<"* ";
        else
        cout<<"  ";
    }
    for(j=11;j>=7;j--){
        if(i==1 || j==7 || i==5)
        cout<<"* ";
        else
        cout<<"  ";
    }
    cout<<endl;
}
return 0;
}*/

/*#include<iostream>
using namespace std;

int main (){
int i,j,n;
cin>>n;


 
return 0;
}*/

// Programs for Printing Letters of Alphabet
#include<iostream>
using namespace std;

int i,j;

void A(int n){               
    for(i=1;i<=5;i++){
        for(j=1;j<=n;j++){
            if(i+j==n+1 || i==(n+1)/2 && (j>=(n+1)/2 && j<=n)) cout<<"* ";
            else cout<<"  ";
        }
        for(j=4;j>=1;j--){
            if(i+j==n+1 || i==(n+1)/2 && (j>=(n+1)/2 && j<=n)) cout<<"* ";
            else cout<<"  ";
    }
    cout<<endl;
    }
}


void B(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void C(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void D(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void E(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || i==(n+1)/2) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void F(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==(n+1)/2) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void G(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n && (i>=(n+1)/2 && i<n)) cout<<"* ";
            else cout<<"  ";
        }
        for(j=n+1;j<=2*n;j++){
            if(i==(n+1)/2 || j==2*n && (i>=(n+1)/2) && i<=n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void H(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || i==n || j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j==1 || i==n || j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void I(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n || j==(n+1)/2) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void J(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==(n+1)/2 || i==n && (j>=1 && j<=(n+1)/2) || j==1 && (i>=(n+1)/2 && i<=n)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void K(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || i+j==(n+1)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j==1 || i+j==(n+1)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void L(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || i==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void M(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || i==j)
            cout<<"* ";
            else
            cout<<"  ";
        }
        for(j=n-1;j>=1;j--){
            if(j==1 || i==j)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}

void N(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || i==j || j==n)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}

void O(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void P(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void R(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j==1 || i+j==(n+1)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void S(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1 || i==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n;j++){
            if(i==1 || j==n || i==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void T(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==(n+1)/2) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void U(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || j==n || i==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void V(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        for(j=n-1;j>=1;j--){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void W(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        for(j=n-1;j>=1;j--){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        for(j=1;j<=n;j++){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        for(j=n-1;j>=1;j--){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void X(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j || i+j==(n+1)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

void Y(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        for(j=n-1;j>=1;j--){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j==n) cout<<"* ";
        else cout<<"  ";
        }
        cout<<endl;   
    }
}

void Z(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i+j==(n+1) || i==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

int main (){
//A(5);
//B(5);
//C(5);
//D(5);
//E(5);
//F(5);
//G(5);
//H(5);
//I(5);
//J(5);
//K(5);
//L(5);
//M(5);
//N(5);
//O(5);
//P(5);
//R(5);
//S(5);
//T(5);
//U(5);
//V(5);
//W(5);
//X(5);
//Y(5);
Z(5);
return 0;
}