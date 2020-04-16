#pragma once
#include <vector>

class BIT {
private:
    std::vector<int> m_tree;
    int m_size;
public:
    BIT (int n) : m_size(n + 1) {
        m_tree = std::vector<int> (m_size);
    }

    int getSum(int index) {
        int sum = 0;
        index = index + 1;
        while( index > 0 ) {
            sum += m_tree[index];
            index -= index & (-index);
        }
        return sum;
    }

    void update(int index, int val) {
        index = index + 1;
        while (index < m_size) {
            m_tree[index] += val;
            index += index & (-index);
        }
    }
};