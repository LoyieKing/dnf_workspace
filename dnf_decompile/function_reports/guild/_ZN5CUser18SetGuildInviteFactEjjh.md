# _ZN5CUser18SetGuildInviteFactEjjh

`CUser::SetGuildInviteFact(unsigned int, unsigned int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80677ae` | `0x30` | `0x8089c00` | `0x36` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0x14(%ebp),%eax
 mov    %al,-0x4(%ebp)
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x84(%eax)
+lea    0x84(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0x80(%eax)
-movzbl -0x4(%ebp),%edx
+lea    0x80(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    %dl,0x7e(%eax)
+lea    0x7e(%eax),%edx
+movzbl -0x4(%ebp),%eax
+mov    %al,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SetGuildInviteFact(unsigned int, unsigned int, unsigned char) */

void __thiscall
CUser::_ZN5CUser18SetGuildInviteFactEjjh(CUser *this,uint param_1,uint param_2,uchar param_3)

{
  *(uint *)(this + 0x84) = param_1;
  *(uint *)(this + 0x80) = param_2;
  this[0x7e] = (CUser)param_3;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 526 行）：

```cpp
void CUser::SetGuildInviteFact(unsigned int guildId, unsigned int callerId, unsigned char fact)
{
    *(unsigned int*)((char*)this + 0x84) = guildId;
    *(unsigned int*)((char*)this + 0x80) = callerId;
    *(unsigned char*)((char*)this + 0x7e) = fact;
}
```
