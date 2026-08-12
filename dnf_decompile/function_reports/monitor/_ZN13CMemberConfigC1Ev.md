# _ZN13CMemberConfigC1Ev

`CMemberConfig::CMemberConfig()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806b946` | `0x4a` | `0x80612c4` | `0xb3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,62 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTableBaseC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV13CMemberConfig+0x8,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,%ebx
 mov    $0x9,%esi
 jmp    <T> <_ZN13CMemberConfigC1Ev+0x39>
 mov    %ebx,(%esp)
 call   <T> <_ZN15ST_MemberConfigC1Ev>
 add    $0xc,%ebx
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
 jne    <T> <_ZN13CMemberConfigC1Ev+0x2b>
-add    $0x10,%esp
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN13CMemberConfigC1Ev+0xa1>
+mov    -0xc(%ebp),%edx
+mov    0x8(%ebp),%ecx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x4,%eax
+movl   $0x0,(%eax)
+mov    -0xc(%ebp),%edx
+mov    0x8(%ebp),%ecx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x8,%eax
+movl   $0x0,(%eax)
+mov    -0xc(%ebp),%edx
+mov    0x8(%ebp),%ecx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0xc,%eax
+movl   $0x0,(%eax)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x9,-0xc(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN13CMemberConfigC1Ev+0x4c>
+add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberConfig::CMemberConfig() */

void __thiscall CMemberConfig::_ZN13CMemberConfigC1Ev(CMemberConfig *this)

{
  ST_MemberConfig *this_00;
  int iVar1;
  
  CTableBase::_ZN10CTableBaseC2Ev((CTableBase *)this);
  *(undefined ***)this = &PTR__CMemberConfig_08120138;
  this_00 = (ST_MemberConfig *)(this + 4);
  for (iVar1 = 9; iVar1 != -1; iVar1 = iVar1 + -1) {
    ST_MemberConfig::ST_MemberConfig(this_00);
    this_00 = this_00 + 0xc;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp](source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp)（约第 31 行）：

```cpp
CMemberConfig::CMemberConfig()
{
}
```
