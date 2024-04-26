#include <iostream>
#include <string>
#include <map>

using namespace std;

string compute(string word){

    int len = word.size();
    
    if(word[len-1] == 'y'){
        if(word[len-2] != 'a' && word[len-2] != 'e' && word[len-2] != 'i' && word[len-2] != 'o' && word[len-2] != 'u'){
            word[len-1] = 'i';
            word += "es";
        }
        else{
            word += 's';
        }
    }
    else if(word[len-1] == 'o' || word[len-1] == 's' || word[len-1] == 'x'){
        word += "es";
    }
    else if((word[len-2] == 'c' || word[len-2] == 's') && word[len-1] == 'h'){
        word += "es";
    }
    else{
        word += 's';
    }
    return word;
}

int main(){
    int L,N;
    string worda, wordb, word;
    map <string, string> save;

    cin >> L >> N;
    for(int i = 0; i < L; i++){
        cin >> worda >> wordb;
        save[worda] = wordb;
    }
    for(int i = 0; i < N; i++){
        cin >> word;
        if(save.count(word) == 1){
            cout << save[word] << endl;
        }
        else{
            cout << compute(word) << endl;
        }
    }
}

// implement 實現、使生效