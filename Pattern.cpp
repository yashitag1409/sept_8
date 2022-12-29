#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int i,j,num;

    cout << "Enter number : ";
    cin >> num;
    // pattern 1
    for(i = 0; i < num; i++){
        for(j = 0; j<= i; j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    //Pattern 2

    for(i = 0; i < num; i++){
        for(j = 0; j<= i; j++){
            cout << char(65+j) << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    // pattern 3
    for(i = 0; i < num; i++){
        for(j = 0; j<= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;
    // pattern 4
    for(i = 0; i < num; i++){
        for(j = 0; j<= i; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }

    cout << endl;
    // Pattern 5
    for(i = 0; i < num; i++){
        for(j = 0; j<= i; j++){
            cout << char(65+i) << " ";
        }
        cout << endl;
    }

    
    cout <<endl ;
    // pattern 7
    int sp;
    sp= num * 4;
    for(i=1;i<=num;i++){
        for(j=1;j<=sp;j++)
            cout << " ";
        
        for(j=1;j<=i;j++)
            cout << setw(4) << j;
        
        sp = sp - 2;
        cout << endl;
    }

    cout <<endl ;
    // Pattern 9
    sp= num * 4;

    for(i=1;i<=num;i++){
        for(j=1;j<=sp;j++)
            cout << " ";
        
        for(j=0;j<i;j++)
            cout << setw(4) << char(65+j);
        
        sp = sp - 2;
        cout << endl;
    }

    cout <<endl ;
    // Pattern 11
    sp= num * 4;

    for(i = 1; i <= num ; i++){
        for(j = 1; j<=sp ;j++)
            cout << " ";
        
        for(j = 0; j < i ; j++)
            cout << setw(4) << "*"; 
        
        sp = sp-2;
        cout << endl;
    }

    cout <<endl ;
    // Pattern 12
    sp= num * 4;

    for(i = 1; i <= num ; i++){
        for(j = 1; j<=sp ;j++)
            cout << " ";
        
        for(j = 0; j < i ; j++)
            cout << setw(4) << i; 
        
        sp = sp-2;
        cout << endl;
    }

    cout <<endl ;
    // Pattern 13
    sp= num * 4;

    for(i = 1; i <= num ; i++){
        for(j = 1; j<=sp ;j++)
            cout << " ";
        
        for(j = 0; j < i ; j++)
            cout << setw(4) << char(65+i-1); 
        
        sp = sp-2;
        cout << endl;
    }
    
    cout << endl;
    // Pattern 14
    for(i = num; i >= 1; i--){
        // cout << "hello";
        for(j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;
    // Pattern 15
    for(i = num; i >= 1; i--){
        // cout << "hello";
        for(j = 1; j<= i; j++){
            cout << num-j+1 << " ";
        }
        cout << endl;
    }

    cout << endl;
    // Pattern 16
    for(i = 1; i <= num; i++){
        for(j = 0; j< i; j++){
            cout << num - j << " ";
        }
        cout << endl;
    }
        cout << endl;
    // Pattern 17
    int x= 1;
    for(i = 1; i <= num; i++){
        for(j = 0; j< i; j++){
            cout << x << " ";
            x++;
        }
        cout << endl;
    }

    cout << endl;
    // Pattern 18
    for(i = num; i >= 1; i--){
        // cout << "hello";
        for(j = 0; j<i; j++){
            cout << char(65+j) << " ";
        }
        cout << endl;
    }

    
    
    return 0;
}