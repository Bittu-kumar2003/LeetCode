class Solution {
public:
    // int fib(int n) {
    //     // base case
    //     if(n==0){
    //         return 0;
    //     }
    //     if(n==1){
    //         return 1;
    //     }
    //     // recurssive realation 
    //     int ans=fib(n-1)+fib(n-2);
    //     return ans;

        
    // }
                                 // using the loop tehn  solve the probleam
   int fib(int n) {
   int zero = 0;
   int first = 1;
  
  
   if( n == 0){
       return 0;
   }
   if(n == 1){
       return 1;
   }
  
   int num;
   int count = 2;
   for(count ; count <= n ; count++){
       
       num = zero + first ;
       zero = first;
       first = num;
       
   }
    return num;
    }
};
