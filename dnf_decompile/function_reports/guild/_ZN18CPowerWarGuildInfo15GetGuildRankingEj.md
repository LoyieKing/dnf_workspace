# _ZN18CPowerWarGuildInfo15GetGuildRankingEj

`CPowerWarGuildInfo::GetGuildRanking(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa036` | `0x8a` | `0x809fb2a` | `0x8c` |

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
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
-movl   $0x1,-0x10(%ebp)
-jmp    <T> <_ZN18CPowerWarGuildInfo15GetGuildRankingEj+0x55>
+jmp    <T> <_ZN18CPowerWarGuildInfo15GetGuildRankingEj+0x5a>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN18CPowerWarGuildInfo15GetGuildRankingEj+0x46>
-mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN18CPowerWarGuildInfo15GetGuildRankingEj+0x88>
-addl   $0x1,-0x10(%ebp)
+sete   %al
+test   %al,%al
+je     <T> <_ZN18CPowerWarGuildInfo15GetGuildRankingEj+0x4b>
+mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN18CPowerWarGuildInfo15GetGuildRankingEj+0x8a>
+addl   $0x1,-0xc(%ebp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
 lea    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
-jne    <T> <_ZN18CPowerWarGuildInfo15GetGuildRankingEj+0x27>
+jne    <T> <_ZN18CPowerWarGuildInfo15GetGuildRankingEj+0x2d>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::GetGuildRanking(unsigned int) */

int __thiscall
CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo15GetGuildRankingEj
          (CPowerWarGuildInfo *this,uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  uint *local_10;
  
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::begin();
  local_14 = 1;
  while( true ) {
    std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return 0;
    }
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
             ::operator*(local_1c);
    local_10 = (uint *)*puVar2;
    if (*local_10 == param_1) break;
    local_14 = local_14 + 1;
    __gnu_cxx::
    __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
    ::operator++(local_1c);
  }
  return local_14;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 178 行）：

```cpp
unsigned int CPowerWarGuildInfo::GetGuildRanking(unsigned int guildKey)
{
    std::vector<STPowerWarGuildInfo*>* vec = &m_vec;
    unsigned int rank = 1;
    for (std::vector<STPowerWarGuildInfo*>::iterator it = vec->begin(); it != vec->end(); ++it)
    {
        if (*(unsigned int*)(*it)->m_data == guildKey)
        {
            return rank;
        }
        rank++;
    }
    return 0;
}
```
