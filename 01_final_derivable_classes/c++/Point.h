class Point final {
};

// Try to subclass Point. This should throw compiler error because
// Point can not be subclassed due to the final keyword!
class Point2 : public Point {
};
