#include "stdafx.h"

void Polygon::parsePoints(const std::string& pointStr) {
    // Tái sử dụng logic parse points
    std::stringstream ss(pointStr);
    double value;
    int count = 0;
    Point currentPoint;

    while (ss >> value) {
        if (count % 2 == 0) {
            currentPoint.x = value;
        }
        else {
            currentPoint.y = value;
            points.push_back(currentPoint);
        }
        count++;
    }
}

Polygon::Polygon(const std::string& pointStr,
    const std::string& stroke, double width, const std::string& fill)
    // Polygon thường có fill mặc định (khác với Line/Polyline)
    : SVGElement(stroke, width, fill) {
    parsePoints(pointStr);
}

void Polygon::render() const {
    std::cout << "Rendering Polygon (Element: <polygon>):" << std::endl;
    std::cout << "  Points: ";
    for (const auto& p : points) {
        std::cout << "(" << p.x << ", " << p.y << ") ";
    }
    // Ghi chú việc hình dạng được đóng kín (kết nối điểm cuối với điểm đầu)
    std::cout << " (Closed)" << std::endl;
    std::cout << "  Stroke: " << stroke << ", Fill: " << fill << ", Width: " << strokeWidth << std::endl;
    // ... Thêm code gọi thư viện đồ họa thực tế tại đây ...
}