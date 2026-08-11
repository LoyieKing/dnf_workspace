# _ZN6CGuild16SetGuildAgitInfoER17STGuildAgitDBInfo

`CGuild::SetGuildAgitInfo(STGuildAgitDBInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8091d0e` | `0x54` | `0x80579e8` | `0x57` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild16SetGuildAgitInfoER17STGuildAgitDBInfo+0x52>
+je     <T> <_ZN6CGuild16SetGuildAgitInfoER17STGuildAgitDBInfo+0x54>
 mov    0x8(%ebp),%eax
 lea    0x4d09(%eax),%edx
 movl   $0x1,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x4db4,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN11CGuildCargo12SetGuildInfoEi>
+jmp    <T> <_ZN6CGuild16SetGuildAgitInfoER17STGuildAgitDBInfo+0x55>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SetGuildAgitInfo(STGuildAgitDBInfo&) */

void __thiscall
CGuild::_ZN6CGuild16SetGuildAgitInfoER17STGuildAgitDBInfo(CGuild *this,STGuildAgitDBInfo *param_1)

{
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    memcpy(this + 0x4d09,param_1,1);
    CGuildCargo::_ZN11CGuildCargo12SetGuildInfoEi
              ((CGuildCargo *)(this + 0x4db4),*(int *)(this + 0x18));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1953 行）：

```cpp
void CGuild::SetGuildAgitInfo(STGuildAgitDBInfo& info)
{
    if ((m_field1c & 4) == 0)
    {
        return;
    }
    memcpy((char*)this + 0x4d09, &info, 1);
    m_cargo.SetGuildInfo((int)m_guildKey);
}
```
