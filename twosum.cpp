#include <bits/stdc++.h> 
using namespace std;
vector<int> fun(vector<int> &num, int apa)
   {
    vector<int> res;
   unordered_map<int,int> mapku;
    int n,other;
    n= num.size();
    for(int i=0;i<n;i++){
        other = apa - num[i];
        if(mapku.find(other) != mapku.end()){
            res.push_back(i);
            res.push_back(mapku[other]);
            break;  
        }
       mapku[num[i]] = i;
    }
       return res;
   }

   int main(){
       vector<int> vv,bb;
       vv = {1,2,3,4,5};
       bb= fun(vv,5);
       cout << bb[0] << " " << bb[1];
   }
