//Write a program to Develop complete mini project using arrays, strings and functions. 
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Patient
{
    int id;
    char name[50];
    int age;
    char disease[50];
};

struct Patient p[MAX];
int count = 0;

void addPatient()
{
    if(count == MAX)
    {
        printf("\nHospital Record Full!\n");
        return;
    }

    printf("\nEnter Patient ID: ");
    scanf("%d", &p[count].id);

    printf("Enter Patient Name: ");
    scanf(" %[^\n]", p[count].name);

    printf("Enter Age: ");
    scanf("%d", &p[count].age);

    printf("Enter Disease: ");
    scanf(" %[^\n]", p[count].disease);

    count++;
    printf("\nPatient Added Successfully!\n");
}

void displayPatients()
{
    if(count == 0)
    {
        printf("\nNo Patient Records Found!\n");
        return;
    }

    printf("\n----------- Patient Records -----------\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nPatient %d\n", i + 1);
        printf("ID      : %d\n", p[i].id);
        printf("Name    : %s\n", p[i].name);
        printf("Age     : %d\n", p[i].age);
        printf("Disease : %s\n", p[i].disease);
    }
}

void searchPatient()
{
    int id, found = 0;

    printf("\nEnter Patient ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(p[i].id == id)
        {
            printf("\nPatient Found\n");
            printf("ID      : %d\n", p[i].id);
            printf("Name    : %s\n", p[i].name);
            printf("Age     : %d\n", p[i].age);
            printf("Disease : %s\n", p[i].disease);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nPatient Not Found!\n");
}

void updatePatient()
{
    int id, found = 0;

    printf("\nEnter Patient ID to Update: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(p[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", p[i].name);

            printf("Enter New Age: ");
            scanf("%d", &p[i].age);

            printf("Enter New Disease: ");
            scanf(" %[^\n]", p[i].disease);

            printf("\nRecord Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nPatient Not Found!\n");
}

void deletePatient()
{
    int id, found = 0;

    printf("\nEnter Patient ID to Delete: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(p[i].id == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                p[j] = p[j + 1];
            }

            count--;
            found = 1;
            printf("\nRecord Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("\nPatient Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== HOSPITAL MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Patient\n");
        printf("5. Delete Patient\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addPatient();
                break;

            case 2:
                displayPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                updatePatient();
                break;

            case 5:
                deletePatient();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}