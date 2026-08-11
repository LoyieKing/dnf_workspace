# _ZN18STGuildBoardDBInfoC1Ev

`STGuildBoardDBInfo::STGuildBoardDBInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80898a8` | `0x54` | `0x808f634` | `0x9b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
-add    $0x84,%eax
+lea    0x84(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x21,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN18STGuildBoardDBInfoC1Ev+0x54>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN23STGuildMemberCharacDataC1Ev>
+jmp    <T> <_ZN18STGuildBoardDBInfoC1Ev+0x54>
+mov    %edx,%edi
+mov    %eax,-0x1c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x1c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
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
+sub    $0xffffff80,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x78,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
-leave
+add    $0x2c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
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

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 81 行）：

```cpp
STGuildBoardDBInfo::STGuildBoardDBInfo()
{
    new ((char*)this + 0x84) STGuildMemberCharacData;
    *(unsigned int*)((char*)this + 0x78) = 0;
    *(unsigned int*)((char*)this + 0x7c) = 0;
    *(unsigned int*)((char*)this + 0x80) = 0;
    memset((char*)this, 0, 0x78);
}
```
