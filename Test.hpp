#pragma once

namespace mystd {

template <typename Object>
class Vector final {
public:
	using Size = unsigned;
public:
	explicit Vector (Size size = Size {})
		: size { size }
	{

	}

	Vector(Vector const& rhs) = delete;
	Vector(Vector && rhs) = delete;
	Vector& operator=(Vector const& rhs) = delete;
	Vector& operator=(Vector && rhs) = delete;
	~Vector() = default;
	Size size() const {
		return mSize;
	}
private:
	Size size;
};

} // namespace mystd
