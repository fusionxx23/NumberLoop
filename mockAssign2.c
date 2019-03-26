
int counter; 
float accVal; 


do {
    printf("Put in number"); 
    int inputNum; 
    scanf("%f", &inputNum); 
    if (inputNum < min_num) {
        min_num = inputNum; 
    }
    if (inputNum > max_num) {
        max_num = inputNum; 
    }
    counter++; 
    accVal = inputNum + accVal; 
    if (inputNum == 0) {
        average = accVal/counter; 
        printf("The Average is %s \n The Max is &f etc...")
        
    }
} while(inputVal != 0); 