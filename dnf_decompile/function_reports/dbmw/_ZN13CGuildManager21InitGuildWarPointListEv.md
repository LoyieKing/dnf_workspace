# _ZN13CGuildManager21InitGuildWarPointListEv

`CGuildManager::InitGuildWarPointList()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a36d6` | `0xaa` | `0x80954a6` | `0xa5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,52 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE5emptyEv>
 test   %al,%al
 je     <T> <_ZN13CGuildManager21InitGuildWarPointListEv+0x22>
 mov    $0x0,%eax
-jmp    <T> <_ZN13CGuildManager21InitGuildWarPointListEv+0xa8>
+jmp    <T> <_ZN13CGuildManager21InitGuildWarPointListEv+0xa3>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN13CGuildManager21InitGuildWarPointListEv+0x72>
+jmp    <T> <_ZN13CGuildManager21InitGuildWarPointListEv+0x6d>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 movl   $0x3e8,0x4(%eax)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0xa,-0xc(%ebp)
-setg   %al
-test   %al,%al
-jne    <T> <_ZN13CGuildManager21InitGuildWarPointListEv+0xa2>
+jg     <T> <_ZN13CGuildManager21InitGuildWarPointListEv+0x9d>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEppEv>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 test   %al,%al
 jne    <T> <_ZN13CGuildManager21InitGuildWarPointListEv+0x43>
-jmp    <T> <_ZN13CGuildManager21InitGuildWarPointListEv+0xa3>
+jmp    <T> <_ZN13CGuildManager21InitGuildWarPointListEv+0x9e>
 nop
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::InitGuildWarPointList() */

undefined4 CGuildManager::_ZN13CGuildManager21InitGuildWarPointListEv(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  cVar1 = std::
          vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>
          ::empty();
  if (cVar1 == '\0') {
    local_10 = 0;
    std::
    vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>
    ::begin();
    while( true ) {
      std::
      vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>
      ::end();
      bVar2 = __gnu_cxx::operator!=(local_18,local_14);
      if (!bVar2) break;
      iVar4 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
              ::operator->(local_18);
      *(undefined4 *)(*(int *)(iVar4 + 4) + 4) = 1000;
      local_10 = local_10 + 1;
      if (10 < local_10) break;
      __gnu_cxx::
      __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
      ::operator++(local_18);
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

定义于 [source/DNFServer/GameServer/DBMW/GuildManager.cpp](source/DNFServer/GameServer/DBMW/GuildManager.cpp)（约第 123 行）：

```cpp
char CGuildManager::InitGuildWarPointList()
{
    if (m_warRankList.empty())
        return 0;
    int count = 0;
    for (std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >::iterator it =
             m_warRankList.begin();
         it != m_warRankList.end(); ++it)
    {
        it->second->m_field4 = 0x3e8;
        count++;
        if (count > 0xa)
            break;
    }
    return 1;
}
```
