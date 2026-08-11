# _ZN9CGuildWar17printGuildWarRankEv

`CGuildWar::printGuildWarRank()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809b1e0` | `0x100` | `0x80626ea` | `0x100` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,76 +1,71 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x44,%esp
 mov    0x8(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN9CGuildWar17printGuildWarRankEv+0xf4>
-movl   $0x0,-0x1c(%ebp)
-mov    0x8(%ebp),%edx
-lea    -0x2c(%ebp),%eax
+je     <T> <_ZN9CGuildWar17printGuildWarRankEv+0xfb>
+movl   $0x0,-0x10(%ebp)
+lea    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN9CGuildWar17printGuildWarRankEv+0xc3>
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN9CGuildWar17printGuildWarRankEv+0xcc>
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEdeEv>
-mov    0x4(%eax),%edx
-mov    (%eax),%eax
-mov    %eax,-0x34(%ebp)
-mov    %edx,-0x30(%ebp)
-mov    -0x30(%ebp),%eax
-test   %eax,%eax
-je     <T> <_ZN9CGuildWar17printGuildWarRankEv+0xb8>
-addl   $0x1,-0x1c(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0x4(%eax),%esi
-mov    -0x30(%ebp),%eax
-lea    0x8(%eax),%edi
-mov    -0x30(%ebp),%eax
-mov    (%eax),%ebx
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEptEv>
+mov    0x4(%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN9CGuildWar17printGuildWarRankEv+0xc1>
+addl   $0x1,-0x10(%ebp)
 movl   $0x192,0x8(%esp)
 movl   $"printGuildWarRank",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+add    $0x8,%eax
+add    $0x4,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+lea    0x10(%eax),%ebx
+mov    -0xc(%ebp),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    -0x10(%ebp),%ecx
+mov    %ecx,0x18(%esp)
+mov    %edx,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"GuildKey : %d(%s),  GuildWarPoint : %d, GuildWarRank : %d",0x8(%esp)
 movl   $"./log/GuildWar",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEppEv>
-mov    0x8(%ebp),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE3endEv>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 test   %al,%al
-jne    <T> <_ZN9CGuildWar17printGuildWarRankEv+0x3d>
-jmp    <T> <_ZN9CGuildWar17printGuildWarRankEv+0xf5>
-nop
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+jne    <T> <_ZN9CGuildWar17printGuildWarRankEv+0x44>
+mov    -0x4(%ebp),%ebx
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildWar::printGuildWarRank() */

void CGuildWar::_ZN9CGuildWar17printGuildWarRankEv(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  CMyFileLog local_28 [8];
  int local_20;
  
  cVar4 = std::
          vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
          ::empty();
  if (cVar4 == '\0') {
    local_20 = 0;
    std::
    vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
    ::begin();
    while( true ) {
      std::
      vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
      ::end();
      bVar5 = __gnu_cxx::operator!=(local_30,local_2c);
      if (!bVar5) break;
      iVar6 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
              ::operator*(local_30);
      puVar1 = *(undefined4 **)(iVar6 + 4);
      if (puVar1 != (undefined4 *)0x0) {
        local_20 = local_20 + 1;
        uVar2 = puVar1[1];
        uVar3 = *puVar1;
        CMyFileLog::CMyFileLog(local_28,"printGuildWarRank",0x192);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_28,"./log/GuildWar",
                   "GuildKey : %d(%s),  GuildWarPoint : %d, GuildWarRank : %d",uVar3,puVar1 + 2,
                   uVar2,local_20);
      }
      __gnu_cxx::
      __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
      ::operator++(local_30);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildWar.cpp](source/DNFServer/GameServer/Guild/DNFGuildWar.cpp)（约第 358 行）：

```cpp
void CGuildWar::printGuildWarRank()
{
    std::vector<std::pair<unsigned int, STGuildWarInfo*> >* vec = &m_vtGuildWarInfo;
    if (!vec->empty())
    {
        int rank = 0;
        for (std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it = vec->begin();
             it != vec->end(); ++it)
        {
            STGuildWarInfo* info = it->second;
            if (info != 0)
            {
                rank++;
                DNF_LOG_SCOPE_LINE(0x192,"./log/GuildWar",
                    "GuildKey : %d(%s),  GuildWarPoint : %d, GuildWarRank : %d",
                    *(unsigned int*)info->m_data, info->m_data + 8,
                    *(unsigned int*)(info->m_data + 4), rank);
            }
        }
    }
}
```
