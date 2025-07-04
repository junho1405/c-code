#include <iostream>
#include <unordered_map>
#include<string>
using namespace std;

int main() {
    unordered_map<int, string> umap;

    umap.max_load_factor(0.7);  // 최대 부하율 지정
    umap.rehash(20);            // 최소 20개 버킷 확보

    for (int i = 0; i < 10; ++i) {
        umap[i] = "value" + to_string(i);
    }

    cout << "요소 수: " << umap.size() << endl;
    cout << "버킷 수: " << umap.bucket_count() << endl;
    cout << "현재 부하율: " << umap.load_factor() << endl;
    cout << "최대 부하율: " << umap.max_load_factor() << endl;

    return 0;
}
