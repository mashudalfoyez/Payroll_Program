#include<stdio.h>
#include<stdlib.h>
int main(void){


    printf("[=============================PAYROLL CALCULATION==================================]\n\n");

    /*Declare variables
    Read employee's name */

    char employee_first_name[50], employee_last_name[50];
        printf("Enter Employee's Full Name: ");
            scanf("%s%s", employee_first_name, employee_last_name);

    float hours_worked;
        printf("Enter Number of Hours Worked In a Week: ");
            scanf("%f", &hours_worked);

    float hourly_pay_rate;
        printf("Enter Hourly Pay Rate: ");
            scanf("%f", &hourly_pay_rate);

    float federal_tax_withholding_rate;
        printf("Enter Federal Tax Withholding Rate (e.x. 0.04): ");
            scanf("%f", &federal_tax_withholding_rate);

    float social_security_withholding_rate;
        printf("Enter Social Security Withholding Rate (e.x. 0.08): ");
            scanf("%f", &social_security_withholding_rate);

    float state_tax_withholding_rate;
        printf("Enter State Tax Withholding Rate (e.x. 0.09): ");
            scanf("%f", &state_tax_withholding_rate);

    float medicare_tax_withholding_rate;
        printf("Enter Medicare Tax withholding Rate (e.x. 0.05): ");
            scanf("%f", &medicare_tax_withholding_rate);

    float city_tax_withhodling_rate;
        printf("Enter City Tax Withholding Rate (e.x. 0.012): ");
            scanf("%f", &city_tax_withhodling_rate);



    //Deduction Calculation
    float gross_pay = hours_worked * hourly_pay_rate;

        float federal_withholding = gross_pay * federal_tax_withholding_rate;

            float state_withholding = gross_pay * state_tax_withholding_rate;

                float social_security_withholding = gross_pay * social_security_withholding_rate;

                    float medicare_withholding = gross_pay * medicare_tax_withholding_rate;

                        float city_withhodling = gross_pay * city_tax_withhodling_rate;

                            float total_deduction = federal_withholding + state_withholding + social_security_withholding + medicare_withholding + city_withhodling;

    float net_pay = gross_pay - total_deduction;


            //  Output Section
            printf("Employee Name: %s %s\n", employee_first_name, employee_last_name);

                    printf("Hours Worked: %.2f\n", hours_worked);

                            printf("Pay rate: $%.2f\n", hourly_pay_rate);

                                printf("Gross Pay: $%.2f\n", gross_pay);

    printf("Deduction: \n" );
                printf("    Federal Withholding: $%.2f\n", federal_withholding);
                printf("    State Withholding: $%.2f\n", state_withholding);
                printf("    Social Security Withholding: $%.2f\n", social_security_withholding);
                printf("    Medicare Withholding: $%.2f\n", medicare_withholding);
                printf("    City Withholding: $%.2f\n", city_withhodling);
                printf("    Total Deduction: $%.2f\n", total_deduction);
                printf("    Net Pay: $%.2f\n", net_pay);

        printf("[=================================== Thanks ========================================");

return 0;
}
