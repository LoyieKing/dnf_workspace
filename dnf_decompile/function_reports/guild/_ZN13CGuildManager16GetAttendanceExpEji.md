# _ZN13CGuildManager16GetAttendanceExpEji

`CGuildManager::GetAttendanceExp(unsigned int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80975a0` | `0xc5` | `0x805d312` | `0xc2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,59 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN13CGuildManager16GetAttendanceExpEji+0x2c>
+jne    <T> <_ZN13CGuildManager16GetAttendanceExpEji+0x2b>
 mov    $0x0,%eax
 jmp    <T> <_ZN13CGuildManager16GetAttendanceExpEji+0xc0>
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
 je     <T> <_ZN13CGuildManager16GetAttendanceExpEji+0xbb>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEptEv>
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIjSaIjEE4sizeEv>
 mov    %eax,-0xc(%ebp)
-mov    0x10(%ebp),%ebx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildLevelEv>
-movzbl %al,%edx
-mov    %ebx,%eax
+movzbl %al,%ecx
+mov    0x10(%ebp),%edx
+mov    %edx,%eax
 shl    $0x4,%eax
-add    %ebx,%eax
 add    %edx,%eax
+lea    (%ecx,%eax,1),%eax
 mov    &_ZL13guild_att_exp(,%eax,4),%eax
 jmp    <T> <_ZN13CGuildManager16GetAttendanceExpEji+0xc0>
 mov    $0x0,%eax
-mov    -0x4(%ebp),%ebx
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

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 794 行）：

```cpp
int CGuildManager::GetAttendanceExp(unsigned int guildKey, int phase)
{
    CGuild* guild = FindGuild(guildKey);
    if (guild == 0)
    {
        return 0;
    }
    std::map<unsigned int, std::vector<unsigned int> >::iterator it =
        m_attendance.find(guildKey);
    if (it != m_attendance.end())
    {
        unsigned int cnt = it->second.size();
        return guild_att_exp[(guild->GetGuildLevel() & 0xff) + phase * 0x11];
    }
    return 0;
}
```
