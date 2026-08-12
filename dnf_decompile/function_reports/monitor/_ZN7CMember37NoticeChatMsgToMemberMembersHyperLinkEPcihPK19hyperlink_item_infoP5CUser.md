# _ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser

`CMember::NoticeChatMsgToMemberMembersHyperLink(char*, int, unsigned char, hyperlink_item_info const*, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80988da` | `0x284` | `0x806034a` | `0x274` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,166 +1,160 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x2a8,%esp
 mov    0x14(%ebp),%eax
 mov    %al,-0x28c(%ebp)
 cmpl   $0xff,0x10(%ebp)
-jg     <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x27b>
+jg     <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x42>
 mov    0x8(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x282>
+je     <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x42>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember7IsEmptyEv>
 test   %al,%al
-jne    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x27e>
-lea    -0x282(%ebp),%eax
+jne    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x42>
+mov    $0x1,%eax
+jmp    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x47>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x272>
+lea    -0x286(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN44Packet_Monitor_Member_Chat_ToUser_Hyper_LinkC1Ev>
 mov    0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x282(%ebp),%eax
+lea    -0x286(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x10(%ebp),%eax
-mov    %al,-0x119(%ebp)
+mov    %al,-0x11d(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x282(%ebp),%eax
+lea    -0x286(%ebp),%eax
 add    $0x16a,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 movzbl -0x28c(%ebp),%eax
-mov    %al,-0x252(%ebp)
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0xf2>
-mov    -0x10(%ebp),%eax
+mov    %al,-0x256(%ebp)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0xfb>
+mov    -0x14(%ebp),%eax
 imul   $0x68,%eax,%eax
-add    0x18(%ebp),%eax
-mov    -0x10(%ebp),%ecx
-lea    -0x282(%ebp),%edx
-imul   $0x68,%ecx,%ecx
-add    $0x30,%ecx
-add    %ecx,%edx
-add    $0x1,%edx
+mov    %eax,%edx
+add    0x18(%ebp),%edx
+mov    -0x14(%ebp),%eax
+imul   $0x68,%eax,%eax
+mov    %eax,%ecx
+lea    -0x286(%ebp),%eax
+add    $0x31,%eax
+add    %ecx,%eax
 movl   $0x68,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <memcpy>
-addl   $0x1,-0x10(%ebp)
+addl   $0x1,-0x14(%ebp)
 movzbl -0x28c(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0xbd>
+jne    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0xc5>
 mov    0x10(%ebp),%eax
 add    $0x16a,%ax
-mov    %ax,-0x280(%ebp)
+mov    %ax,-0x284(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x6(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1b4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager14FindMemberUserEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x17f>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x183>
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x278(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x27c(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x274(%ebp)
-movzwl -0x280(%ebp),%eax
+mov    %eax,-0x278(%ebp)
+movzwl -0x284(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x282(%ebp),%eax
+lea    -0x286(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 mov    0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x278(%ebp)
+mov    %eax,-0x27c(%ebp)
 mov    0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x274(%ebp)
-movzwl -0x280(%ebp),%eax
+mov    %eax,-0x278(%ebp)
+movzwl -0x284(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x282(%ebp),%eax
+lea    -0x286(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-jle    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x281>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x268>
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jle    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x272>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x261>
+mov    -0x10(%ebp),%eax
 mov    0x8(%ebp),%edx
 imul   $0x27,%eax,%eax
 lea    (%edx,%eax,1),%eax
 add    $0x20,%eax
 mov    0xe(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1b4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager14FindMemberUserEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x263>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x25d>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x278(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x27c(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x274(%ebp)
-movzwl -0x280(%ebp),%eax
+mov    %eax,-0x278(%ebp)
+movzwl -0x284(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x282(%ebp),%eax
+lea    -0x286(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x264>
-nop
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x14(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x18(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x1e7>
-jmp    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x282>
-nop
-jmp    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x282>
-nop
-jmp    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x282>
-nop
+jne    <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser+0x1e8>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::NoticeChatMsgToMemberMembersHyperLink(char*, int, unsigned char, hyperlink_item_info
   const*, CUser*) */

void __thiscall
CMember::_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser
          (CMember *this,char *param_1,int param_2,uchar param_3,hyperlink_item_info *param_4,
          CUser *param_5)

{
  char cVar1;
  void *__src;
  Packet_Monitor_Member_Chat_ToUser_Hyper_Link local_286 [2];
  ushort local_284;
  undefined4 local_27c;
  undefined4 local_278;
  undefined1 auStack_274 [30];
  uchar local_256;
  undefined1 auStack_255 [312];
  undefined1 local_11d;
  undefined1 auStack_11c [256];
  CUser *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  if (((param_2 < 0x100) && ((*(ushort *)(this + 4) & 4) != 0)) &&
     (cVar1 = IsEmpty(this), cVar1 == '\0')) {
    Packet_Monitor_Member_Chat_ToUser_Hyper_Link::Packet_Monitor_Member_Chat_ToUser_Hyper_Link
              (local_286);
    __src = (void *)CUser::GetCharName(param_5);
    memcpy(auStack_274,__src,0x1d);
    local_11d = (undefined1)param_2;
    memcpy(auStack_11c,param_1,param_2);
    local_256 = param_3;
    for (local_14 = 0; local_14 < (int)(uint)param_3; local_14 = local_14 + 1) {
      memcpy(auStack_255 + local_14 * 0x68,param_4 + local_14 * 0x68,0x68);
    }
    local_284 = (short)param_2 + 0x16a;
    local_1c = (CUser *)CMemberManager::FindMemberUser(*(uint *)(this + 0x1b4));
    if (local_1c != (CUser *)0x0) {
      local_27c = CUser::_ZN5CUser14GetIdByChannelEv(local_1c);
      local_278 = CUser::_ZN5CUser13GetUniqCharNoEv(local_1c);
      CUser::SendToGameserver(local_1c,(char *)local_286,(uint)local_284);
    }
    local_27c = CUser::_ZN5CUser14GetIdByChannelEv(param_5);
    local_278 = CUser::_ZN5CUser13GetUniqCharNoEv(param_5);
    CUser::SendToGameserver(param_5,(char *)local_286,(uint)local_284);
    local_18 = (uint)(byte)this[0x2d];
    if (local_18 != 0) {
      for (local_10 = 0; local_10 < (int)local_18; local_10 = local_10 + 1) {
        local_1c = (CUser *)CMemberManager::FindMemberUser(*(uint *)(this + 0x1b4));
        if (local_1c != (CUser *)0x0) {
          local_27c = CUser::_ZN5CUser14GetIdByChannelEv(local_1c);
          local_278 = CUser::_ZN5CUser13GetUniqCharNoEv(local_1c);
          CUser::SendToGameserver(local_1c,(char *)local_286,(uint)local_284);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFMember.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/DNFBuddyHandle.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h, source/DNFServer/GameServer/Monitor/DNFMember.cpp, source/DNFServer/GameServer/Monitor/DNFMember.h 等 299 个文件*
