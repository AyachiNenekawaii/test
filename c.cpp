#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    int ans = -1;
    for (int i = 0; i < n; i++) {
        int x;
       	std::cin >> x;
	ans = std::max(ans, x);
    }

    std::cout << ans << std::endl;
	
    return 0;
}    
