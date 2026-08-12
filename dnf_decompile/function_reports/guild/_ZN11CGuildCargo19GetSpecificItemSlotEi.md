# _ZN11CGuildCargo19GetSpecificItemSlotEi

`CGuildCargo::GetSpecificItemSlot(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809fd5c` | `0x46` | `0x8092056` | `0x48` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 movl   $0x0,-0x4(%ebp)
 jmp    <T> <_ZN11CGuildCargo19GetSpecificItemSlotEi+0x2c>
 mov    -0x4(%ebp),%edx
 mov    0x8(%ebp),%eax
 imul   $0x35,%edx,%edx
 mov    0x1(%edx,%eax,1),%edx
 mov    0xc(%ebp),%eax
 cmp    %eax,%edx
 jne    <T> <_ZN11CGuildCargo19GetSpecificItemSlotEi+0x28>
 mov    -0x4(%ebp),%eax
-jmp    <T> <_ZN11CGuildCargo19GetSpecificItemSlotEi+0x44>
+jmp    <T> <_ZN11CGuildCargo19GetSpecificItemSlotEi+0x46>
 addl   $0x1,-0x4(%ebp)
+mov    -0x4(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x18d8(%eax),%eax
-cmp    -0x4(%ebp),%eax
-setg   %al
+cmp    %eax,%edx
+setb   %al
 test   %al,%al
 jne    <T> <_ZN11CGuildCargo19GetSpecificItemSlotEi+0xf>
 mov    $0xffffffff,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::GetSpecificItemSlot(int) */

int __thiscall CGuildCargo::_ZN11CGuildCargo19GetSpecificItemSlotEi(CGuildCargo *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(int *)(this + 0x18d8) <= local_8) {
      return -1;
    }
    if (*(int *)(this + local_8 * 0x35 + 1) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 344 行）：

```cpp
int CGuildCargo::GetSpecificItemSlot(int itemId)
{
    for (int i = 0; (int)m_info.m_capacity > i; i++)
    {
        if (m_info.m_items[i].m_itemId == itemId)
        {
            return i;
        }
    }
    return -1;
}
```
