# _ZN6CGuild19IsCompleteGuildFundEv

`CGuild::IsCompleteGuildFund()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092172` | `0x62` | `0x8057f7e` | `0x54` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x5b>
+je     <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x4d>
 mov    0x8(%ebp),%eax
-add    $0xc0,%eax
-mov    %eax,-0x8(%ebp)
+movzbl 0x3b(%eax),%eax
+cmp    $0xf,%al
+jbe    <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x36>
 mov    0x8(%ebp),%eax
-add    $0x3b,%eax
-mov    %eax,-0x4(%ebp)
-mov    -0x4(%ebp),%eax
-movzbl (%eax),%eax
-cmp    $0xf,%al
-jbe    <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x48>
-mov    -0x8(%ebp),%eax
-mov    (%eax),%eax
+mov    0xc0(%eax),%eax
 cmp    $0x98967f,%eax
-jbe    <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x48>
+jbe    <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x36>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x60>
-mov    -0x8(%ebp),%eax
-mov    (%eax),%eax
+jmp    <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x52>
+mov    0x8(%ebp),%eax
+mov    0xc0(%eax),%eax
 cmp    $0x1312cff,%eax
-jbe    <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x5b>
+jbe    <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x4d>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x60>
+jmp    <T> <_ZN6CGuild19IsCompleteGuildFundEv+0x52>
 mov    $0x0,%eax
-leave
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::IsCompleteGuildFund() */

undefined4 __thiscall CGuild::_ZN6CGuild19IsCompleteGuildFundEv(CGuild *this)

{
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    if ((0xf < (byte)this[0x3b]) && (9999999 < *(uint *)(this + 0xc0))) {
      return 1;
    }
    if (19999999 < *(uint *)(this + 0xc0)) {
      return 1;
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2114 行）：

```cpp
bool CGuild::IsCompleteGuildFund()
{
    if ((m_field1c & 4) != 0)
    {
        if (m_dbInfo.m_info.m_guildLevel > 0xf &&
            m_dbInfo.m_info.m_guildFund > 0x98967f)
        {
            return true;
        }
        if (m_dbInfo.m_info.m_guildFund > 0x1312cff)
        {
            return true;
        }
    }
    return false;
}
```
