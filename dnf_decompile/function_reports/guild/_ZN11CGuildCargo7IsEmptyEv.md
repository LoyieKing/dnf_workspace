# _ZN11CGuildCargo7IsEmptyEv

`CGuildCargo::IsEmpty()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a00fa` | `0x45` | `0x80923fc` | `0x47` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,24 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 movl   $0x0,-0x4(%ebp)
 jmp    <T> <_ZN11CGuildCargo7IsEmptyEv+0x2b>
 mov    -0x4(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x1(%edx,%eax,1),%eax
 test   %eax,%eax
 je     <T> <_ZN11CGuildCargo7IsEmptyEv+0x27>
 mov    $0x0,%eax
-jmp    <T> <_ZN11CGuildCargo7IsEmptyEv+0x43>
+jmp    <T> <_ZN11CGuildCargo7IsEmptyEv+0x45>
 addl   $0x1,-0x4(%ebp)
+mov    -0x4(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x18d8(%eax),%eax
-cmp    -0x4(%ebp),%eax
-setg   %al
+cmp    %eax,%edx
+setb   %al
 test   %al,%al
 jne    <T> <_ZN11CGuildCargo7IsEmptyEv+0xf>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::IsEmpty() */

undefined4 __thiscall CGuildCargo::_ZN11CGuildCargo7IsEmptyEv(CGuildCargo *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(int *)(this + 0x18d8) <= local_8) {
      return 1;
    }
    if (*(int *)(this + local_8 * 0x35 + 1) != 0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 434 行）：

```cpp
int CGuildCargo::IsEmpty()
{
    for (int i = 0; (int)m_info.m_capacity > i; i++)
    {
        if (m_info.m_items[i].m_itemId != 0)
        {
            return 0;
        }
    }
    return 1;
}
```
