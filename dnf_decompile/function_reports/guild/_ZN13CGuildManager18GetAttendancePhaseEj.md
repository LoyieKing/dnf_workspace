# _ZN13CGuildManager18GetAttendancePhaseEj

`CGuildManager::GetAttendancePhase(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80974f8` | `0xa7` | `0x805d57a` | `0x78` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 lea    0x9c(%eax),%ecx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x9c(%eax),%edx
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEneERKS6_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEeqERKS6_>
 test   %al,%al
-je     <T> <_ZN13CGuildManager18GetAttendancePhaseEj+0xa0>
-movl   $0x8,-0xc(%ebp)
-jmp    <T> <_ZN13CGuildManager18GetAttendancePhaseEj+0x94>
-lea    -0x14(%ebp),%eax
+je     <T> <_ZN13CGuildManager18GetAttendancePhaseEj+0x60>
+mov    $0x0,%eax
+jmp    <T> <_ZN13CGuildManager18GetAttendancePhaseEj+0x76>
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEptEv>
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIjSaIjEE4sizeEv>
-mov    -0xc(%ebp),%edx
-mov    &_ZL15guild_att_phase(,%edx,4),%edx
-cmp    %edx,%eax
-setae  %al
-test   %al,%al
-je     <T> <_ZN13CGuildManager18GetAttendancePhaseEj+0x90>
-mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN13CGuildManager18GetAttendancePhaseEj+0xa5>
-subl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-not    %eax
-shr    $0x1f,%eax
-test   %al,%al
-jne    <T> <_ZN13CGuildManager18GetAttendancePhaseEj+0x62>
-mov    $0xffffffff,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GetAttendancePhase(unsigned int) */

int CGuildManager::_ZN13CGuildManager18GetAttendancePhaseEj(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  local_18 [4];
  map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
  local_14 [4];
  int local_10;
  
  std::
  map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
          ::operator!=(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 != '\0') {
    for (local_10 = 8; -1 < local_10; local_10 = local_10 + -1) {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
              ::operator->(local_18);
      uVar3 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                        ((vector<unsigned_int,std::allocator<unsigned_int>> *)(iVar2 + 4));
      if (*(uint *)(::guild_att_phase + local_10 * 4) <= uVar3) {
        return local_10;
      }
    }
  }
  return -1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 721 行）：

```cpp
int CGuildManager::GetAttendancePhase(unsigned int guildKey)
{
    std::map<unsigned int, std::vector<unsigned int> >::iterator it =
        m_attendance.find(guildKey);
    if (it == m_attendance.end())
    {
        return 0;
    }
    return (int)it->second.size();
}
```
