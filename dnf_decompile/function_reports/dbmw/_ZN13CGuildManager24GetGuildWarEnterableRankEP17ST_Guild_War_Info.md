# _ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info

`CGuildManager::GetGuildWarEnterableRank(ST_Guild_War_Info*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a35a6` | `0x12f` | `0x80e910c` | `0x11f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,94 +1,88 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0x129>
-movl   $0x0,-0xc(%ebp)
+jne    <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0x119>
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0xe7>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0xd7>
+mov    0xc(%ebp),%edx
+mov    -0x10(%ebp),%eax
 imul   $0x23,%eax,%eax
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
-lea    -0x14(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%ebx
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 mov    (%eax),%eax
 mov    %eax,(%ebx)
 mov    -0xc(%ebp),%eax
-imul   $0x23,%eax,%eax
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
-lea    -0x14(%ebp),%eax
+lea    0x4(%eax),%ebx
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 mov    0x4(%eax),%eax
-mov    %eax,0x4(%ebx)
-lea    -0x14(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 lea    0xc(%eax),%edx
 mov    -0xc(%ebp),%eax
-imul   $0x23,%eax,%eax
-add    0xc(%ebp),%eax
 add    $0x8,%eax
 movl   $0x16,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0xc(%ebp),%eax
-imul   $0x23,%eax,%eax
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
-lea    -0x14(%ebp),%eax
+lea    0x1f(%eax),%ebx
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 mov    0x24(%eax),%eax
-mov    %eax,0x1f(%ebx)
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x9,-0xc(%ebp)
-setg   %al
-test   %al,%al
-jne    <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0x11b>
-lea    -0x14(%ebp),%eax
+mov    %eax,(%ebx)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x9,-0x10(%ebp)
+jg     <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0x10b>
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEppEv>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE3endEv>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPSt4pairIjP18STGuildWarRankInfoESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 test   %al,%al
 jne    <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0x41>
-jmp    <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0x11c>
+jmp    <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0x10c>
 nop
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager17printGuildWarRankEv>
-jmp    <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0x12a>
+jmp    <T> <_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info+0x11a>
 nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GetGuildWarEnterableRank(ST_Guild_War_Info*) */

void __thiscall
CGuildManager::_ZN13CGuildManager24GetGuildWarEnterableRankEP17ST_Guild_War_Info
          (CGuildManager *this,ST_Guild_War_Info *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
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
      iVar3 = local_10 * 0x23;
      iVar4 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
              ::operator->(local_18);
      *(undefined4 *)(param_1 + iVar3) = **(undefined4 **)(iVar4 + 4);
      iVar3 = local_10 * 0x23;
      iVar4 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
              ::operator->(local_18);
      *(undefined4 *)(param_1 + iVar3 + 4) = *(undefined4 *)(*(int *)(iVar4 + 4) + 4);
      iVar3 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
              ::operator->(local_18);
      memcpy(param_1 + local_10 * 0x23 + 8,(void *)(*(int *)(iVar3 + 4) + 0xc),0x16);
      iVar3 = local_10 * 0x23;
      iVar4 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
              ::operator->(local_18);
      *(undefined4 *)(param_1 + iVar3 + 0x1f) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x24);
      local_10 = local_10 + 1;
      if (9 < local_10) break;
      __gnu_cxx::
      __normal_iterator<std::pair<unsigned_int,STGuildWarRankInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>>
      ::operator++(local_18);
    }
    _ZN13CGuildManager17printGuildWarRankEv();
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/GuildManager.cpp](source/DNFServer/GameServer/DBMW/GuildManager.cpp)（约第 191 行）：

```cpp
void CGuildManager::GetGuildWarEnterableRank(ST_Guild_War_Info* info)
{
    if (m_warRankList.empty())
        return;
    int i = 0;
    for (std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >::iterator it =
             m_warRankList.begin();
         it != m_warRankList.end(); ++it)
    {
        char* dst = (char*)info + i * 0x23;
        *(unsigned int*)(dst + 0) = it->second->m_field0;
        *(unsigned int*)(dst + 0x4) = it->second->m_field4;
        memcpy(dst + 0x8, (char*)it->second + 0xc, 0x16);
        *(unsigned int*)(dst + 0x1f) = it->second->m_field24;
        i++;
        if (i > 9)
            break;
    }
    printGuildWarRank();
}
```
