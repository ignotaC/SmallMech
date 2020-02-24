
#include "functions/errors.h"

#include <stdin.h>

int main ( void )  {

  double terms_factor;
  double validyty_factor;
  double material_factor;
  double dimention_factor;
  double safety_factor;

  puts( "Choose terms factor value" );
  puts( "1.) There was material endurance research and precise calculation method.");
  puts( "x_f = 1.1" );
  puts( "2.) We know material and use normal calculation" );
  puts( "x_f = from 1.2 to 1.4" );
  puts( "3.) Impact forces" );
  puts( "x_f = from 1.5 to 2.0" );
  if( scanf( "%lf", &terms_factor ) != 1 )  fail( "Scanf failure" );

  puts( "Choose validyty facotr" );
  puts( "1.) If damage will cause machine to stop" );
  puts( "x_v = from 1 to 1.1" );
  puts( "2.) Damage of module will damage whole machine" );
  puts( "x_v = from 1.1 to 1.2" );
  puts( "3.) Damage can cause accident" );
  puts( "x_v = from 1.3 to 1.5" );
  if( scanf( "%lf", &validyty_factor ) != 1 )  fail( "Scanf failure" );
  
  
  puts( "Choose material facotr" );
  puts( "" );
  if( scanf( "%lf", &terms_factor ) != 1 )  fail( "Scanf failure" );

  if( scanf( "%lf", &terms_factor ) != 1 )  fail( "Scanf failure" );

}
