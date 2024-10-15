package DSA.Java.ARRAY;

class Dublicate {
    public static boolean hasDuplicate(int[] nums) {
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]==nums[j])
                    return true;
            }
        }
        return false;
 
    }

    public static void main(String[] args) {
        int arr[] = {1,5,8,5,2};
        System.out.println(hasDuplicate(arr));
    }
}
