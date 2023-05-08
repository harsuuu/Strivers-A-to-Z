class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
    }
     
    void selectionSort(int arr[], int n)
    {
        int j,k,i;
       //code here
       for(int i=0;i<n-1;i++)    //for passes
       {
           for(int j=k=i;j<n;j++)   //j pure array m jayega
           {
               if(arr[j]<arr[k])
               k=j;
           }
           swap(arr[k],arr[i]);
       }
       
    }
};