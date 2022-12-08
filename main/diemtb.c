#include <stdio.h>
//khai báo bien htm, pc, pts là diem html, pc, và pts
//bien diemTB là diem trung bình cua html, pc, và pts
float html, pc, pts, diemTB;
/* hàm nhap */
void nhap() {
  //su dung do..while do yêu cau nguoi dùng nhap vào diem html, pc, và diem pts trong khoang 1 -> 10
  do{
    printf("\nNhap vào diem html: ");
    scanf("%f", &html);
    printf("\nNhap vào diem pc: ");
    scanf("%f", &pc);
	printf("\nNhap vào diem pts: ");
    scanf("%f", &pts); 
  }while(html < 0 || pc < 0 || pts < 0 || html> 10 || pc> 10 || pts > 10);
}
/* hàm tính trung bình cong */
void tinhTB(){
  diemTB = (html + pc + pts) / 3;
}
/* hàm xuat */
void xuat(){
  printf("\nÐiem trung bình là: %.1f", diemTB);
  printf("\n--------------------------------------\n");
}
int main() {
  nhap();
  tinhTB();
  xuat();
}

