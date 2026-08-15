# _ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh

`CGuild::DBSaveGuildMembers(unsigned char, CServerHandler*, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d8c8` | `0xdb` | `0x805385e` | `0xd2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,68 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0xc(%ebp),%edx
 mov    0x14(%ebp),%eax
 mov    %dl,-0x1c(%ebp)
 mov    %al,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd9>
+je     <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xcc>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd8>
+jne    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xcf>
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xa7>
+jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x9f>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x9b>
+je     <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x94>
 movzbl -0x20(%ebp),%ecx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%edx
 movzbl -0x1c(%ebp),%eax
 mov    %ecx,0x10(%esp)
 mov    0x10(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh>
-jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x9c>
-nop
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x51>
-jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd9>
+jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd0>
+nop
+jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd0>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::DBSaveGuildMembers(unsigned char, CServerHandler*, unsigned char) */

void __thiscall
CGuild::_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh
          (CGuild *this,uchar param_1,CServerHandler *param_2,uchar param_3)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  if (((*(ushort *)(this + 0x1c) & 4) != 0) &&
     (cVar1 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar1 == '\0')) {
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_18);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
      local_10 = *(CUser **)(iVar2 + 4);
      if (local_10 != (CUser *)0x0) {
        CUser::_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh
                  (local_10,param_1,*(uint *)(this + 0x18),param_2,param_3);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 733 行）：

```cpp
void CGuild::DBSaveGuildMembers(unsigned char flag, CServerHandler* handler, unsigned char param)
{
    if ((m_guildDBFlag & 4) == 0)
        return;
    if (m_members.empty())
        return;
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        CUser* user = it->second;
        if (user)
        {
            user->SaveGuildMember(flag, m_guildKey, handler, param);
        }
    }
}
```
