template <typename type>
void swap(int& a, int& b) {
	type tmp = a;
	a = b;
	b = tmp;
}template <typename type>
void Sort(Vector<type>& vec, int (cmp)(type, type) = OperatorCmp) {
	while (true) {
		for (int i = 1; i < v.size(); i++) {
			if (cmp(v[i - 1], v[i]) > 0) {
				break;
			}
			else {
				return;
			}
		}

		int index1 = RandomInteger(0, vec.size() - 1);
		int index2 = RandomInteger(0, vec.size() - 1);
		swap(vec[index1], vec[index2]);
	}
}int main() {
	Randomize();
	Vector<char>a;

	Sort(a); return 0;
}