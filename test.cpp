#include "test.h"
void test::test1()
{
  cout << "---isEnpty() Function Test---" << endl;
  cout << "Returing correct value ";
  if (test_A.isEmpty())
  {
    cout << "when queue is empty: Passed. " << endl;
    test_A.enqueue(1);
    cout << "Returing correct value ";
    if (!test_A.isEmpty())
    {
      cout << "after enqueue: Passed." << endl;
      test_A.dequeue();
      cout << "Returing correct value ";
      if (test_A.isEmpty())
      {
        cout << "after dequeue: Passed." << endl;
      }
      else
      {
        cout << "after dequeue: fails." << endl;
      }
    }
    else
    {
      cout << "after enqueue: fails." << endl;
    }
  }
  else
  {
    cout << "when empty Queue: fails." << endl;
  }
}

void test::test2()
{
  cout << "---Enqueue() Function Test---" << endl;
  cout << "Part A" << endl;
  cout << "Enqueue a new entery to the queue" << endl;
  test_B.enqueue(1);
  if (!test_B.isEmpty())
  {
    try
    {
      test_B.dequeue();
      cout << "Enqueue a new entery: Passed" << endl;
    }
    catch (std::runtime_error &t)
    {
      cout << "Enqueue a new entery: fails (passible pointer error or dequeue funtion)" << endl;
    }
  }
  else
  {
    cout << "Enqueue a new entery: fails" << endl;
  }
  cout << endl;
  cout << "Part B" << endl;
  cout << "Enqueue two new enteries to the queue" << endl;
  bool flag = false;
  cout << "-->Enqueue number 1 to the queue" << endl;
  test_B.enqueue(1);
  cout << "-->Enqueue number 2 to the queue" << endl;
  test_B.enqueue(2);
  cout << "Excpet front --> 1 --> 2 --> back" << endl;
  cout << "Actual front --> ";
  if (test_B.peekFront() == 1)
  {
    cout << test_B.peekFront() << " --> ";
    test_B.dequeue();
    if (test_B.peekFront() == 2)
    {
      cout << test_B.peekFront();
      test_B.dequeue();
      flag = true;
    }
  }
  else
  {
    cout << test_B.peekFront() << " --> ";
    test_B.dequeue();
    cout << test_B.peekFront();
    test_B.dequeue();
    flag = false;
  }
  cout << " --> back" << endl;
  if (flag)
  {
    cout << "Queue order test: Passed" << endl;
  }
  else
  {
    cout << "Queue enqueue order test: fails" << endl;
  }
}
void test::test3()
{
  cout << "---Dequeue() Function Test---" << endl;
  cout << "Part A"<<endl;
  cout<< "Dequeue Empty Queue"<<endl;
  try
  {
    test_B.dequeue();
    cout<<"Dequeue the empty queue: fails"<<endl;
  }
  catch(std::runtime_error & r)
  {
    cout<<"Dequeue the empty queue: Passed (runtime error has been catched)"<<endl;
  }
  cout<<endl;
  cout<<"Part B"<<endl;
  cout<<"Dequeue After Enqueue a Number"<<endl;

  try{
    test_B.enqueue(1);
    test_B.dequeue();
    if(test_B.isEmpty())
    {
      cout<<"Dequeue queue: Passed"<<endl;
    }}
    catch(std::runtime_error & r){
      cout<<"Dequeue queue: fails (runtime error has been catched)"<<endl;

    }
  }
  void test::test4()
  {
    cout<<"---PeekFront() Funtion Test---"<<endl;
    cout<<"Part A"<<endl;
    cout<<"Peek a Empty Queue"<<endl;
    try{
      test_B.peekFront();
      cout<<"Peek Empty queue: fails (no error catched)"<<endl;
    }
    catch(std::runtime_error & t)
    {
      cout<<"Peek Empty queue: Passed (runtime error has been catched)"<<endl;
    }
    cout<<endl;
    cout<<"Part B"<<endl;
    cout<<"Peek a Queue With One Number in Queue"<<endl;
    test_B.enqueue(1);
    try{
      test_B.peekFront();
      if(test_B.peekFront()==1)
      {
        cout<<"Peek queue with one number: Passed"<<endl;
      }
    }
    catch(std::runtime_error & t)
    {
      cout<<"Peek queue with one number: fails (runtime error has been catched)"<<endl;
    }
    test_B.dequeue();
    cout<<endl;
    cout<<"Part C"<<endl;
    cout<<"Peek a Queue With two Number"<<endl;
    cout << "-->Enqueue number 1 to the queue" << endl;
    test_B.enqueue(1);
    cout << "-->Enqueue number 2 to the queue" << endl;
    test_B.enqueue(2);
    cout << "Excpet front --> 1 --> 2 --> back" << endl;
    try{
      test_B.peekFront();
      if(test_B.peekFront()!=1)
      {
        cout<<"Actual front --> "<<test_B.peekFront()<<endl;
        cout<<"Peek queue with two number: fails"<<endl;
      }
      else
      {
        cout<<"Actual front --> "<<test_B.peekFront()<<endl;
        cout<<"Peek queue with two number: Passed"<<endl;
      }
    }
    catch(std::runtime_error & t)
    {
      cout<<"Peek queue with two number: fails (runtime error has been catched)"<<endl;
    }
    test_B.dequeue();
    test_B.dequeue();
  }

  void test::testEx()
  {
    //memory test
    //test_A.enqueue(222);
  }



void test::run()
{
  cout<<"----Test Program----"<<endl;
  cout<<endl;
  test1();
  cout<<endl;
  test2();
  cout<<endl;
  test3();
  cout<<endl;
  test4();
  cout<<endl;
  cout<<"----Test Program Ends----"<<endl;
  testEx();
}
