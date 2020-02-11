#pragma once
class Vector2d
{
private:
	double x, y;
public: Vector2d();
	    ~Vector2d();

		Vector2d(double, double);
		Vector2d(double, double, double, double);
		Vector2d(const Vector2d& a);

		Vector2d operator+(const Vector2d& v) const;
		Vector2d operator-(const Vector2d& v) const;
		Vector2d operator*(const double &v) const;
		double operator*(const Vector2d& v) const;
		friend Vector2d operator*(double, Vector2d&);
		Vector2d& operator++();
		Vector2d& operator++(int);
		Vector2d& operator--();
		Vector2d& operator--(int);

		const Vector2d& operator += (const Vector2d& v);
		const Vector2d& operator -= (const Vector2d& v);
		const Vector2d& operator *= (const double& v);

		operator string(void);

		void setx(double);
		double getx();
		void sety(double);
		double gety();
		void print(void);
		Vector2d sum(Vector2d &);
		Vector2d sub(Vector2d &);
		Vector2d mult(double b);
		double scalarMult(Vector2d &);
		double length(void);
		double angleTan(Vector2d &);


};

