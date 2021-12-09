// Write the removeOdd() function as specified above
 void removeOdd(vector<string> &v){
   vector<string> a;
   string temp; int flag=1, i=0, j=0;
   for(auto x: v){
     temp = x;
     flag = 1; j=0;
     	while(temp[j]!='\0'){
          flag++; j++;
        }
     
     	if(flag%2 != 0){
          a.push_back(x);
        }
     
   }
   v = a;
 }
