# _ZN11CGuildCargo12SetGuildInfoEi

`CGuildCargo::SetGuildInfo(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809f2cc` | `0x11` | `0x8091786` | `0x13` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x18e0(%eax)
+lea    0x18e0(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,(%edx)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::SetGuildInfo(int) */

void __thiscall CGuildCargo::_ZN11CGuildCargo12SetGuildInfoEi(CGuildCargo *this,int param_1)

{
  *(int *)(this + 0x18e0) = param_1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 135 行）：

```cpp
void CGuildCargo::SetGuildInfo(int guildKey)
{
    *(int*)((char*)this + 0x18e0) = guildKey;
}
```
