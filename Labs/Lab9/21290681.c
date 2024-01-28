#include <stdio.h>
#include <string.h>

#define MAX_ITEM_NUMBER 100
#define MAX_LENGHT 15

int main() {
	char items[MAX_ITEM_NUMBER][MAX_LENGHT] = {0};
    	int prices[MAX_ITEM_NUMBER] = {0};
    	char line[25] = {0};


    	int numb_items = 0;
    	while (fgets(line, sizeof(line), stdin) && strcmp(line, "start\n") != 0) {
        	sscanf(line, "%s %d", items[numb_items], &prices[numb_items]);
        	numb_items++;
    	}



    	while (fgets(line, sizeof(line), stdin) && strcmp(line, "end\n") != 0) {
        	size_t line_length = strlen(line);
        	line[line_length - 1] = '\0';
        	int found = 0;

        	for (int i = 0; i < numb_items; i++) {
            		if (strcmp(line, items[i]) == 0) {
                		printf("%s %d\n", items[i], prices[i]);
                		found = 1;
                		break;
            		}
        	}

        	if (!found) {
            		printf("%s 0\n", line);
        	}
    	}

    	return 0;
}
