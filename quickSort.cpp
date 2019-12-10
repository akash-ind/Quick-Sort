class QuickSort{
public:
    template<class x,class y>static int partition(x a[],int lo,int hi,y c)
    {
        int j=(lo+(lo+hi)/2+hi)/3;
        exch(a,lo,j);
        int i=lo+1;
        int k=hi;
        while(i<=k)
        {
            while(i<=hi)
            {
                if(less(a[i],a[lo],c))
                    i++;
                else
                    break;
            }
            while(k>=lo)
            {
                if(less(a[lo],a[k],c))
                    k--;
                else
                    break;
            }
            if(i<k)
                exch(a,i,k);
        }
        exch(a,lo,k);
        return k;
    }
    template<class x,class y>static int partition3(x a[],int lo,int hi,y c)//here a[lt] value does not change
    {
        int lt=lo,i=lo;
        int gt=hi;
        while(i<gt)
        {
            if(less(a[i],a[lt],c))
               {
                   exch(a,i,lt);
                   i++;
                   lt++;
               }
            if(less(a[lt],a[i],c))
                {
                    exch(a,i,gt);
                    gt--;
                }
            if(a[lt]==a[i])
            {
                i++;
            }
        }
        return lt;
    }
    template<class x,class y,size_t N> static void sort(x (&a)[N],y c=0)
    {
        std::cout<<N<<std::endl;
        sort(a,0,N-1,c);
    }
    template<class x,class y>static void sort(x a[],int lo,int hi,y c=0)
    {
        if(lo>=hi)
            return;
        int j=partition3(a,lo,hi,c);
        sort(a,lo,j-1,c);
        sort(a,j+1,hi,c);
    }
    template<class x,class y> static bool less(x less,x more,y c)
    {
        if(c.compareTo(less,more)==1)
            return true;
        else
            return false;
    }
    template<class x> static void exch(x a[], int i,int j)
    {
        x temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
};
