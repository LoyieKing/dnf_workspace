# _ZN6CMySql4pingEv

`CMySql::ping()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8061b7a` | `0x16` | `0x80553a0` | `0x1b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,9 +1,11 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_ping>
+test   %eax,%eax
+setne  %al
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::ping() */

void __thiscall CMySql::_ZN6CMySql4pingEv(CMySql *this)

{
  mysql_ping(*(undefined4 *)(this + 4));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.h](source/DNFServer/GameServer/DBMW/DNFMySql.h)（约第 17 行）：

```cpp
    virtual char ping() { return 0; }
```
