/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Quang]
 * MSSV:      [PS47259]
 * Lớp:       [COM108 - CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include<stdio.h>
#include<stdlib.h>
int hamTestNhuan (int nam){
    int ketQua=0;
    if (nam%400==0)
    {
        ketQua=1;
    }else if (nam%4==0 && nam%100!=0)
    {
       ketQua=1;
    }else
    {
        ketQua=0;
    }
return ketQua;       
}
int main(){
    int x=0,y=0;
    printf("xin nhập năm cần kiểm tra :");
    scanf("%d",&x);
    y = hamTestNhuan(x);
    if (y==1)
    {
       printf("năm %d là năm nhuận",x);
    }else
    {
        printf("năm %d là năm không nhuận",x);
    }
    system("pause");
return 0;
    
}

