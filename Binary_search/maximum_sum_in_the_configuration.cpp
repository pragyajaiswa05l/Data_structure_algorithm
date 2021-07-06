int max_sum(int A[],int N)
{
//Your code here
    int sum = 0;
    int s0 = 0;
    for(int i = 0 ; i < N ; i++){
       s0 +=A[i]*i;
       sum +=A[i];
    }
    int max_sum = s0;
    int si = s0;
    for(int i = 0 ; i < N-1 ; i++){
         int sip1 = si +sum - N*A[N-i-1];
         if(sip1 > max_sum){
             max_sum = sip1;
         }
         si = sip1;
    }
    return max_sum;
}
