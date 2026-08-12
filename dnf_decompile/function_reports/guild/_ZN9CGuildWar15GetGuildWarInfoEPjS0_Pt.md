# _ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt

`CGuildWar::GetGuildWarInfo(unsigned int*, unsigned int*, unsigned short*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809a86c` | `0xef` | `0x8061152` | `0xf2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,77 +1,78 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xe3>
+je     <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xe6>
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xe6>
+je     <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xe9>
 cmpl   $0x0,0x14(%ebp)
-je     <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xe9>
+je     <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xec>
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP14STGuildWarInfoESaIS3_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xb2>
+jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xb5>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xa7>
+je     <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xaa>
 mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%ebx
 add    0xc(%ebp),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 mov    (%eax),%eax
 mov    %eax,(%ebx)
 mov    -0xc(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%ebx
 add    0x10(%ebp),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIjP14STGuildWarInfoESt6vectorIS4_SaIS4_EEEptEv>
 mov    0x4(%eax),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%ebx)
 mov    -0xc(%ebp),%eax
 add    %eax,%eax
 add    0x14(%ebp),%eax
+mov    -0xc(%ebp),%edx
+add    $0x1,%edx
+mov    %dx,(%eax)
 addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%edx
-mov    %dx,(%eax)
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
 jne    <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0x43>
-jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xea>
+jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xed>
 nop
-jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xea>
+jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xed>
 nop
-jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xea>
+jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt+0xed>
 nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildWar::GetGuildWarInfo(unsigned int*, unsigned int*, unsigned short*) */

void __thiscall
CGuildWar::_ZN9CGuildWar15GetGuildWarInfoEPjS0_Pt
          (CGuildWar *this,uint *param_1,uint *param_2,ushort *param_3)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  uint *puVar4;
  __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  if (((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != (ushort *)0x0)) {
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
        puVar4 = param_1 + local_10;
        iVar2 = __gnu_cxx::
                __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                ::operator->(local_18);
        *puVar4 = **(uint **)(iVar2 + 4);
        puVar4 = param_2 + local_10;
        iVar2 = __gnu_cxx::
                __normal_iterator<std::pair<unsigned_int,STGuildWarInfo*>*,std::vector<std::pair<unsigned_int,STGuildWarInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarInfo*>>>>
                ::operator->(local_18);
        *puVar4 = *(uint *)(*(int *)(iVar2 + 4) + 4);
        puVar3 = param_3 + local_10;
        local_10 = local_10 + 1;
        *puVar3 = (ushort)local_10;
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

定义于 [source/DNFServer/GameServer/Guild/DNFGuildWar.cpp](source/DNFServer/GameServer/Guild/DNFGuildWar.cpp)（约第 133 行）：

```cpp
void CGuildWar::GetGuildWarInfo(unsigned int* a, unsigned int* b, unsigned short* c)
{
    if (a == 0)
    {
        return;
    }
    if (b == 0)
    {
        return;
    }
    if (c == 0)
    {
        return;
    }
    int idx = 0;
    for (std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it =
             m_vtGuildWarInfo.begin(); it != m_vtGuildWarInfo.end(); ++it)
    {
        if (it->second != 0)
        {
            a[idx] = it->second->m_guildKey;
            b[idx] = it->second->m_point;
            c[idx] = (unsigned short)(idx + 1);
            idx++;
        }
    }
}
```
