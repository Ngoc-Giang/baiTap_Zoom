#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Zoom{
    char id[8];
    char type[15];
    long int price;
    int d_hire;
    int days;
};
void inputZoom(Zoom &a)
{
    printf("ID: "); scanf("%s",a.id); fflush(stdin);
    printf("Type: "); scanf("%s",a.type);
    printf("Price: ");scanf("%ld",& a.price);
    printf("Day hire: "); scanf("%d",&a.d_hire);
    printf("Days: "); scanf("%d", &a.days);
}
void printZoom(Zoom a)
{
    printf("%s\t%s\t%ld\t%d\t%d\t\n",a.id,a.type,a.price,a.d_hire,a.days);
}
int main() {
    struct Zoom a[100];
    int n;
    printf("So luong phong(toi da 100): ");
    scanf("%d",&n);
    printf("Thong tin cua phong: \n");
    for(int i=0;i<n;i++)
    {
        inputZoom(a[i]);

    }
    for(int i=0;i<n;i++)
    {
        printZoom(a[i]);
    }
}





