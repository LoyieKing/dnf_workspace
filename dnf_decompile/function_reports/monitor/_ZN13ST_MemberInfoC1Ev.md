# _ZN13ST_MemberInfoC1Ev

`ST_MemberInfo::ST_MemberInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8092842` | `0x55` | `0x8060e64` | `0x5f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x1(%eax)
+add    $0x1,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x20(%eax)
+add    $0x20,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x21(%eax)
+add    $0x21,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x22(%eax)
+add    $0x22,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x26(%eax)
+add    $0x26,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x2,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* ST_MemberInfo::ST_MemberInfo() */

void __thiscall ST_MemberInfo::_ZN13ST_MemberInfoC1Ev(ST_MemberInfo *this)

{
  *this = (ST_MemberInfo)0x0;
  this[1] = (ST_MemberInfo)0x0;
  this[0x20] = (ST_MemberInfo)0x0;
  this[0x21] = (ST_MemberInfo)0x0;
  *(undefined4 *)(this + 0x22) = 0;
  *(undefined4 *)(this + 0x26) = 0;
  memset(this + 2,0,0x1e);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.h](source/DNFServer/GameServer/Monitor/DNFMember.h)（约第 266 行）：

```cpp
    ST_MemberInfo()
    {
        *(char*)((char*)this + 0) = 0;
        *(char*)((char*)this + 1) = 0;
        *(char*)((char*)this + 0x20) = 0;
        *(char*)((char*)this + 0x21) = 0;
        *(unsigned int*)((char*)this + 0x22) = 0;
        *(unsigned int*)((char*)this + 0x26) = 0;
        memset((char*)this + 2, 0, 0x1e);
    }
```
