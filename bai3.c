/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include<stdio.h>
#include<stdlib.h>
void hamHoanVi(int *x,int *y){
    int e =*x;
    *x=*y;
    *y=e;

}
int main(){
    // khai nhập biến
    int so1=0, so2=0;
    printf("nhap so 1 :");
    scanf("%d",&so1);
    printf("nhap so 2 :");
    scanf("%d",&so2);
    // hoán vị
    hamHoanVi(&so1,&so2);
    printf ("sau khi hoan vi \nso 1 la :%d\n",so1);
    printf ("so 2 la :%d\n",so2);
    system("pause");
    return 0;
}

