//The 3n + 1 problem
//Time limit: 3.000 seconds
#include <iostream>

using namespace std;

int compute(int n){
    int sum = 1;

    while (n != 1){
        if(n % 2 != 0){
            n = (3 * n) + 1;
        }
        else{
            n /= 2;
        }
        sum ++;
    } 
    return sum;
}
    
int main(){
    int i, j;

    while(cin >> i >> j){
        int max_num = 0;
        for(int m = min(i, j); m <= max(i, j); m++){
            if(max_num < compute(m)){
                max_num = compute(m);
            }
        }
        cout << i << " " << j << " " << max_num << endl;
    }
    return 0;
}
    
//determine 決定
//cycle-length 完成一個週期的長度