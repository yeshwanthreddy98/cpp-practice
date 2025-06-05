//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <fstream>
//
//
//class DataStore {
//public:
//	virtual void save(const std::string& key, const std::string& value) = 0;
//	virtual std::string load(const std::string& key) = 0;
//	virtual ~DataStore() {}
//};
//
//
//class MemoryStore : public DataStore {
//private:
//	std::unordered_map<std::string, std::string> storage;
//public:
//	void save(const std::string& key, const std::string& value) override {
//		storage[key] = value;
//	}
//	std::string load(const std::string& key) override {
//		if (storage.find(key) != storage.end())
//			return storage[key];
//		return "";
//	}
//};
//
//
//class FileStore : public DataStore {
//private:
//	std::string filename;
//public:
//	FileStore(const std::string& file) : filename(file) {}
//
//	void save(const std::string& key, const std::string& value) override {
//		std::ofstream ofs(filename, std::ios::app);
//		ofs << key << ":" << value << std::endl;
//	}
//
//	std::string load(const std::string& key) override {
//		std::ifstream ifs(filename);
//		std::string line;
//		while (std::getline(ifs, line)) {
//			std::size_t pos = line.find(':');
//			if (pos != std::string::npos) {
//				std::string fileKey = line.substr(0, pos);
//				if (fileKey == key) {
//					return line.substr(pos + 1);
//				}
//			}
//		}
//		return "";
//	}
//};
//
//void fetchAndDisplay(DataStore& store, const std::string& key) {
//	std::string v = store.load(key);
//	if (!v.empty())
//		std::cout << "Found: [" << key << "] = " << v << std::endl;
//	else
//		std::cout << "Key [" << key << "] not found!" << std::endl;
//}
//
//int main() {
//	MemoryStore memStore;
//	FileStore fileStore("store.txt");
//
//	DataStore* ds = &memStore;
//	ds->save("username", "Alice");
//	ds->save("language", "C++");
//	fetchAndDisplay(*ds, "username");
//	fetchAndDisplay(*ds, "language");
//
//	ds = &fileStore;
//	ds->save("username", "Bob");
//	ds->save("language", "Python");
//	fetchAndDisplay(*ds, "username");
//	fetchAndDisplay(*ds, "language");
//
//	return 0;
//}