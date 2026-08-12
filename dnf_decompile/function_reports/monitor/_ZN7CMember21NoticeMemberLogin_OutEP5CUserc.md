# _ZN7CMember21NoticeMemberLogin_OutEP5CUserc

`CMember::NoticeMemberLogin_Out(CUser*, char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8098b5e` | `0x325` | `0x805fd48` | `0x325` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,227 +1,225 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x78,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x5c(%ebp)
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x21>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x28>
 mov    $0x1,%eax
 jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x2d>
 mov    $0x0,%eax
-test   %al,%al
-jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x31f>
+mov    %al,-0x19(%ebp)
+movzbl -0x19(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
 mov    0x8(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
 je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
-lea    -0x4c(%ebp),%eax
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN45Packet_Monitor_Notice_Member_Member_Login_outC1Ev>
 mov    0x8(%ebp),%eax
 mov    0x6(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1b4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager14FindMemberUserEj>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x1fd>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x122>
+movzbl -0x5c(%ebp),%eax
+mov    %al,-0x47(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x46(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x42(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,-0x3e(%ebp)
+movb   $0x2,-0x3d(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x51(%ebp),%eax
+add    $0x15,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+movb   $0x0,-0x1e(%ebp)
+lea    -0x51(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+cmpb   $0x1,-0x5c(%ebp)
+jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x1fd>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x1fd>
+movzbl -0x5c(%ebp),%eax
+mov    %al,-0x47(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x46(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x42(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x1a2>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,-0x3e(%ebp)
+jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x1a6>
+movb   $0xff,-0x3e(%ebp)
+movb   $0x1,-0x3d(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x51(%ebp),%eax
+add    $0x15,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser22GetUpperMemberExpLevelEv>
+mov    %al,-0x1e(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x1d(%ebp)
+lea    -0x51(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+mov    0x8(%ebp),%eax
+movzbl 0x2d(%eax),%eax
+movzbl %al,%eax
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x1f4>
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11IsBlackUserEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x11b>
-movzbl -0x5c(%ebp),%eax
-mov    %al,-0x42(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x41(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x3d(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,-0x39(%ebp)
-movb   $0x2,-0x38(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-add    $0x15,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-movb   $0x0,-0x19(%ebp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-cmpb   $0x1,-0x5c(%ebp)
-jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x1f4>
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11IsBlackUserEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x1f4>
-movzbl -0x5c(%ebp),%eax
-mov    %al,-0x42(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x41(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x3d(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x199>
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,-0x39(%ebp)
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x19d>
-movb   $0xff,-0x39(%ebp)
-movb   $0x1,-0x38(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-add    $0x15,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser22GetUpperMemberExpLevelEv>
-mov    %al,-0x19(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x18(%ebp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-mov    0x8(%ebp),%eax
-movzbl 0x2d(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x322>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x30c>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x312>
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
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x307>
-mov    -0x14(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x30d>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x308>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x30e>
 movzbl -0x5c(%ebp),%eax
-mov    %al,-0x42(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %al,-0x47(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x41(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x3d(%ebp)
+mov    %eax,-0x46(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x42(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,-0x39(%ebp)
-movb   $0x1,-0x38(%ebp)
+mov    %al,-0x3e(%ebp)
+movb   $0x1,-0x3d(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x51(%ebp),%eax
 add    $0x15,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser22GetUpperMemberExpLevelEv>
-mov    %al,-0x19(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x18(%ebp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %al,-0x1e(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x1d(%ebp)
+lea    -0x51(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x308>
+jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x30e>
 nop
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x217>
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
-nop
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
-nop
+jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x220>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::NoticeMemberLogin_Out(CUser*, char) */

void __thiscall
CMember::_ZN7CMember21NoticeMemberLogin_OutEP5CUserc(CMember *this,CUser *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CServerInterface *pCVar4;
  void *pvVar5;
  Packet_Monitor_Notice_Member_Member_Login_out local_50 [10];
  char local_46;
  undefined4 local_45;
  undefined4 local_41;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 auStack_3b [30];
  undefined1 local_1d;
  undefined4 local_1c;
  CUser *local_18;
  uint local_14;
  int local_10;
  
  if ((param_1 == (CUser *)0x0) || (iVar3 = CUser::_ZN5CUser13GetGameServerEv(param_1), iVar3 == 0))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((!bVar1) && ((*(ushort *)(this + 4) & 4) != 0)) {
    Packet_Monitor_Notice_Member_Member_Login_out::Packet_Monitor_Notice_Member_Member_Login_out
              (local_50);
    local_18 = (CUser *)CMemberManager::FindMemberUser(*(uint *)(this + 0x1b4));
    if (local_18 != (CUser *)0x0) {
      CUser::_ZN5CUser13GetUniqCharNoEv(local_18);
      cVar2 = CUser::IsBlackUser((uint)param_1);
      if (cVar2 != '\x01') {
        local_46 = param_2;
        local_45 = CUser::_ZN5CUser14GetIdByChannelEv(local_18);
        local_41 = CUser::_ZN5CUser13GetUniqCharNoEv(local_18);
        pCVar4 = (CServerInterface *)CUser::_ZN5CUser13GetGameServerEv(param_1);
        local_3d = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar4);
        local_3c = 2;
        pvVar5 = (void *)CUser::GetCharName(param_1);
        memcpy(auStack_3b,pvVar5,0x1d);
        local_1d = 0;
        CUser::_ZN5CUser17SendTcpGameserverEP12PacketHeader(local_18,(PacketHeader *)local_50);
      }
      if (param_2 == '\x01') {
        CUser::_ZN5CUser13GetUniqCharNoEv(local_18);
        cVar2 = CUser::IsBlackUser((uint)param_1);
        if (cVar2 != '\x01') {
          local_46 = param_2;
          local_45 = CUser::_ZN5CUser14GetIdByChannelEv(param_1);
          local_41 = CUser::_ZN5CUser13GetUniqCharNoEv(param_1);
          iVar3 = CUser::_ZN5CUser13GetGameServerEv(local_18);
          if (iVar3 == 0) {
            local_3d = 0xff;
          }
          else {
            pCVar4 = (CServerInterface *)CUser::_ZN5CUser13GetGameServerEv(local_18);
            local_3d = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar4);
          }
          local_3c = 1;
          pvVar5 = (void *)CUser::GetCharName(local_18);
          memcpy(auStack_3b,pvVar5,0x1d);
          local_1d = CUser::_ZN5CUser22GetUpperMemberExpLevelEv(param_1);
          local_1c = CUser::_ZN5CUser13GetUniqCharNoEv(local_18);
          CUser::_ZN5CUser17SendTcpGameserverEP12PacketHeader(param_1,(PacketHeader *)local_50);
        }
      }
    }
    local_14 = (uint)(byte)this[0x2d];
    if (local_14 != 0) {
      for (local_10 = 0; local_10 < (int)local_14; local_10 = local_10 + 1) {
        local_18 = (CUser *)CMemberManager::FindMemberUser(*(uint *)(this + 0x1b4));
        if (local_18 != (CUser *)0x0) {
          CUser::_ZN5CUser13GetUniqCharNoEv(local_18);
          cVar2 = CUser::IsBlackUser((uint)param_1);
          if (cVar2 != '\x01') {
            local_46 = param_2;
            local_45 = CUser::_ZN5CUser14GetIdByChannelEv(local_18);
            local_41 = CUser::_ZN5CUser13GetUniqCharNoEv(local_18);
            pCVar4 = (CServerInterface *)CUser::_ZN5CUser13GetGameServerEv(param_1);
            local_3d = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(pCVar4);
            local_3c = 1;
            pvVar5 = (void *)CUser::GetCharName(param_1);
            memcpy(auStack_3b,pvVar5,0x1d);
            local_1d = CUser::_ZN5CUser22GetUpperMemberExpLevelEv(local_18);
            local_1c = CUser::_ZN5CUser13GetUniqCharNoEv(param_1);
            CUser::_ZN5CUser17SendTcpGameserverEP12PacketHeader(local_18,(PacketHeader *)local_50);
          }
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 75 行）：

```cpp
void CMember::NoticeMemberLogin_Out(CUser* user, char flag)
{
    bool invalid = (user == 0 || user->GetGameServer() == 0);
    if (invalid == 0 && (m_flag & 4) != 0)
    {
        Packet_Monitor_Notice_Member_Member_Login_out pkt;
        CUser* member = m_memberManager->FindMemberUser(m_dbInfo.m_member.m_field0);
        if (member != 0)
        {
            if (user->IsBlackUser(member->GetUniqCharNo()) != 1)
            {
                pkt.m_flag = flag;
                pkt.m_idByChannel = member->GetIdByChannel();
                pkt.m_uniqCharNo = member->GetUniqCharNo();
                pkt.m_channelNo =
                    ((CServerInterface*)user->GetGameServer())->GetChannelNo();
                pkt.m_type = 2;
                memcpy(pkt.m_charName, user->GetCharName(), 0x1d);
                pkt.m_expLevel = 0;
                member->SendTcpGameserver(&pkt);
            }
            if (flag == 1)
            {
                if (user->IsBlackUser(member->GetUniqCharNo()) != 1)
                {
                    pkt.m_flag = flag;
                    pkt.m_idByChannel = user->GetIdByChannel();
                    pkt.m_uniqCharNo = user->GetUniqCharNo();
                    if (member->GetGameServer() != 0)
                    {
                        pkt.m_channelNo =
                            ((CServerInterface*)member->GetGameServer())->GetChannelNo();
                    }
                    else
                    {
                        pkt.m_channelNo = 0xff;
                    }
                    pkt.m_type = 1;
                    memcpy(pkt.m_charName, member->GetCharName(), 0x1d);
                    pkt.m_expLevel = user->GetUpperMemberExpLevel();
                    pkt.m_uniqCharNo2 = member->GetUniqCharNo();
                    user->SendTcpGameserver(&pkt);
                }
            }
        }
        int count = (int)m_dbInfo.m_count27;
        if (count != 0)
        {
            for (int i = 0; i < count; i++)
            {
                CUser* m = m_memberManager->FindMemberUser(m_dbInfo.m_lowers[i].m_field0);
                if (m == 0)
                {
                    continue;
                }
                if (user->IsBlackUser(m->GetUniqCharNo()) != 1)
                {
                    pkt.m_flag = flag;
                    pkt.m_idByChannel = m->GetIdByChannel();
                    pkt.m_uniqCharNo = m->GetUniqCharNo();
                    pkt.m_channelNo =
                        ((CServerInterface*)user->GetGameServer())->GetChannelNo();
                    pkt.m_type = 1;
                    memcpy(pkt.m_charName, user->GetCharName(), 0x1d);
                    pkt.m_expLevel = m->GetUpperMemberExpLevel();
                    pkt.m_uniqCharNo2 = user->GetUniqCharNo();
                    m->SendTcpGameserver(&pkt);
                }
            }
        }
    }
}
```
