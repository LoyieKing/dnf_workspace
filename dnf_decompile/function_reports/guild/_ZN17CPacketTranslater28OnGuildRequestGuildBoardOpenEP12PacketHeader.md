# _ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader

`CPacketTranslater::OnGuildRequestGuildBoardOpen(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808641a` | `0x41b` | `0x807c3a0` | `0x41b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,276 +1,276 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-add    $0xffffff80,%esp
+sub    $0x90,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x55>
 movl   $0x1c4a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x414>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x411>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    0xf(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0xb6>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0xb9>
 movl   $0x1c54,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x414>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x411>
+mov    -0x1c(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x11d>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x11b>
 movl   $0x1c5b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x414>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x411>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard21isWebGuildBoardActionEv>
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x156>
-mov    -0x14(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x15b>
+mov    -0x1c(%ebp),%eax
 movzbl 0xa(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x156>
-mov    -0x18(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x15b>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard24getGuildBoardDBLoadStateEv>
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x15d>
+je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x15b>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x162>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x160>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x303>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildBoard24getGuildBoardDBLoadStateEv>
-test   %eax,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x1df>
-lea    -0x56(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN39Packet_DB_Load_Request_Guild_Board_OpenC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %eax,-0x4c(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x48(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x56(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-movl   $0x1,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildBoard24setGuildBoardDBLoadStateE18ENUM_DB_LOAD_STATE>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x414>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildBoard21isWebGuildBoardActionEv>
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x201>
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x208>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x20d>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x414>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildBoard22setWebGuildBoardActionEb>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildBoard24getGuildBoardDBLoadStateEv>
-cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x266>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildBoard20isGuildBoardDBAccessEv>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x266>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x26b>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x2c8>
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN39Packet_DB_Load_Request_Guild_Board_OpenC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %eax,-0x5e(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x5a(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x68(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-movl   $0x1,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildBoard24setGuildBoardDBLoadStateE18ENUM_DB_LOAD_STATE>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x414>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x19f>
+mov    -0x1c(%ebp),%eax
 mov    0xf(%eax),%esi
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xb(%eax),%ebx
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    -0x1c(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+mov    -0x14(%ebp),%edx
 mov    %edx,0x10(%esp)
 movl   $0x232a,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x414>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x411>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildBoard24getGuildBoardDBLoadStateEv>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x214>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN39Packet_DB_Load_Request_Guild_Board_OpenC1Ev>
+mov    -0x1c(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    0xf(%eax),%eax
+mov    %eax,-0x48(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x58(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+movl   $0x1,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildBoard24setGuildBoardDBLoadStateE18ENUM_DB_LOAD_STATE>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x411>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildBoard21isWebGuildBoardActionEv>
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x23d>
+mov    -0x1c(%ebp),%eax
+movzbl 0xa(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x23d>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x242>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x410>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildBoard22setWebGuildBoardActionEb>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildBoard24getGuildBoardDBLoadStateEv>
+cmp    $0x2,%eax
+jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x29b>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildBoard20isGuildBoardDBAccessEv>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x29b>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x2a0>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x2fd>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN39Packet_DB_Load_Request_Guild_Board_OpenC1Ev>
+mov    -0x1c(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x60(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    0xf(%eax),%eax
+mov    %eax,-0x5c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x6c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+movl   $0x1,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildBoard24setGuildBoardDBLoadStateE18ENUM_DB_LOAD_STATE>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x411>
+mov    -0x1c(%ebp),%eax
 mov    0xf(%eax),%esi
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xb(%eax),%ebx
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    -0x1c(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+mov    -0x14(%ebp),%edx
 mov    %edx,0x10(%esp)
 movl   $0x232a,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x414>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x411>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x3ba>
+jne    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x3b4>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1c89,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardOpen Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x3b3>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x3ad>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x414>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x411>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1c8e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardOpen Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x40f>
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x409>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-sub    $0xffffff80,%esp
+jmp    <T> <_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader+0x411>
+nop
+add    $0x90,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildRequestGuildBoardOpen(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  CGuildBoard *pCVar5;
  int iVar6;
  CServerHandler *pCVar7;
  Packet_DB_Load_Request_Guild_Board_Open local_6c [10];
  undefined4 local_62;
  undefined4 local_5e;
  Packet_DB_Load_Request_Guild_Board_Open local_5a [10];
  undefined4 local_50;
  undefined4 local_4c;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  CUser *local_20;
  CGuild *local_1c;
  PacketHeader *local_18;
  CApplication *local_14;
  
  local_18 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08086447 to 08086752 has its CatchHandler @ 08086758 */
    CMyFileLog::CMyFileLog(local_48,"OnGuildRequestGuildBoardOpen",0x1c4a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/GuildBoard",
               "CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == m_pclApp");
    return;
  }
  local_14 = m_pclApp + 0x10;
  local_20 = (CUser *)CUserManager::FindUser_CharNo((uint)local_14);
  if (local_20 == (CUser *)0x0) {
    CMyFileLog::CMyFileLog(local_40,"OnGuildRequestGuildBoardOpen",0x1c54);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/GuildBoard",
               "CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == pclUser");
    return;
  }
  local_1c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
  if (local_1c == (CGuild *)0x0) {
    CMyFileLog::CMyFileLog(local_38,"OnGuildRequestGuildBoardOpen",0x1c5b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/GuildBoard",
               "CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == pclGuild");
    return;
  }
  pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
  cVar4 = CGuildBoard::_ZN11CGuildBoard21isWebGuildBoardActionEv(pCVar5);
  if ((cVar4 == '\0') && (local_18[10] == (PacketHeader)0x0)) {
    pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
    iVar6 = CGuildBoard::_ZN11CGuildBoard24getGuildBoardDBLoadStateEv(pCVar5);
    if (iVar6 == 0) goto LAB_08086570;
    bVar3 = false;
  }
  else {
LAB_08086570:
    bVar3 = true;
  }
  if (!bVar3) {
    uVar1 = *(uint *)(local_18 + 0xf);
    uVar2 = *(uint *)(local_18 + 0xb);
    pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
    CGuildBoard::_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser(pCVar5,uVar2,uVar1,0x232a,local_20)
    ;
    return;
  }
  pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
  iVar6 = CGuildBoard::_ZN11CGuildBoard24getGuildBoardDBLoadStateEv(pCVar5);
  if (iVar6 == 0) {
    Packet_DB_Load_Request_Guild_Board_Open::Packet_DB_Load_Request_Guild_Board_Open(local_5a);
    local_50 = *(undefined4 *)(local_18 + 0xb);
    local_4c = *(undefined4 *)(local_18 + 0xf);
    pCVar7 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(pCVar7,(PacketHeader *)local_5a);
    pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
    CGuildBoard::_ZN11CGuildBoard24setGuildBoardDBLoadStateE18ENUM_DB_LOAD_STATE(pCVar5,1);
    return;
  }
  pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
  cVar4 = CGuildBoard::_ZN11CGuildBoard21isWebGuildBoardActionEv(pCVar5);
  if ((cVar4 == '\0') && (local_18[10] == (PacketHeader)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
  CGuildBoard::_ZN11CGuildBoard22setWebGuildBoardActionEb(pCVar5,false);
  pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
  iVar6 = CGuildBoard::_ZN11CGuildBoard24getGuildBoardDBLoadStateEv(pCVar5);
  if (iVar6 == 2) {
    pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
    cVar4 = CGuildBoard::_ZN11CGuildBoard20isGuildBoardDBAccessEv(pCVar5);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_08086685;
    }
  }
  bVar3 = false;
LAB_08086685:
  if (bVar3) {
    Packet_DB_Load_Request_Guild_Board_Open::Packet_DB_Load_Request_Guild_Board_Open(local_6c);
    local_62 = *(undefined4 *)(local_18 + 0xb);
    local_5e = *(undefined4 *)(local_18 + 0xf);
    pCVar7 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(pCVar7,(PacketHeader *)local_6c);
    pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
    CGuildBoard::_ZN11CGuildBoard24setGuildBoardDBLoadStateE18ENUM_DB_LOAD_STATE(pCVar5,1);
  }
  else {
    uVar1 = *(uint *)(local_18 + 0xf);
    uVar2 = *(uint *)(local_18 + 0xb);
    pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_1c);
    CGuildBoard::_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser(pCVar5,uVar2,uVar1,0x232a,local_20)
    ;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5006 行）：

```cpp
void CPacketTranslater::OnGuildRequestGuildBoardOpen(PacketHeader* pkt)
{
    Packet_Guild_Request_Guild_Board_Open* pb = (Packet_Guild_Request_Guild_Board_Open*)pkt;
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1c4a,"./log/GuildBoard",
                "CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == m_pclApp");
            return;
        }
        CUserManager* um = &m_pclApp->m_userManager;
        CUser* user = um->FindUser_CharNo(pb->m_charNo);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1c54,"./log/GuildBoard",
                "CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == pclUser");
            return;
        }
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(pb->m_guildKey);
        if (guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1c5b,"./log/GuildBoard",
                "CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == pclGuild");
            return;
        }
        if (guild->GetGuildBoard()->isWebGuildBoardAction() == 0 &&
            pb->m_boardType == 0 &&
            guild->GetGuildBoard()->getGuildBoardDBLoadState() != 0)
        {
            guild->GetGuildBoard()->sendGuildBoardData(
                pb->m_guildKey,
                pb->m_charNo,
                0x232a, user);
            return;
        }
        if (guild->GetGuildBoard()->getGuildBoardDBLoadState() == 0)
        {
            Packet_DB_Load_Request_Guild_Board_Open dbPkt;
            dbPkt.m_guildKey = pb->m_guildKey;
            dbPkt.m_charNo = pb->m_charNo;
            m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
            guild->GetGuildBoard()->setGuildBoardDBLoadState((ENUM_DB_LOAD_STATE)1);
            return;
        }
        if (guild->GetGuildBoard()->isWebGuildBoardAction() == 0 &&
            pb->m_boardType == 0)
        {
            return;
        }
        guild->GetGuildBoard()->setWebGuildBoardAction(false);
        if (guild->GetGuildBoard()->getGuildBoardDBLoadState() == 2 &&
            guild->GetGuildBoard()->isGuildBoardDBAccess() != 0)
        {
            Packet_DB_Load_Request_Guild_Board_Open dbPkt;
            dbPkt.m_guildKey = pb->m_guildKey;
            dbPkt.m_charNo = pb->m_charNo;
            m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
            guild->GetGuildBoard()->setGuildBoardDBLoadState((ENUM_DB_LOAD_STATE)1);
        }
        else
        {
            guild->GetGuildBoard()->sendGuildBoardData(
                pb->m_guildKey,
                pb->m_charNo,
                0x232a, user);
        }
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnGuildRequestGuildBoardOpen Exception Break", 0x1c89, 0x1c8e);
}
```
