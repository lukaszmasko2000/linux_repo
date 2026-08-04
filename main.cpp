#include <iostream>
#include <memory>


using namespace std::string_literals;


class Author
{
public:
    Author(const std::string f, const std::string l)
        : fname(f), lname(l){}

    Author(const Author& a) = default;
    Author(Author&& a) = default;
    Author& operator=(const Author& a) = default;

    [[nodiscard]] std::string get_fname() const { return fname; }
    [[nodiscard]] std::string get_lname() const { return lname; }
    void show_author() {
        auto author = get_fname() + " " + get_lname();
        std::cout << author << std::endl;
    }

private:
    std::string fname;
    std::string lname;
};



int main()
{

   const auto hello = "Hello World!"s;
    const auto fname = "Luke"s;
    const auto lname = "Masko"s;


    Author a(fname,lname);


    a.show_author();

    return 0;

}