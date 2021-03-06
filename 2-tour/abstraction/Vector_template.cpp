
template<typename T>
class Vector {
private:
    T* elem;
    int sz;
public:
    Vector (int s);
    ~Vector () { delete [] elem; }

    T& operator[] (int i);
    const T& operator[] (int i) const;
    int size () const { return sz; }
};