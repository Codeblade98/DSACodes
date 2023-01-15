template<typename T>
class Vector
{
    //Data members
    T *arr;
    int curr_size;
    int max_size;

    public:

        Vector()
        {
            curr_size = 0;
            max_size = 0;
            arr = new T[max_size];
        }

        void push_back(T x)
        {
            if(curr_size == max_size)
            {
                T* old_arr = arr;//store the memory location of the older arr[0] and then redeclare arr
                max_size *= 2;
                for(int i = 0; i < curr_size; i++)
                {
                    arr[i] = old_arr[i];
                }
                delete [] old_arr;
            }   
            arr[curr_size ++] = x;
        }

        void pop_back()
        {
            if(curr_size >= 0)
                curr_size--;
        }

        int size()
        {
            return curr_size;
        }

        int capacity()
        {
            return(max_size);
        }
        
        //defining operstor
        //due to this we can access i'th element of a Vector v as v[i]
        T operator[](int i)
        {
            return arr[i];
        }
};