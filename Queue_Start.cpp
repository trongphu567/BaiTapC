#include <iostream>
#include <queue>
using namespace std;
struct Job
{
    int position;
    int priority;
};

queue<Job> jobs;

int main() {
    int N; // số lượng file cần được in
    int target_index; // thứ tự file của nhân viên
    cout << "Please enter total jobs and order of your job ";
    cin >> N >> target_index;
    // TODO1: Nhập dữ liệu vào hàng đợi


    // TODO2: Xác định thời gian người nhân viên phải chờ để in tập tin
    
    return 0;
}