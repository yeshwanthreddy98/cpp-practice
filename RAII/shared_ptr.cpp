//this is sample implementation of shared ptr

template <typename T>
class SharedPtr {
public:
	SharedPtr(T* ptr = nullptr) {
		if (ptr != nullptr) {
			count_ = new int(1);
			ptr_ = ptr;
		}
	}

	SharedPtr(const SharedPtr& other) {
		ptr_ = other.ptr_;
		count_ = other.count_;
		if (count_ != nullptr) {
			(*count_)++;
		}
	}

	SharedPtr& operator=(const SharedPtr& other) {
		if (this != &other) {
			release();
			ptr_ = other.ptr_;
			count_ = other.count_;
			if (count_ != nullptr) {
				(*count_)++;
			}
		}
		return *this;
	}

	~SharedPtr() {
		release();
	}

	T& operator*() const {
		return *ptr_;
	}

	T* operator->() const {
		return ptr_;
	}

	int count() const {
		return (count_ == nullptr) ? 0 : *count_;
	}

private:
	T* ptr_ = nullptr;
	int* count_ = nullptr;

	void release() {
		if (count_ != nullptr) {
			(*count_)--;
			if (*count_ == 0) {
				delete ptr_;
				delete count_;
				ptr_ = nullptr;
				count_ = nullptr;
			}
		}
	}
};