#pragma once

#include <vector>
#include <string>

struct Vec {
    double x, y, z;
};

class Triangle {
public:
    //TODO
private:
    Vec A, B, C;
    Vec normal;
};

using TriangleSoup = std::vector<Triangle>;

class STLParser {
public:
    TriangleSoup read(const std::string& filename);
    void write(const TriangleSoup& triangleSoup, const std::string& filename);
private:
    //TODO
};