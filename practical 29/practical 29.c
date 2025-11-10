#include <stdio.h>
#include <string.h>

struct Coach {
    char name[30];
    int age, exp;
};

struct Team {
    char name[30], sport[30];
    struct Coach coach;
};

int main() {
    struct Team t[50];
    int n = 0, ch, i;
    char s[30];

    while (1) {
        printf("\n1.Add  2.Search : ");
        scanf("%d", &ch); getchar();

        if (ch == 1) {
            printf("Team Name: ");
                gets(t[n].name);
            printf("Sport: ");
                gets(t[n].sport);
            printf("Coach Name: ");
                gets(t[n].coach.name);
            printf("Coach Age: ");
                scanf("%d", &t[n].coach.age);

            n++;
        }
        else if (ch == 2) {
            printf("Search Team Name: "); gets(s);
            for (i = 0; i < n; i++)
                if (!strcmp(t[i].name, s)) {
                    printf("Found: %s (%s) Coach:%s Age:%d \n",
                        t[i].name, t[i].sport, t[i].coach.name,
                        t[i].coach.age );
                    break;
                }
            if (i == n) printf("Not found!\n");
        }


        else
            printf("Invalid choice!\n");
    }
}
