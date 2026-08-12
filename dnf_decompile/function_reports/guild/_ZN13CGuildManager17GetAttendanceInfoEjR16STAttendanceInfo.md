# _ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo

`CGuildManager::GetAttendanceInfo(unsigned int, STAttendanceInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8097666` | `0x160` | `0x805d42e` | `0x161` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,106 +1,106 @@
 push   %ebp
 mov    %esp,%ebp
+push   %esi
 push   %ebx
-sub    $0x24,%esp
+sub    $0x20,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15a>
+je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
+mov    0x10(%ebp),%ebx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
-movzwl %ax,%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x4(%eax)
+movzwl %ax,%eax
+mov    %eax,0x4(%ebx)
 mov    0x8(%ebp),%eax
 lea    0x9c(%eax),%ecx
 lea    -0x18(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x9c(%eax),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEneERKS6_>
 test   %al,%al
-je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
+je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
+mov    0x10(%ebp),%ebx
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEptEv>
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIjSaIjEE4sizeEv>
-mov    0x10(%ebp),%edx
-mov    %eax,(%edx)
+mov    %eax,(%ebx)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager18GetAttendancePhaseEj>
 mov    %eax,-0xc(%ebp)
 mov    0x10(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x18(%eax)
 cmpl   $0x0,-0xc(%ebp)
 js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x10f>
 cmpl   $0x8,-0xc(%ebp)
 jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x10f>
-mov    -0xc(%ebp),%eax
-mov    &_ZL15guild_att_phase(,%eax,4),%eax
-mov    %eax,%edx
 mov    0x10(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    &_ZL15guild_att_phase(,%edx,4),%edx
 mov    %edx,0x10(%eax)
 mov    -0xc(%ebp),%ebx
+mov    0x10(%ebp),%esi
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildLevelEv>
 movzbl %al,%edx
 mov    %ebx,%eax
 shl    $0x4,%eax
 add    %ebx,%eax
-add    %edx,%eax
-mov    &_ZL13guild_att_exp(,%eax,4),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x14(%eax)
+lea    (%edx,%eax,1),%eax
+mov    &_ZL13guild_att_exp(,%eax,4),%eax
+mov    %eax,0x14(%esi)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
+js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
 cmpl   $0x8,-0xc(%ebp)
-jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
-mov    -0xc(%ebp),%eax
-mov    &_ZL15guild_att_phase(,%eax,4),%eax
-mov    %eax,%edx
+jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
 mov    0x10(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    &_ZL15guild_att_phase(,%edx,4),%edx
 mov    %edx,0x8(%eax)
 mov    -0xc(%ebp),%ebx
+mov    0x10(%ebp),%esi
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildLevelEv>
 movzbl %al,%edx
 mov    %ebx,%eax
 shl    $0x4,%eax
 add    %ebx,%eax
-add    %edx,%eax
-mov    &_ZL13guild_att_exp(,%eax,4),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0xc(%eax)
-jmp    <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
-nop
-mov    -0x4(%ebp),%ebx
-leave
+lea    (%edx,%eax,1),%eax
+mov    &_ZL13guild_att_exp(,%eax,4),%eax
+mov    %eax,0xc(%esi)
+lea    -0x8(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GetAttendanceInfo(unsigned int, STAttendanceInfo&) */

void __thiscall
CGuildManager::_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo
          (CGuildManager *this,uint param_1,STAttendanceInfo *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  local_1c [4];
  map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
  local_18 [4];
  CGuild *local_14;
  int local_10;
  
  local_14 = (CGuild *)FindGuild((uint)this);
  if (local_14 != (CGuild *)0x0) {
    uVar2 = CGuild::GetTotalCnt_Of_GuildDBInfo(local_14);
    *(uint *)(param_2 + 4) = uVar2 & 0xffff;
    std::
    map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
    ::find((uint *)local_1c);
    std::
    map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
            ::operator!=(local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 != '\0') {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
              ::operator->(local_1c);
      uVar4 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                        ((vector<unsigned_int,std::allocator<unsigned_int>> *)(iVar3 + 4));
      *(undefined4 *)param_2 = uVar4;
      iVar3 = GetAttendancePhase((uint)this);
      *(int *)(param_2 + 0x18) = iVar3;
      local_10 = iVar3;
      if ((-1 < iVar3) && (iVar3 < 9)) {
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(::guild_att_phase + iVar3 * 4);
        uVar2 = CGuild::GetGuildLevel(local_14);
        *(undefined4 *)(param_2 + 0x14) =
             *(undefined4 *)(::guild_att_exp + (iVar3 * 0x11 + (uVar2 & 0xff)) * 4);
      }
      iVar3 = local_10 + 1;
      if ((-1 < iVar3) && (iVar3 < 9)) {
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(::guild_att_phase + iVar3 * 4);
        local_10 = iVar3;
        uVar2 = CGuild::GetGuildLevel(local_14);
        *(undefined4 *)(param_2 + 0xc) =
             *(undefined4 *)(::guild_att_exp + (iVar3 * 0x11 + (uVar2 & 0xff)) * 4);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 820 行）：

```cpp
void CGuildManager::GetAttendanceInfo(unsigned int guildKey, STAttendanceInfo& info)
{
    struct GAI_Layout {
        unsigned int m0;  // +0
        unsigned int m1;  // +4
        unsigned int m2;  // +8
        unsigned int m3;  // +0xc
        unsigned int m4;  // +0x10
        unsigned int m5;  // +0x14
        int m6;           // +0x18
    };
    CGuild* guild = FindGuild(guildKey);
    if (guild != 0)
    {
        ((GAI_Layout&)info).m1 =
            (unsigned int)guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff;
        std::map<unsigned int, std::vector<unsigned int> >::iterator it =
            m_attendance.find(guildKey);
        if (it != m_attendance.end())
        {
            ((GAI_Layout&)info).m0 = (unsigned int)it->second.size();
            int phase = GetAttendancePhase(guildKey);
            ((GAI_Layout&)info).m6 = phase;
            if (phase >= 0 && phase < 9)
            {
                ((GAI_Layout&)info).m4 = guild_att_phase[phase];
                register int p = phase;
                ((GAI_Layout&)info).m5 =
                    guild_att_exp[(guild->GetGuildLevel() & 0xff) + p * 0x11];
            }
            phase++;
            if (phase >= 0 && phase < 9)
            {
                ((GAI_Layout&)info).m2 = guild_att_phase[phase];
                register int p = phase;
                ((GAI_Layout&)info).m3 =
                    guild_att_exp[(guild->GetGuildLevel() & 0xff) + p * 0x11];
            }
        }
    }
}
```
