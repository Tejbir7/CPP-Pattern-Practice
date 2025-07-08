#include<iostream>
#include <algorithm>
using namespace std;
void SquareStar(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << "* ";
        }
        cout<< endl;
    }
}
void RhtStar(int n){
   for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << "* ";
        }
        cout<< endl;
    }
}
void RhtIncNum(int n){
    for(int i = 0; i<n; i++){
        for(int j = 1; j<i+2 ; j++){
            cout << j << " ";
        }
        cout<< endl;
    }
}
void RhtSameNum(int n){
    for(int i = 1; i<=n; i++){
        for(int j =0; j< i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void RhtInvertedStar(int n){
    for(int i = 0; i<n; i++){
        for(int j=n; j>i; j--){
            cout << "* ";
        }
        cout << endl;
    }
}
void RhtInvertedInclastNumDelete(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i+1 ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void Triangle(int n){
    for(int i=0; i<n;i++){
        for(int space=0; space<n-i-1;space++){
            cout << " ";
        }
        for(int j=0; j< 2*i+1;j++){
            cout<< "*";
        }
        cout << endl;
    }
}
void InvertedTriangle(int n){
    for(int i=0; i<n; i++){
        for(int space =0;space<i;space++){
            cout << " ";
        }
        for(int j=0;j<(2*n)-(2*i)-1;j++){
            cout << "*";
        }
    cout << endl;
    }
}
void MirrorTriangleDiamond(int n){
    Triangle(n);
    InvertedTriangle(n);
}
void pattern10(int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<=i;j++){
            cout<< "*";
        }
        cout << endl;
    }
    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
} 
void pattern11(int n){
    int start =1;
    for(int i=0; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout << start<< " ";
            start = 1-start;
        }
        cout << endl;
    }
}
void numbercrown(int n){
    for(int i=0; i<n; i++){
        for(int j=1;j<=i+1;j++){
            cout << j << " ";
        }
         for(int space=0; space<2*n-2*i-2;space++){
            cout << "  ";
         }
         for(int j=i+1;j>=1;j--){
            cout << j << " ";
         }
        cout << endl;
    }   
}
void pattern12(int n){
    int count =1;
    for(int i=0; i<n; i++){
            for(int j=0 ;j<=i;j++){
                cout << count << " ";
                count++;
            }
            cout << endl;
        }
 }
void pattern12withalphabets13(int n){
    for(int i =0; i<n;i++){
        char count = 'A';
        for (int j=0;j<=i;j++){
            cout << count << " ";
            count++;
        }
        cout<< endl;
    }
}
void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<'A'+n-i; j++){
            cout << j<< " ";
    }
    cout << endl;
}
}
void alpharamp(int n){
    for(int i=0; i<n; i++){
        char g ='A' +i;
        for(int j=0;j<=i;j++){
            cout << g << " ";
        }
        cout << endl;
    }
}
void alphaHills(int n){
    for(int i=0;i<n-1;i++){
        cout << "  ";
    }
    cout << 'A' << endl;
    //for rest part
    char middleline = 'B';
    for(int i=0; i<n-1;i++){
        for(int space=0;space<n-i-2;space++){
            cout <<"  ";
        }
        for(char j='A';j<='A'+i; j++){
            cout << j <<" ";
        }
         cout << middleline<< " ";
         middleline++;

        for(char l ='A'+i; l>='A'; l--){
            cout << l << " ";
        }
        cout << endl;
    }
}
void alphaTriangle(int n){
    for(int i=n-1;i>=0;i--){
        for(char g='A'+i;g<'A'+n;g++){
            cout << g << " ";
        }
        cout << endl;
   }
}
void symmetry(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i;j++){
            cout << "* ";
        }
        for(int space=0; space< 2*i; space++){
            cout << "  ";
        }
        for(int j=0; j<n-i;j++){
            cout << "* ";
        }
      cout << endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i;j++){
            cout <<"* ";
        }
        for(int space=0; space<2*(n-i-1);space++){
            cout <<"  ";
        }
         for(int j=0; j<=i;j++){
            cout <<"* ";
        }
        cout << endl;
    }
}
void getStarPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout << "*";
            }else{
                cout <<" ";
            }
        }
        cout << endl;
    }   
}
void getNumberPattern(int n){   for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i,left=j,right,bottom;
            right=2*n-2-j;
            bottom=2*n-2-i;
            int realvalue=n-min(min(top,bottom),min(left,right));
            cout << realvalue;
        }
        cout << endl;
    }
}
int main(){
    int t;
    cout << "Enter test cases: ";
    cin >> t;
    for(int i =0; i<t; i++){
       int n;
       cin >> n;
      SquareStar(n);
      cout << endl;
      RhtStar(n);
      cout << endl;
      RhtIncNum(n);
      cout << endl;
      RhtSameNum(n);
      cout << endl;
      RhtInvertedStar(n);
      cout << endl;
      RhtInvertedInclastNumDelete(n);
      cout << endl;
      Triangle(n);
      cout << endl;
      InvertedTriangle(n);
      cout << endl;
      MirrorTriangleDiamond(n);
      cout << endl;
      pattern10(n);
      cout << endl;
      pattern11(n);
      cout << endl;
      numbercrown(n);
      cout << endl;
     pattern12(n);
     cout << endl;
     pattern12withalphabets13(n);
     pattern14(n);
     cout << endl;
     alpharamp(n);
     cout<< endl;
     alphaHills(n);
     cout<< endl;
     alphaTriangle(n);
     cout<< endl;
     symmetry(n);
     cout<< endl;
     getStarPattern(n);
     cout<< endl;
      getNumberPattern(n);
     cout<< endl;
    }  
return 0;
}