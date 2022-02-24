/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2021 : 12 : 24                                           *
 ***************************************************************************/
#include <iostream>

using namespace std;
void
f1 ()
{
  std::cout << "in f1" << std::endl;
  throw (100);

  cout << "out f1" << endl;
}

void
f2 ()
{
  std::cout << "in f2" << std::endl;
  try
  {
    f1 ();
  }
  catch (int i)
  {
    cout << "Caught exeption - " << i << endl;
  }
  cout << "out f2" << endl;
}

void
f3 ()
{
  std::cout << "in f3" << std::endl;
  f2 ();
  cout << "out f3" << endl;
}

int
main ()
{
  cout << "in main" << endl;
  f3 ();
  cout << "out main" << endl;

  return 0;
}
