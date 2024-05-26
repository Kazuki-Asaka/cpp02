#include <iostream>
#include <string>
#include <fstream>

void	copy(std::string filename, std::string s1, std::string s2) {
	std::string	new_file;

	if (s1.empty()) {
		std::cerr << "s1 is empty" << std::endl;
		std::exit(1);
	}
	new_file = filename + ".replace";
	std::ifstream ifs(filename);
	if (!ifs) {
		std::cerr << "read file open error" << std::endl;
		std::exit(1);
	}
	std::ofstream ofs(new_file);
	if (!ofs) {
		std::cerr << "newfile open error" << std::endl;
		std::exit(1);
	}
	while (!ifs.eof()) {
		std::string buf;
		if (!std::getline(ifs, buf) && !ifs.eof()) {
			std::cerr << "read error" << std::endl;
			std::exit(1);
		}
		size_t position;
		position = 0;
		while (position != buf.npos) {
			position = buf.find(s1, position);
			if (position != buf.npos) {
				buf.erase(position, s1.length());
				buf.insert(position, s2);
				position = position + s2.length();
			}
		}
		if (!ifs.eof())
			buf += "\n";
		ofs << buf;
	}
}

int	main(int argc, char **argv) {
	if (argc == 4) {
		copy(argv[1], argv[2], argv[3]);
	}
	else {
		std::cerr << "argument error" << std::endl;
	}
	return (0);
}

// __attribute__((destructor))
// static void destructor(void){
//     system("leaks -q ex04");
// }