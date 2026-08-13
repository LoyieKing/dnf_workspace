# _ZN9CGuildWar12SameRankWorkEv

`CGuildWar::SameRankWork()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809ad34` | `0x21b` | `0x80617ea` | `0x22d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,166 +1,169 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x54,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE5emptyEv>
 test   %al,%al
 je     <T> <_ZN9CGuildWar12SameRankWorkEv+0x20>
 mov    $0x0,%eax
-jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0x216>
+jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0x228>
 mov    0x8(%ebp),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
 jne    <T> <_ZN9CGuildWar12SameRankWorkEv+0x56>
 mov    $0x0,%eax
-jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0x216>
+jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0x228>
 mov    -0x1c(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x18(%ebp)
 movl   $0x0,-0x14(%ebp)
 mov    0x8(%ebp),%edx
 lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0xc3>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEdeEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
 jne    <T> <_ZN9CGuildWar12SameRankWorkEv+0xb7>
 mov    -0x18(%ebp),%ebx
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x4(%eax),%eax
 cmp    %eax,%ebx
 setne  %al
 test   %al,%al
 jne    <T> <_ZN9CGuildWar12SameRankWorkEv+0xf0>
 addl   $0x1,-0x14(%ebp)
 jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0xb8>
 nop
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE3endEv>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 test   %al,%al
 jne    <T> <_ZN9CGuildWar12SameRankWorkEv+0x7d>
 jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0xf1>
 nop
 cmpl   $0x1,-0x14(%ebp)
-jle    <T> <_ZN9CGuildWar12SameRankWorkEv+0x211>
+jle    <T> <_ZN9CGuildWar12SameRankWorkEv+0x223>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEC1Ev>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEC1Ev>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEC1Ev>
 mov    0x8(%ebp),%edx
 lea    -0x3c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
 mov    -0x3c(%ebp),%eax
 mov    %eax,-0x30(%ebp)
+movl   $0x4,0x8(%esp)
 lea    -0x30(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x2c(%ebp)
+mov    %eax,0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEdeEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN9CGuildWar12SameRankWorkEv+0x160>
+je     <T> <_ZN9CGuildWar12SameRankWorkEv+0x172>
 mov    $0x0,%eax
-jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0x216>
+jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0x228>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x10(%ebp)
 movl   $0x1,-0xc(%ebp)
-jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0x1c1>
+jmp    <T> <_ZN9CGuildWar12SameRankWorkEv+0x1d3>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEppEv>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x20(%eax),%eax
 cmp    -0x10(%ebp),%eax
 seta   %al
 test   %al,%al
-je     <T> <_ZN9CGuildWar12SameRankWorkEv+0x1bd>
+je     <T> <_ZN9CGuildWar12SameRankWorkEv+0x1cf>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x30(%ebp),%eax
 mov    %eax,-0x34(%ebp)
 addl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    -0x14(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN9CGuildWar12SameRankWorkEv+0x17d>
+jne    <T> <_ZN9CGuildWar12SameRankWorkEv+0x18f>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEdeEv>
 mov    0x4(%eax),%eax
 mov    0x20(%eax),%eax
 cmp    -0x10(%ebp),%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN9CGuildWar12SameRankWorkEv+0x211>
+je     <T> <_ZN9CGuildWar12SameRankWorkEv+0x223>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEdeEv>
 mov    0x4(%eax),%ebx
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEdeEv>
 mov    0x4(%eax),%eax
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib4SwapI14STGuildWarInfoEEvPT_S3_>
 mov    $0x1,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildWar::SameRankWork() */

undefined4 CGuildWar::_ZN9CGuildWar12SameRankWorkEv(void)

{
  STGuildWarInfo *pSVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
  local_30 [4];
  __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
  local_2c [4];
  __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  cVar2 = std::
          vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
          ::empty();
  if (cVar2 == '\0') {
    std::
    vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
    ::begin();
    iVar5 = __gnu_cxx::
            __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
            ::operator->(local_28);
    local_20 = *(int *)(iVar5 + 4);
    if (local_20 == 0) {
      uVar4 = 0;
    }
    else {
      local_1c = *(int *)(local_20 + 4);
      local_18 = 0;
      std::
      vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
      ::begin();
      while( true ) {
        std::
        vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
        ::end();
        bVar3 = __gnu_cxx::operator!=(local_2c,local_24);
        if (!bVar3) break;
        iVar6 = __gnu_cxx::
                __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                ::operator*(local_2c);
        iVar5 = local_1c;
        if (*(int *)(iVar6 + 4) != 0) {
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                  ::operator*(local_2c);
          if (iVar5 != *(int *)(*(int *)(iVar6 + 4) + 4)) break;
          local_18 = local_18 + 1;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
        ::operator++(local_2c);
      }
      if (1 < local_18) {
        __gnu_cxx::
        __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
        ::__normal_iterator(local_30);
        __gnu_cxx::
        __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
        ::__normal_iterator((__normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                             *)&local_34);
        __gnu_cxx::
        __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
        ::__normal_iterator((__normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                             *)&local_38);
        std::
        vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
        ::begin();
        local_34 = local_40;
        iVar5 = __gnu_cxx::
                __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                ::operator*(local_30);
        if (*(int *)(iVar5 + 4) == 0) {
          return 0;
        }
        iVar5 = __gnu_cxx::
                __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                ::operator*(local_30);
        local_14 = *(uint *)(*(int *)(iVar5 + 4) + 0x20);
        for (local_10 = 1; local_10 < local_18; local_10 = local_10 + 1) {
          __gnu_cxx::
          __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
          ::operator++((__normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                        *)&local_34);
          iVar5 = __gnu_cxx::
                  __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                  ::operator*((__normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                               *)&local_34);
          if (local_14 < *(uint *)(*(int *)(iVar5 + 4) + 0x20)) {
            iVar5 = __gnu_cxx::
                    __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                    ::operator*((__normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                                 *)&local_34);
            local_14 = *(uint *)(*(int *)(iVar5 + 4) + 0x20);
            local_38 = local_34;
          }
        }
        iVar5 = __gnu_cxx::
                __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                ::operator*(local_30);
        if (*(uint *)(*(int *)(iVar5 + 4) + 0x20) != local_14) {
          iVar5 = __gnu_cxx::
                  __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                  ::operator*((__normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                               *)&local_38);
          pSVar1 = *(STGuildWarInfo **)(iVar5 + 4);
          iVar5 = __gnu_cxx::
                  __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                  ::operator*(local_30);
          DNFFLib::_ZN7DNFFLib4SwapI14STGuildWarInfoEEvPT_S3_
                    (*(STGuildWarInfo **)(iVar5 + 4),pSVar1);
        }
      }
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildWar.cpp](source/DNFServer/GameServer/Guild/DNFGuildWar.cpp)（约第 248 行）：

```cpp
int CGuildWar::SameRankWork()
{
    if (m_vtGuildWarInfo.empty())
    {
        return 0;
    }
    std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it0 =
        m_vtGuildWarInfo.begin();
    STGuildWarInfo* first = it0->second;
    if (first == 0)
    {
        return 0;
    }
    int field4 = first->m_point;
    int count = 0;
    std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it =
        m_vtGuildWarInfo.begin();
    for (; it != m_vtGuildWarInfo.end(); ++it)
    {
        if ((*it).second == 0)
        {
            continue;
        }
        if (field4 != (*it).second->m_point)
        {
            break;
        }
        count++;
    }
    if (1 < count)
    {
        std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator maxIt;
        std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it2;
        std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator maxItTmp;
        it2 = m_vtGuildWarInfo.begin();
        memcpy(&maxIt, &it2, sizeof(maxIt));
        if ((*maxIt).second == 0)
        {
            return 0;
        }
        unsigned int maxVal = (*maxIt).second->m_field[6];
        for (int i = 1; i < count; i++)
        {
            ++it2;
            if (maxVal < (*it2).second->m_field[6])
            {
                maxVal = (*it2).second->m_field[6];
                maxItTmp = it2;
            }
        }
        if ((*maxIt).second->m_field[6] != maxVal)
        {
            DNFFLib::Swap<STGuildWarInfo>((*maxIt).second, (*maxItTmp).second);
        }
    }
    return 1;
}
```
