# _ZN6CGuild22SendGuildInfoToMembersEb

`CGuild::SendGuildInfoToMembers(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808dde2` | `0x185` | `0x8053d90` | `0x17f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,101 +1,101 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x178,%esp
+push   %ebx
+sub    $0x174,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x15c(%ebp)
 lea    -0x151(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Monitor_Notice_Guild_InfoC1Ev>
+lea    -0x151(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x13f(%ebp)
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 movl   $0xbd,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x151(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+lea    -0x151(%ebp),%eax
+lea    0xd3(%eax),%edx
 movzbl -0x15c(%ebp),%eax
-mov    %al,-0x7e(%ebp)
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
 add    $0x4d0a,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x64,-0xc(%ebp)
-jg     <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x9b>
-mov    -0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-add    $0x4d0a,%edx
+mov    %eax,-0x10(%ebp)
+cmpl   $0x64,-0x10(%ebp)
+jbe    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x8a>
+movl   $0x64,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x4d0a(%eax),%edx
+mov    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x151(%ebp),%eax
-add    $0xd4,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0xc2>
-mov    0x8(%ebp),%eax
-add    $0x4d0a,%eax
-movl   $0x64,0x8(%esp)
-mov    %eax,0x4(%esp)
 lea    -0x151(%ebp),%eax
 add    $0xd4,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x154>
+jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x14b>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x148>
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x13f>
+lea    -0x151(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x147(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x151(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x143(%ebp)
+mov    %eax,(%ebx)
 lea    -0x151(%ebp),%eax
 movl   $0x139,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17ReplyGuildMembersEP5CUser>
-jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x149>
+jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x140>
 nop
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0xd9>
+jne    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0xcb>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SendGuildInfoToMembers(bool) */

void __thiscall CGuild::_ZN6CGuild22SendGuildInfoToMembersEb(CGuild *this,bool param_1)

{
  char cVar1;
  int iVar2;
  Packet_Monitor_Notice_Guild_Info local_155 [10];
  undefined4 local_14b;
  undefined4 local_147;
  undefined4 local_143;
  undefined1 auStack_13f [189];
  undefined1 local_82;
  undefined1 auStack_81 [101];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  CUser *local_14;
  size_t local_10;
  
  Packet_Monitor_Notice_Guild_Info::_ZN32Packet_Monitor_Notice_Guild_InfoC2Ev(local_155);
  local_143 = *(undefined4 *)(this + 0x18);
  memcpy(auStack_13f,this + 0x20,0xbd);
  local_82 = param_1;
  local_10 = strlen((char *)(this + 0x4d0a));
  if ((int)local_10 < 0x65) {
    memcpy(auStack_81,this + 0x4d0a,local_10);
  }
  else {
    memcpy(auStack_81,this + 0x4d0a,100);
  }
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_1c);
    local_14 = *(CUser **)(iVar2 + 4);
    if (local_14 != (CUser *)0x0) {
      local_14b = CUser::GetIdByChannel(local_14);
      local_147 = CUser::GetUniqCharNo(local_14);
      CUser::SendToGameserver(local_14,(char *)local_155,0x139);
      _ZN6CGuild17ReplyGuildMembersEP5CUser(this,local_14);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_1c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 858 行）：

```cpp
void CGuild::SendGuildInfoToMembers(bool flag)
{
    Packet_Monitor_Notice_Guild_Info pkt;
    *(unsigned int*)((char*)&pkt + 0x12) = m_guildKey;
    memcpy((char*)&pkt + 0x16, (char*)this + 0x20, 0xbd);
    *(char*)((char*)&pkt + 0xd3) = (char)flag;
    size_t n = strlen((char*)this + 0x4d0a);
    if (n > 0x64)
    {
        n = 0x64;
    }
    memcpy((char*)&pkt + 0xd4, (char*)this + 0x4d0a, n);
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        CUser* member = it->second;
        if (member == 0)
        {
            continue;
        }
        *(int*)((char*)&pkt + 0xa) = member->GetIdByChannel();
        *(unsigned int*)((char*)&pkt + 0xe) = member->GetUniqCharNo();
        member->SendToGameserver((char*)&pkt, 0x139);
        ReplyGuildMembers(member);
    }
}
```
