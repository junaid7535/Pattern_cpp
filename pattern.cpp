#include<iostream>
using namespace std;

/* void solve(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << '*' << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int n;
        cin>>n;
        solve(n);
    }
}
*/

void solve(){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<i+1; j++){
            cout << '*' << " ";
        }
        cout << endl;
    }
}

void solve1(){
    for(int i = 1; i<6; i++){
        for(int j = 1; j<i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void solve2(){
    for(int i = 1; i<6; i++){
        for(int j = 1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void solve3(){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5-i; j++){
            cout << '*' << " ";
        }
        cout << endl;
    }
}
void solve4(){
    for(int i = 1; i<6; i++){
        for(int j = 1; j<6-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void solve5(){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5-i; j++){
            cout << ' ';
        }
        for(int j = 0; j<2*i+1; j++){
            cout << '*';
        }
        for(int j = 0; j<5-i; j++){
            cout << ' ';
        }
        cout << endl;
    }
}
void solve6(){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<i; j++){
            cout << ' ';
        }
        for(int j = 0; j<2*5 - (2*i +1); j++){
            cout << '*';
        }
        for(int j = 0; j<i; j++){
            cout << ' ';
        }
        cout << endl;
    }
}
void solve7(){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5-i; j++){
            cout << ' ';
        }
        for(int j = 0; j<2*i+1; j++){
            cout << '*';
        }
        for(int j = 0; j<5-i; j++){
            cout << ' ';
        }
        cout << endl;
    }

    for(int i = 0; i<5; i++){
        for(int j = 0; j<=i; j++){
            cout << ' ';
        }
        for(int j = 0; j<2*5 - (2*i +1); j++){
            cout << '*';
        }
        for(int j = 0; j<=i; j++){
            cout << ' ';
        }
        cout << endl;
    }
}

void solve8(){
    for(int i = 0; i<=2*5-1; i++){
        int stars = i;
        if(i > 5){
            stars = 2 * 5 - i;
        }
        for(int j = 1; j<=stars; j++){
            cout << '*';
        }
        cout << endl;
    }
}
void solve9(){
    int start = 1;
    for(int i = 0; i<5; i++){
        if(i % 2 == 0){
            start = 1;
        }
        else{
            start = 0;
        }
        for(int j = 0; j<=i; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void solve10(){
    int space = 2*3;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<=i; j++){
            cout << j;
        }
        for(int j = 0; j<=space; j++){
            cout << ' ';
        }
        for(int j = i; j>=0; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void solve11(){
    int num = 1;
    for(int i = 0; i<5; i++){
        for(int j = 1; j<=i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

void solve12(){
    for(int i = 0; i<5; i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void solve13(){
    for(int i = 0; i<5; i++){
        char ch = 'A' + i;
        for(int j = 0; j<=i; j++){
            cout << ch << "";
        }
        cout << endl; 
    }
}
void solve14(){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5-i-1; j++){
            cout << ' ';
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1; j<=2*i+1; j++){
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        for(int j = 0; j<=5-i-1; j++){
            cout << ' ';
        }
        cout << endl;
    }
}

void solve15(){
    for(int i = 0; i<5; i++){
        for(char ch = 'E'-i; ch<='E'; ch++){
            cout << ch;
        }
        cout << endl;
    }
}
void solve16(){
    int space = 0;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5-i; j++){
            cout << '*';
        }
        for(int j = 0; j<space; j++){
            cout << " ";
        }
        for(int j = 0; j<5-i; j++){
            cout << '*';
        }
        space += 2;
        cout << endl;
    }
     int space1 = 8;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<=i; j++){
            cout << '*';
        }
        for(int j = 0; j<space1; j++){
            cout << " ";
        }
        for(int j = 0; j<=i; j++){
            cout << '*';
        }
        space1 = space1 - 2;
        cout << endl;
    }
}
int main(){ 
    //solve();
    //solve1();
    //solve2();
    //solve3();
    //solve4();
    //solve5();
    //solve6();
    //solve7();
    //solve8();
    //solve9();
    //solve10();
    //solve11();
    //solve12();
    //solve13();
    //solve14();
    //solve15();
    solve16();
}
