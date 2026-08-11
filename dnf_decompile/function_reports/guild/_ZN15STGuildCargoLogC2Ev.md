# _ZN15STGuildCargoLogC2Ev

`STGuildCargoLog::STGuildCargoLog()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808978e` | `0x23` | `0x8091560` | `0x23` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
+mov    0x8(%ebp),%eax
 movl   $0x30,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STGuildCargoLog::STGuildCargoLog() */

void __thiscall STGuildCargoLog::_ZN15STGuildCargoLogC2Ev(STGuildCargoLog *this)

{
  memset(this,0,0x30);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 81 行）：

```cpp
STGuildCargoLog::STGuildCargoLog()
{
    memset((char*)this, 0, 0x30);
}
```
