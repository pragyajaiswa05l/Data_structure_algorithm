class Solution{
    public:
      int phy;
      int chem ;
      int math;

    //   Solution(int phy,int chem,int math){
    //       this->phy=phy;
    //       this->chem=chem;
    //       this->math=math;
    //   }
    static bool compare(Solution s1,Solution s2){
        if(s1.phy != s2.phy){
            return(s1.phy < s2.phy);
        }
        if(s1.chem != s2.chem){
            return(s1.chem > s2.chem);
        }
        if(s1.math != s2.math){
            return(s1.math < s2.math);
        }
    }
    public:
    void customSort (int phy[], int chem[], int math[], int N)
    {
        // your code here
        Solution *arr = new Solution[N];
        for(int i = 0 ; i < N ; i++){
            arr[i]={phy[i],chem[i],math[i]};
        }
        sort(arr,arr+N,compare);
        for(int i=0;i<N;i++){
            phy[i]=arr[i].phy;
            chem[i]=arr[i].chem;
            math[i]=arr[i].math;
        }
    }
};
