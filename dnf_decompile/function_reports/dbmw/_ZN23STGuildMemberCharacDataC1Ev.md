# _ZN23STGuildMemberCharacDataC1Ev

`STGuildMemberCharacData::STGuildMemberCharacData()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a160a` | `0x3a` | `0x8052dc2` | `0x3e` |

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
-movb   $0xff,0x1(%eax)
+add    $0x1,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x2(%eax)
+add    $0x2,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x3,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STGuildMemberCharacData::STGuildMemberCharacData() */

void __thiscall
STGuildMemberCharacData::_ZN23STGuildMemberCharacDataC1Ev(STGuildMemberCharacData *this)

{
  *this = (STGuildMemberCharacData)0xff;
  this[1] = (STGuildMemberCharacData)0xff;
  this[2] = (STGuildMemberCharacData)0x0;
  memset(this + 3,0,0x1e);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1733 行）：

```cpp
STGuildMemberCharacData::STGuildMemberCharacData()
{
    *(char*)((char*)this + 0) = 0xff;
    *(char*)((char*)this + 1) = 0xff;
    *(char*)((char*)this + 2) = 0;
    memset((char*)this + 3, 0, 0x1e);
}
```
