//
// Created by lzy on 2022/10/2.
//

#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;


int main(){
    vector<vector<int>> array;
    vector<int> d;

    int i, j, k, n;
    int number;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for(j = 0;j<n;j++){
            scanf("%d",&number);
            sort(d.begin(),d.end());
            d.push_back(number);
        }
        array.push_back(d);
        d.resize(0);
    }
    if (array.empty()){
        printf("0\n");
    }else{
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                printf("%d\n",array[i][j]);
            }
            printf("\n");
        }
    }
    cout<<"len is "<<array.size()<<endl;
    return 0;
}
