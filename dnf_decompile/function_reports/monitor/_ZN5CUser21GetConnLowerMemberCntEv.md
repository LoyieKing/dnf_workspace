# _ZN5CUser21GetConnLowerMemberCntEv

`CUser::GetConnLowerMemberCnt()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806de26` | `0x5e` | `0x8089bfc` | `0x68` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x57>
+jne    <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x17>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x66>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember12GetMemberKeyEv>
 test   %eax,%eax
-je     <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x3e>
+je     <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x44>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15GetMemberDBFlagEv>
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x3e>
+jne    <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x4b>
 mov    $0x1,%eax
-jmp    <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x43>
+jmp    <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x50>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x57>
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
+je     <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x5b>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x66>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember21GetConnLowerMemberCntEv>
-jmp    <T> <_ZN5CUser21GetConnLowerMemberCntEv+0x5c>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::GetConnLowerMemberCnt() */

undefined4 __thiscall CUser::_ZN5CUser21GetConnLowerMemberCntEv(CUser *this)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(int *)(this + 0x14) != 0) {
    iVar2 = CMember::GetMemberKey(*(CMember **)(this + 0x14));
    if ((iVar2 == 0) || (uVar3 = _ZN5CUser15GetMemberDBFlagEv(this), (uVar3 & 4) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = CMember::GetConnLowerMemberCnt(*(CMember **)(this + 0x14));
      return uVar4;
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 594 行）：

```cpp
int CUser::GetConnLowerMemberCnt()
{
    if (((RA_INT<20>*)this)->v == 0)
    {
        return 0;
    }
    CMember* member = (CMember*)((RA_INT<20>*)this)->v;
    if (member->GetMemberKey() == 0 || (GetMemberDBFlag() & 4) == 0)
    {
        return 0;
    }
    return member->GetConnLowerMemberCnt();
}
```
