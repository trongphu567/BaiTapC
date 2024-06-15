#include <iostream>
#include <queue>
using namespace std;
struct Job
{
    int position;
    int priority;
};

int job_priority_counts[10];
queue<Job> jobs;

int main() {
    int N; // số lượng file cần được in
    int ans = 0;
    int target_index, t;
    cout << "Please enter total jobs and order of your job ";
    cin >> N >> target_index;
    for(int i = 1 ; i <= N;++i)
    {
        job_priority_counts[i] = 0;
    }

    for(int i = 0; i < N; i++)
    {
        cout << "Please enter priority of file " << i + 1 << " ";
        cin >> t;
        job_priority_counts[t]++;
        Job j;
        j.position = i;
        j.priority = t;
        jobs.push(j);
    }
    int top_priority = 9;

    while(!jobs.empty())
    {
        while(job_priority_counts[top_priority] <= 0)
            top_priority--;
        Job f = jobs.front();

        if(f.priority != top_priority)
        {
            jobs.pop();
            jobs.push(f);
        }
        else{
            ans++;
            if(f.position == target_index)
            {
                cout << ans << endl;
                break;
            }
            jobs.pop();
            job_priority_counts[top_priority]--;
        }
    }
    return 0;
}