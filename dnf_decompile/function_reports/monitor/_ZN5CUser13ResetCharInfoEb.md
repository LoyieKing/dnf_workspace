# _ZN5CUser13ResetCharInfoEb

`CUser::ResetCharInfo(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d3dc` | `0x76` | `0x8089398` | `0x7e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0xc(%ebp)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
+add    $0x4,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0xff,0x42(%eax)
+add    $0x42,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0xff,0x43(%eax)
+add    $0x43,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movw   $0xffff,0x44(%eax)
+add    $0x44,%eax
+movw   $0xffff,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x24,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15ResetMemberInfoEv>
 movzbl -0xc(%ebp),%eax
 mov    0x8(%ebp),%edx
 add    $0x6c,%edx
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN12CBuddyHandle5resetEP5CUserb>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::ResetCharInfo(bool) */

void __thiscall CUser::_ZN5CUser13ResetCharInfoEb(CUser *this,bool param_1)

{
  *(undefined4 *)(this + 4) = 0;
  this[0x42] = (CUser)0xff;
  this[0x43] = (CUser)0xff;
  *(undefined2 *)(this + 0x44) = 0xffff;
  memset(this + 0x24,0,0x1e);
  ResetMemberInfo(this);
  CBuddyHandle::reset((CBuddyHandle *)(this + 0x6c),(CUser *)0x0,param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 346 行）：

```cpp
void CUser::ResetCharInfo(bool flag)
{
    *(unsigned int*)((char*)this + 4) = 0;
    *(char*)((char*)this + 0x42) = 0xff;
    *(char*)((char*)this + 0x43) = 0xff;
    *(unsigned short*)((char*)this + 0x44) = 0xffff;
    memset((char*)this + 0x24, 0, 0x1e);
    ResetMemberInfo();
    ((CBuddyHandle*)((char*)this + 0x6c))->reset(0, flag);
}
```
