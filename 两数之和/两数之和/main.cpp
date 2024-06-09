//
//  main.cpp
//  两数之和:leetcode-1
//
//  Created by Oxygen on 2024/6/9.
//

#include <iostream>
using namespace std;

const int N = 100010;
int num[N], s[N];
//
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i<n; i++) cin >> num[i];
    int tar;
    cin >> tar;
    
//    int res = 0;
    for(int i=0; i<n; i++){
        int j = 0;
        while(j<n-1 && i<n-1){
            j++;
//            cout<<"this is:"<< j << endl;
            if(num[i]+num[j]==tar && i!=j)
                cout<<i<<" "<<j<<endl;
//                break;
        }
    }
    return 0;
}
