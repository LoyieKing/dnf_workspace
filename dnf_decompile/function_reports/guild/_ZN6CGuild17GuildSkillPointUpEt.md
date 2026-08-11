# _ZN6CGuild17GuildSkillPointUpEt

`CGuild::GuildSkillPointUp(unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808e3d6` | `0x57` | `0x80544fe` | `0x5f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x14,%esp
 mov    0xc(%ebp),%eax
 mov    %ax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild17GuildSkillPointUpEt+0x55>
+je     <T> <_ZN6CGuild17GuildSkillPointUpEt+0x5d>
 mov    0x8(%ebp),%eax
-movzwl 0x62(%eax),%eax
+add    $0x62,%eax
+movzwl (%eax),%eax
 mov    %ax,-0x2(%ebp)
 mov    0x8(%ebp),%eax
-movzwl 0x62(%eax),%eax
-mov    %eax,%edx
-add    -0x14(%ebp),%dx
+lea    0x62(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    %dx,0x62(%eax)
+add    $0x62,%eax
+movzwl (%eax),%eax
+add    -0x14(%ebp),%ax
+mov    %ax,(%edx)
 mov    0x8(%ebp),%eax
-movzwl 0x62(%eax),%eax
+add    $0x62,%eax
+movzwl (%eax),%eax
 cmp    -0x2(%ebp),%ax
-jae    <T> <_ZN6CGuild17GuildSkillPointUpEt+0x55>
+jae    <T> <_ZN6CGuild17GuildSkillPointUpEt+0x5d>
 mov    0x8(%ebp),%eax
-movzwl -0x2(%ebp),%edx
-mov    %dx,0x62(%eax)
+lea    0x62(%eax),%edx
+movzwl -0x2(%ebp),%eax
+mov    %ax,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::GuildSkillPointUp(unsigned short) */

void __thiscall CGuild::_ZN6CGuild17GuildSkillPointUpEt(CGuild *this,ushort param_1)

{
  ushort uVar1;
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    uVar1 = *(ushort *)(this + 0x62);
    *(ushort *)(this + 0x62) = *(short *)(this + 0x62) + param_1;
    if (*(ushort *)(this + 0x62) < uVar1) {
      *(ushort *)(this + 0x62) = uVar1;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 886 行）：

```cpp
void CGuild::GuildSkillPointUp(unsigned short point)
{
    if ((m_field1c & 4) != 0)
    {
        unsigned short old = *(unsigned short*)((char*)this + 0x62);
        *(unsigned short*)((char*)this + 0x62) += point;
        if (*(unsigned short*)((char*)this + 0x62) < old)
        {
            *(unsigned short*)((char*)this + 0x62) = old;
        }
    }
}
```
