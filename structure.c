#include <stdio.h>

struct Record{
    char name[10];
    char phone[15];
    char email[15];
};

int main()
{
    struct Record a, b;
    printf("Enter name: ");
    scanf("%s", &a.name);
    printf("Enter phone: ");
    scanf("%s", &a.phone);
    printf("Enter email: ");
    scanf("%s", &a.email);

    b=a;

    printf("Name = %s, Phone = %s, E-mail = %s\n", a.name, a.phone, a.email);
    printf("Name = %s, Phone = %s, E-mail = %s\n", b.name, b.phone, b.email);
}
