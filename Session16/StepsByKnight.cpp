https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1#

class Solution 
{ 
    bool isValid(int row, int col, int N)
    {
        if(row>=1 && row<=N && col>=1 && col<=N)
        {
            return true;
        }
        return false;
    }
    
public:
	int minStepToReachTarget(vector<int>&knightPos, vector<int>&targetPos, int N){
	    // Code here
        
        queue<pair<int, pair<int, int>>> q;
        bool visited[N+1][N+1] = {false};
        
        int dirx[] = {-1,1,2,2,-1,1,-2,-2};
        int diry[] = {2,2,1,-1,-2,-2,1,-1};
        
        q.push({0, {knightPos[0], knightPos[1]}});
        visited[knightPos[0]][knightPos[1]] = true;
        
        while(!q.empty())
        {
            pair<int, pair<int, int>> temp = q.front();
            q.pop();
            int d = temp.first;
            int x = temp.second.first;
            int y = temp.second.second;
            
            if(x==targetPos[0] && y==targetPos[1])
            {
                return d;
            }
            
            for(int i=0; i<8; i++)
            {
                int row = x+dirx[i];
                int col = y+diry[i];
                if(isValid(row, col, N) && !visited[row][col])
                {
                    visited[row][col] = true;
                    q.push({d+1, {row, col}});
                }
            }
        }  
	}
};