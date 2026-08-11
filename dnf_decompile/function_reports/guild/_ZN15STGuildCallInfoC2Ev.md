# _ZN15STGuildCallInfoC2Ev

`STGuildCallInfo::STGuildCallInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8089a68` | `0x3d` | `0x8052a80` | `0x38` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-movl   $0x0,(%eax)
+add    $0x4,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x4(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x0,0x5(%eax)
+add    $0x5,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x6,%eax
 movl   $0x17,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STGuildCallInfo::STGuildCallInfo() */

void __thiscall STGuildCallInfo::_ZN15STGuildCallInfoC2Ev(STGuildCallInfo *this)

{
  *(undefined4 *)this = 0;
  this[4] = (STGuildCallInfo)0x0;
  this[5] = (STGuildCallInfo)0x0;
  memset(this + 6,0,0x17);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 225 行）：

```cpp
STGuildCallInfo::STGuildCallInfo()
{
    *(unsigned char*)((char*)this + 0x4) = 0x0;
    *(unsigned char*)((char*)this + 0x5) = 0x0;
    memset((char*)this + 0x6, 0, 0x17);
}
```
