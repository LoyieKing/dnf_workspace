# _ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader

`CPacketTranslater::OnGuildCargo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8083d24` | `0x3de` | `0x8079e10` | `0x3f7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,240 +1,247 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x197c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x30(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x56>
 movl   $0x188c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargo : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ec>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
 mov    %eax,-0x2c(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0xba>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0xbf>
 movl   $0x1896,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargo : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ec>
 mov    -0x30(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x11c>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x126>
 movl   $0x189e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargo : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ec>
 lea    -0x195f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27Packet_Guild_Cargo_ResponseC1Ev>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x1955(%ebp)
 mov    -0x30(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,-0x1951(%ebp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildCargoEv>
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildCargo14IsLoadCompleteEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x1c9>
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x18aa,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildCargo : Guild(%d,%d) Not Loaded",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xc3,-0x71(%ebp)
-lea    -0x195f(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+cmp    $0x1,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x2ae>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17GetGuildMemDBInfoEv>
 movzbl 0x15(%eax),%eax
 mov    %al,-0x1d(%ebp)
 cmpb   $0x3,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x25d>
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x199>
 cmpb   $0x1,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x25d>
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x199>
 cmpb   $0x2,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x25d>
+jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x23e>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x290,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN13CGuildManager11IsCargoLockEv>
+test   %al,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x1f0>
+movb   $0xcc,-0x71(%ebp)
+movl   $0x18c2,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnGuildCargo GUILD CARGO LOCKED!",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x224>
+movb   $0xc1,-0x71(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo19GetGuildCargoDBInfoEv>
+movl   $0x18dc,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x195f(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x195f(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ec>
 movzbl -0x1d(%ebp),%edi
 mov    -0x30(%ebp),%eax
 mov    0xa(%eax),%esi
 mov    -0x30(%ebp),%eax
 mov    0xe(%eax),%ebx
 movl   $0x18b7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargo : Access Deny(%d,%d,%d)",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movb   $0x24,-0x71(%ebp)
 lea    -0x195f(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x290,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CGuildManager11IsCargoLockEv>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x2af>
-movb   $0xcc,-0x71(%ebp)
-movl   $0x18c2,0x8(%esp)
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ec>
+mov    -0x30(%ebp),%eax
+mov    0xa(%eax),%esi
+mov    -0x30(%ebp),%eax
+mov    0xe(%eax),%ebx
+movl   $0x18aa,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildCargo GUILD CARGO LOCKED!",0x8(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargo : Guild(%d,%d) Not Loaded",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x2e3>
-movb   $0xc1,-0x71(%ebp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo19GetGuildCargoDBInfoEv>
-movl   $0x18dc,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x195f(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
+movb   $0xc3,-0x71(%ebp)
 lea    -0x195f(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ec>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x379>
+jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x392>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x18d5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildCargo Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x372>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x38b>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ec>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x18da,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildCargo Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ce>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3e7>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x197c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildCargo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader(PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  CGuildCargo *pCVar4;
  int iVar5;
  void *__src;
  uint uVar6;
  Packet_Guild_Cargo_Response local_1963 [10];
  undefined4 local_1959;
  undefined4 local_1955;
  undefined1 auStack_1951 [6364];
  undefined1 local_75;
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [8];
  CMyFileLog local_64 [8];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [24];
  PacketHeader *local_34;
  uint local_30;
  CUser *local_2c;
  CGuild *local_28;
  byte local_21;
  
  local_34 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08083d55 to 0808401b has its CatchHandler @ 08084021 */
    CMyFileLog::CMyFileLog(local_74,"OnGuildCargo",0x188c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_74,"./log/GuildCargo","CPacketTranslater::OnGuildCargo : 0 == m_pclApp");
  }
  else {
    local_30 = m_pclApp + 0x10;
    local_2c = (CUser *)CUserManager::FindUser_CharNo(local_30);
    if (local_2c == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_6c,"OnGuildCargo",0x1896);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_6c,"./log/GuildCargo","CPacketTranslater::OnGuildCargo : 0 == pclUser");
    }
    else {
      local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_28 == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_64,"OnGuildCargo",0x189e);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_64,"./log/GuildCargo","CPacketTranslater::OnGuildCargo : 0 == pclGuild");
      }
      else {
        Packet_Guild_Cargo_Response::Packet_Guild_Cargo_Response(local_1963);
        local_1959 = CUser::GetIdByChannel(local_2c);
        local_1955 = *(undefined4 *)(local_34 + 0xe);
        pCVar4 = (CGuildCargo *)CGuild::GetGuildCargo(local_28);
        cVar3 = CGuildCargo::_ZN11CGuildCargo14IsLoadCompleteEv(pCVar4);
        if (cVar3 == '\x01') {
          iVar5 = CUser::GetGuildMemDBInfo(local_2c);
          local_21 = *(byte *)(iVar5 + 0x15);
          if (((local_21 == 3) || (local_21 == 1)) || (local_21 == 2)) {
            cVar3 = CGuildManager::_ZN13CGuildManager11IsCargoLockEv
                              ((CGuildManager *)(m_pclApp + 0x290));
            if (cVar3 == '\0') {
              local_75 = 0xc1;
              pCVar4 = (CGuildCargo *)CGuild::GetGuildCargo(local_28);
              __src = (void *)CGuildCargo::GetGuildCargoDBInfo(pCVar4);
              memcpy(auStack_1951,__src,0x18dc);
            }
            else {
              local_75 = 0xcc;
              CMyFileLog::CMyFileLog(local_4c,"OnGuildCargo",0x18c2);
              CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                        (local_4c,"./log/GuildCargo",
                         "CPacketTranslater::OnGuildCargo GUILD CARGO LOCKED!");
            }
            CUser::SendTcpGameserver(local_2c,(PacketHeader *)local_1963);
          }
          else {
            uVar6 = (uint)local_21;
            uVar1 = *(undefined4 *)(local_34 + 10);
            uVar2 = *(undefined4 *)(local_34 + 0xe);
            CMyFileLog::CMyFileLog(local_54,"OnGuildCargo",0x18b7);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_54,"./log/GuildCargo",
                       "CPacketTranslater::OnGuildCargo : Access Deny(%d,%d,%d)",uVar2,uVar1,uVar6);
            local_75 = 0x24;
            CUser::SendTcpGameserver(local_2c,(PacketHeader *)local_1963);
          }
        }
        else {
          uVar1 = *(undefined4 *)(local_34 + 10);
          uVar2 = *(undefined4 *)(local_34 + 0xe);
          CMyFileLog::CMyFileLog(local_5c,"OnGuildCargo",0x18aa);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_5c,"./log/GuildCargo",
                     "CPacketTranslater::OnGuildCargo : Guild(%d,%d) Not Loaded",uVar2,uVar1);
          local_75 = 0xc3;
          CUser::SendTcpGameserver(local_2c,(PacketHeader *)local_1963);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4386 行）：

```cpp
void CPacketTranslater::OnGuildCargo(PacketHeader* pkt)
{
    try
    {
        Packet_Guild_Cargo_Requst* pb = (Packet_Guild_Cargo_Requst*)pkt;
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x188c, "./log/GuildCargo", "CPacketTranslater::OnGuildCargo : 0 == m_pclApp");
            return;
        }
        CUserManager* um = &m_pclApp->m_userManager;
        CUser* user;
        if ((user = um->FindUser_CharNo(pb->m_charNo)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1896, "./log/GuildCargo", "CPacketTranslater::OnGuildCargo : 0 == pclUser");
            return;
        }
        CGuild* guild;
        if ((guild = (&m_pclApp->m_guildManager)->FindGuild(pb->m_guildKey)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x189e, "./log/GuildCargo", "CPacketTranslater::OnGuildCargo : 0 == pclGuild");
            return;
        }
        Packet_Guild_Cargo_Response reply;
        reply.m_a = user->GetIdByChannel();
        reply.m_b = pb->m_charNo;
        if (guild->GetGuildCargo()->IsLoadComplete() == 1)
        {
            unsigned char grade = user->GetGuildMemDBInfo()->m_grade;
            if (grade == 3 || grade == 1 || grade == 2)
            {
                if ((&m_pclApp->m_guildManager)->IsCargoLock())
                {
                    reply.m_flag = 0xcc;
                    DNF_LOG_SCOPE_LINE(0x18c2, "./log/GuildCargo", "CPacketTranslater::OnGuildCargo GUILD CARGO LOCKED!");
                }
                else
                {
                    reply.m_flag = 0xc1;
                    memcpy(&reply.m_cargo, guild->GetGuildCargo()->GetGuildCargoDBInfo(), 0x18dc);
                }
                user->SendTcpGameserver(&reply);
            }
            else
            {
                DNF_LOG_SCOPE_LINE(0x18b7,"./log/GuildCargo",
                    "CPacketTranslater::OnGuildCargo : Access Deny(%d,%d,%d)", pb->m_charNo, pb->m_guildKey,
                    (unsigned int)grade);
                reply.m_flag = 0x24;
                user->SendTcpGameserver(&reply);
            }
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x18aa,"./log/GuildCargo", "CPacketTranslater::OnGuildCargo : Guild(%d,%d) Not Loaded",
                pb->m_charNo, pb->m_guildKey);
            reply.m_flag = 0xc3;
            user->SendTcpGameserver(&reply);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x18d5, "./log/Except", "CPacketTranslater::OnGuildCargo Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x18da, "./log/Except", "CPacketTranslater::OnGuildCargo Exception Break\n");
    }
}
```
