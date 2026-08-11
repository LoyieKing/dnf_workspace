# _ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler

`CGuild::CallGuildAllMembersProxy(CUser*, CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80906fe` | `0x8b` | `0x805640c` | `0x8e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x85>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x89>
+je     <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x88>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x88>
+jne    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x8b>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x10,%eax
 test   %eax,%eax
 je     <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x51>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild20ReplyGuildAllMembersEP5CUser>
-jmp    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x89>
+jmp    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x8c>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x8,%eax
 test   %eax,%eax
-jne    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x89>
+jne    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x8c>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild25QueryGuildAllMembersProxyEP14CServerHandlerj>
-jmp    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x89>
+jmp    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x8c>
 nop
-jmp    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x89>
+jmp    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x8c>
+nop
+jmp    <T> <_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler+0x8c>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::CallGuildAllMembersProxy(CUser*, CServerHandler*) */

void __thiscall
CGuild::_ZN6CGuild24CallGuildAllMembersProxyEP5CUserP14CServerHandler
          (CGuild *this,CUser *param_1,CServerHandler *param_2)

{
  char cVar1;
  uint uVar2;
  
  if (((param_1 != (CUser *)0x0) && ((*(ushort *)(this + 0x1c) & 4) != 0)) &&
     (cVar1 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar1 == '\0')) {
    if ((*(ushort *)(this + 0x1c) & 0x10) == 0) {
      if ((*(ushort *)(this + 0x1c) & 8) == 0) {
        uVar2 = CUser::GetUniqCharNo(param_1);
        QueryGuildAllMembersProxy(this,param_2,uVar2);
      }
    }
    else {
      _ZN6CGuild20ReplyGuildAllMembersEP5CUser(this,param_1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1416 行）：

```cpp
void CGuild::CallGuildAllMembersProxy(CUser* user, CServerHandler* handler)
{
    if (user == 0)
    {
        return;
    }
    if ((m_field1c & 4) == 0)
    {
        return;
    }
    if (m_members.empty())
    {
        return;
    }
    if ((m_field1c & 0x10) != 0)
    {
        ReplyGuildAllMembers(user);
        return;
    }
    if ((m_field1c & 8) == 0)
    {
        QueryGuildAllMembersProxy(handler, user->GetUniqCharNo());
    }
}
```
