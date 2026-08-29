for(int i = 0 ; i<s.size();i++){
         char c1 =  s[i];
         char c2 = t[i];
        if(p.count(c1)==1){
          if(p[c1]!=c2){
            return false;
          }          
        }
        else{
           p[c1] = c2;
        }
        if(k.count(c2)==1){
          if(k[c2]!=c1){
            return false;
          }
        }
        else{
           k[c2]= c1;
        }
    }
   
   for(auto i : p){
    cout<<i.first<<" "<<i.second;
   }