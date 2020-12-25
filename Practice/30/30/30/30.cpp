#include <iostream>
struct box
{
	char marker[40];
	float height;
	float width;
	float length;
	float volume;
};
void print(struct box param) {
	std::cout << " Box -" << marker << ". Parameters:" << std::endl;
	std::cout << " height -" << height << std::endl;
	std::cout << " width -" << width << std::endl;
	std::cout << " length -" << length << std::endl;
	std::cout << " volume -" << volume << std::endl;
}
void setvolume(struct box* param) {
	param->volume = param->width * param->height * param->length;
}
int main() {
	struct box myBox;
	std::cout << " Box marker-" << std::endl;
	std::cin >> myBox.marker;
	std::cout << " Box height -" << std::endl;
	std::cin >> myBox.height;
	std::cout << " width -" << std::endl;
	std::cin >> myBox.width;
	std::cout << " length -" << std::endl;
	std::cin >> myBox.length;
	setvolume(&myBox);
	print(myBox);
	return 0;
}