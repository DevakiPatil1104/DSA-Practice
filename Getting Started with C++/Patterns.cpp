#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n) {
    for(int i=0; i<n ; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n) {
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n) {
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n) {
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n) {
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n) {
    for(int i=0; i<n ; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //star
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n) {
    for(int i=0; i<n ; i++){
        //space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        //star
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*";
        }
        //space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}

void pattern10(int n) {
    for(int i=0; i<=2*n-1; i++){
        int stars = i>n ? 2*n-i : i;  //ternary operator
        // if(i > n) stars = 2*n-i;
        for(int j=0; j<stars; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        if(i%2==0) start=1; //allot start as 1 for even i's
        else start=0; //rest start 0
        for(int j=0; j<=i; j++){
            cout << start << " ";
            start = 1 - start; //flips btn 0 and 1
        } 
        cout << endl;
    }
}

void hollowRect(int n) {
    // for(int i=1; i<=n; i++){
    //         cout << "*"; //first star in each row
    //         //logic for stars/spaces between first and last star
    //         for(int j=1; j<=n-1; j++){
    //             if(i == 1 || i == n){
    //                 cout << "*";
    //             } else {
    //                 cout << " ";
    //             }
    //         }
    //         cout << "*" << endl; //last star in each row
    //     }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1; j++){
            if(i == 1 || i == n || j == 1 || j == n+1){  // 1st row or last row or 1st column or last col
                cout << "*";
            } else 
            cout << " ";
        }
        cout << endl;
    }

    }

    void invertedHollowPyramid(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                cout << " ";
            }
            for(int j=1; j<=i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }

    void floydTriangle(int n){
        int num = 1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << num++ << " ";
            }
            cout << endl;
        }
    }

    void diamond(int n){
        // upper pyramid
        for(int i=1; i<=n; i++){
            // spaces
            for(int j=1; j<=n-i; j++){
                cout << " ";
            }
            // stars
            for(int j=1; j<=(2*i-1); j++){
                cout << "*";
            }
            cout << endl;
        }
        // lower pyramid
        for(int i=n; i>=1; i--){
            // spaces
            for(int j=1; j<=n-i; j++){
                cout << " ";
            }
            // stars
            for(int j=1; j<=(2*i-1); j++){
                cout << "*";
            }
            cout << endl;
        }
            
    }

    void butterfly(int n){
        // upper half
        for(int i=1; i<=n; i++){
            // stars
            for(int j=1; j<=i; j++){
                cout << "*";
            }
            // spaces
            for(int j=1; j<=2*(n-i); j++){
                cout << " ";
            }
            // stars
            for(int j=1; j<=i; j++){
                cout << "*";
            }
            cout << endl;
        }
        // lower half
        for(int i=n; i>=1; i--){
            // stars
            for(int j=1; j<=i; j++){
                cout << "*";
            }
            // spaces
            for(int j=1; j<=2*(n-i); j++){
                cout << " ";
            }
            // stars
            for(int j=1; j<=i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }

    void triangleof0and1(int n){
        bool val = true;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << val << " ";
                val = !val;
            }
            cout << endl;
        }
    }
    /*
    1 
    0 1 
    0 1 0 
    1 0 1 0 
    1 0 1 0 1 
    */

    void rhombus(int n){
        for(int i=1; i<=n; i++){
            // spaces
            for(int j=1; j<=n-i; j++){
                cout << " ";
            }
            // stars
            for(int j=1; j<=n; j++){
                cout << "* ";
            }
            cout << "\n";
        }
    }

    // Palindromic pattern with numbers
    void palindrome(int n){
        for(int i=1; i<=n; i++){
            // spaces
            for(int j=1; j<=n-i; j++){
                cout << " ";
            }
            // backward nums
            for(int j=i; j>=1; j--){
                cout << j;
            }
            // forward nums
            for(int j=2; j<=i; j++){
                cout << j;
            }
            cout << endl;
        }
    }

int main() {
    int t;
    cout << "enter the no. of test cases: " << endl;
    cin >> t;
    cout << "enter values of n for each test case: " << endl;
    for(int i=0; i<t; i++){
    int n;
    cin >> n;
    rhombus(n);
    cout << endl;
    }
    return 0;
}