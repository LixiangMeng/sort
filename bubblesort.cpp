 #include<iostream>
 #include<vector>
 int main()
 {
    std::vector<int> nums={1,5,5,1,9,0,4,6,4,8,0,155,45};    
    printf("bubble sort:");
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]>nums[j])
            {
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }
    for(int i=0;i<nums.size();i++)
        printf("%d ",nums[i]);
    return 0;
 }