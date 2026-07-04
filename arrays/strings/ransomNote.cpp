class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i,j,n,m;
        n=ransomNote.length();
        m=magazine.length();
        for(i=0;i<n;i++)
            {
                bool found=false;
                for(j=0;j<m;j++)
                    {
                        if(ransomNote[i]==magazine[j])
                        {
                            found=true;
                            magazine[j]=' ';
                            break;
                        }
                    }
                if(found==false)
                {
                    return false;
                }
            }
        return true;
    }
};