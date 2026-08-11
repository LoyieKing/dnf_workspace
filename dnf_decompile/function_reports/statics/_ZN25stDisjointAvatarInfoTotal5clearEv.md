# _ZN25stDisjointAvatarInfoTotal5clearEv

`stDisjointAvatarInfoTotal::clear()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8057910` | `0x94` | `0x8065650` | `0x98` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
 sub    $0x10,%esp
-movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x82>
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x73>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x47>
-mov    -0x14(%ebp),%edx
-mov    -0x10(%ebp),%esi
-mov    -0xc(%ebp),%ebx
-mov    0x8(%ebp),%ecx
+jmp    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x87>
+movl   $0x0,-0x8(%ebp)
+jmp    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x78>
+movl   $0x0,-0x4(%ebp)
+jmp    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x48>
+mov    0x8(%ebp),%eax
+mov    %eax,%ecx
+mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-add    %esi,%eax
+add    -0x8(%ebp),%eax
 add    %eax,%eax
-add    %ebx,%eax
-movl   $0x0,(%ecx,%eax,4)
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x1,-0xc(%ebp)
+add    -0x4(%ebp),%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+movl   $0x0,(%eax)
+addl   $0x1,-0x4(%ebp)
+cmpl   $0x1,-0x4(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x23>
-mov    -0x14(%ebp),%edx
-mov    -0x10(%ebp),%ebx
-mov    0x8(%ebp),%ecx
+jne    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x21>
+mov    0x8(%ebp),%eax
+mov    %eax,%ecx
+mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
-add    %ebx,%eax
-add    $0x34,%eax
-movl   $0x0,0x8(%ecx,%eax,4)
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x8,-0x10(%ebp)
+add    -0x8(%ebp),%eax
+add    $0x36,%eax
+shl    $0x2,%eax
+lea    (%ecx,%eax,1),%eax
+movl   $0x0,(%eax)
+addl   $0x1,-0x8(%ebp)
+cmpl   $0x8,-0x8(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x1a>
-addl   $0x1,-0x14(%ebp)
-cmpl   $0x2,-0x14(%ebp)
+jne    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x18>
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x2,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0x11>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+jne    <T> <_ZN25stDisjointAvatarInfoTotal5clearEv+0xf>
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* stDisjointAvatarInfoTotal::clear() */

void __thiscall
stDisjointAvatarInfoTotal::_ZN25stDisjointAvatarInfoTotal5clearEv(stDisjointAvatarInfoTotal *this)

{
  int local_18;
  int local_14;
  int local_10;
  
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 9; local_14 = local_14 + 1) {
      for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
        *(undefined4 *)(this + ((local_18 * 9 + local_14) * 2 + local_10) * 4) = 0;
      }
      *(undefined4 *)(this + (local_18 * 9 + local_14 + 0x34) * 4 + 8) = 0;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GMAccounts.cpp](source/DNFServer/GameServer/Guild/GMAccounts.cpp)（约第 96 行）：

```cpp
void CGMAccounts::clearGmList()
{
    m_list.clear();
}
```
