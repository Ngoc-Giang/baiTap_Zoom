#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# define MAX 100
struct Ngay{
    int ngay;
    int thang;
    int nam;
};
struct Room{
    char id[8];
    char type[15];
    long  price;
    struct Ngay D_Hire;
    int days;
};
void input_1_Room(struct Room *t)
{
    printf("Nhap ID: "); scanf("%s",t->id); fflush(stdin);
    printf("Nhap Type: "); scanf("%s",t->type);
    printf("Nhap Price: ");scanf("%ld",& t->price);
    printf("Nhap Day hire: "); scanf("%d %d %d",&t->D_Hire.ngay,&t->D_Hire.thang,&t->D_Hire.nam);
    printf("Nhap Days: "); scanf("%d", &t->days);
}
void input_n_Room(struct Room a[],int *n)
{
    printf("Nhap so luong phong:");
    scanf("%d", n);
    for(int i=0;i<*n;i++)
    {
        printf("Nhap phong thu %d: \n",i+1);
        input_1_Room(&a[i]);
    }
}
void print_1_Room(struct Room t)
{
    printf("ID: %s\n",t.id);
    printf("Type: %s\n",t.type);
    printf("Price: %ld\n",t.price);
    printf("Day Hire: %d/%d/%d\n",t.D_Hire.ngay,t.D_Hire.thang,t.D_Hire.nam);
    printf("Days: %d\n",t.days);
}
void print_n_Room(struct Room a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Thong tin phong thu %d:\n",i+1);
        print_1_Room(a[i]);
        printf("\n");
    }

}
int main() {
    struct Room danhSach[MAX];
    int soLuong;
    input_n_Room(danhSach,&soLuong);
    printf("\nDanh sach phong:\n");
    print_n_Room(danhSach,soLuong);

}





