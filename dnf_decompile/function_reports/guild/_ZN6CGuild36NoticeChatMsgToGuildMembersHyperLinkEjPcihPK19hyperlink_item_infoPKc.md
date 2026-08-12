# _ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc

`CGuild::NoticeChatMsgToGuildMembersHyperLink(unsigned int, char*, int, unsigned char, hyperlink_item_info const*, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808ef2c` | `0x1cd` | `0x8054f20` | `0x1e7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,120 +1,130 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x2a8,%esp
+push   %ebx
+sub    $0x2a4,%esp
 mov    0x18(%ebp),%eax
 mov    %al,-0x28c(%ebp)
 cmpl   $0xff,0x14(%ebp)
-jg     <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x1c7>
+jg     <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x3c>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x1cb>
+je     <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x3c>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x1ca>
+je     <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x43>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x48>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x1e1>
 lea    -0x282(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN43Packet_Monitor_Guild_Chat_ToUser_Hyper_LinkC1Ev>
 mov    0x8(%ebp),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x196>
+jmp    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x1b0>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x18a>
+je     <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x1a5>
+lea    -0x282(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x278(%ebp)
+mov    %eax,(%ebx)
+lea    -0x282(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x274(%ebp)
+mov    %eax,(%ebx)
 movl   $0x1d,0x8(%esp)
 mov    0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x282(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+lea    -0x282(%ebp),%eax
+lea    0x2f(%eax),%edx
 movzbl -0x28c(%ebp),%eax
-mov    %al,-0x252(%ebp)
+mov    %al,(%edx)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x11c>
+jmp    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x12c>
 mov    -0xc(%ebp),%eax
 imul   $0x68,%eax,%eax
 add    0x1c(%ebp),%eax
+lea    -0x282(%ebp),%edx
 mov    -0xc(%ebp),%ecx
-lea    -0x282(%ebp),%edx
 imul   $0x68,%ecx,%ecx
 add    $0x30,%ecx
 add    %ecx,%edx
-add    $0x1,%edx
 movl   $0x68,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 addl   $0x1,-0xc(%ebp)
 movzbl -0x28c(%ebp),%eax
 cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0xe7>
+jne    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0xfa>
+lea    -0x282(%ebp),%eax
+lea    0x158(%eax),%edx
 mov    0x14(%ebp),%eax
-mov    %al,-0x119(%ebp)
+mov    %al,(%edx)
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x282(%ebp),%eax
-add    $0x16a,%eax
+add    $0x159,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+lea    -0x282(%ebp),%eax
+add    $0x2,%eax
+mov    0x14(%ebp),%edx
+add    $0x16a,%dx
+mov    %dx,(%eax)
 mov    0x14(%ebp),%eax
-add    $0x16a,%ax
-mov    %ax,-0x280(%ebp)
-movzwl -0x280(%ebp),%eax
-movzwl %ax,%edx
+lea    0x16a(%eax),%edx
 lea    -0x282(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x18b>
-nop
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
-jne    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x6f>
-jmp    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x1cb>
+jne    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x78>
+jmp    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x1e2>
 nop
-jmp    <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc+0x1cb>
-nop
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NoticeChatMsgToGuildMembersHyperLink(unsigned int, char*, int, unsigned char,
   hyperlink_item_info const*, char const*) */

void __thiscall
CGuild::_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc
          (CGuild *this,uint param_1,char *param_2,int param_3,uchar param_4,
          hyperlink_item_info *param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  Packet_Monitor_Guild_Chat_ToUser_Hyper_Link local_286 [2];
  ushort local_284;
  undefined4 local_27c;
  undefined4 local_278;
  undefined1 auStack_274 [30];
  uchar local_256;
  undefined1 auStack_255 [312];
  undefined1 local_11d;
  undefined1 auStack_11c [256];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  CUser *local_14;
  int local_10;
  
  if (((param_3 < 0x100) && ((*(ushort *)(this + 0x1c) & 4) != 0)) &&
     (cVar1 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar1 == '\0')) {
    Packet_Monitor_Guild_Chat_ToUser_Hyper_Link::
    _ZN43Packet_Monitor_Guild_Chat_ToUser_Hyper_LinkC2Ev(local_286);
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
        local_27c = CUser::GetIdByChannel(local_14);
        local_278 = CUser::GetUniqCharNo(local_14);
        memcpy(auStack_274,param_6,0x1d);
        local_256 = param_4;
        for (local_10 = 0; local_10 < (int)(uint)param_4; local_10 = local_10 + 1) {
          memcpy(auStack_255 + local_10 * 0x68,param_5 + local_10 * 0x68,0x68);
        }
        local_11d = (undefined1)param_3;
        memcpy(auStack_11c,param_2,param_3);
        local_284 = (short)param_3 + 0x16a;
        CUser::SendToGameserver(local_14,(char *)local_286,(uint)local_284);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_1c);
    }
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFGuild.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*
