#include <stdio.h>
#include <ctype.h>
#include <string.h>

void RomanCodeDecryption() 
{

    char encryptValue[28] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ', '.'};

    char alphabetValue[28][4] = {" III", " VII", " XII", " XIV", " XVI", " XIX", " XXI", " IIX", " XXX", " XLI", " XLV", " LII", " LIV", " LVI", " LIX", " LXI", " LXV", " LXX", " XCI", " XCV", " CII", " CIV", " CVI", " CIX", " CXI", " CXV", " CXX", " CXL"};

    char string[200], encryptedString[100], escape, dvar[700];


    scanf("%c", &escape);

    printf("\nEnter Your Text : ");

    gets(string);

    int i = 0;
    while ( string[i] != '\0')
    {
        char  chr1,chr2,chr3,chr4;
        chr1 = string[i];
        chr2 = string[i+1];
        chr3 = string[i+2];
        chr4 = string[i+3];
        
        
        for (int j = 0; j < 28; j++)
        {    
            
            if(chr1 == alphabetValue[j][0] && chr2 == alphabetValue[j][1] && chr3 == alphabetValue[j][2] && chr4 == alphabetValue[j][3]) 
            {
                
                if(i < 1) 
                {
                    
                    dvar[0] = encryptValue[j];
                    
                    
                }
                else if (i >= 1)
                {
	  
                    dvar[i/4] = encryptValue[j];
                    printf("else if level \n");

                }

            }
        }
        
        i = i+4;
     }


    printf("\n\nEncrypted String : %s", dvar);
}

