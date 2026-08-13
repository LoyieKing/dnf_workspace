# _ZN5CUser18GuildInviteProcessEv

`CUser::GuildInviteProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8067524` | `0x6f` | `0x8089d6c` | `0x73` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,35 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %ebx
+sub    $0x14,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x7e(%eax),%eax
 cmp    $0x1,%al
-jg     <T> <_ZN5CUser18GuildInviteProcessEv+0x6c>
+jg     <T> <_ZN5CUser18GuildInviteProcessEv+0x6d>
 mov    0x8(%ebp),%eax
 movzbl 0x7e(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x7e(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x7e(%eax),%eax
 test   %al,%al
-je     <T> <_ZN5CUser18GuildInviteProcessEv+0x37>
+je     <T> <_ZN5CUser18GuildInviteProcessEv+0x38>
 mov    0x8(%ebp),%eax
 movzbl 0x7e(%eax),%eax
 cmp    $0x1,%al
-jle    <T> <_ZN5CUser18GuildInviteProcessEv+0x3e>
+jle    <T> <_ZN5CUser18GuildInviteProcessEv+0x3f>
 mov    $0x1,%eax
-jmp    <T> <_ZN5CUser18GuildInviteProcessEv+0x43>
+jmp    <T> <_ZN5CUser18GuildInviteProcessEv+0x44>
 mov    $0x0,%eax
-test   %al,%al
+mov    %eax,%ebx
+test   %bl,%bl
 je     <T> <_ZN5CUser18GuildInviteProcessEv+0x6d>
 movl   $0xff,0xc(%esp)
 movl   $0x0,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetGuildInviteFactEjjh>
-jmp    <T> <_ZN5CUser18GuildInviteProcessEv+0x6d>
-nop
-leave
+add    $0x14,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::GuildInviteProcess() */

void __thiscall CUser::_ZN5CUser18GuildInviteProcessEv(CUser *this)

{
  bool bVar1;
  
  if ((char)this[0x7e] < '\x02') {
    this[0x7e] = (CUser)((char)this[0x7e] + -1);
    if ((this[0x7e] == (CUser)0x0) || ('\x01' < (char)this[0x7e])) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      SetGuildInviteFact(this,0,0,0xff);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 478 行）：

```cpp
void CUser::GuildInviteProcess()
{
    if (m_field7e < 2)
    {
        --m_field7e;
        register bool bVar = (m_field7e == 0 || m_field7e > 1);
        if (bVar)
        {
            SetGuildInviteFact(0, 0, 0xff);
        }
    }
}
```
