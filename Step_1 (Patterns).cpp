
// Online IDE - Code Editor, Compiler, Interpreter

#include <bits/stdc++.h>
using namespace std;

void pattern_1(int n) {
   for(int i=1; i<=n; i++) {
       for(int j=1; j<=n; j++) {
           cout << "* ";
       }
       cout << endl;
   }    
}

void pattern_2(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_3(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern_4(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern_5(int n) {
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_6(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern_7(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << "  ";
        }
        for(int j=1; j<=2*i-1;j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_8(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i-1; j++) {
            cout << "  ";
        }
        for(int j=1; j<=2*(n-i) + 1; j++) {
            cout << "* ";
        }
        
        cout << endl;
    }
}

void pattern_9(int n) {
    for(int i=1; i<=2*n; i++) {
        if(i<=n) {
            for(int j=1; j<=n-i; j++) {
                cout << "  ";
            }
            for(int j=1; j<= 2*i - 1; j++){
                cout << "* ";
            }
        } else {
            for(int j=1; j<=i-n-1; j++) {
                cout << "  ";
            }
            for(int j=1; j<=2*n - 2*(i-n) + 1; j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void pattern_10(int n) {
    for(int i=1; i<= 2*n-1; i++) {
        if(i<=n) {
            for(int j=1; j<=i; j++) {
                cout << "* ";
            }
        } else {
            for(int j=1; j<= n - (i-n); j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void pattern_11(int n) {
    for(int i=1; i<=n; i++){
        int start = i % 2;
        for(int j=1; j<=i; j++){
            cout << start << " ";
            if(start == 0){
                start = 1;
            } else {
                start = 0;
            }
        }
        cout << endl;
    }
}

void pattern_12(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j << " ";
        }
        for(int j=1; j<=2*(n-i); j++) {
            cout << "  ";
        }
        for(int j=i; j>=1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

void pattern_14(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=0; j<=i-1; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

void pattern_15(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=0; j< n - i + 1; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

void pattern_17(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << "  ";
        }
        char ch = 'A';
        for(; ch < 'A' + i; ch++) {
            cout << ch << " ";
        }
        ch = ch - 2;
        for(;ch>='A';ch--) {
            cout << ch << " "; 
        }
        cout << endl;
    }
}

void pattern_18(int n) {
    for(int i=0; i<n; i++) {
        char ch = 'E' - i;
        for(int j=0; j<=i; j++) {
            cout << char(ch + j) << " ";
        }
        cout << endl;
    }
}

void pattern_19(int n) {
    for(int i=1; i<= 2*n; i++) {
        if(i<=n) {
            // stars
            for(int j=1; j<=n-i+1; j++) {
                cout << "* ";
            }
            
            // space
            for(int j=1; j<=2*(i-1); j++) {
                cout << "  ";
            }
            
            // stars
            for(int j=1; j<=n-i+1; j++) {
                cout << "* ";
            }
        } else {
            // stars
            for(int j=1; j<=i-n; j++) {
                cout << "* ";
            }
            
            // space
            for(int j=1; j<=2*(2*n-i); j++) {
                cout << "  ";
            }
            
            // stars
            for(int j=1; j<=i - n; j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void pattern_20(int n) {
    for(int i=1; i<= 2*n-1; i++){
        int stars = i;
        int spaces = 2*(n-i);
        if(i>n) {
            stars = 2*n - i;
            spaces = 2*(i-n);
        }
        for(int j=1; j<= stars; j++) {
            cout << "* ";
        }
        for(int j=1; j<=spaces; j++) {
            cout << "  ";
        }
        
        for(int j=1; j<= stars; j++){
            cout << "* ";
        }
        
        cout << endl;
    }
}

void pattern_21(int n) {
    for(int i=1; i<=n; i++){
        if(i==1 || i==n) {
            for(int j=1; j<=n; j++) {
                cout <<"* ";
            }
        } else {
            cout << "* ";
            for(int j=1; j<= n-2; j++) {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_22(int n) {
    for(int i=1; i<=2*n-1; i++) {
        for(int j=1; i<= 2*n-1; j++) {
            
        }
    }
}

int main() {
    // int (-10^9 to 10^9), long (-10^12 to 10^12), long long (-10^18 to 10^18)
    // float, double, long double
    // string, getline
    // char 
    
    // string storing chars 
    // string.size()
    
    // arrays are passed by reference
    // primitive types are passed by value
    // int &x 
    
    // patterns 4 steps
    // 1. for outer loop, count the number of lines
    // 2. for inner loop, count number of columns and connect with rows
    // 3. print inside the inner loop
    // 4. Observe symmetry
    pattern_21(4);
    
    return 0;
}