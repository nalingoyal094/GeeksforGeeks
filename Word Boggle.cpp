class Solution
{
    bool dfsRec(
                    vector<vector<char>> &board, 
                    string word, 
                    vector<vector<bool>> &visited, 
                    int row, 
                    int col, 
                    int wordIndex
                )
    {
        if(wordIndex == word.size())
        {
            return true;
        }
        
        if(
                row >= 0 and row < board.size() and 
                col >= 0 and col < board[0].size() and 
                visited[row][col] == false and
                board[row][col] == word[wordIndex]
            )
        {
            visited[row][col] = true;
            
            if(
                    dfsRec(board, word, visited, row - 1, col - 1, wordIndex + 1) or
                    dfsRec(board, word, visited, row - 1, col + 0, wordIndex + 1) or
                    dfsRec(board, word, visited, row - 1, col + 1, wordIndex + 1) or
                    dfsRec(board, word, visited, row + 0, col - 1, wordIndex + 1) or
                    dfsRec(board, word, visited, row + 0, col + 1, wordIndex + 1) or
                    dfsRec(board, word, visited, row + 1, col - 1, wordIndex + 1) or
                    dfsRec(board, word, visited, row + 1, col + 0, wordIndex + 1) or
                    dfsRec(board, word, visited, row + 1, col + 1, wordIndex + 1)
                )
                {
                    return true;
                }
            
            visited[row][col] = false;
        }
        
        return false;
    }
    
    bool findWords(vector<vector<char>> &board, string word)
    {
        int m = board.size();
        int n = board[0].size();
        
        vector<vector<bool>> visited(m, vector<bool> (n, false));
        
        int wordIndex = 0;
        
        for(int row = 0; row < m; row++)
        {
            for(int col = 0; col < n; col++)
            {
                if(board[row][col] == word[wordIndex])
                {
                    if(dfsRec(board, word, visited, row, col, wordIndex) == true)
                    {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
    
    public:
    vector<string> wordBoggle(vector<vector<char>> &board, vector<string> &dictionary) 
    {
        vector<string> res;
        
        for(auto x: dictionary)
        {
            if(findWords(board, x))
            {
                res.push_back(x);
            }
        }
        
        return res;
    }
};
