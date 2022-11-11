
#ifndef ARRAY_HPP
#define ARRAY_HPP


template<class T>
class Array{
	public :
		Array(void)
		{
			size = 1;
			array = new T[size];
		}
		Array(unsigned int n)
		{
			size = n;
			array = new T[size];
		}
		Array(const & obj)
		{
			*this = array;
		}
		~Array()
		{
			delete array[];
		}
		Array & operator=(const & obj)
		{
			size = obj->size;
			array = new T [size];
			for (int i = 0; i < size; i++)
			{
				array[i] = obj.array[i];
			}
			return *this;
		}
	private :
		T *array;
		unsigned int size;
};


#endif
