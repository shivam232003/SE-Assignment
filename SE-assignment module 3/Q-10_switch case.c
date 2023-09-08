//Monday to Sunday using switch case
#include <stdio.h> 
   
int main() {  
    int day;
   
    printf("Enter Day Number\n");  
    scanf("%d", &day);  
  
    switch(day){
        case 1 : printf("Monday\n");
            break;
        case 2 : printf("Tuesday\n");
            break;
        case 3 : printf("Wednesday\n");
            break;
        case 4 : printf("Thursday\n");
            break;
        case 5 : printf("Friday\n");
            break;
        case 6 : printf("Saturday\n");
            break;
        case 7 : printf("Sunday\n");
            break;
        default: printf("Invalid Input !!!!\n");          
    }
  
    return 0;  
}

//Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
	char vowel,choice;
	printf("enter alphabet:");
	scanf("%c",&choice);
	switch(choice)
	{
	case 'a':
	case 'e':
	case 'i':
    case 'o':
    case 'u':	
    case 'A':
    case 'E':
	case 'I':
	case 'O':
	case 'U':
	    	printf("%c IS vowel.\n",choice);
	    	break;
	default:
	    	printf("%c IS consonant.\n",choice);
	    	break;
	}
	return 0;
}
