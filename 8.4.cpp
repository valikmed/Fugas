#include <iostream>
#include <vector>
#include <cmath>


class Point
{
public:

    int x;
    int y;
};



class Segment
{

public:

    Point point1, point2;

    Segment(Point& point1, Point& point2)
    {
        this->point1 = point1;
        this->point2 = point2;
    }

    Segment()
    {

    }

    float lengthSegment()
    {
        float lenght = sqrt(pow((point2.y - point1.y), 2) + pow((point2.x - point1.x), 2));
        return lenght;
    }
};



class Triangle
{

public:

    Segment segment1, segment2, segment3;

    Triangle(Segment& segement1, Segment& segment2, Segment& segment3)
    {
        this->segment1 = segment1;
        this->segment2 = segment2;
        this->segment3 = segment3;
    }

    float parimetrTriangle()
    {
        float parimetr = segment1.lengthSegment() + segment2.lengthSegment() + segment3.lengthSegment();
        return parimetr;
    }

};



int main()
{
    int x, y;
    Point  point1, point2, point3;

    std::cout << "Enter cordenat(x1, y1)" << std::endl;
    std::cin >> x;
    std::cin >> y;

    point1.x = x;
    point1.y = y;

    std::cout << "Enter cordenat(x2, y2)" << std::endl;
    std::cin >> x;
    std::cin >> y;


    point2.x = x;
    point2.y = y;

    std::cout << "Enter cordenat(x3, y3)" << std::endl;
    std::cin >> x;
    std::cin >> y;

    point3.x = x;
    point3.y = y;

    Segment* segment1 = new Segment(point1, point2);
    Segment* segment2 = new Segment(point3, point2);
    Segment* segment3 = new Segment(point1, point3);

    Triangle* triangle = new Triangle(*segment1, *segment2, *segment3);


    float lengs = segment1->lengthSegment();
    std::cout << "The length of the segment : " << lengs << std::endl;


    float parimetr = triangle->parimetrTriangle();
    std::cout << "The Parimetr of the segment : " << parimetr << std::endl;

    return 0;

}