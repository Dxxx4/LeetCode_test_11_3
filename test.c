#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>

//�����滻
int integerReplacement(int n) {
    int num = 0;
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
       else{
           int flag = n % 10;
		   if(n == flag){
			   n--;
		   }
           else if(flag == 3 || flag == 7){
               n--;
           }
           else{
               n++;
           }
       }
        num++;
    }
    return num;
}

//λ1�ĸ���
int hammingWeight(size_t n) {
    int num = 0;
    while(n != 0){
        if((n & 1) != 0){
            num++;
        }
        n = n >> 1;
    }
    return num;
}

//��ת����
void rotate(int* nums, int numsSize, int k) {
    int sz = numsSize;
    int key;
    int i = 0;
    while(k){
        key = nums[sz-1];
        for(i = sz - 1; i > 0; i--){
            nums[i] = nums[i-1];
        }
        nums[i] = key; 
        k--;
    }
    
}

int main()
{
	/*int n = 100;
	integerReplacement(n);*/
	size_t n = 1;
	hammingWeight(n);

	system("pause");
	return 0;
}
