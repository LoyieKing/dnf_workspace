# _ZN5CUser19AddGuildMemberPointEj

`CUser::AddGuildMemberPoint(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80669f2` | `0x49` | `0x8088f62` | `0x47` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,24 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x60(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
-mov    0x60(%eax),%eax
-mov    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    0x60(%edx),%edx
 add    0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
 mov    %edx,0x60(%eax)
 movl   $0x10,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15SetGuildMemFlagEt>
 mov    0x8(%ebp),%eax
 mov    0x60(%eax),%eax
 cmp    -0xc(%ebp),%eax
-jae    <T> <_ZN5CUser19AddGuildMemberPointEj+0x47>
+jae    <T> <_ZN5CUser19AddGuildMemberPointEj+0x45>
 mov    0x8(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x60(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::AddGuildMemberPoint(unsigned int) */

void __thiscall CUser::_ZN5CUser19AddGuildMemberPointEj(CUser *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x60);
  *(uint *)(this + 0x60) = *(int *)(this + 0x60) + param_1;
  _ZN5CUser15SetGuildMemFlagEt(this,0x10);
  if (*(uint *)(this + 0x60) < uVar1) {
    *(uint *)(this + 0x60) = uVar1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 208 行）：

```cpp
void CUser::AddGuildMemberPoint(unsigned int point)
{
    unsigned int old = ((CUserGuildPointLayout*)this)->m_guildPoint;
    ((CUserGuildPointLayout*)this)->m_guildPoint =
        ((CUserGuildPointLayout*)this)->m_guildPoint + point;
    SetGuildMemFlag(0x10);
    if (((CUserGuildPointLayout*)this)->m_guildPoint < old)
    {
        ((CUserGuildPointLayout*)this)->m_guildPoint = old;
    }
}
```
