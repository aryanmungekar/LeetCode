class Solution
{
public:
    string longestCommonPrefix(vector<string>& vct)
    {
        if (vct.size() == 1) { return vct[0]; }
        
        int size = vct[0].size(); string answer = ""; int count = 0; int index = 0;

        for (int i = 0; i < vct.size(); i++)
        {
            if (vct[i].size() < size) { size = vct[i].size(); }
        }
        
        while (index != size)
        {
            for (int j = 1; j < vct.size(); j++)
            {
                if (vct[0][index] == vct[j][index]) 
                { 
                    count++;
                
                    if (count == vct.size() - 1) 
                    { 
                        answer += vct[0][index]; 
                    } 
                }

                if (j == vct.size() - 1) { index++; }
            }

            if (count != vct.size() - 1) { return answer; } count = 0;
        }

        return answer;
        
    }
};