 /*
 Name Annie Mumbi Kamau
 Reg no:oa106/G/29214/25
 description:function to calculate electric bill
  */
    #include <stdio.h>

    // Function Prototype
    int total_bill(int units);

    void main() {
    int units;
    int final_bill;

    printf("Enter units: ");
    scanf("%d", &units); 
    
    // Function Call
    final_bill = total_bill(units); 

    printf("Total bill = Ksh %d\n", final_bill);
    }


    // Function definition
    int total_bill(int units) {
    int total;
    
    
    if (units <= 100) {
        total = units * 10;
    } else if (units <= 200) { 
        total = (100 * 10) + ((units - 100) * 15);
    } else {
        total = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }
    
    return total; 
    }
    