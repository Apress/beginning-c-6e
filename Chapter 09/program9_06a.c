//Example 9.6a Recursion example
// A checkboard unsorted where a fly must visit each cell, but cannot pass through two identical cells.

#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

bool used[SIZE * SIZE];      // array to mark used nodes in the graph
int solution[SIZE * SIZE];   // the full path of a current solution
int depth = 1;               // depth of the graph, more similar to "steps"
int graph[8][SIZE * SIZE];   // 8 = possible branches
int Start, Finish;           // integer representation of start, finish cells
int solutions;               // solution counter

// y, x pattern:
// white = 0
// black = 1
int board[SIZE][SIZE] =
        {
			{ 0, 1, 0, 1, 'F' },
			{ 1, 1, 1, 0, 1 },
			{ 0, 0, 1, 0, 1 },
			{ 1, 0, 1, 0, 0 },
			{ 'S', 1, 0, 0, 1 } 
		};

/*
int board[SIZE][SIZE] =
        {
                { 0,   1, 'F' },
                { 1,   0,  1  },
                { 'S', 1,  0  } 
		};
*/

void print_board(void)
{
    //print board in x,y pattern
    printf("\n");
    for (int y = 0; y < SIZE; y++)
    {
        for (int x = 0; x < SIZE; x++)
        {
            char c = board[x][y];
            if(c<2) c = c + '0';
            printf("%c ", c);
        }
        printf("\n");
    }
    printf("\n");
}

//compare boundaries cells
int compare(int x, int y, int x1, int y1, int branches, int level)
{
    if ( (x1 >= 0) && (x1 < SIZE) && (y1 >= 0) && (y1 < SIZE))
    {
        // we check that neighbor cells are not both 0 or 1. (white or black)
        if (board[x1][y1] != board[x][y])
        {
            graph[0][level]++;  //amount of possible nodes to visit
            graph[branches++][level] = (1 + x1) + y1 * SIZE; // since position 1, they are rewritten in one number (lineal position)
            // x,y = integer
        }
    }

    return branches;
}

void initialize(void)
{
    int branches;
    int level = 0;

    printf("\n");

    for (int x = 0; x < SIZE * SIZE; x++)
    {
        used[x] = false;
        solution[x] = 0;
    }
    for (int y = 0; y < SIZE * SIZE; y++)
	{
       for (int x = 0; x < 8; x++)
       {
         graph[x][y] = 0;
       }
    }

    /* board parser */
    for (int y = 0; y < SIZE; y++)
    {
        for (int x = 0; x < SIZE; x++)
        {
            level++;
            branches = 1;

            if (board[x][y] == 'S')
                Start = x+1 + y * SIZE;
            if (board[x][y] == 'F') {
                Finish = x+1 + y * SIZE;
                continue;
            }

            /*  position of movements
              7 8 9
              4 5 6
              1 2 3  */
            branches = compare(x, y, x-1, y, branches, level);      // #4
            branches = compare(x, y, x-1, y-1, branches, level);    // #7
            branches = compare(x, y, x, y-1, branches, level);      // #8
            branches = compare(x, y, x+1, y-1, branches, level);    // #9
            branches = compare(x, y, x+1, y, branches, level);      // #6
            branches = compare(x, y, x+1, y+1, branches, level);    // #3
            branches = compare(x, y, x, y+1, branches, level);      // #2
            branches = compare(x, y, x-1, y+1, branches, level);    // #1
        }
    }
}

void solfound(void)
{
    printf("%d. :: ", ++solutions);

    for (int i = 2; i <= depth; i++)
    {
        int delta_pos = solution[i] - solution[i - 1];

        if (delta_pos == (-SIZE-1))
            printf(" NW");
        if (delta_pos == -SIZE)
            printf(" N");
        if (delta_pos == -SIZE+1)
            printf(" NE");
        if (delta_pos == -1)
            printf(" W");
        if (delta_pos == +1)
            printf(" E");
        if (delta_pos == +SIZE-1)
            printf(" SW");
        if (delta_pos == +SIZE)
            printf(" S");
        if (delta_pos == +SIZE+1)
            printf(" SE");
    }
    printf("\n");
}

void search(int level)
{
    // branches/edges
    for (int b = 1; b <= graph[0][level]; b++)
    {
        if (!used[graph[b][level]])
        {
            used[graph[b][level]] = true;
            //each solution has a lineal position steps (similar to a stack)
            solution[++depth] = graph[b][level];

            //depth of the solution
            if ((graph[b][level] == Finish) && (depth >= SIZE * SIZE -1))
            {
                solfound();
            }

            search(graph[b][level]);

            solution[depth--] = 0;
            used[graph[b][level]] = false;
        }
    }
}

int main(void)
{
    printf("\nSearching...\n");
    initialize();
    print_board();

    solution[1] = Start;
    used[Start] = true;

    search(Start);

    return 0;
}


