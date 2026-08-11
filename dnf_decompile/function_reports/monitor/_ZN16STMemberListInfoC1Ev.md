# _ZN16STMemberListInfoC1Ev

`STMemberListInfo::STMemberListInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8092898` | `0x48` | `0x8060f74` | `0x48` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13ST_MemberInfoC1Ev>
 mov    0x8(%ebp),%eax
-movb   $0x0,0x2a(%eax)
-mov    0x8(%ebp),%eax
-add    $0x2b,%eax
+add    $0x2,%eax
 mov    %eax,%ebx
-mov    $0x9,%esi
-jmp    <T> <_ZN16STMemberListInfoC1Ev+0x37>
+mov    $0x8,%esi
+jmp    <T> <_ZN16STMemberListInfoC1Ev+0x30>
 mov    %ebx,(%esp)
 call   <T> <_ZN13ST_MemberInfoC1Ev>
-add    $0x2a,%ebx
+add    $0x1,%ebx
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
-jne    <T> <_ZN16STMemberListInfoC1Ev+0x29>
+jne    <T> <_ZN16STMemberListInfoC1Ev+0x22>
+mov    0x8(%ebp),%eax
+movb   $0x0,0x1(%eax)
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* STMemberListInfo::STMemberListInfo() */

void __thiscall STMemberListInfo::_ZN16STMemberListInfoC1Ev(STMemberListInfo *this)

{
  ST_MemberInfo *this_00;
  int iVar1;
  
  ST_MemberInfo::_ZN13ST_MemberInfoC2Ev((ST_MemberInfo *)this);
  this[0x2a] = (STMemberListInfo)0x0;
  this_00 = (ST_MemberInfo *)(this + 0x2b);
  for (iVar1 = 9; iVar1 != -1; iVar1 = iVar1 + -1) {
    ST_MemberInfo::_ZN13ST_MemberInfoC2Ev(this_00);
    this_00 = this_00 + 0x2a;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 597 行）：

```cpp
STMemberListInfo::STMemberListInfo()
{
    m_count = 0;
}
```
