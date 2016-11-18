#include<iostream>
#include"VecMatrix.h"
#include<string>
#include<time.h>
#include<Windows.h>
#include<cassert>
#include<fstream>

const float pi = 3.141592653;
int main()
{
	Mat2 a = Mat2(1, 2, 3, 4);
	Mat3 b = Mat3(5, 6, 7, 8, 9, 1, 33, 44, 55);
	Mat4 c = Mat4(11, 22, 33, 44, 55, 66, 77, 88, 99, 1, 2, 3, 4, 5, 6, 7);
	Mat3 ToRotate3d = Mat3(.5, .23, .55, .4, .98, .232, .57, .614, .38);
	Mat4 Rotate4d = Mat4(.16, 1, .564, .75, .12, .9, .003, .5, .63, .323, .89, .908, .3156, .44, .3, .767);
	Vector2 d = Vector2(1, 2);
	Vector3 e = Vector3(3, 4, 5);
	Vector4 f = Vector4(6, 7, 8, 9);
	std::fstream test;
	test.open("Test File.txt", std::ios_base::out);
	test << "Matrix2:\n\n";
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
	test << "\n\nResult: " << Rotate4d.setRotateX((12.4*pi) / 180);
	test.close();
	system("pause");
	return 0;
}

