#include <iostream>
using namespace std;

void sort(int* first, int* last) {
    for(int* p = first; p < last - 1; p++) {
        for(int* q = p+1; q < last; q++) {
            if(*p > *q) {
                swap(*p, *q);
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    int* ships = new int[N*M];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> ships[i*M + j];
        }
    }

    int K;
    cin >> K;
    int* mesk = new int[K];
    for(int i = 0; i < K; i++) {
        cin >> mesk[i];
    }

    sort(ships, ships + N*M);
    sort(mesk, mesk + K);

    int i = 0, j = 0;
    int res = 0;

    while(i < N*M && j < K) {
        if(ships[i] >= mesk[j]) {
            res++;
            i++;
            j++;
        } else {
            i++;
        }
    }
    cout << res;
    

}