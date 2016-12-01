#include<iostream>
#include"VecMatrix.h"
#include<string>
#include<time.h>
#include<Windows.h>
#include<cassert>
#include<fstream>

const float pi = 3.141592653;
//const float pi = 3;
int main()
{
	Mat2 Matrices2D[4] = { Mat2(1,2,3,4),Mat2(5,6,7,8),Mat2(9,0,1,2),Mat2(3,4,5,6) };
	Mat3 Matrices3D[4] = { Mat3(1,2,3,4,5,6,7,8,9),Mat3(10,0,1,2,3,4,5,6,7),Mat3(8,9,10,0,1,2,3,4,5),Mat3(6,7,8,9,10,0,1,2,3) };
	Mat4 Matrices4D[4] = { Mat4(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16),Mat4(17,18,19,20,0,1,2,3,4,5,6,7,8,9,10,11),Mat4(12,13,14,15,16,17,18,19,20,0,1,2,3,4,5,6),Mat4(7,8,9,10,11,12,13,14,15,16,17,18,19,20,0,1) };
	Vector2 Vector2D[4] = { Vector2(1, 2),Vector2(3,4),Vector2(5,6),Vector2(7,8) };
	Vector3 Vector3D[4] = { Vector3(1,2,3),Vector3(4,5,6),Vector3(7,8,9),Vector3(10,0,1) };
	Vector4 Vector4D[4] = { Vector4(1,2,3,4),Vector4(5,6,7,8),Vector4(9,10,11,12),Vector4(12,13,14,15) };
	std::fstream test;
	test.open("Test File.txt", std::ios_base::out);
	test << "Matrix2 :\n\n";
	test << "Matrix2 * Matrix2:";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices2D[i / 4] * Matrices2D[i % 4];
		test << "\n";
	}
	test << "\nMatrix2 * Vector2:\n";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices2D[i / 4] * Vector2D[i % 4];
		test << "\n\n";
	}
	test << "\n\n\nMatrix3 :\n\n";
	test << "Matrix3 * Matrix3:";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices3D[i / 4] * Matrices3D[i % 4];
		test << "\n";
	}
	test << "\nMatrix3 * Vector3:\n";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices3D[i / 4] * Vector3D[i % 4];
		test << "\n\n";
	}
	test << "Matrix3 rotation: \n";
	test << "x axis:\n";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices3D[0].setRotateX((36 * pi) / 180);
		test << "\n\n";
	}




	/*test << "Matrix2:\n\n";
	test << "Matrix2 * Matrix2 Expected result: \n7,10\n15,22\n\n";
	test << "Result: " << a*a;
	test << "\n\n";
	test << "Matrix2 * Vector2 Expected result: <7,10>\n\n";
	test << "Result: " << a*d << "\n\n\n\n";
	test << "\n\nMatrix3:\n\n";
	test << "Matrix3 * Matrix3 Expected result:\n304,392,426\n145,173,120\n2332,3014,3300\n\n";
	test << "Result: " << b*b << "\n\n";
	test << "Matrix3 * Vector3 Expected result: <212,274,300>\n\n";
	test << "Result: " << b*e << "\n\n";
	test << "Matrix3 rotated around the x axis 42 degrees. Expected result: \n0.5,0.5389451464,0.2548296162\n0.4,0.88352023492,-0.48333839724\n0.57,0.71056055742,-0.12845115914\n\n";
	test << "Result : " << ToRotate3d.setRotateX((42 * pi) / 180);
	test << "\n\nMatrix3 rotated around the y axis 27.5 degrees. Expected result: \n0.325838193932817,0.5389451464,0.456910934374143\n0.577985165085198,0.88352023492,-0.244026948906722\n0.564908317285784,0.71056055742,0.149259138416766\n\n";
	test << "Result : " << ToRotate3d.setRotateY((27.5*pi) / 180);
	test << "\n\nMatrix3 rotated around the z axis by 64.8 degrees. Expected result: \n0.626570750380339,-0.0657453780956029,0.456083272108262\n1.04560450294656,-0.146956438553409,-0.244376071898875\n0.88358742156,-0.208871706195994,0.148687299033067\n\n";
	test << "Result : " << ToRotate3d.setRotateZ((64.8*pi) / 180);
	test << "\n\n";
	test << "Matrix4 * Matrix4 Expected result: \n4774,1947,2387,2827\n12210,6083,7579,9075\n1354,2261,3366,4471\n974,459,571,683\n\n";
	test << "Result: " << c*c;
	test << "\n\n";
	test << "Matrix4 * Vector4 Expected result: <1279,647,807,967>\n\n";
	test << "Result: " << c*f;
	test << "\n\nMatrix4 rotated around the x axis by 12.4 degrees. Expected result: \n0.16,1.09778300612,0.33610783592,0.75\n0.12,0.87964925799,-0.19033178016,0.5\n0.63,0.50657959014,0.79987881761,0.908\n0.3156,0.4941564022,0.1985181388,0.767";
	test << "\n\nResult: " << Rotate4d.setRotateX((12.4*pi) / 180);*/
	test.close();
	system("pause");
	return 0;
}