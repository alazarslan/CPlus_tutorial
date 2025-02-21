//
// Created by alaz on 08.10.2024.
//

#ifndef FLOATARR_H
#define FLOATARR_H



class floatArr {
private:
    float* arrPtr;
    int max_size;
    int curr_size;
public:
    floatArr(int n = 256);
    floatArr(int n, float val);
    floatArr(const floatArr& arr);
    ~floatArr();
    inline int length() const {return curr_size;}
    float& operator[](int i);
    float operator[](int i) const;
    bool append(float val);
    bool remove(int pos);
    floatArr& operator=(const floatArr& arr);
};



#endif //FLOATARR_H
