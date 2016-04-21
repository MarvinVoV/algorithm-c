#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stack.h"

#define MAZE_ROW 11
#define MAZE_COL 15

#define EXIT_ROW 10
#define EXIT_COL 14

// Declare a stack
extern element stack[MAX_STACK_SIZE];

typedef struct{
	short int v;
	short int h;
} offset;

offset move[8] = {
	{-1, 0}, // N
	{-1, 1}, // NE
	{ 0, 1}, // E
	{ 1, 1}, // SE
	{ 1, 0}, // S
	{1, -1}, // SW
	{0, -1}, // W
	{-1, -1} // NW
};


short int mark[MAZE_ROW][MAZE_COL];
short int maze[MAZE_ROW][MAZE_COL] = {
	{0,1,0,0,0,1,1,0,0,0,1,1,1,1,1},
	{1,0,0,0,1,1,0,1,1,1,0,0,1,1,1},
	{0,1,1,0,0,0,0,1,1,1,1,0,0,1,1},
	{1,1,0,1,1,1,1,0,1,1,0,1,1,0,0},
	{1,1,0,1,0,0,1,0,1,1,1,1,1,1,1},
	{0,0,1,1,0,1,1,1,0,1,0,0,1,0,1},
	{0,1,1,1,1,0,0,1,1,1,1,1,1,1,1},
	{0,0,1,1,0,1,1,0,1,1,1,1,1,0,1},
	{1,1,0,0,0,1,1,0,1,1,0,0,0,0,0},
	{0,0,1,1,1,1,1,0,0,0,1,1,1,1,0},
	{0,1,0,0,1,1,1,1,1,0,1,1,1,1,0}
};


void path(){
	// init a stack to the maze's entrance coordinate and director to north
	element item = {0, 0, 0};
	int found = 0; // false
	add(item);
	while(!isEmpty() && !found){
		element top = delete();
		short int row = top.row;
		short int col = top.col;
		short int dir = top.dir;
		while(dir < 8 && !found){
			short int next_row = row + move[dir].h;
			short int next_col = col + move[dir].v;	
			// boundary detection
			if(next_row < 0 || next_row > MAZE_ROW - 1 || next_col > MAZE_COL - 1 || next_col < 0){
				++dir;
				continue;
			}
			if(next_row == EXIT_ROW && next_col == EXIT_COL)
				found = 1;
			else if(!maze[next_row][next_col] && !mark[next_row][next_col]){
				mark[next_row][next_col] = 1;
				top.row = next_row;
				top.col = next_col;
				top.dir = ++dir;
				add(top);
				row = next_row;
				col = next_col;
				dir = 0;
			}else{
				++dir;
			}
		}
	}
	if(found){
		memset(mark, 0, sizeof(mark));
		printf("The path is:\n");
		while(!isEmpty()){
			element item = delete();
			mark[item.row][item.col] = 1;
		}
		mark[0][0] = 1;
		for(int i = 0; i < MAZE_ROW; i++){
			for(int j = 0; j < MAZE_COL; j++){
				printf("%2d", mark[i][j]);
			}
			printf("\n");
		}
	}else
		printf("The maze does not have a path\n");
}


int main(){
	// init mark array
	memset(mark, 0, sizeof(mark));
	path();

	return 0;
}
