#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    time_t t;
    int N = 4, M = 7;
    char ar[N][M];
    srand((unsigned) time(&t));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int z= rand() % 2;
            if(z==0)
                ar[i][j]='*';
            else ar[i][j]='_';
            cout<<ar[i][j]<<" ";
        }
        cout << endl;
        cout << endl;
    }
    cout << "__________________" << endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            int min=j;
            for(int k=j+1; k<M; k++){
                if(ar[i][k]<ar[i][min])
                    min=k;
            }
            char tmp=ar[i][min];
            ar[i][min]=ar[i][j];
            ar[i][j]=tmp;
            cout<<ar[i][j]<<" ";
        }
        cout << endl;
        cout << endl;
    }
}