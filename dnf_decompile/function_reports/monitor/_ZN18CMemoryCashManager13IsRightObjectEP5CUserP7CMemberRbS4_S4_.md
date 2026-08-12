# _ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_

`CMemoryCashManager::IsRightObject(CUser*, CMember*, bool&, bool&, bool&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a0b90` | `0x12c` | `0x8098056` | `0x133` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,97 +1,98 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
-movb   $0x0,-0x9(%ebp)
 mov    0x14(%ebp),%eax
 movb   $0x0,(%eax)
 mov    0x1c(%ebp),%eax
 movb   $0x0,(%eax)
 mov    0x18(%ebp),%eax
 movb   $0x0,(%eax)
+movb   $0x0,-0x9(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%ecx
 lea    -0x18(%ebp),%eax
 lea    -0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CCashObjectSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEneERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP11CCashObjectEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x81>
-mov    $0x0,%eax
-jmp    <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x12a>
+je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x12c>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetBuddyDBFlagEv>
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0xa5>
+je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x9f>
 mov    0x14(%ebp),%eax
 movb   $0x1,(%eax)
 movb   $0x1,-0x9(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18GetBlackListDBFlagEv>
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0xc9>
+je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0xc3>
 mov    0x1c(%ebp),%eax
 movb   $0x1,(%eax)
 movb   $0x1,-0x9(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser12GetMemberKeyEv>
 test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x126>
+je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0xee>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15GetMemberDBFlagEv>
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-setne  %al
+je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0xee>
+mov    $0x1,%eax
+jmp    <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0xf3>
+mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x126>
 cmpl   $0x0,0x10(%ebp)
 je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x113>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember22IsAbleToRegisterMemberEv>
 test   %al,%al
 je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x113>
 mov    $0x1,%eax
 jmp    <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x118>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x126>
 mov    0x18(%ebp),%eax
 movb   $0x1,(%eax)
 movb   $0x1,-0x9(%ebp)
 movzbl -0x9(%ebp),%eax
+jmp    <T> <_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_+0x131>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemoryCashManager::IsRightObject(CUser*, CMember*, bool&, bool&, bool&) */

undefined1 __thiscall
CMemoryCashManager::_ZN18CMemoryCashManager13IsRightObjectEP5CUserP7CMemberRbS4_S4_
          (CMemoryCashManager *this,CUser *param_1,CMember *param_2,bool *param_3,bool *param_4,
          bool *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>> local_1c [4];
  undefined4 local_18;
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  local_14 [7];
  undefined1 local_d;
  
  local_d = 0;
  *param_3 = false;
  *param_5 = false;
  *param_4 = false;
  local_18 = CUser::GetDBID(param_1);
  std::
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  ::find((uint *)local_1c);
  std::
  map<unsigned_int,CCashObject*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CCashObject*>>>
  ::end(local_14);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CCashObject*>>::operator!=
                    (local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar2 == '\0') {
    uVar3 = CUser::GetBuddyDBFlag(param_1);
    if ((uVar3 & 4) != 0) {
      *param_3 = true;
      local_d = 1;
    }
    uVar3 = CUser::GetBlackListDBFlag(param_1);
    if ((uVar3 & 4) != 0) {
      *param_5 = true;
      local_d = 1;
    }
    iVar4 = CUser::GetMemberKey(param_1);
    if ((iVar4 != 0) && (uVar3 = CUser::GetMemberDBFlag(param_1), (uVar3 & 4) != 0)) {
      if ((param_2 == (CMember *)0x0) ||
         (cVar2 = CMember::IsAbleToRegisterMember(param_2), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_4 = true;
        local_d = 1;
      }
    }
  }
  else {
    local_d = 0;
  }
  return local_d;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/MemoryCashManager.cpp, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/CashObject.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFBuddy.h, source/DNFServer/GameServer/Monitor/DNFBuddyHandle.h, source/DNFServer/GameServer/Monitor/DNFMember.h 等 299 个文件*
