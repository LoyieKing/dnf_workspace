# _ZN9BuddyListC1Ev

`BuddyList::BuddyList()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807278e` | `0x3a` | `0x808d04c` | `0x3e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x1(%eax)
+add    $0x1,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x2(%eax)
+add    $0x2,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x3,%eax
 movl   $0x27,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* BuddyList::BuddyList() */

void __thiscall BuddyList::_ZN9BuddyListC1Ev(BuddyList *this)

{
  *this = (BuddyList)0xff;
  this[1] = (BuddyList)0x0;
  this[2] = (BuddyList)0x0;
  memset(this + 3,0,0x27);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUserManager.cpp](source/DNFServer/GameServer/Monitor/DNFUserManager.cpp)（约第 154 行）：

```cpp
void CUserManager::ResetBuddyList(unsigned int charNo)
{
    CUser* user = FindUser_CharNo(charNo);
    if (user != 0)
    {
        user->ResetBuddyList(true);
    }
}
```
