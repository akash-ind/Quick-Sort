class Data
{
public:
    int i;
    int j;
    class comparator
    {
    public:
        char compare=0;
        int compareTo(Data a,Data b)
        {
            if(compare=='i'||compare==0)
            {
                if(a.i<b.i)
                    return 1;
                else
                    return 0;
            }
            else
            {
                if(a.j<b.j)
                    return 1;
                else
                    return 0;
            }
        }
    };
    bool operator==(Data x)
    {
        if((i==x.i)&&(j==x.j))
            return true;
        else
            return false;
    }
};
