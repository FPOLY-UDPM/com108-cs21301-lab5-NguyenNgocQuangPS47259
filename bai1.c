/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include<stdio.h>
#include<stdlib.h>
//hàm tìm số lớn nhất 
int timSoMax (int so1,int so2, int so3){
    int soMax =so1;
    if (so2>soMax)
    {
        soMax=so2;
    }if (so3>soMax)
    {
        soMax=so3;
    }
return soMax;   
}

int main (){
    //khai và nhập biến
    int max=0;
    int bien[3];
    printf("nhập biến cần so sánh\n");
    for (int i = 0; i < 3; i++)
    {
       printf("nhap bien se %d :",i+1);
       scanf("%d",&bien[i]);
    }
    //gọi hàm so sánh
    max =timSoMax(bien[0],bien[1],bien[2]);
    printf("vay so lon nhat la %d\n",max);
    system("pause");
    return 0;
}