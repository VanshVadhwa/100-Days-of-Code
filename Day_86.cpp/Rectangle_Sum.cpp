#include<iostream>
using namespace std;

class Solution {
private:
    int rectangle_area(int x1, int y1, int x2, int y2) {
    return abs(x2 - x1) * abs(y2 - y1);
    }
    int overlapping_area(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int x_overlap = max(0, min(ax2, bx2) - max(ax1, bx1));
        int y_overlap = max(0, min(ay2, by2) - max(ay1, by1));
        return x_overlap * y_overlap;
}
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area_a = rectangle_area(ax1, ay1, ax2, ay2);
        int area_b = rectangle_area(bx1, by1, bx2, by2);
        int overlap = overlapping_area(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
        return area_a + area_b - overlap;
    }
};