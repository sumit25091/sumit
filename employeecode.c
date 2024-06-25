//23 WAP to input employee code, name and basic salary of an employee and calculate the following values:
//HRA 40 % of basic salary DA 10 % of basic salary//
//CCA 5 % of basic salary GS Basic + HRA + DA + CCA//
//PF 10 % of GS IT 10 % of GS//
//NS GS – (PF + IT)//

#include <stdio.h>

int main()
 {
    int empCode;
    char empName[50];
    float basicSalary, HRA, DA, CCA, GS, PF, IT, NS;
    
    printf("Enter employee code: ");
    scanf("%d", &empCode);
    
    printf("Enter employee name: ");
    scanf(" %[^\n]", empName); 
    
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    
    HRA = 0.4 * basicSalary;
    DA = 0.1 * basicSalary;
    CCA = 0.05 * basicSalary;
    
    GS = basicSalary + HRA + DA + CCA;
    
    PF = 0.1 * GS;
    IT = 0.1 * GS;
    
    NS = GS - (PF + IT);
    
    printf("\nEmployee Details:\n");
    printf("Employee Code: %d\n", empCode);
    printf("Employee Name: %s\n", empName);
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("\nCalculated Values:\n");
    printf("HRA: %.2f\n", HRA);
    printf("DA: %.2f\n", DA);
    printf("CCA: %.2f\n", CCA);
    printf("Gross Salary (GS): %.2f\n", GS);
    printf("PF: %.2f\n", PF);
    printf("IT: %.2f\n", IT);
    printf("Net Salary (NS): %.2f\n", NS);
    
    return 0;
}

