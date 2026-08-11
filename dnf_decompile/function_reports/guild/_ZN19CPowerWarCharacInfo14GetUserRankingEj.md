# _ZN19CPowerWarCharacInfo14GetUserRankingEj

`CPowerWarCharacInfo::GetUserRanking(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a7a10` | `0x8a` | `0x809da60` | `0x8c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
+add    $0x1c,%eax
+mov    %eax,-0x10(%ebp)
+movl   $0x1,-0xc(%ebp)
 lea    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
-movl   $0x1,-0x10(%ebp)
-jmp    <T> <_ZN19CPowerWarCharacInfo14GetUserRankingEj+0x55>
+jmp    <T> <_ZN19CPowerWarCharacInfo14GetUserRankingEj+0x5a>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN19CPowerWarCharacInfo14GetUserRankingEj+0x46>
-mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN19CPowerWarCharacInfo14GetUserRankingEj+0x88>
-addl   $0x1,-0x10(%ebp)
+sete   %al
+test   %al,%al
+je     <T> <_ZN19CPowerWarCharacInfo14GetUserRankingEj+0x4b>
+mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN19CPowerWarCharacInfo14GetUserRankingEj+0x8a>
+addl   $0x1,-0xc(%ebp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
 lea    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
-jne    <T> <_ZN19CPowerWarCharacInfo14GetUserRankingEj+0x27>
+jne    <T> <_ZN19CPowerWarCharacInfo14GetUserRankingEj+0x2d>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarCharacInfo::GetUserRanking(unsigned int) */

int __thiscall
CPowerWarCharacInfo::_ZN19CPowerWarCharacInfo14GetUserRankingEj
          (CPowerWarCharacInfo *this,uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  uint *local_10;
  
  std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::begin();
  local_14 = 1;
  while( true ) {
    std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return 0;
    }
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
             ::operator*(local_1c);
    local_10 = (uint *)*puVar2;
    if (*local_10 == param_1) break;
    local_14 = local_14 + 1;
    __gnu_cxx::
    __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
    ::operator++(local_1c);
  }
  return local_14;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp)（约第 180 行）：

```cpp
unsigned int CPowerWarCharacInfo::GetUserRanking(unsigned int charNo)
{
    std::vector<STPowerWarCharacInfo*>* vec = &m_vec;
    unsigned int rank = 1;
    for (std::vector<STPowerWarCharacInfo*>::iterator it = vec->begin(); it != vec->end(); ++it)
    {
        if (*(unsigned int*)(*it)->m_data == charNo)
        {
            return rank;
        }
        rank++;
    }
    return 0;
}
```
