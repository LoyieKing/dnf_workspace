# _ZN11CGuildCargo19SetGuildCargoDBInfoER18STGuildCargoDBInfo

`CGuildCargo::SetGuildCargoDBInfo(STGuildCargoDBInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809fda2` | `0x2c` | `0x8091f14` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,13 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
-mov    0x8(%ebp),%eax
-movl   $0x18dc,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    0x8(%ebp),%eax
-movb   $0x1,0x18e4(%eax)
-leave
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::SetGuildCargoDBInfo(STGuildCargoDBInfo&) */

void __thiscall
CGuildCargo::_ZN11CGuildCargo19SetGuildCargoDBInfoER18STGuildCargoDBInfo
          (CGuildCargo *this,STGuildCargoDBInfo *param_1)

{
  memcpy(this,param_1,0x18dc);
  this[0x18e4] = (CGuildCargo)0x1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 332 行）：

```cpp
void CGuildCargo::SetGuildCargoDBInfo(STGuildCargoDBInfo& info)
{
}
```
