# _ZN16ST_KillUSRConfigC2Ev

`ST_KillUSRConfig::ST_KillUSRConfig()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x806a1b2` | `0x2c` | `0x8053498` | `0x32` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
+add    $0x4,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x8(%eax)
+add    $0x8,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
+add    $0xc,%eax
+movl   $0x0,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* ST_KillUSRConfig::ST_KillUSRConfig() */

void __thiscall ST_KillUSRConfig::_ZN16ST_KillUSRConfigC2Ev(ST_KillUSRConfig *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFKillUserConfig.cpp](source/DNFServer/GameServer/COServer/DNFKillUserConfig.cpp)（约第 9 行）：

```cpp
ST_KillUSRConfig::ST_KillUSRConfig()
{
    m_field0 = 0;
    m_field1 = 0;
    m_field2 = 0;
    m_field3 = 0;
}
```
