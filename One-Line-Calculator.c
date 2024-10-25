    #include <stdio.h>
    #include <unistd.h>

    int check_sp(char str[], int i)
    {
        while (str[i] == 32)
        {
            i++;
        }
        return i;
    }
    void get_input(char str[], int size)
    {
        printf("enter the value\n");
        fgets(str, size, stdin);
    }

    void calculate()
    {
        char *str;
        int i;
        char operator;
        int result;
        char equation[20];
        int num1;
        int num2;

        i = 0;
        num1 = 0;
        num2 = 0;
        get_input(equation, 20);
        
        str = equation;

        i = check_sp(str, i);

        while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
        {
            num1 *= 10;
            num1 += str[i] - '0';
            i++;
        }

        i = check_sp(str, i);

        if(str[i] == '+')
            operator = '+';
        else if(str[i] == '-')
            operator = '-';
        else if(str[i] == '*')
            operator = '*';
        else if(str[i] == '/')
            operator = '/';
        else{}
        i++;

        i = check_sp(str, i);

        while(str[i] &&str[i] >= '0' && str[i] <= '9')
        {
            num2 *= 10;
            num2 += str[i] - '0';
            i++;
        }

        if(operator == '+')
            result = num1 + num2;
        else if(operator == '-')
            result = num1 - num2;
        else if(operator == '*')
            result = num1 * num2;
        else if (operator == '/')
            result = num1 / num2;
        else{}
        
        printf("%i %c %i = %i\n", num1, operator, num2, result);

    }

    int main()
    {   
        calculate();
    }

    //the idea of this calculater is to write the equation in one line such as 5 - 2  , 423-23 , etc...
