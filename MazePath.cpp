// Maze Path
// Given an n x n maze, 
// (i) find different ways to reach the last cell (n-1, m-1) from first cell (0,0)
// (ii) print all the paths

// cr -> current row
// cc -> current column
// er -> end row
// ec -> end column

int maze_path (int cr, int cc, int er, int ec, string path)
{
    // Base case
    
    if (cr == er and cc == ec)
    {
        cout<<path<<endl;
        return 1;
    }
        
    if (cr > er or cc > ec) // Maze boundary (down or right) is crossed
        return 0;
        
    // Recursive case
    
    int c1 = maze_path(cr, cc+1, er, ec, path+"R");  // Go Right
    int c2 = maze_path(cr+1, cc, er, ec, path+"D"); // Go Down
    
    // Self work
    
    return c1+c2;
}

int main()
{
    int n, m;
    cin >> n >> m;
    
    cout << maze_path(0, 0, n-1, m-1, "");
    
    return 0;
}

/*
Input: 3 3

Output:

RDRD                                                                                           
RDDR                                                                                           
DRRD                                                                                           
DRDR                                                                                           
DDRR                                                                                           
6 

*/
