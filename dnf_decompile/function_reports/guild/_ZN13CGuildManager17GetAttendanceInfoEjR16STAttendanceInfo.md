# _ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo

`CGuildManager::GetAttendanceInfo(unsigned int, STAttendanceInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8097666` | `0x160` | `0x805db30` | `0x182` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,106 +1,116 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x24,%esp
+sub    $0x34,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15a>
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x17d>
+mov    0x10(%ebp),%eax
+lea    0x4(%eax),%ebx
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
-movzwl %ax,%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x4(%eax)
+movzwl %ax,%eax
+mov    %eax,(%ebx)
 mov    0x8(%ebp),%eax
 lea    0x9c(%eax),%ecx
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x9c(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEneERKS6_>
 test   %al,%al
-je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
-lea    -0x18(%ebp),%eax
+je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x17d>
+mov    0x10(%ebp),%ebx
+lea    -0x24(%ebp),%eax
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
+mov    %eax,-0x18(%ebp)
+mov    0x10(%ebp),%eax
+lea    0x18(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    %eax,(%edx)
+cmpl   $0x0,-0x18(%ebp)
+js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x121>
+cmpl   $0x8,-0x18(%ebp)
+jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x121>
+mov    0x10(%ebp),%eax
+lea    0x10(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    &_ZZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfoE19guild_att_phase_tbl(,%eax,4),%eax
+mov    %eax,(%edx)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildLevelEv>
+movzbl %al,%eax
+mov    %eax,-0x10(%ebp)
+mov    0x10(%ebp),%eax
+lea    0x14(%eax),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x4,%eax
+add    %edx,%eax
+mov    -0x10(%ebp),%edx
+and    $0xff,%edx
+add    %edx,%eax
+mov    &_ZZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfoE17guild_att_exp_tbl(,%eax,4),%eax
+mov    %eax,(%ecx)
+mov    -0x18(%ebp),%eax
+add    $0x1,%eax
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x17d>
+cmpl   $0x8,-0x14(%ebp)
+jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x17d>
+mov    0x10(%ebp),%eax
+lea    0x8(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    &_ZZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfoE19guild_att_phase_tbl(,%eax,4),%eax
+mov    %eax,(%edx)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildLevelEv>
+movzbl %al,%eax
 mov    %eax,-0xc(%ebp)
 mov    0x10(%ebp),%eax
+lea    0xc(%eax),%ecx
+mov    -0x14(%ebp),%edx
+mov    %edx,%eax
+shl    $0x4,%eax
+add    %edx,%eax
 mov    -0xc(%ebp),%edx
-mov    %edx,0x18(%eax)
-cmpl   $0x0,-0xc(%ebp)
-js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x10f>
-cmpl   $0x8,-0xc(%ebp)
-jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x10f>
-mov    -0xc(%ebp),%eax
-mov    &_ZL15guild_att_phase(,%eax,4),%eax
-mov    %eax,%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x10(%eax)
-mov    -0xc(%ebp),%ebx
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildLevelEv>
-movzbl %al,%edx
-mov    %ebx,%eax
-shl    $0x4,%eax
-add    %ebx,%eax
+and    $0xff,%edx
 add    %edx,%eax
-mov    &_ZL13guild_att_exp(,%eax,4),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x14(%eax)
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
-cmpl   $0x8,-0xc(%ebp)
-jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
-mov    -0xc(%ebp),%eax
-mov    &_ZL15guild_att_phase(,%eax,4),%eax
-mov    %eax,%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x8(%eax)
-mov    -0xc(%ebp),%ebx
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildLevelEv>
-movzbl %al,%edx
-mov    %ebx,%eax
-shl    $0x4,%eax
-add    %ebx,%eax
-add    %edx,%eax
-mov    &_ZL13guild_att_exp(,%eax,4),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0xc(%eax)
-jmp    <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
-nop
+mov    &_ZZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfoE17guild_att_exp_tbl(,%eax,4),%eax
+mov    %eax,(%ecx)
 mov    -0x4(%ebp),%ebx
 leave
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

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 727 行）：

```cpp
void CGuildManager::GetAttendanceInfo(unsigned int guildKey, STAttendanceInfo& info)
{
    static const int guild_att_phase_tbl[9] = { 5, 10, 20, 35, 60, 100, 150, 220, 300 };
    static const int guild_att_exp_tbl[153] = {
        1,3,4,8,10,18,29,46,70,77,112,158,218,236,307,386,0,
        1,4,4,9,11,18,29,46,70,78,113,159,219,236,307,387,0,
        2,6,8,17,21,36,59,91,140,155,224,316,437,472,614,773,0,
        2,10,12,25,31,53,88,138,209,232,337,475,655,708,920,1159,0,
        5,16,21,42,52,90,146,229,348,387,561,792,1093,1179,1534,1933,0,
        7,26,32,67,83,143,234,367,557,620,899,1266,1748,1888,2454,3092,0,
        9,33,41,84,104,179,292,458,697,774,1122,1583,2184,2360,3067,3865,0,
        13,46,56,117,145,251,409,642,975,1084,1572,2217,3059,3303,4295,5411,0,
        14,52,65,135,166,286,468,734,1115,1239,1797,2533,3496,3775,4907,6184,0,
    };
    CGuild* guild = FindGuild(guildKey);
    if (guild != 0)
    {
        *(unsigned int*)((char*)&info + 4) =
            (unsigned int)guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff;
        std::map<unsigned int, std::vector<unsigned int> >::iterator it =
            m_attendance.find(guildKey);
        if (it != m_attendance.end())
        {
            *(unsigned int*)&info = (unsigned int)it->second.size();
            int phase = GetAttendancePhase(guildKey);
            *(int*)((char*)&info + 0x18) = phase;
            if (phase >= 0 && phase < 9)
            {
                *(unsigned int*)((char*)&info + 0x10) = guild_att_phase_tbl[phase];
                unsigned int level = guild->GetGuildLevel();
                *(unsigned int*)((char*)&info + 0x14) =
                    guild_att_exp_tbl[phase * 0x11 + (level & 0xff)];
            }
            int next = phase + 1;
            if (next >= 0 && next < 9)
            {
                *(unsigned int*)((char*)&info + 8) = guild_att_phase_tbl[next];
                unsigned int level = guild->GetGuildLevel();
                *(unsigned int*)((char*)&info + 0xc) =
                    guild_att_exp_tbl[next * 0x11 + (level & 0xff)];
            }
        }
    }
}
```
