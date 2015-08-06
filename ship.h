#include <string>
#include <map>
class Ship {
    private:
        int size;
        std::map<std::string, int> ship_types;
        std::string ship_class;
        bool sunk;
    public:
        Ship (std::string ship_type);
        std::string get_name();
        int get_size();
};
