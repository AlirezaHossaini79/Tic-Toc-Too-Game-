#include <stdio.h>
#include<windows.h>
#include <conio.h>
#include <string.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void board()
{
	int j,i=197,s=196,h=179;
	printf("\n\n\n");
	printf("\n\t\t\t\t");
	printf("%c\t%c",h,h);
	printf("\n\t\t\t\t");
	printf("%c\t%c",h,h);	
	printf("\n\t\t\t\t");
	printf("%c\t%c",h,h);
	printf("\n\t");
	printf("\t\t");
	printf("%c%c%c%c%c%c%c%c",s,s,s,s,s,s,s,s);
	printf("%c",i);
	printf("%c%c%c%c%c%c%c",s,s,s,s,s,s,s);
	printf("%c",i);
	printf("%c%c%c%c%c%c%c",s,s,s,s,s,s,s);
	printf("\n\t\t\t\t");
	printf("%c\t%c",h,h);
	printf("\n\t\t\t\t");
	printf("%c\t%c",h,h);
	printf("\n\t\t\t\t");
	printf("%c\t%c",h,h);	
	printf("\n\t");
	printf("\t\t");
	printf("%c%c%c%c%c%c%c%c",s,s,s,s,s,s,s,s);
	printf("%c",i);
	printf("%c%c%c%c%c%c%c",s,s,s,s,s,s,s);
	printf("%c",i);
	printf("%c%c%c%c%c%c%c",s,s,s,s,s,s,s);
	printf("\n\t\t\t\t");
	printf("%c\t%c",h,h);
	printf("\n\t\t\t\t");
	printf("%c\t%c",h,h);
	printf("\n\t\t\t\t");
	printf("%c\t%c",h,h);	
	printf("\n\t");
	printf("\n\n\n\n");
}

void Mohre()
{
	gotoxy(28,5);
	printf("%c",square[1]);
	gotoxy(36,5);
    printf("%c",square[2]);
    gotoxy(44,5);
    printf("%c",square[3]);
    gotoxy(28,9);
    printf("%c",square[4]);
    gotoxy(36,9);
    printf("%c",square[5]);
    gotoxy(44,9);
    printf("%c",square[6]);
    gotoxy(28,13);
    printf("%c",square[7]);
    gotoxy(36,13);
    printf("%c",square[8]);
    gotoxy(44,13);
    printf("%c",square[9]);
    
}

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}

int main()
{
	
	board();
	Mohre();
	int player = 1, i, choice;

    char mark;
    do
    {
        player = (player % 2) ? 1 : 2;

        printf("\n\n\nPlayer %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
        {
		
            square[1] = mark;
            Mohre();
        }
        else if (choice == 2 && square[2] == '2')
        {
		
            square[2] = mark;
            Mohre();
        }
        else if (choice == 3 && square[3] == '3')
        {
		
            square[3] = mark;
            Mohre();
        }
        else if (choice == 4 && square[4] == '4')
        {
		
            square[4] = mark;
            Mohre();
        }
        else if (choice == 5 && square[5] == '5')
        {
		
            square[5] = mark;
            Mohre();
        }
        else if (choice == 6 && square[6] == '6')
        {
            square[6] = mark;
            Mohre();
        }
        else if (choice == 7 && square[7] == '7')
        {
            square[7] = mark;
            Mohre();
        }
        else if (choice == 8 && square[8] == '8')
        {
            square[8] = mark;
            Mohre();
        }
        else if (choice == 9 && square[9] == '9')
        {
            square[9] = mark;
            Mohre();
        }
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);
    
    if (i == 1)
    {  
	    Mohre();
        printf("\n\n==>\aPlayer %d win ", --player);
    }
    else
        printf("\n\n==>\aGame draw");

    getch();

    
	printf("\n\n\n\n\n\n\n\n\n\n");
	return 0;
}
