#include <stdio.h>
//khai b�o bien htm, pc, pts l� diem html, pc, v� pts
//bien diemTB l� diem trung b�nh cua html, pc, v� pts
float html, pc, pts, diemTB;
/* h�m nhap */
void nhap() {
  //su dung do..while do y�u cau nguoi d�ng nhap v�o diem html, pc, v� diem pts trong khoang 1 -> 10
  do{
    printf("\nNhap v�o diem html: ");
    scanf("%f", &html);
    printf("\nNhap v�o diem pc: ");
    scanf("%f", &pc);
	printf("\nNhap v�o diem pts: ");
    scanf("%f", &pts); 
  }while(html < 0 || pc < 0 || pts < 0 || html> 10 || pc> 10 || pts > 10);
}
/* h�m t�nh trung b�nh cong */
void tinhTB(){
  diemTB = (html + pc + pts) / 3;
}
/* h�m xuat */
void xuat(){
  printf("\n�iem trung b�nh l�: %.1f", diemTB);
  printf("\n--------------------------------------\n");
}
int main() {
  nhap();
  tinhTB();
  xuat();
}

