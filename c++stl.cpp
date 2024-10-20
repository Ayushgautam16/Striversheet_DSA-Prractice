// STL is one of the unique abilities of C++ which makes it stand out from every other programming language. STL stands for standard template library which contains a lot of pre-defined templates in terms of containers and classes which makes it very easy for developers or programmers to implement different data structures easily without having to write complete code and worry about space-time complexities.

// unordered_set in C++ STL
// Vector in C++ STL
// Set in C++ STL
// unordered_multiset in C++ STL
// multiset in C++ STL
// unordered_map in C++ STL
// map in C++ STL
// unordered_multimap in C++ STL
// queue in C++ STL
// stack in C++ STL
// deque in C++ STL
// priority_queue in C++ STL
// multimap in C++ STL
// list in C++ STL
// next_permutation in STL
// __builtin_popcount() in STL
// sort() in C++ STL
// min_element() in C++ STL
// max_element() in C++ STL


// algorithms
// containers  1.
// function
// iterators

// #include <bits/stdc++.h>
// using namespace std;

// void print()
// {
//     cout<<"ayush gautam "<<endl;
// }
// int sum(int a, int b)
// {
//     return a + b;
// }cout<<*it<<" "; 




// int main()
// {
// //     print(); 

// //    int s = sum(1, 2);
// //    cout<<s<<endl;
// // here voide function not returning anythinginside the funtion where as in the int sum  function returns the sum of the two number


//     return 0;
// }




// pair
// vector container
// vector is dynamic in nature whereas array are of fied size in the nature of storing the data inside of it 
#include <bits/stdc++.h>
using namespace std;
void explainPair()
{
    pair<int, int> p= {1,2};
    cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>> q= {1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second;
    
    pair<int ,int >arr[] ={{1,2},{3,4},{5,6},{7,8}};
    cout<<arr[1].second;
}

void explainvector()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.emplace_back(4);
    v.push_back(3);

    vector<pair<int,int>>vec;
    
        // v.push_back({1,2});
        v.emplace_back(1,2);

        vector<int> v(5,100);
        // creatin 5 instances of 100,100,100,100,100

        vector<int> v1(5,20);
        vector<int> v2(v1);

        // here 5 spaces fix of 20 but it can be dynamically allocated extended by the again push

        // v2 is making copy of the v1 here in this
    v.emplace_back(1,2);


    
}

void explainIterator(){
// iterator is basically pointing to the memory for the iteration
//     vector<int>::iterator it = m.begin();

//     it++;
    
//     // here basically print the position somewhere like second postion of the element
    

//     it = it +2;
//     cout<<*it<<" ";
//     // here it will print the 3rd position of the element

//     vector<int>::iterator it = m.end();
//     vector<int>::iterator it = m.rend();
//     vector<int>::iterator it = m.rbegin();

//     cout<< m.back() <<" ";



//     v.erase(v.begin()+1);

//     // here it will remove the second element from the vector

//     // v.erase(v.begin(),v.begin()+2);
//     // here it will remove the first two element from the vector

// // insert


//     v.insert(v.begin()+1,3);
//     // here it will insert 3 at the 2nd position of the vector

//     v.insert(v.end(),3);
//     // here it will insert 3 at the end of the vector

//     // v.insert(v.begin(),{1,2,3});
//     // here it will insert 1,2,3 at the start of the vector

//     // v.insert(v.begin()+1,{1,2,3});
//     // here it will insert 1,2,3 at the 2nd position of the vector

//     v.size
//     // here it will return the size of the vector
//     v.pop
//     // here it will remove the last element from the vector
//     v.clear
//     // here it will remove all the element from the vector
//     v.resize
    // here it will resize the vector to the specified size

    // v.shrink_to_fit
    // here it will reduce the capacity of the vector to the size of the vector











     
}

void explainstack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<" ";
    st.pop();
    cout<<st.top()<<" ";
    st.push(4);
    cout<<st.top()<<" ";
    st.pop();


    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;
    // st.swap(st2);
    // here it will swap the stack with the other stack

    cout<<st.empty();
    // here it will check the empty of the stack

    cout<<st.size();
    // here it will check the size and the empty of the stack

    // cout<<st.top;
    // here it will print the top element of the stack


}
// works on the concept of FIFO
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<" ";
    q.pop();
    cout<<q.front()<<" ";
    q.push(4);
    cout<<q.front()<<" ";
    q.pop();

    cout<<q.back()<<endl;

    cout<<q.front()<<endl;






    cout<<q.size()<<endl;
    // q.swap(q2);
    // here it will swap the queue with the other queue



    
}

void explainPriorityQueue(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    cout<<pq.top()<<" ";
    pq.pop();
    cout<<pq.top()<<" ";
    pq.push(4);
    cout<<pq.top()<<" ";
    pq.pop();
// here in pq basically all the operation works from the top pop push and pqq.top perform then the largest elmt will be going to  pop out from the queue




}

void explainSet(){
    // it stores elmt int he sorted order and stores the unique value each time

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);


    auto it = s.find(3);
    if(it!= s.end()){

        


    }





}

void multiSet(){
// there can be duplicate values in the set
    set<int> s1 = {1,2,3};
    set<int> s2 = {3,4,5};
    set<int> s3;
    for(auto x : s1){
        for(auto y : s2){
            s3.insert(x*y);
        }
    }
    for(auto x : s3){
        cout<<x<<" ";
    }

}

void explainUnorderset(){
    // it stores elmt in unsorted order and stores the unique value each time
}

void explainmap(){
    // it stores elmt in sorted order and stores the unique value each time

    // key value pair basically in the set

    map<string,int> m;
    m["ayush"] = 1;
    m["gautam"] = 2;
    m["kumar"] = 3;

    map<int,int> mpp;
    map<int,pair<int, int>>mpp;
    // mpp[1] = {1,2};

}

void multimap(){
    // there can be duplicate values in the multimap
    
}

void sortingalgo(){
    // bubble sort, insertion sort, selection sort, merge sort, quick sort, heap sort, radix sort

    // sort(a,a+n);    it sorts by simple one line of code a = first elmt and a+n = last elmt
    // sort(v.begin(),v.end()); here we sort by simple one line of code in a vectpr also a = first elmt and a

    // sort(a+2,a+4);
    // sort(arr,arr+5); here we sort by simple one line of code in an array also a = first elmt and a+5 = last elmt

    // sort(a,a+n,greater<int>);



    
}

int main(){
    // explainPair();
    
//   explainPriorityQueue();

 explainSet();



    return 0;

}



