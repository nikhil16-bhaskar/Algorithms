#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int x1,i,j,count=0,flag=0;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
  /* for(i=x1;i<100;i+v1)
       {
       count=i;
       flag=x2+v1;
       if(count==flag)
           cout<<"YES";
       else
           cout<<"NO";




   }*/

 while(x1>=0)
        {
        x1=x1+v1;
        x2=x2+v2;
        if(x1==x2)
            {
            count++;
        }
    }
    if(count>=1)
        {
         cout<<"YES";
        
    }
    else
        cout<<"NO";
  
    
  
    return 0;
}
