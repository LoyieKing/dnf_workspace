# _ZN18STGuildBoardDBInfoC1Ev

`STGuildBoardDBInfo::STGuildBoardDBInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a1644` | `0x54` | `0x8052e60` | `0x57` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0x84,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN23STGuildMemberCharacDataC1Ev>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x78(%eax)
+add    $0x78,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x7c(%eax)
+add    $0x7c,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x80(%eax)
-mov    0x8(%ebp),%eax
+sub    $0xffffff80,%eax
+movl   $0x0,(%eax)
 movl   $0x78,0x8(%esp)
 movl   $0x0,0x4(%esp)
+mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STGuildBoardDBInfo::STGuildBoardDBInfo() */

void __thiscall STGuildBoardDBInfo::_ZN18STGuildBoardDBInfoC1Ev(STGuildBoardDBInfo *this)

{
  STGuildMemberCharacData::STGuildMemberCharacData((STGuildMemberCharacData *)(this + 0x84));
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  memset(this,0,0x78);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1750 行）：

```cpp
STGuildBoardDBInfo::STGuildBoardDBInfo()
    : m_member()
{
    *(int*)((char*)this + 0x78) = 0;
    *(int*)((char*)this + 0x7c) = 0;
    *(int*)((char*)this + 0x80) = 0;
    memset(this, 0, 0x78);
}
```
