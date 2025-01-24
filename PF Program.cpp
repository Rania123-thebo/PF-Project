#include <iostream>
#include <cmath>
using namespace std;
int main()

{   

    int choice, categries;
    
    cout<<" ---------------------------------------------- " <<endl;
    cout<<"   1. calculated the Area of different shapes " <<endl;
    cout<<" ---------------------------------------------- " <<endl;
    cout<<"\n";
    
    
	cout<<" --------------------------------------------------- " <<endl;    
    cout<<"   2. calculated Circumference of different shapes " <<endl;
    cout<<" --------------------------------------------------- " <<endl;
    cout<<"\n";
    
    cout<<" --------------------------------------------------- " <<endl;    
    cout<<"   3. calculated Perimeter of different shapes " <<endl;
    cout<<" --------------------------------------------------- " <<endl;
    cout<<"\n";
    
    cout<<" ------------------------------------------------------ " <<endl;	
    cout<<"   4. calculate the Volume of different shapes " <<endl;
    cout<<" ------------------------------------------------------ " <<endl;
    cout<<"\n";
    
    
    
    cout<< "Enter the categry in which you can calculated theses terms : " <<endl;
    cin>> categries;
    cout<<"\n";
    
    switch (categries)
    {
    	
    case 1:
    	
    cout<<" ---------------------------------------------- " <<endl;		
    cout<<"   1. calculated the Area of different shapes " <<endl;
    cout<<" ---------------------------------------------- " <<endl;
    cout<<"\n";
	
    double Area_of_Circle, Area_of_Square, Area_of_Rectangle, Area_of_Triangle, Area_of_Parallelogram, Area_of_Trapizum, Area_of_Rhombus, Area_of_Ellipse, radius, length, width, base, height, base_1, base_2, diagonal_1, diagonal_2, semi_major_axix, semi_minor_axix, Area_Base, circumference_of_Circle, Perimerter_of_Square, Perimerter_of_Rectangle, Perimerter_of_Triangle, Perimerter_of_Parallelogram, Perimerter_of_Trapizum, Perimerter_of_Rhombus, Perimerter_of_Ellipse, a, b, c, d, l, h, r, side_length, Volume_of_Cube, Volume_of_Cuboid, Volume_of_Sphere, Volume_of_Cylinder, Volume_of_Cone, Volume_of_Hemisphere, Volume_of_Pyramid;
	 
	cout<<" 1. Area of a Cirlce " <<endl;
	cout<<" 2. Area of a Square " <<endl;
	cout<<" 3. Area of a Rectangle " <<endl;
	cout<<" 4. Area of a Triangle " <<endl;
	cout<<" 5. Area of a Parallelogram " <<endl;
	cout<<" 6. Area of a Trapizum  " <<endl;
	cout<<" 7. Area of a Rhombus " <<endl;
	cout<<" 8. Area of a Ellipse " <<endl;
	cout<<"\n";
	
    cout<< "Enter your choice for which area is calculated: " <<endl;
    cin>> choice;
    cout<<"\n";
    
    
    switch (choice)
    {
    	
    case 1:
    cout<<" 1. Area of a Cirlce " <<endl;
    
   	cout<<" Enter the value of Radius of a Circle :" <<endl;
   	cin>>radius;
    	
    Area_of_Circle = 3.142 * pow(radius,2);
    	
    cout<<" The Area of a Circle :"<< Area_of_Circle <<endl;
    break;
    		 
    case 2:
    cout<<" 2. Area of a Square " <<endl;
    
    cout<<" Enter the value length of a Square :"<<endl;
    cin>>length;
    	
    Area_of_Square = length * length;
    	
    cout<<" The Area of a Square :"<< Area_of_Square <<endl;
    break;
    	
    	 
    case 3:
    cout<<" 3. Area of a Rectangle " <<endl;
	    	cout<<" Enter the value of length of a Rectangle :" <<endl;
    cin>>length;
    cout<<"Enter the value of width of a Rectangle :"<<endl;
    cin>>width;
    	
    Area_of_Rectangle = length * width;
    	
    cout<<"The Area of Rectangle :"<< Area_of_Rectangle <<endl;
    break;
    	
    	
    case 4:
    cout<<" 4. Area of a Triangle " <<endl;
    	
    cout<<" Enter the value of Base of a Triangle  :" <<endl;
    cin>>base;
    cout<<" Enter the value of Height of a Triangle :" <<endl;
    cin>>height;
    	
    Area_of_Triangle = ((base * height)/2);
    	
    cout<<" The Area of Triangle :"<< Area_of_Triangle <<endl;
    break;
    	
    	
    case 5:
    cout<<" 5. Area of a Parallelogram " <<endl;
    		
    cout<<" Enter the value of Base of a Parallelogram :" <<endl;
    cin>>base;
    cout<<"Enter the value of Height of a Parallelogram :" <<endl;
    cin>>height;
    	
    Area_of_Parallelogram = (base * height);
    	
    cout<<" The Area of a Parallelogram :"<< Area_of_Parallelogram <<endl;
    break;
    	
    	
    case 6:
    cout<<" 5. Area of a Trapizum " <<endl;
		
    cout<<" Enter the value of Base_1 of a Trapizum :" <<endl;
    cin>>base_1 ;
    cout<<" Enter the value of Base_2 of a Trapizum :" <<endl;
    cin>>base_2;
    cout<<" Enter the value of Height of a Trapizum :" <<endl;
    cin>>height;
    	
    Area_of_Trapizum  = (((base_1 + base_2) * height) / 2);
    	
    cout<<" The Area of a Trapizum :"<< Area_of_Trapizum <<endl;
    break;
    	
    	
    case 7:
    cout<<" 5. Area of a Rhombus " <<endl;
    		
    cout<<" Enter the value Diagonal_1 of a Rhombus : " <<endl;
    cin>>diagonal_1;
    cout<<" Enter the value Diagonal_2 of a Rhombus : " <<endl;
    cin>>diagonal_2;
    	
    Area_of_Rhombus = ((diagonal_1 * diagonal_2) / 2);
    	
    cout<<" The Area of Rhombus : "<< Area_of_Rhombus <<endl;
    break;
    	
    	
    case 8:
    cout<<" 5. Area of Ellipse " <<endl;
    		
    cout<<" Enter the value of Semi_Major_Axix of a Ellipse : " <<endl;
    cin>>semi_major_axix;
    cout<<" Enter the value of Semi_Minor_Axix of a Ellipse : " <<endl;
    cin>>semi_minor_axix;
    	
    Area_of_Ellipse = (3.142 * (semi_major_axix * semi_minor_axix));
    	
    cout<<" The Area of Ellipse : " << Area_of_Ellipse <<endl;
    break;
    	
		
	default:
	cout<<" This is Invalid choice " <<endl;
	break;
    			
    }
    break;
    
    case 2:
    cout<<"\n";
    	
    cout<<" ------------------------------------------------------ " <<endl;	
    cout<<"   2. calculate the Circumference of different shapes " <<endl;
    cout<<" ------------------------------------------------------ " <<endl;
    cout<<"\n";
    
    cout<< "Enter your choice for which circumference is calculated: " <<endl;
    cin>> choice;
    
    switch (choice)
    {
    	
    case 1:
    cout<<"\n";
    cout<<" 1. circumference  of a Cirlce " <<endl;
    
   	cout<<" Enter the value of Radius of circumference of a circle :" <<endl;
    cin>>radius;
    	
    circumference_of_Circle = 3.142 * (2*radius);
    	
    cout<<" The circumference  of a Circle :"<<  circumference_of_Circle  <<endl;
    break;
    
    default:
	cout<<" This is Invalid choice " <<endl;
	break;
    
}
    case 3:
    cout<<"\n";
    	
    cout<<" ------------------------------------------------------ " <<endl;	
    cout<<"   3. calculate the Perimerter of different shapes " <<endl;
    cout<<" ------------------------------------------------------ " <<endl;
    cout<<"\n";
    
	cout<<" 1. Perimeter of a Square " <<endl;
	cout<<" 2. Perimeter of a Rectangle " <<endl;
	cout<<" 3. Perimeter of a Triangle " <<endl;
    cout<<" 4. Perimeter of a Parallelogram " <<endl;
    cout<<" 5. Perimeter of a Trapizum " <<endl;
    cout<<" 6. Perimeter of a Rhombus " <<endl;    

    cout<< "Enter your Choice for which perimeter is calculated: " <<endl;
    cin>> choice;
    
    switch (choice)
    {
    	
    case 1:
    cout<<"\n";
    cout<<" 1. The Perimerter of a Square " <<endl;
    
   	cout<<" Enter the value of side of perimerter of a Square  :" <<endl;
    cin>>radius;
    	
    Perimerter_of_Square = 3.142 * (2*radius);
    	
    cout<<" The Perimerter of a Square :"<< Perimerter_of_Square  <<endl;
    break;
    
    case 2:
    cout<<"\n";
    cout<<" 2. The Perimerter of a Rectangle  " <<endl;
    
   	cout<<" Enter the value of side of perimerter of a Rectangle  :" <<endl;
    cin>>radius;
    	
    Perimerter_of_Rectangle = 3.142 * (2*radius);
    	
    cout<<" The Perimerter of a Rectangle :"<< Perimerter_of_Rectangle <<endl;
    break;
    
    case 3:
    cout<<"\n";
    cout<<" 3. The Perimerter of a Triangle  " <<endl;
    
   	cout<<" Enter the value of a of perimerter of a Triangle  :" <<endl;
    cin>>a;
    
    cout<<" Enter the value of b of perimerter of a Triangle  :" <<endl;
    cin>>b;
    
    cout<<" Enter the value of c of perimerter of a Triangle  :" <<endl;
    cin>>c;
    	
    Perimerter_of_Triangle = (a + b + c);
    	
    cout<<" The Perimerter of a Triangle :"<< Perimerter_of_Triangle <<endl;
    break;
    
    case 4:
    cout<<"\n";
    cout<<" 4. The Perimerter of a Parallelogram   " <<endl;
    
   	cout<<" Enter the value of a of perimerter of a Parallelogram  :" <<endl;
    cin>>a;
    
    cout<<" Enter the value of b of perimerter of a Parallelogram :" <<endl;
    cin>>b;
    	
    Perimerter_of_Parallelogram = (2 * (a + b));
    	
    cout<<" The Perimerter of a Parallelogram :"<< Perimerter_of_Parallelogram <<endl;
    break;
    
    case 5:
    cout<<"\n";
    cout<<" 5. The Perimerter of a Trapizum " <<endl;
    
   	cout<<" Enter the values ofa and b are the lengths of the parallel sides (the bases) of perimeter of Trapizum  :" <<endl;
    cin>>a;
    cin>>b;
    
    cout<<" Enter the values of c and d are the lengths of the non-parallel sides (the legs) of perimerter of a Trapizum :" <<endl;
    cin>>c;
    cin>>d;
		
    Perimerter_of_Trapizum = (a + b + c + d);
    	
    cout<<" The Perimerter of a  Trapizum :"<< Perimerter_of_Trapizum <<endl;
    break;
    
    case 6:
    cout<<"\n";
    cout<<" 6. The Perimerter of a Rhombus " <<endl;
    
    //where the side length is the length of one of the sides of the rhombus. Since all sides of a rhombus are equal in length, the perimeter is simply four times the length of one side.

    cout<<" Enter the values of side length of perimerter of a Rhombus :" <<endl;
    cin>>side_length;
    
    Perimerter_of_Rhombus = (4 * (side_length));
    	
    cout<<" The Perimerter of a Rhombus :"<< Perimerter_of_Rhombus <<endl;
    break;
    
    default:
	cout<<" This is Invalid choice " <<endl;
	break;
    
    
}
    break;
    
    case 4:
    cout<<"\n";
    
    cout<<" ------------------------------------------------------ " <<endl;	
    cout<<"   4. calculate the Volume of different shapes " <<endl;
    cout<<" ------------------------------------------------------ " <<endl;
    cout<<"\n";
    
    cout<<" 1. Volume of a Cube " <<endl;
	cout<<" 2. Volume of a Cuboid " <<endl;
	cout<<" 3. Volume of a Sphere " <<endl;
    cout<<" 4. Volume of a Cylinder " <<endl;
    cout<<" 5. Volume of a Cone " <<endl;
    cout<<" 6. Volume of a Hemisphere " <<endl; 
	cout<<" 7. Volume of a Pyramid " <<endl;    
   

    cout<< "Enter your Choice for which Volume is calculated: " <<endl;
    cin>> choice;
    
    switch (choice)
    {
    	
    case 1:
    cout<<"\n";
    cout<<" 1. The Volume of a  Cube " <<endl;
    
   	cout<<" Enter the value of side of Volume of a  Cube :" <<endl;
    cin>>a;
    Volume_of_Cube = pow(a,3);
    	
    cout<<" The Volume of a  Cube :"<< Volume_of_Cube <<endl;
    break;
    
    case 2:
    cout<<"\n";
    cout<<" 2. The Volume of a Cuboid " <<endl;
    
    cout<<" Enter the value of length of a Cuboid :" <<endl;
    cin>>l;
    
    cout<<" Enter the value of  breadth of a Cuboid :" <<endl;
    cin>>b;
    
    cout<<" Enter the value of hight of Volume of a Cuboid :" <<endl;
    cin>>h;
    	
    Volume_of_Cuboid = (l * b * h);
    	
    cout<<" The Volume of a Cuboid :"<< Volume_of_Cuboid <<endl;
    break;
    
    case 3:
    cout<<"\n";
    cout<<" 3. The Volume of a Sphere " <<endl;
    
   	cout<<" Enter the value of a radius of Volume of a Square  :" <<endl;
    cin>>radius;
    	
    Volume_of_Sphere = (4/3 * (3.142 * (r,2)));
    	
    cout<<" The Volume of a Sphere :"<< Volume_of_Sphere <<endl;
    break;
    
    case 4:
    cout<<"\n";
    cout<<" 4. The Volume of a Cylinder " <<endl;
    
    cout<<" Enter the value of a radius of Volume of a Square  :" <<endl;
    cin>>radius;
    
   	cout<<" Enter the value of height of a Cylinder :" <<endl;
    cin>>h;
    	
    Volume_of_Cylinder =  (3.142 * (r,2) * h);
    	
    cout<<"  Volume of a Cylinder :"<< Volume_of_Cylinder <<endl;
    break;
    
    case 5:
    cout<<"\n";
    cout<<" 5. The  Volume of a Cone " <<endl;
    
    cout<<" Enter the value of a radius of Volume of a Square  :" <<endl;
    cin>>radius;
    
    cout<<" Enter the values of height of Volume of a Cone :" <<endl;
    cin>>h;
		
    Volume_of_Cone = (1/3 * (3.142 * pow(r,2) * h));
    	
    cout<<"  Volume of a Cone :"<< Volume_of_Cone <<endl;
    break;
    
    case 6:
    cout<<"\n";
    cout<<" 6. The Volume of a Hemisphere " <<endl;
    
    cout<<" Enter the value of a radius of Volume of a Hemishere  :" <<endl;
    cin>>radius;
    
    Volume_of_Hemisphere = (2/3 * (3.142 * (r,3)));
    	
    cout<<" The Volume of a Hemisphere :"<< Volume_of_Hemisphere <<endl;
    break;
    
    case 7:
    cout<<"\n";
    cout<<" 7. The Volume of a Pyramid " <<endl;
    
    cout<<" Enter the value of Area_Base of Volume of a Pyramid :" <<endl;
    cin>>Area_Base;
    
    cout<<" Enter the values of height of Volume of a Pyramid :" <<endl;
    cin>>h;
    
    Volume_of_Pyramid = (1/3 * (Area_Base * h));
    	
    cout<<" The Volume of a Pyramid :"<< Volume_of_Pyramid <<endl;
    break;

    default:
	cout<<" This is Invalid choice " <<endl;
	break;
    
}
    break;   	
      
}
  return 0;
}

