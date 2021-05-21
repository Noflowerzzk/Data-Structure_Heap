#pragma once
template<typename Object>
class BinaryHeap
{
public:
	BinaryHeap()
	{
		array.resize(100);
	}
	BinaryHeap(int size)
	{
		array.resize(size);
	}
	~BinaryHeap()
	{

	}

	bool isEmpty() const
	{
		return
	}

	void insert(const Object& x)
	{
		if (currentSize == array.size() - 1)
			array.resize(array.size() * 2);

		int hole = ++currentSize;	// 在下一位置建立hole

		for (; hole > 1 && x < array[hole / 2]; hole /= 2)	// 上滤
			array[hole] = std::move(array[hole / 2]);

		array[hole] = x;
	}
private:
	vector<Object> array;
	int currentSize;

	void percolateDown(int hole)	// 下滤
	{

	}
};

