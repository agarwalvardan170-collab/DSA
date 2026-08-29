#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool cmp(pair<char,int> a, pair<char,int> b){
    return a.second > b.second;
}

int main(){
    unordered_map<char,int> mp;

    string nums = "tree";
    for(int i =0;i<nums.size();i++){
        mp[nums[i]]++;
    }
  //pair stl
    vector<pair<char,int>>v;
    for(auto i : mp){
         v.push_back({i.first,i.second});
    }
   

    //sort by second frequency
    sort(v.begin(),v.end() ,cmp);

     //sort string by frequency
     string ans = "";
     for(auto j :v){
        for(int i =0;i<j.second;i++){
            ans += j.first;
        }
     }
     cout<<ans;
}
