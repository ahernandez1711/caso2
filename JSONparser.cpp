#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;
int main()
{
std::ifstream f(“data.json”);
json data = json::parse(f);
// Access the values existing in JSON data

return 0;
}