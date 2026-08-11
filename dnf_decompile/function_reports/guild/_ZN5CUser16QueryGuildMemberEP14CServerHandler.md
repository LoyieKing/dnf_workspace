# _ZN5CUser16QueryGuildMemberEP14CServerHandler

`CUser::QueryGuildMember(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066860` | `0x54` | `0x8088e7e` | `0x56` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,30 +1,31 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x14,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser16QueryGuildMemberEP14CServerHandler+0x4e>
+je     <T> <_ZN5CUser16QueryGuildMemberEP14CServerHandler+0x50>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 movzbl %al,%eax
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16QueryGuildMemberEhj>
 mov    0x8(%ebp),%eax
-movzwl 0x48(%eax),%eax
-mov    %eax,%edx
-or     $0x2,%edx
+lea    0x48(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    %dx,0x48(%eax)
+add    $0x48,%eax
+movzwl (%eax),%eax
+or     $0x2,%eax
+mov    %ax,(%edx)
 add    $0x14,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::QueryGuildMember(CServerHandler*) */

void __thiscall
CUser::_ZN5CUser16QueryGuildMemberEP14CServerHandler(CUser *this,CServerHandler *param_1)

{
  uint uVar1;
  uchar uVar2;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = *(uint *)(this + 4);
    uVar2 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(*(CServerInterface **)(this + 8));
    CServerHandler::_ZN14CServerHandler16QueryGuildMemberEhj(param_1,uVar2,uVar1);
    *(ushort *)(this + 0x48) = *(ushort *)(this + 0x48) | 2;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 139 行）：

```cpp
void CUser::QueryGuildMember(CServerHandler* handler)
{
    if (m_gameServer != 0)
    {
        handler->QueryGuildMember((unsigned char)m_gameServer->GetGroupNo(), m_charNo);
        *(unsigned short*)((char*)this + 0x48) |= 2;
    }
}
```
