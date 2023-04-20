
#ifndef MODULE_H
#define MODULE_H

using namespace std;
template <class T>

typedef struct {
    T data;
    unsigned int cycle;
}value;

class Module {
    
public:
    //CONSTRUCTORS AND DESTRUCTOR
    Module();
    
    // Modification member functions
    node* get_head();
    node* get_tail();
    
    company& operator= (const company& src);
    
    // Constant member functions
    const node* get_head() const;
    const node* get_tail() const;
    std::string get_name() const;
    void print_items();
    
private:
    queue<int> gq
    unsigned int stage_cycle; //how many cycles
};

#endif //MODULE_H