#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void grade(){
    srand(time(0));
    string g[] = {"A","B+","B","C+","C","D+","D","F","W"};
    int x = rand()%9;
    if (x == 0) cout << "You will get " << g[0] << " in this 261102.";
    else if (x==1) cout << "You will get " << g[1] << " in this 261102.";
    else if (x==2) cout << "You will get " << g[2] << " in this 261102.";
    else if (x==3) cout << "You will get " << g[3] << " in this 261102.";
    else if (x==4) cout << "You will get " << g[4] << " in this 261102.";
    else if (x==5) cout << "You will get " << g[5] << " in this 261102.";
    else if (x==6) cout << "You will get " << g[6] << " in this 261102.";
    else if (x==7) cout << "You will get " << g[7] << " in this 261102.";
    else cout << "You will get " << g[8] << " in this 261102.";
}


int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    grade();
    return 0;
}

