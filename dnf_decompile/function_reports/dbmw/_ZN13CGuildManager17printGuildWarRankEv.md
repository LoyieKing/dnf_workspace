# _ZN13CGuildManager17printGuildWarRankEv

`CGuildManager::printGuildWarRank()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a3780` | `0xed` | `0x80e9068` | `0xf3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,72 +1,71 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN13CGuildManager17printGuildWarRankEv+0xe1>
+jne    <T> <_ZN13CGuildManager17printGuildWarRankEv+0xe8>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN13CGuildManager17printGuildWarRankEv+0xad>
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEdeEv>
-mov    0x4(%eax),%edx
-mov    (%eax),%eax
-mov    %eax,-0x30(%ebp)
-mov    %edx,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x8(%eax),%edi
-mov    -0x2c(%ebp),%eax
-mov    0x4(%eax),%esi
-mov    -0x2c(%ebp),%eax
-mov    (%eax),%ebx
+jmp    <T> <_ZN13CGuildManager17printGuildWarRankEv+0xb4>
 movl   $0x10a,0x8(%esp)
 movl   $&_ZZN13CGuildManager17printGuildWarRankEvE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEptEv>
+mov    0x4(%eax),%eax
+mov    0x8(%eax),%esi
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEptEv>
+mov    0x4(%eax),%eax
+mov    0x4(%eax),%ebx
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEptEv>
+mov    (%eax),%eax
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"GuildKey : %d,  GuildWarPoint : %d, Guild Rank : %d",0x8(%esp)
 movl   $"./log/GuildWar",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x28(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEppEv>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE3endEv>
 sub    $0x4,%esp
-lea    -0x24(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 test   %al,%al
-jne    <T> <_ZN13CGuildManager17printGuildWarRankEv+0x39>
-jmp    <T> <_ZN13CGuildManager17printGuildWarRankEv+0xe2>
+jne    <T> <_ZN13CGuildManager17printGuildWarRankEv+0x38>
+jmp    <T> <_ZN13CGuildManager17printGuildWarRankEv+0xe9>
 nop
-lea    -0xc(%ebp),%esp
+lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::printGuildWarRank() */

void CGuildManager::_ZN13CGuildManager17printGuildWarRankEv(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
  local_2c [4];
  __normal_iterator local_28 [4];
  CMyFileLog local_24 [20];
  
  cVar5 = std::
          vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>
          ::empty();
  if (cVar5 == '\0') {
    std::
    vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>
    ::begin();
    while( true ) {
      std::
      vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>
      ::end();
      bVar6 = __gnu_cxx::operator!=(local_2c,local_28);
      if (!bVar6) break;
      iVar7 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
              ::operator*(local_2c);
      puVar1 = *(undefined4 **)(iVar7 + 4);
      uVar2 = puVar1[2];
      uVar3 = puVar1[1];
      uVar4 = *puVar1;
      CMyFileLog::CMyFileLog(local_24,"printGuildWarRank",0x10a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_24,"./log/GuildWar","GuildKey : %d,  GuildWarPoint : %d, Guild Rank : %d",
                 uVar4,uVar3,uVar2);
      __gnu_cxx::
      __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
      ::operator++(local_2c);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/GuildManager.cpp](source/DNFServer/GameServer/DBMW/GuildManager.cpp)（约第 179 行）：

```cpp
void CGuildManager::printGuildWarRank()
{
    if (m_warRankList.empty())
        return;
    for (std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >::iterator it =
             m_warRankList.begin();
         it != m_warRankList.end(); ++it)
    {
        std::pair<unsigned int, STGuildWarRankInfo*> p = *it;
        CMyFileLog(__FUNCTION__, 0x10a)("./log/GuildWar",
            "GuildKey : %d,  GuildWarPoint : %d, Guild Rank : %d",
            p.second->m_field0, p.second->m_field4, p.second->m_field8);
    }
}
```
