#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long ll;
#define REP(i, N) for (int i = 0; i < (int)N; i++)

class ${ClassName} {
public:
  ${<foreach Method.Params p}
  ${p.Type} ${p.Name};
  ${<end}
  ${Method.ReturnType} ${Method.Name}(${foreach Method.Params p , }${p.Type} _${p.Name}${end}) {
    ${foreach Method.Params p , }${p.Name} = _${p.Name}${end};
    return ${Method.ReturnType;zeroval};
  }
};

${CutBegin}
${<TestCode}
${CutEnd}
