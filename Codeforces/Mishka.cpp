#include <iostream>
#include <queue>

using namespace std;

int main(){
    int num, k;
    cin >> num >> k;
    deque<int> list;
    for(int i = 0; i < num; i++){
        int temp;
        cin >> temp;
        list.push_back(temp);
    }
    int count = 0;

    while(!list.empty() && list.front() <= k){
        count++;
        list.pop_front();
    }
    
    while(!list.empty() && list.back() <= k){
        count++;
        list.pop_back();
    }

    cout << count;
    return 0;
}