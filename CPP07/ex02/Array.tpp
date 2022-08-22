template <typename T>
Array<T>::Array(void):_array(NULL)
{
	cout << "Constructor(No parameter) Array called" << endl;
}

template <typename T>
Array<T>::~Array(void)
{
	cout << "Array destructor" << endl;
	delete [] this->_array;
}

template <typename T>
Array<T>::Array(Array const & src)
{
	cout << "Copy Constructor Array called" << endl;
	this->_len = src.size();
	for (unsigned int i = 0; i < _len; i++)
		this->_array[i] = src.getArray()[i];
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs)
{
	cout << "Copy Assignment Array called" << endl;
	if (this != &rhs)
	{
		this->_len = rhs.size();
		delete [] this->_array;
		this->_array = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			this->_array[i] = rhs.getArray()[i];
	}
	return (*this);
}

template <typename T>
Array<T>::Array(unsigned int n): _len(n)
{
	cout << "Constructor(Parameter) Array called" << endl;
	this->_array = new T[_len];
	for (unsigned int i = 0; i < _len; i++)
		this->_array[i] = 0;
}

template <typename T>
T* Array<T>::getArray(void) const
{
	return (this->_array);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_len);
}

template <typename T>
T & Array<T>::operator[](unsigned int index)
{
	if (index >= this->_len || index < 0)
			throw std::range_error("Index is out of bound");
	return (this->_array[index]);
}
