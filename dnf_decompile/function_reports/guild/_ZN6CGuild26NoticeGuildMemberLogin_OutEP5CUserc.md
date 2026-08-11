# _ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc

`CGuild::NoticeGuildMemberLogin_Out(CUser*, char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808f23e` | `0x193` | `0x805548a` | `0x1b7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,118 +1,133 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x68,%esp
+push   %ebx
+sub    $0x64,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x4c(%ebp)
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x21>
+je     <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x22>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
-jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x28>
+jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x29>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x2d>
+jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x2e>
 mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x18d>
+jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x1ae>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x191>
+je     <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x56>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x190>
+je     <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x5d>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x62>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x1b1>
 lea    -0x46(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN44Packet_Monitor_Notice_Guild_Member_Login_outC1Ev>
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x15c>
+jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x17d>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x14a>
+je     <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x16b>
 mov    -0xc(%ebp),%eax
 cmp    0xc(%ebp),%eax
-je     <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x14d>
+je     <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x16e>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
+test   %eax,%eax
+setne  %al
 test   %al,%al
-jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x150>
+jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x171>
+lea    -0x46(%ebp),%eax
+lea    0xa(%eax),%edx
 movzbl -0x4c(%ebp),%eax
-mov    %al,-0x3c(%ebp)
+mov    %al,(%edx)
+lea    -0x46(%ebp),%eax
+lea    0xb(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x3b(%ebp)
+mov    %eax,(%ebx)
+lea    -0x46(%ebp),%eax
+lea    0xf(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x37(%ebp)
+mov    %eax,(%ebx)
+lea    -0x46(%ebp),%eax
+lea    0x13(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,-0x33(%ebp)
+mov    %al,(%ebx)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x46(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0x46(%ebp),%eax
 movl   $0x32,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x151>
+jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x172>
 nop
-jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x151>
+jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x172>
 nop
-jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x151>
+jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x172>
 nop
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
-jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x82>
-jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x191>
+jne    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x8f>
+jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x1b2>
 nop
-jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x191>
+jmp    <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc+0x1b2>
 nop
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NoticeGuildMemberLogin_Out(CUser*, char) */

void __thiscall
CGuild::_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc(CGuild *this,CUser *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CServerInterface *this_00;
  void *__src;
  Packet_Monitor_Notice_Guild_Member_Login_out local_4a [10];
  char local_40;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined1 local_37;
  undefined1 auStack_36 [30];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  if ((param_1 == (CUser *)0x0) || (iVar3 = CUser::GetGameServer(param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((!bVar1) && ((*(ushort *)(this + 0x1c) & 4) != 0)) &&
     (cVar2 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar2 == '\0')) {
    Packet_Monitor_Notice_Guild_Member_Login_out::
    _ZN44Packet_Monitor_Notice_Guild_Member_Login_outC2Ev(local_4a);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_18);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_14);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18,
                         (_Rb_tree_iterator *)local_14);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
      local_10 = *(CUser **)(iVar3 + 4);
      if ((local_10 != (CUser *)0x0) && (local_10 != param_1)) {
        CUser::GetUniqCharNo(local_10);
        cVar2 = CUser::_ZN5CUser11IsBlackUserEj((uint)param_1);
        if (cVar2 == '\0') {
          local_40 = param_2;
          local_3f = CUser::GetIdByChannel(local_10);
          local_3b = CUser::GetUniqCharNo(local_10);
          this_00 = (CServerInterface *)CUser::GetGameServer(param_1);
          local_37 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(this_00);
          __src = (void *)CUser::GetCharName(param_1);
          memcpy(auStack_36,__src,0x1d);
          CUser::SendToGameserver(local_10,(char *)local_4a,0x32);
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1173 行）：

```cpp
void CGuild::NoticeGuildMemberLogin_Out(CUser* user, char flag)
{
    if (user == 0 || user->GetGameServer() == 0)
    {
        return;
    }
    if ((m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    Packet_Monitor_Notice_Guild_Member_Login_out pkt;
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        CUser* member = it->second;
        if (member == 0 || member == user)
        {
            continue;
        }
        if (user->IsBlackUser(member->GetUniqCharNo()))
        {
            continue;
        }
        *(char*)((char*)&pkt + 0xa) = flag;
        *(int*)((char*)&pkt + 0xb) = member->GetIdByChannel();
        *(unsigned int*)((char*)&pkt + 0xf) = member->GetUniqCharNo();
        *(char*)((char*)&pkt + 0x13) = (char)user->GetGameServer()->GetChannelNo();
        memcpy((char*)&pkt + 0x14, user->GetCharName(), 0x1d);
        member->SendToGameserver((char*)&pkt, 0x32);
    }
}
```
