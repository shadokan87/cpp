#ifndef ARRAY_HPP
# define ARRAY_HPP
typedef std::string str;
template <typename T> class Array
{
	typedef T unkown;
	public:
		~Array(void) {if (array)delete[ ] array;elemCount = 0;}
		Array(void) : elemCount(0), array(NULL) {};
		Array(unsigned int n) {array = new T[n];elemCount = n;}
		unkown &operator=(unkown &src)
		{
			if (array)
				delete[ ] array;
			if (src.array && src.elemCount)
			{
				array = new T[src.elemCount];
				for (int i = 0;i < src.elemCount;i++)
					array[i] = src.array[i];
				elemCount = src.elemCount;
			}
			else
			{
				array = NULL;
				elemCount = 0;
			}
			return (*this);
		}
		inline unsigned int	size(void) const { return (elemCount); }
		inline unkown &operator[ ](int i) const { if (i > elemCount || i < 0) throw indexOutOfRange(); return (array[i]); }
		class	indexOutOfRange : public std::exception { const char* what() const throw() { return ("Index out of range."); }};
	private:
		unsigned int	elemCount;
		T *array;
};
#endif
