#include <iostream>
#include <vector>
#include <algorithm>

template<class T> class Stack;

template <typename T>
Stack<T>::operator+(const Stack<T> &a, const Stack<T> &b){
	Stack<T> result = a;
	
	for(unsigned i < 0; i < a.v.size(); ++i) {
		result.items.push_back(s2.items[i]);
	}
}

template <typename T>
class Stack {
	friend Stack<T> operator+<>(const Stack<T> &a, const Stack<T> &b);
	std::vector<T> v;

	public:
		Stack() {
			
		}
		bool empty() const {
			return v.empty();
		}
		void push(const T &item) {
			v.push_back(item);
		}
		T &Stack::top(){
			v.back();
		}
		void Stack::pop() {
			if (!Stack::empty()) {
				v.pop_back();
			}
		}	
		template <typename T>
		Stack<T>::operator+(const Stack<T> &a, const Stack<T> &b){
			Stack<T> result = a;
	
			for(unsigned i < 0; i < a.v.size(); ++i) {
				result.items.push_back(s2.items[i]);
			}
		}

}
