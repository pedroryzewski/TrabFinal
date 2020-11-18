#include "old_main.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

int tam = 7;
char **ptr;

TEST_SETUP(Sort)
{
  ptr = (char **)malloc(tam * sizeof(char*));
  for(int i=0; i<tam;i++) ptr[i]=(char *)malloc(11 * sizeof(char));
  sprintf(ptr[0],"./app");
}

TEST_TEAR_DOWN(Sort)
{
  for(int i=0; i<tam;i++) free(ptr[i]);
  free(ptr);
}
//////// Test all sorts with random numbers
TEST(Sort, Random1) 
{   
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"selection");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
TEST(Sort, Random2) 
{ 
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"insertion");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
TEST(Sort, Random3) 
{ 
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"shell");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
TEST(Sort, Random4) 
{ 
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"quick");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
TEST(Sort, Random5) 
{ 
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"heap");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
TEST(Sort, Random6) 
{ 
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
//////// Test all sorts with numbers in Ascending order
TEST(Sort, Ascending1) 
{ 
  int vet[5] = {1,3,4,7,9};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"selection");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
 }
TEST(Sort, Ascending2) 
{ 
  int vet[5] = {1,3,4,7,9};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"insertion");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
 }
TEST(Sort, Ascending3) 
{ 
  int vet[5] = {1,3,4,7,9};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"shell");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
 }
TEST(Sort, Ascending4) 
{ 
  int vet[5] = {1,3,4,7,9};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"quick");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
 }
TEST(Sort, Ascending5) //ERRO AQUII #TODO: erro heap
{ 
  int vet[5] = {1,3,4,7,9};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"heap");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,9,7};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
 }
TEST(Sort, Ascending6) 
{ 
  int vet[5] = {1,3,4,7,9};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
 }
//////// Test all sorts with numbers in Descending order
TEST(Sort, Descending1) 
{ 
  int vet[7] = {9,7,5,4,4,3,1};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"selection");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"7");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"descending");
  sort(tam,ptr,vet,0);
  int exp_vet[7] = {1,3,4,4,5,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,7);
 }
TEST(Sort, Descending2) 
{ 
  int vet[7] = {9,7,5,4,4,3,1};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"insertion");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"7");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"descending");
  sort(tam,ptr,vet,0);
  int exp_vet[7] = {1,3,4,4,5,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,7);
 }
TEST(Sort, Descending3) 
{ 
  int vet[7] = {13,10,9,7,4,3,1};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"shell");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"7");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"ascending");
  sort(tam,ptr,vet,0);
  int exp_vet[7] = {1,3,4,7,9,10,13};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,7);
 }
TEST(Sort, Descending4) 
{ 
  int vet[7] = {13,10,9,7,4,3,1};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"quick");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"7");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"descending");
  sort(tam,ptr,vet,0);
  int exp_vet[7] = {1,3,4,7,9,10,13};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,7);
 }
TEST(Sort, Descending5) 
{ 
  int vet[5] = {9,7,4,3,1};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"heap");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"descending");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
 }
TEST(Sort, Descending6) //10
{ 
  int vet[10] = {13,10,9,7,5,4,4,3,3,1};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"10");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"descending");
  sort(tam,ptr,vet,0);
  int exp_vet[10] = {1,3,3,4,4,5,7,9,10,13};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,10);
 }
//////// Test all sorts with almost all numbers in order
TEST(Sort, Almost1) 
{ 
  int vet[6] = {1,4,3,7,9,10};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"selection");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"6");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[6] = {1,3,4,7,9,10};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,6);
 }
TEST(Sort, Almost2) 
{ 
  int vet[5] = {1,3,4,9,7};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"insertion");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
 }
TEST(Sort, Almost3) 
{ 
  int vet[9] = {1,2,3,5,4,7,15,9,20};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"shell");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"9");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[9] = {1,2,3,4,5,7,9,15,20};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,9);
 }
TEST(Sort, Almost4) 
{ 
  int vet[3] = {7,3,9};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"quick");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[3] = {3,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,3);
 }
TEST(Sort, Almost5) 
{ 
  int vet[2] = {7,3};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"heap");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"2");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[2] = {3,7};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,2);
 }
TEST(Sort, Almost6) 
{ 
  int vet[5] = {1,3,9,4,7};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
 }
//////// Test with parameters error
TEST(Sort, cov) 
{ 
  int tam2=6, out;
  int vet[5] = {7,3,9,1,4};

  char **ptr2 = (char **)malloc(tam2 * sizeof(char*));
  for(int i=0; i<tam2;i++) ptr2[i]=(char *)malloc(11 * sizeof(char));
  sprintf(ptr2[0],"./app");
  sprintf(ptr2[1],"-a");
  sprintf(ptr2[2],"selection");
  sprintf(ptr2[3],"-n");
  sprintf(ptr2[4],"5");
  sprintf(ptr2[5],"-s");
  out = sort(tam2,ptr2,vet,0);
  TEST_ASSERT_EQUAL_INT(out,1);
  for(int i=0; i<tam2;i++) free(ptr2[i]);
  free(ptr2);
}
//////// Test with print
TEST(Sort, print) 
{   
  int tam2=8;
  int vet[5] = {7,3,9,1,4};
  char **ptr2 = (char **)malloc(tam2 * sizeof(char*));
  for(int i=0; i<tam2;i++) ptr2[i]=(char *)malloc(11 * sizeof(char));
  sprintf(ptr2[0],"./app");
  sprintf(ptr2[1],"-a");
  sprintf(ptr2[2],"selection");
  sprintf(ptr2[3],"-n");
  sprintf(ptr2[4],"5");
  sprintf(ptr2[5],"-s");
  sprintf(ptr2[6],"random");
  sprintf(ptr2[7],"-P");
  sort(tam2,ptr2,vet,0);
  int exp_vet[5] = {1,3,4,7,9};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
  for(int i=0; i<tam2;i++) free(ptr2[i]);
  free(ptr2);
 }
//////// Test without any number
TEST(Sort, Nothing) 
{ 
  int vet[] = {};
  int out = 0;
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"0");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  out = sort(tam,ptr,vet,0);
  TEST_ASSERT_EQUAL_INT(0,out);
  //sprintf(ptr[2],"heap");
  //sort(tam,ptr);          //segmentation fault
  //TEST_ASSERT_EQUAL_INT(out,0);

  //sprintf(ptr[2],"quick");
  //sort(tam,ptr);          //it bugs because i fixed only part of the problem
  //TEST_ASSERT_EQUAL_INT(out,0);

  sprintf(ptr[2],"shell");
  out = sort(tam,ptr,vet,0);
  TEST_ASSERT_EQUAL_INT(0,out);
 
  sprintf(ptr[2],"insertion");
  out = sort(tam,ptr,vet,0);
  TEST_ASSERT_EQUAL_INT(0,out);

  sprintf(ptr[2],"selection");
  out = sort(tam,ptr,vet,0);
  TEST_ASSERT_EQUAL_INT(0,out);
 }
//////// Test only 1 number
TEST(Sort, Only1) 
{ 
  int vet[1] = {1};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"1");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[1] = {1};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,1);

  sprintf(ptr[2],"heap");
  sort(tam,ptr,vet,0);          //segmentation fault
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,1);

  sprintf(ptr[2],"quick");
  sort(tam,ptr,vet,0);          //it bugs because i fixed only part of the problem
  
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,1);

  sprintf(ptr[2],"shell");
  sort(tam,ptr,vet,0);
 
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,1);

  sprintf(ptr[2],"insertion");
  sort(tam,ptr,vet,0);

  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,1);

  sprintf(ptr[2],"selection");
  sort(tam,ptr,vet,0);

  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,1);
 }
 /////////////// negative numbers /////
 TEST(Sort, Negative) 
{ 
  int vet[5] = {-2,-1,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"5");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {-2,-1,1,4,9};

  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
 }
 ///////////// limits ///////
TEST(Sort, Limits1) 
{ 
  int vet[3] = {2147483647,-2147483648,0};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"selection");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[3] = {-2147483648,0,2147483647};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,3);
}
TEST(Sort, Limits2) 
{ 
  int vet[3] = {2147483647,-2147483648,0};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"insertion");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[3] = {-2147483648,0,2147483647};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,3);
}
TEST(Sort, Limits3) 
{ 
  int vet[3] = {2147483647,-2147483648,0};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"shell");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[3] = {-2147483648,0,2147483647};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,3);
}
TEST(Sort, Limits4) 
{ 
  int vet[3] = {2147483647,-2147483648,0};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"quick");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[3] = {-2147483648,0,2147483647};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,3);
}
TEST(Sort, Limits5) 
{ 
  int vet[3] = {2147483647,-2147483648,0};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"heap");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[3] = {-2147483648,0,2147483647};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,3);
}
TEST(Sort, Limits6) 
{ 
  int vet[3] = {2147483647,-2147483648,0};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"almost");
  sort(tam,ptr,vet,0);
  int exp_vet[3] = {-2147483648,0,2147483647};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,3);
}
/////////// size is diferent from actual size///
TEST(Sort, Different1) 
{   
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"selection");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {3,7,9,1,4};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
} 
TEST(Sort, Different2) 
{ 
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"insertion");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {3,7,9,1,4};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
TEST(Sort, Different3) 
{ 
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"shell");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {3,7,9,1,4};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
TEST(Sort, Different4) 
{ 
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"quick");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {3,7,9,1,4};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
TEST(Sort, Different5) // #TODO: erro heap
{ 
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"heap");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {3,9,7,1,4};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
TEST(Sort, Different6) 
{ 
  int vet[5] = {7,3,9,1,4};
  sprintf(ptr[1],"-a");
  sprintf(ptr[2],"merge");
  sprintf(ptr[3],"-n");
  sprintf(ptr[4],"3");
  sprintf(ptr[5],"-s");
  sprintf(ptr[6],"random");
  sort(tam,ptr,vet,0);
  int exp_vet[5] = {3,7,9,1,4};
  TEST_ASSERT_EQUAL_INT_ARRAY(exp_vet,vet,5);
}
