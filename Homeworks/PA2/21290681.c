#include <stdio.h>

int calculate(int sco,int curr,char op){
	if (op=='+'){return sco+curr;}
	if (op=='-'){return sco-curr;}
	if (op=='*'){return sco*curr;}
}

int print(int first,char op,int second){
	printf("%d %c %d = ",first,op,second);
	return 0;
}

int main() {
	int num_row, num_col;
    	scanf("%d %d", &num_row, &num_col);

    	char matr[num_row][num_col];
    	char c;
    	int i, j;
    	for (i = 0; i < num_row; i++) {
        	for (j = 0; j < num_col; j++) {
            		scanf(" %c", &c);
			printf("%c", c);
            		matr[i][j] = c;
        	}
		printf("\n");
    	}
	printf("\n");

    	int row, col;
    	scanf("%d %d", &row, &col);
    	
	
	int score = 0;
	char operator='+';
	char direction;
	while(1){
		scanf(" %c", &direction);
		printf("command:%c\n", direction);
		if (direction=='q'){break;}
		else if (direction=='d'){row++;}
		else if (direction== 'r'){col++;}
		else if (direction=='l'){col--;}
		else if (direction=='u'){row--;}

		if (matr[row][col]=='+'){printf("Operator changed to %c\n",operator='+');}
		else if (matr[row][col]=='-'){printf("Operator changed to %c\n",operator='-');}
		else if (matr[row][col]=='*'){printf("Operator changed to %c\n",operator='*');}

		else if (matr[row][col]=='['){
			int say=0;
			col++; 
			while (matr[row][col]!=']'){
				say=say*10+matr[row][col]-'0';
				col++;
			}
			print(score,operator,say);
			score=calculate(score,say,operator);printf("%d\n",score);
		}
		else if (matr[row][col]==']'){
			int say=0;
			col--;
			while (matr[row][col]!='['){
				say=say*10+matr[row][col]-'0';
				col--;
			}
			print(score,operator,say);
			score=calculate(score,say,operator);printf("%d\n",score);
		}
		
		else {
			print(score,operator,matr[row][col]-'0');
			score=calculate(score,matr[row][col]-'0',operator);printf("%d\n",score);
		}
	
	}
	
    	printf("Game is over. Your score is %d!", score);
    	return 0;
}
