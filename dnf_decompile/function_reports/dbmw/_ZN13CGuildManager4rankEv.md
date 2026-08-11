# _ZN13CGuildManager4rankEv

`CGuildManager::rank()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a320c` | `0xdc` | `0x80e8bc0` | `0xd6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,64 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorISt4pairIjP15STGuildRankInfoESaIS3_EE5emptyEv>
 test   %al,%al
 je     <T> <_ZN13CGuildManager4rankEv+0x20>
 mov    $0x0,%eax
-jmp    <T> <_ZN13CGuildManager4rankEv+0xd7>
+jmp    <T> <_ZN13CGuildManager4rankEv+0xd1>
 mov    0x8(%ebp),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP15STGuildRankInfoESaIS3_EE3endEv>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP15STGuildRankInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
 mov    %bl,0x8(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPSt4pairIjP15STGuildRankInfoESt6vectorIS5_SaIS5_EEEE16CPairDataCompareEvT_SC_T0_>
-movl   $0x0,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP15STGuildRankInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN13CGuildManager4rankEv+0xa7>
-lea    -0x20(%ebp),%eax
+jmp    <T> <_ZN13CGuildManager4rankEv+0xa1>
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP15STGuildRankInfoESt6vectorIS4_SaIS4_EEEdeEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-addl   $0x1,-0x10(%ebp)
-mov    -0x10(%ebp),%edx
-mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+mov    -0xc(%ebp),%edx
 mov    %edx,0x8(%eax)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP15STGuildRankInfoESt6vectorIS4_SaIS4_EEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP15STGuildRankInfoESaIS3_EE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPSt4pairIjP15STGuildRankInfoESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 test   %al,%al
 jne    <T> <_ZN13CGuildManager4rankEv+0x7e>
 mov    $0x1,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::rank() */

undefined4 CGuildManager::_ZN13CGuildManager4rankEv(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  __normal_iterator<std::pair<unsigned_int,STGuildRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>>
  local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  __normal_iterator local_18 [4];
  int local_14;
  int local_10;
  
  cVar1 = std::
          vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
          ::empty();
  if (cVar1 == '\0') {
    std::
    vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
    ::end();
    std::
    vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
    ::begin();
    std::
    sort<__gnu_cxx::__normal_iterator<std::pair<unsigned_int,STGuildRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>>,CPairDataCompare>
              (local_1c,local_20);
    local_14 = 0;
    std::
    vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
    ::begin();
    while( true ) {
      std::
      vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
      ::end();
      bVar2 = __gnu_cxx::operator!=(local_24,local_18);
      if (!bVar2) break;
      iVar4 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_int,STGuildRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>>
              ::operator*(local_24);
      local_10 = *(int *)(iVar4 + 4);
      local_14 = local_14 + 1;
      *(int *)(local_10 + 8) = local_14;
      __gnu_cxx::
      __normal_iterator<std::pair<unsigned_int,STGuildRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>>
      ::operator++(local_24);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/GuildManager.cpp](source/DNFServer/GameServer/DBMW/GuildManager.cpp)（约第 139 行）：

```cpp
char CGuildManager::rank()
{
    if (m_rankList.empty())
        return 0;
    std::sort(m_rankList.begin(), m_rankList.end(), CPairDataCompare());
    int r = 0;
    for (std::vector<std::pair<unsigned int, STGuildRankInfo*> >::iterator it =
             m_rankList.begin();
         it != m_rankList.end(); ++it)
    {
        (*it).second->m_field8 = ++r;
    }
    return 1;
}
```
