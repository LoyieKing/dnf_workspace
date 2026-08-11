# _ZN13CGuildManager16GetAttendanceExpEji

`CGuildManager::GetAttendanceExp(unsigned int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80975a0` | `0xc5` | `0x805d5f2` | `0xab` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,59 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN13CGuildManager16GetAttendanceExpEji+0x2c>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZN13CGuildManager16GetAttendanceExpEji+0x29>
 mov    $0x0,%eax
-jmp    <T> <_ZN13CGuildManager16GetAttendanceExpEji+0xc0>
+jmp    <T> <_ZN13CGuildManager16GetAttendanceExpEji+0xa6>
 mov    0x8(%ebp),%eax
 lea    0x9c(%eax),%ecx
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x9c(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 sub    $0x4,%esp
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEneERKS6_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEeqERKS6_>
 test   %al,%al
-je     <T> <_ZN13CGuildManager16GetAttendanceExpEji+0xbb>
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEptEv>
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt6vectorIjSaIjEE4sizeEv>
-mov    %eax,-0xc(%ebp)
-mov    0x10(%ebp),%ebx
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN13CGuildManager16GetAttendanceExpEji+0x83>
+mov    $0x0,%eax
+jmp    <T> <_ZN13CGuildManager16GetAttendanceExpEji+0xa6>
+mov    0x10(%ebp),%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+lea    (%edx,%eax,1),%ebx
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildLevelEv>
-movzbl %al,%edx
-mov    %ebx,%eax
-shl    $0x4,%eax
-add    %ebx,%eax
-add    %edx,%eax
-mov    &_ZL13guild_att_exp(,%eax,4),%eax
-jmp    <T> <_ZN13CGuildManager16GetAttendanceExpEji+0xc0>
-mov    $0x0,%eax
+movzbl %al,%eax
+lea    (%ebx,%eax,1),%eax
+mov    &_ZZN13CGuildManager16GetAttendanceExpEjiE17guild_att_exp_tbl(,%eax,4),%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GetAttendanceExp(unsigned int, int) */

undefined4 __thiscall
CGuildManager::_ZN13CGuildManager16GetAttendanceExpEji(CGuildManager *this,uint param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  local_1c [4];
  map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
  local_18 [4];
  CGuild *local_14;
  undefined4 local_10;
  
  local_14 = (CGuild *)FindGuild((uint)this);
  if (local_14 == (CGuild *)0x0) {
    uVar2 = 0;
  }
  else {
    std::
    map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
    ::find((uint *)local_1c);
    std::
    map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
            ::operator!=(local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
              ::operator->(local_1c);
      local_10 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                           ((vector<unsigned_int,std::allocator<unsigned_int>> *)(iVar3 + 4));
      uVar4 = CGuild::GetGuildLevel(local_14);
      uVar2 = *(undefined4 *)(::guild_att_exp + (param_2 * 0x11 + (uVar4 & 0xff)) * 4);
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 732 行）：

```cpp
int CGuildManager::GetAttendanceExp(unsigned int guildKey, int phase)
{
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
    if (guild == 0)
    {
        return 0;
    }
    std::map<unsigned int, std::vector<unsigned int> >::iterator it =
        m_attendance.find(guildKey);
    if (it == m_attendance.end())
    {
        return 0;
    }
    return guild_att_exp_tbl[phase * 0x11 + (guild->GetGuildLevel() & 0xff)];
}
```
