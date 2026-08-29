#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nrows;
    cin>>nrows;
    vector<vector<int>> ans;
    for(int i = 0; i<nrows;i++){
         vector<int> output(i+1,1);
        for(int j = 1; j<i;j++){
         output[j] =ans[i-1][j-1]+ans[i-1][j];
        }
        ans.push_back(output);
    }
   
      for(int i = 0; i<ans.size();i++){
        for(int j = 1; j<ans[i].size();j++){
          cout<<ans[i][j];
        }
  
    }
   
}