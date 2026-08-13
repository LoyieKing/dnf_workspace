# _ZN17CPacketTranslater7OnLoginEP12PacketHeader

`CPacketTranslater::OnLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807dd0e` | `0x61c` | `0x8069528` | `0x684` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,395 +1,426 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0xac,%esp
-mov    0x8(%ebp),%eax
+sub    $0xc0,%esp
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x67a>
+mov    0x8(%ebp),%eax
+movzbl 0x12(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x58(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    -0x58(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17FindTcpGameServerEj>
+mov    %eax,-0x54(%ebp)
+cmpl   $0x0,-0x54(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x67a>
+mov    -0x58(%ebp),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication14FindGameServerEi>
 mov    %eax,-0x50(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x611>
-mov    -0x50(%ebp),%eax
-mov    0x6(%eax),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17FindTcpGameServerEj>
+cmpl   $0x0,-0x50(%ebp)
+jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0xd2>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
 mov    %eax,-0x4c(%ebp)
-cmpl   $0x0,-0x4c(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x610>
-mov    -0x50(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0x12(%eax),%eax
-movzbl %al,%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication14FindGameServerEi>
-mov    %eax,-0x44(%ebp)
-cmpl   $0x0,-0x44(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0xdc>
-mov    -0x50(%ebp),%eax
-movzbl 0x12(%eax),%eax
-movzbl %al,%esi
-mov    -0x50(%ebp),%eax
-mov    0xe(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+movzbl %al,%ebx
 movl   $0x129,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"Not Found M_ID(%s) Channel No(%d)",0x8(%esp)
 movl   $"./log/Channel",0x4(%esp)
 lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x611>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x67a>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication24GetLoginLogoutStatisticsEv>
-mov    %eax,-0x3c(%ebp)
-cmpl   $0x0,-0x3c(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x105>
-movl   $0x0,0x4(%esp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x48(%ebp)
+cmpl   $0x0,-0x48(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0xfb>
+movl   $0x0,0x4(%esp)
+mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22CLoginLogoutStatistics18CountNumOfLoginoutE17ENUM_LOGIN_LOGOUT>
 movl   $0x33,0x8(%esp)
 movl   $0x3e8,0x4(%esp)
-mov    -0x4c(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x38(%ebp)
-movl   $0x0,-0x34(%ebp)
-cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x156>
-mov    -0x38(%ebp),%eax
-mov    %eax,-0x34(%ebp)
-mov    -0x50(%ebp),%eax
+mov    %eax,-0x44(%ebp)
+movl   $0x0,-0x40(%ebp)
+cmpl   $0x0,-0x44(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x14c>
+mov    -0x44(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+mov    0x8(%ebp),%eax
 lea    0xa(%eax),%edx
-mov    -0x34(%ebp),%eax
+mov    -0x44(%ebp),%eax
 add    $0xa,%eax
 movl   $0x29,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x50(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x40(%ebp)
-cmpl   $0x0,-0x40(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x27f>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16GetTcpGameServerEv>
-mov    %eax,-0x48(%ebp)
-cmpl   $0x0,-0x48(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x1e4>
-movl   $0xe,0x8(%esp)
-movl   $0x3ee,0x4(%esp)
-mov    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x1e4>
-mov    -0x2c(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x50(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x28(%ebp),%eax
-mov    %edx,0xa(%eax)
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-mov    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-movzbl %al,%edi
-mov    -0x50(%ebp),%eax
-mov    0xe(%eax),%eax
-movl   $0x1,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%esi
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser7GetDBIDEv>
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x17a,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"DOUBLE CONNECTED : Already User DB ID(%s)\tCurrent Connect User DB ID(%s)\tChannel(%d)\n",0x8(%esp)
-movl   $"./log/User",0x4(%esp)
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    %eax,-0x38(%ebp)
 cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x4b0>
-mov    -0x34(%ebp),%eax
-movb   $0x2,0x23(%eax)
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x4b0>
-mov    -0x50(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x3d7>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager16FindProhibitUserEj>
 test   %eax,%eax
-setne  %al
+sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x313>
-cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x2aa>
-mov    -0x34(%ebp),%eax
-movb   $0x3,0x23(%eax)
-mov    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-movzbl %al,%esi
-mov    -0x50(%ebp),%eax
-mov    0xe(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x190,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"PROHIBIT USER CONNECTED : m_ID(%s)\tChannel(%d)\n",0x8(%esp)
-movl   $"./log/User",0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x4b0>
-mov    -0x50(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x352>
+mov    -0x50(%ebp),%ecx
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%edx
-mov    -0x50(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    -0x44(%ebp),%ecx
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 movl   $"",0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager10CreateUserEjjPciP11CGameServer>
-mov    %eax,-0x24(%ebp)
-mov    -0x50(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    0x8(%ebp),%eax
 movzbl 0x23(%eax),%eax
 movzbl %al,%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6SetSexEh>
-mov    -0x50(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0x23(%eax),%eax
 movzbl %al,%ebx
 movl   $0x198,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"OnLogin - SetSex : %d",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x50(%ebp),%eax
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
 add    $0x2c,%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6SetSsnEPc>
-mov    -0x4c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SetTcpGameServerEP14CTcpGameServer>
-mov    -0x34(%ebp),%eax
-movb   $0x1,0x23(%eax)
-mov    -0x50(%ebp),%eax
+mov    -0x40(%ebp),%eax
+add    $0x23,%eax
+movb   $0x1,(%eax)
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%esi
-mov    -0x30(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+movl   $0x1a5,0x8(%esp)
+movl   $"OnLogin",0x4(%esp)
+lea    -0x9c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager4SizeEv>
-mov    %eax,%ebx
-movl   $0x1a5,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x34(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Current user count : %d\tConnected User DB ID : %s\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x68(%ebp),%eax
+lea    -0x9c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication24GetLoginLogoutStatisticsEv>
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x304>
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManager4SizeEv>
+mov    %eax,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN22CLoginLogoutStatistics21CountNumOfOccupationsE17ENUM_LOGIN_LOGOUTi>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
+mov    %eax,-0x2c(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser>
+cmp    $0x1,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x33f>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13SendBlackListEv>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x4d4>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x4d4>
+cmpl   $0x0,-0x44(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x361>
+mov    -0x40(%ebp),%eax
+add    $0x23,%eax
+movb   $0x3,(%eax)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+movzbl %al,%eax
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
+movzbl %al,%ebx
+movl   $0x190,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"PROHIBIT USER CONNECTED : m_ID(%s)\tChannel(%d)\n",0x8(%esp)
+movl   $"./log/User",0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x4d4>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16GetTcpGameServerEv>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x472>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager4SizeEv>
-mov    %eax,0x8(%esp)
-movl   $0x0,0x4(%esp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x42f>
+movl   $0xe,0x8(%esp)
+movl   $0x3ee,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN22CLoginLogoutStatistics21CountNumOfOccupationsE17ENUM_LOGIN_LOGOUTi>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
-mov    -0x24(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN18CMemoryCashManager24QueryCashMemoryBlackListEP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x4a5>
+call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x42f>
+mov    -0x10(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
 mov    -0x50(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x4b0>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13SendBlackListEv>
-cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x4ca>
-mov    -0x34(%ebp),%eax
-movl   $0x0,0x28(%eax)
-mov    -0x34(%ebp),%eax
-movl   $0x0,0x24(%eax)
-mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+movzbl %al,%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+movl   $0x1,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x18(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser7GetDBIDEv>
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x14(%ebp)
+mov    -0x1c(%ebp),%eax
+movzbl %al,%ebx
+movl   $0x17a,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"DOUBLE CONNECTED : Already User DB ID(%s)\tCurrent Connect User DB ID(%s)\tChannel(%d)\n",0x8(%esp)
+movl   $"./log/User",0x4(%esp)
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+cmpl   $0x0,-0x44(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x4d4>
+mov    -0x40(%ebp),%eax
+add    $0x23,%eax
+movb   $0x2,(%eax)
+cmpl   $0x0,-0x44(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x522>
+mov    -0x40(%ebp),%eax
+add    $0x28,%eax
+movb   $0x0,(%eax)
+mov    -0x40(%ebp),%eax
+add    $0x29,%eax
+movb   $0x0,(%eax)
+mov    -0x40(%ebp),%eax
+add    $0x2a,%eax
+movb   $0x0,(%eax)
+mov    -0x40(%ebp),%eax
+add    $0x2b,%eax
+movb   $0x0,(%eax)
+mov    -0x40(%ebp),%eax
+add    $0x24,%eax
+movb   $0x0,(%eax)
+mov    -0x40(%ebp),%eax
+add    $0x25,%eax
+movb   $0x0,(%eax)
+mov    -0x40(%ebp),%eax
+add    $0x26,%eax
+movb   $0x0,(%eax)
+mov    -0x40(%ebp),%eax
+add    $0x27,%eax
+movb   $0x0,(%eax)
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%ebx
 call   <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv>
 lea    -0x94(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15exchange_server18CCacheCharacterMgr17GetCacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x50d>
-cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x50d>
-mov    -0x90(%ebp),%edx
-mov    -0x34(%ebp),%eax
-mov    %edx,0x28(%eax)
-mov    -0x94(%ebp),%edx
-mov    -0x34(%ebp),%eax
-mov    %edx,0x24(%eax)
-cmpl   $0x0,-0x4c(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x611>
-cmpl   $0x0,-0x34(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x611>
-mov    -0x34(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x4c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x554>
+cmpl   $0x0,-0x44(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x554>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x559>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x579>
+mov    -0x40(%ebp),%eax
+lea    0x28(%eax),%edx
+mov    -0x90(%ebp),%eax
+mov    %eax,(%edx)
+mov    -0x40(%ebp),%eax
+lea    0x24(%eax),%edx
+mov    -0x94(%ebp),%eax
+mov    %eax,(%edx)
+cmpl   $0x0,-0x54(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x67a>
+cmpl   $0x0,-0x40(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x67a>
+mov    -0x40(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x611>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x67a>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x5b4>
+jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x620>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1ff,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnLogin() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x5ad>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x619>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x611>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x67a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x204,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLogin() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x609>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x675>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x611>
-nop
-add    $0xac,%esp
+add    $0xc0,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnLogin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater7OnLoginEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader PVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  CMemoryCashManager *this;
  CCacheCharacterMgr *this_00;
  undefined4 local_98;
  undefined4 local_94;
  CMyFileLog local_8c [8];
  CMyFileLog local_84 [8];
  CMyFileLog local_7c [8];
  CMyFileLog local_74 [8];
  CMyFileLog local_6c [24];
  PacketHeader *local_54;
  CTcpGameServer *local_50;
  CTcpGameServer *local_4c;
  CServerInterface *local_48;
  CUser *local_44;
  CLoginLogoutStatistics *local_40;
  char *local_3c;
  char *local_38;
  CApplication *local_34;
  char *local_30;
  char *local_2c;
  CUser *local_28;
  CLoginLogoutStatistics *local_24;
  
  local_54 = param_1;
  if (m_pclApp != (CApplication *)0x0) {
                    /* try { // try from 0807dd3f to 0807e240 has its CatchHandler @ 0807e246 */
    local_50 = (CTcpGameServer *)CApplication::FindTcpGameServer((uint)m_pclApp);
    if (local_50 != (CTcpGameServer *)0x0) {
      local_48 = (CServerInterface *)CApplication::FindGameServer((int)m_pclApp);
      if (local_48 == (CServerInterface *)0x0) {
        PVar1 = local_54[0x12];
        uVar3 = NumberToString(*(uint *)(local_54 + 0xe),0);
        CMyFileLog::CMyFileLog(local_8c,"OnLogin",0x129);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_8c,"./log/Channel","Not Found M_ID(%s) Channel No(%d)",uVar3,
                   (uint)(byte)PVar1);
      }
      else {
        local_40 = (CLoginLogoutStatistics *)
                   CApplication::_ZN12CApplication24GetLoginLogoutStatisticsEv(m_pclApp);
        if (local_40 != (CLoginLogoutStatistics *)0x0) {
          CLoginLogoutStatistics::CountNumOfLoginout(local_40,0);
        }
        local_3c = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt
                                     (local_50,1000,0x33);
        local_38 = (char *)0x0;
        if (local_3c != (char *)0x0) {
          local_38 = local_3c;
          memcpy(local_3c + 10,local_54 + 10,0x29);
        }
        local_34 = m_pclApp + 0x10;
        local_44 = (CUser *)CUserManager::FindUser((uint)local_34);
        if (local_44 == (CUser *)0x0) {
          iVar7 = CUserManager::FindProhibitUser((uint)local_34);
          if (iVar7 == 0) {
            local_28 = (CUser *)CUserManager::_ZN12CUserManager10CreateUserEjjPciP11CGameServer
                                          ((CUserManager *)local_34,*(uint *)(local_54 + 0xe),0,"",
                                           *(int *)(local_54 + 10),(CGameServer *)local_48);
            CUser::SetSex(local_28,(uchar)local_54[0x23]);
            PVar1 = local_54[0x23];
            CMyFileLog::CMyFileLog(local_74,"OnLogin",0x198);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_74,"./log/User","OnLogin - SetSex : %d",(uint)(byte)PVar1);
            CUser::SetSsn(local_28,(char *)(local_54 + 0x2c));
            CUser::SetTcpGameServer(local_28,local_50);
            local_38[0x23] = '\x01';
            uVar3 = NumberToString(*(uint *)(local_54 + 0xe),0);
            uVar6 = CUserManager::Size((CUserManager *)local_34);
            CMyFileLog::CMyFileLog(local_6c,"OnLogin",0x1a5);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_6c,"./log/User","Current user count : %d\tConnected User DB ID : %s\n",
                       uVar6,uVar3);
            local_24 = (CLoginLogoutStatistics *)
                       CApplication::_ZN12CApplication24GetLoginLogoutStatisticsEv(m_pclApp);
            if (local_24 != (CLoginLogoutStatistics *)0x0) {
              uVar3 = CUserManager::Size((CUserManager *)local_34);
              CLoginLogoutStatistics::CountNumOfOccupations(local_24,0,uVar3);
            }
            this = (CMemoryCashManager *)
                   CApplication::_ZN12CApplication21Get_MemoryCashManagerEv(m_pclApp);
            cVar2 = CMemoryCashManager::QueryCashMemoryBlackList(this,local_28);
            if (cVar2 == '\x01') {
              CUser::SendBlackList(local_28);
            }
            else {
              _ZN17CPacketTranslater22RequestBlackListToDBMWEj(*(uint *)(local_54 + 0xe));
            }
          }
          else {
            if (local_3c != (char *)0x0) {
              local_38[0x23] = '\x03';
            }
            uVar4 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(local_48);
            uVar3 = NumberToString(*(uint *)(local_54 + 0xe),0);
            CMyFileLog::CMyFileLog(local_7c,"OnLogin",400);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_7c,"./log/User","PROHIBIT USER CONNECTED : m_ID(%s)\tChannel(%d)\n",
                       uVar3,uVar4 & 0xff);
          }
        }
        else {
          local_4c = (CTcpGameServer *)CUser::GetTcpGameServer(local_44);
          if (local_4c != (CTcpGameServer *)0x0) {
            local_30 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt
                                         (local_4c,0x3ee,0xe);
            if (local_30 != (char *)0x0) {
              *(undefined4 *)(local_30 + 10) = *(undefined4 *)(local_54 + 0xe);
              local_2c = local_30;
              CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_4c,local_30);
            }
          }
          uVar4 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(local_48);
          uVar3 = NumberToString(*(uint *)(local_54 + 0xe),1);
          uVar5 = CUser::GetDBID(local_44);
          uVar6 = NumberToString(uVar5,0);
          CMyFileLog::CMyFileLog(local_84,"OnLogin",0x17a);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_84,"./log/User",
                     "DOUBLE CONNECTED : Already User DB ID(%s)\tCurrent Connect User DB ID(%s)\tChannel(%d)\n"
                     ,uVar6,uVar3,uVar4 & 0xff);
          if (local_3c != (char *)0x0) {
            local_38[0x23] = '\x02';
          }
        }
        if (local_3c != (char *)0x0) {
          local_38[0x28] = '\0';
          local_38[0x29] = '\0';
          local_38[0x2a] = '\0';
          local_38[0x2b] = '\0';
          local_38[0x24] = '\0';
          local_38[0x25] = '\0';
          local_38[0x26] = '\0';
          local_38[0x27] = '\0';
        }
        uVar4 = *(uint *)(local_54 + 0xe);
        this_00 = (CCacheCharacterMgr *)
                  exchange_server::_ZN15exchange_server28GetInstanceCacheCharacterMgrEv();
        cVar2 = exchange_server::CCacheCharacterMgr::GetCacheCharacter
                          (this_00,uVar4,(CACHE_CHARACTER_TYPE *)&local_98);
        if ((cVar2 != '\0') && (local_3c != (char *)0x0)) {
          *(undefined4 *)(local_38 + 0x28) = local_94;
          *(undefined4 *)(local_38 + 0x24) = local_98;
        }
        if ((local_50 != (CTcpGameServer *)0x0) && (local_38 != (char *)0x0)) {
          CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(local_50,local_38);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 280 行）：

```cpp
void CPacketTranslater::OnLogin(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        try
        {
            unsigned int channel =
                (unsigned int)(unsigned char)((RA_S8<18>*)pkt)->v;
            CTcpGameServer* tcpGs =
                (CTcpGameServer*)m_pclApp->FindTcpGameServer(channel);
            if (tcpGs != 0)
            {
                CServerInterface* gs =
                    (CServerInterface*)m_pclApp->FindGameServer((int)channel);
                if (gs == 0)
                {
                    char* dbid = NumberToString(((RA_UINT<14>*)pkt)->v, 0);
                    DNF_LOG_SCOPE_LINE(0x129,"./log/Channel", "Not Found M_ID(%s) Channel No(%d)", dbid,
                        (unsigned int)(unsigned char)((RA_S8<18>*)pkt)->v);
                }
                else
                {
                    CLoginLogoutStatistics* stats =
                        (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
                    if (stats != 0)
                    {
                        stats->CountNumOfLoginout((ENUM_LOGIN_LOGOUT)0);
                    }
                    char* pktBuf = tcpGs->makePacketHeader(1000, 0x33);
                    char* outBuf = 0;
                    if (pktBuf != 0)
                    {
                        outBuf = pktBuf;
                        memcpy(pktBuf + 10, (char*)pkt + 0xa, 0x29);
                    }
                    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
                    CUser* user = userMgr->FindUser(((RA_UINT<14>*)pkt)->v);
                    if (user == 0)
                    {
                        if (userMgr->FindProhibitUser(
                                ((RA_UINT<14>*)pkt)->v) == 0)
                        {
                            user = userMgr->CreateUser(
                                ((RA_UINT<14>*)pkt)->v, 0, "",
                                ((RA_INT<10>*)pkt)->v, (CGameServer*)gs);
                            user->SetSex(((RA_U8<35>*)pkt)->v);
                            DNF_LOG_SCOPE_LINE(0x198,"./log/User", "OnLogin - SetSex : %d",
                                (unsigned int)(unsigned char)((RA_S8<35>*)pkt)->v);
                            user->SetSsn((char*)pkt + 0x2c);
                            user->SetTcpGameServer(tcpGs);
                            outBuf[0x23] = 1;
                            char* dbid = NumberToString(((RA_UINT<14>*)pkt)->v, 0);
                            CMyFileLog log2("OnLogin", 0x1a5);
                            log2("./log/User",
                                 "Current user count : %d\tConnected User DB ID : %s\n",
                                 userMgr->Size(), dbid);
                            CLoginLogoutStatistics* stats2 =
                                (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
                            if (stats2 != 0)
                            {
                                stats2->CountNumOfOccupations((ENUM_LOGIN_LOGOUT)0,
                                                              (int)userMgr->Size());
                            }
                            CMemoryCashManager* cash =
                                (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
                            if (cash->QueryCashMemoryBlackList(user) == 1)
                            {
                                user->SendBlackList();
                            }
                            else
                            {
                                RequestBlackListToDBMW(
                                    ((RA_UINT<14>*)pkt)->v);
                            }
                        }
                        else
                        {
                            if (pktBuf != 0)
                            {
                                outBuf[0x23] = 3;
                            }
                            unsigned int ch = gs->GetChannelNo();
                            char* dbid = NumberToString(((RA_UINT<14>*)pkt)->v, 0);
                            DNF_LOG_SCOPE_LINE(400,"./log/User",
                                "PROHIBIT USER CONNECTED : m_ID(%s)\tChannel(%d)\n", dbid,
                                ch & 0xff);
                        }
                    }
                    else
                    {
                        CTcpGameServer* oldGs =
                            (CTcpGameServer*)user->GetTcpGameServer();
                        if (oldGs != 0)
                        {
                            char* oldBuf = oldGs->makePacketHeader(0x3ee, 0xe);
                            if (oldBuf != 0)
                            {
                                *(unsigned int*)(oldBuf + 10) =
                                    ((RA_UINT<14>*)pkt)->v;
                                oldGs->SendToGameServer(oldBuf);
                            }
                        }
                        unsigned int ch = gs->GetChannelNo();
                        char* dbid = NumberToString(((RA_UINT<14>*)pkt)->v, 1);
                        char* oldDbid = NumberToString(user->GetDBID(), 0);
                        DNF_LOG_SCOPE_LINE(0x17a,"./log/User",
                            "DOUBLE CONNECTED : Already User DB ID(%s)\tCurrent Connect User "
                            "DB ID(%s)\tChannel(%d)\n",
                            oldDbid, dbid, ch & 0xff);
                        if (pktBuf != 0)
                        {
                            outBuf[0x23] = 2;
                        }
                    }
                    if (pktBuf != 0)
                    {
                        outBuf[0x28] = 0;
                        outBuf[0x29] = 0;
                        outBuf[0x2a] = 0;
                        outBuf[0x2b] = 0;
                        outBuf[0x24] = 0;
                        outBuf[0x25] = 0;
                        outBuf[0x26] = 0;
                        outBuf[0x27] = 0;
                    }
                    exchange_server::CACHE_CHARACTER_TYPE cacheType;
                    if (exchange_server::GetInstanceCacheCharacterMgr()->GetCacheCharacter(
                            ((RA_UINT<14>*)pkt)->v, &cacheType) != 0 &&
                        pktBuf != 0)
                    {
                        *(unsigned int*)(outBuf + 0x28) =
                            (unsigned int)cacheType.m_field4;
                        *(unsigned int*)(outBuf + 0x24) =
                            (unsigned int)cacheType.m_field0;
                    }
                    if (tcpGs != 0 && outBuf != 0)
                    {
                        tcpGs->SendToGameServer(outBuf);
                    }
                }
            }
        }
        catch (CDNFException& e)
        {
            DNF_LOG_SCOPE_LINE(0x1ff, "./log/Except", "CPacketTranslater::OnLogin() Exception Break : %s\n", e.what());
        }
        catch (...)
        {
            DNF_LOG_SCOPE_LINE(0x204, "./log/Except", "CPacketTranslater::OnLogin() Exception Break\n");
        }
    }
}
```
