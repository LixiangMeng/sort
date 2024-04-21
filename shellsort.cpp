 #include<iostream>
 #include<vector>
 int main()
 {
    std::vector<int> nums={1,5,3,1,5,3,4,5,66,4};
    int n = nums.size();
    int gap = n;
    printf("shell sort:");
    while(gap>1)
    {
        gap = gap/3+1;
        for(int i=gap;i<n;i++)
        {
            for(int j=i;j>=gap&&nums[j]<nums[j-gap];j-=gap)
            {
                std::swap(nums[j],nums[j-gap]);
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",nums[i]);
    return 0;
 }