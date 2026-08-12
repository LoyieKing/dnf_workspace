# _ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info

`CGuildWar::GetGuildWarInfo(ST_Guild_War_Rank_Info*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809a95c` | `0x120` | `0x8061252` | `0x12c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,90 +1,94 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0x11a>
+je     <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0x126>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0xe9>
+jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0xf5>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0xde>
+je     <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0xea>
+mov    0xc(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x5,%eax
 add    %edx,%eax
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
+lea    (%ecx,%eax,1),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 mov    (%eax),%eax
 mov    %eax,(%ebx)
+mov    0xc(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x5,%eax
 add    %edx,%eax
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
+add    $0x4,%eax
+lea    (%ecx,%eax,1),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 mov    0x4(%eax),%eax
-mov    %eax,0x4(%ebx)
+mov    %eax,(%ebx)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 lea    0x8(%eax),%ecx
+mov    0xc(%ebp),%ebx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x5,%eax
 add    %edx,%eax
-add    0xc(%ebp),%eax
 add    $0xa,%eax
+lea    (%ebx,%eax,1),%eax
 movl   $0x16,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
+addl   $0x1,-0xc(%ebp)
+mov    0xc(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x5,%eax
 add    %edx,%eax
-add    0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%edx
-mov    %dx,0x8(%eax)
+add    $0x8,%eax
+lea    (%ecx,%eax,1),%edx
+mov    -0xc(%ebp),%eax
+mov    %ax,(%edx)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 test   %al,%al
 jne    <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0x32>
-jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0x11b>
+jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0x127>
 nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildWar::GetGuildWarInfo(ST_Guild_War_Rank_Info*) */

void __thiscall
CGuildWar::_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info
          (CGuildWar *this,ST_Guild_War_Rank_Info *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  if (param_1 != (ST_Guild_War_Rank_Info *)0x0) {
    local_10 = 0;
    std::
    vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
    ::begin();
    while( true ) {
      std::
      vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>
      ::end();
      bVar1 = __gnu_cxx::operator!=(local_18,local_14);
      if (!bVar1) break;
      iVar2 = __gnu_cxx::
              __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
              ::operator->(local_18);
      if (*(int *)(iVar2 + 4) != 0) {
        iVar2 = local_10 * 0x21;
        iVar3 = __gnu_cxx::
                __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                ::operator->(local_18);
        *(undefined4 *)(param_1 + iVar2) = **(undefined4 **)(iVar3 + 4);
        iVar2 = local_10 * 0x21;
        iVar3 = __gnu_cxx::
                __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                ::operator->(local_18);
        *(undefined4 *)(param_1 + iVar2 + 4) = *(undefined4 *)(*(int *)(iVar3 + 4) + 4);
        iVar2 = __gnu_cxx::
                __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                ::operator->(local_18);
        memcpy(param_1 + local_10 * 0x21 + 10,(void *)(*(int *)(iVar2 + 4) + 8),0x16);
        iVar2 = local_10 * 0x21;
        local_10 = local_10 + 1;
        *(short *)(param_1 + iVar2 + 8) = (short)local_10;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
      ::operator++(local_18);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildWar.cpp](source/DNFServer/GameServer/Guild/DNFGuildWar.cpp)（约第 161 行）：

```cpp
void CGuildWar::GetGuildWarInfo(ST_Guild_War_Rank_Info* info)
{
    if (info == 0)
    {
        return;
    }
    int count = 0;
    for (std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it =
             m_vtGuildWarInfo.begin(); it != m_vtGuildWarInfo.end(); ++it)
    {
        if (it->second != 0)
        {
            *(unsigned int*)((char*)info + count * 0x21 + 0) = it->second->m_guildKey;
            *(unsigned int*)((char*)info + count * 0x21 + 4) = it->second->m_point;
            memcpy((char*)info + count * 0x21 + 10, it->second->m_data, 0x16);
            count++;
            *(short*)((char*)info + count * 0x21 + 8) = (short)count;
        }
    }
}
```
