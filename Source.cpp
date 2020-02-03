#include<iostream>
#include<fstream>
using namespace std;
class queue{
private:
	int *arr;
	int front;
	int rear;
	int capacity=8;
	int noe;
public:
	//queue(){}
	queue(){
		capacity = 8;
		arr = new int[capacity];
		front = -1;
		rear = -1;
		noe = 0;
	}
	bool is_full(){
		if (noe == capacity){
			return true;
		}
		else{
			return false;
		}
	}
	bool is_empty(){
		if (noe == 0){
			return true;
		}
		else{
			return false;
		}
	}
	void enqueue(int x){
		if (!is_full()){
			noe++;
			arr[(++front) % capacity] = x;
		}
	}
	int dequeue(){
		if (!is_empty()){
			noe--;
			return arr[(++rear) % capacity];
		}
	}
	void print_queue(){
		for (int i = (rear + 1); i <= front; i++){
			cout << arr[i%capacity];
		}
	}
};
int main(){
	int x;
	queue q;
	fstream file;
	int user;
	cin >> user;
	if (user == 1){
		file.open("Text.txt", ios::out);
		if (!file)
		{
			cout << "Error in creating file.." << endl;
			return 0;
		}
		cout << "\nFile created successfully." << endl;
		cout << "enter the number" << endl;
		for (int i = 0; i < 5; i++){
			cin >> x;
			q.enqueue(x);
			file << x << endl;
		}
		
	}
	if (user == 2){
		file.open("Text.txt", ios::out);
		if (!file)
		{
			cout << "Error in creating file.." << endl;
			return 0;
		}
		cout << "\nFile created successfully." << endl;
		q.print_queue();
	}
	if (user == 3){
		file.open("Text.txt", ios::in);
		x = q.dequeue();
		cout << x << endl;
		file << x << endl;
		file.write("Text1.txt", ios::in);
		
	}
	system("pause");
}

	/*for (int i = 0; i < 4; i++){
		file >> x;
		q.enqueue(x);
	}
	int z;
	for (int i = 0; i < 4; i++){
		z = q.dequeue();
		cout << z << endl;
	}
	q.print_queue();

}

#include <iostream>
using namespace std;
class job{
public:
	int arr[10];
	int n = 10;
	int front = -1;
	int rear = -1;
void Insert() {
	int val;
	if (rear == n - 1)
		cout << "Queue Overflow" << endl;
	else {
		if (front == -1)
			front = 0;
		cout << "Insert the element in queue : " << endl;
		cin >> val;
		rear++;
		queue[rear] = val;
	}
}
void Delete() {
	if (front == -1 || front > rear) {
		cout << "Queue Underflow ";
		return;
	}
	else {
		cout << "Element deleted from queue is : " << queue[front] << endl;
		front++;;
	}
}
void Display() {
	if (front == -1)
		cout << "Queue is empty" << endl;
	else {
		cout << "Queue elements are : ";
		for (int i = front; i <= rear; i++)
			cout << queue[i] << " ";
		cout << endl;
	}
}
int main() {
	int ch;
	cout << "1) Insert element to queue" << endl;
	cout << "2) Delete element from queue" << endl;
	cout << "3) Display all the elements of queue" << endl;
	cout << "4) Exit" << endl;
	do {
		cout << "Enter your choice : " << endl;
		cin >> ch;
		switch (ch) {
		case 1: Insert();
			break;
		case 2: Delete();
			break;
		case 3: Display();
			break;
		case 4: cout << "Exit" << endl;
			break;
		default: cout << "Invalid choice" << endl;
		}
	} while (ch != 4);
	return 0;
}
*/