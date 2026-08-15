# _ZN17CPacketTranslater11OnCharLoginEP12PacketHeader

`CPacketTranslater::OnCharLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807f5a2` | `0x8c3` | `0x806aed0` | `0x858` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,562 +1,538 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x18c,%esp
+sub    $0x17c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x8b7>
+je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x84d>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x3c(%ebp)
+mov    %eax,-0x58(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x54(%ebp)
+mov    -0x58(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x44(%ebp)
-cmpl   $0x0,-0x44(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x712>
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x50(%ebp)
+cmpl   $0x0,-0x50(%ebp)
+jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0xe5>
+mov    -0x58(%ebp),%eax
+mov    0xa(%eax),%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x4c(%ebp)
+mov    -0x58(%ebp),%eax
+add    $0x1f,%eax
+mov    %eax,-0x150(%ebp)
+mov    -0x58(%ebp),%eax
+movzbl 0x17(%eax),%eax
+movsbl %al,%edi
+mov    -0x58(%ebp),%eax
+mov    0x13(%eax),%esi
+mov    -0x58(%ebp),%eax
+mov    0xf(%eax),%ebx
+movl   $0x457,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x150(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    %edi,0x18(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[CHAR_LOGIN_ERR]\tDB ID : %s\tChar Key : %d\tGuild Key : %d\tJob : %d\tname : %s\n",0x8(%esp)
+movl   $"./log/User",0x4(%esp)
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x84d>
+mov    -0x58(%ebp),%eax
 lea    0x1f(%eax),%esi
-mov    -0x3c(%ebp),%eax
+mov    -0x58(%ebp),%eax
 mov    0xf(%eax),%ebx
-mov    -0x3c(%ebp),%eax
+mov    -0x58(%ebp),%eax
 movzwl 0x19(%eax),%eax
 movswl %ax,%ecx
-mov    -0x3c(%ebp),%eax
+mov    -0x58(%ebp),%eax
 movzbl 0x18(%eax),%eax
 movsbl %al,%edx
-mov    -0x3c(%ebp),%eax
+mov    -0x58(%ebp),%eax
 movzbl 0x17(%eax),%eax
 movsbl %al,%eax
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetUserInfo_CharNoEccsjPc>
-mov    -0x3c(%ebp),%eax
+mov    -0x58(%ebp),%eax
+mov    0xa(%eax),%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x48(%ebp)
+mov    -0x58(%ebp),%eax
 movzbl 0x3e(%eax),%eax
-movsbl %al,%edi
-mov    -0x3c(%ebp),%eax
+movsbl %al,%eax
+mov    %eax,-0x14c(%ebp)
+mov    -0x58(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x168(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x148(%ebp)
+mov    -0x58(%ebp),%eax
 add    $0x1f,%eax
-mov    %eax,-0x164(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x144(%ebp)
+mov    -0x58(%ebp),%eax
 movzbl 0x17(%eax),%eax
 movsbl %al,%eax
-mov    %eax,-0x160(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    0x1b(%eax),%eax
-mov    %eax,-0x15c(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    0x13(%eax),%eax
-mov    %eax,-0x158(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x3c(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x140(%ebp)
+mov    -0x58(%ebp),%eax
+mov    0x1b(%eax),%edi
+mov    -0x58(%ebp),%eax
+mov    0x13(%eax),%esi
+mov    -0x58(%ebp),%eax
+mov    0xf(%eax),%ebx
 movl   $0x3cf,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x28(%esp)
-mov    -0x168(%ebp),%eax
+mov    -0x14c(%ebp),%edx
+mov    %edx,0x28(%esp)
+mov    -0x148(%ebp),%eax
 mov    %eax,0x24(%esp)
-mov    -0x164(%ebp),%edx
+mov    -0x144(%ebp),%edx
 mov    %edx,0x20(%esp)
-mov    -0x160(%ebp),%eax
+mov    -0x140(%ebp),%eax
 mov    %eax,0x1c(%esp)
-mov    -0x15c(%ebp),%edx
-mov    %edx,0x18(%esp)
-mov    -0x158(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %edi,0x18(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x48(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[CHAR_LOGIN]\tDB ID(%s)\tChar Key(%d)\tGuild K(%d)\tMember K(%d)\tJob(%d)\tname(%s)\tCh No(%d)\treturn_user(%d)\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x78(%ebp),%eax
+lea    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x3,0x4(%esp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser15SetUserPosStateEh>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
+mov    %eax,-0x44(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser15SetUserPosStateEh>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
-mov    -0x44(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager24QueryCashMemoryBuddyInfoEP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x1ca>
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x265>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14QueryBuddyInfoEP14CServerHandler>
-lea    -0x84(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEEC1Ev>
-mov    -0x44(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x300(%edx),%ecx
-lea    -0x84(%ebp),%edx
+lea    -0x98(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN21CBuddyRegisterManager17findBuddyRegisterEjRSt6vectorIjSaIjEE>
-lea    -0xb8(%ebp),%eax
-lea    -0x84(%ebp),%edx
+lea    -0xcc(%ebp),%eax
+lea    -0x98(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x300>
-lea    -0xb8(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x38e>
+lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEdeEv>
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x34(%ebp)
 cmpl   $0x0,-0x34(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x2f2>
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x380>
+mov    -0x58(%ebp),%eax
 movzbl 0x3e(%eax),%eax
 movsbl %al,%eax
-mov    %eax,-0x154(%ebp)
-lea    -0xb8(%ebp),%eax
+mov    %eax,-0x13c(%ebp)
+lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEdeEv>
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11IsBlackUserEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x290>
-mov    $0x1,%ebx
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x295>
-mov    $0x0,%ebx
-mov    -0x44(%ebp),%eax
+setne  %al
+movzbl %al,%edi
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%edi
-mov    -0x44(%ebp),%eax
+mov    %eax,%esi
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%esi
-mov    -0x44(%ebp),%eax
+mov    %eax,%ebx
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
 movzbl %al,%eax
-mov    -0x154(%ebp),%edx
+mov    -0x13c(%ebp),%edx
 mov    %edx,0x18(%esp)
 movl   $0x1,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
+mov    %edi,0x10(%esp)
+mov    %esi,0xc(%esp)
+mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser20SendNoticeBuddyInOutEhjPchhc>
-lea    -0xb8(%ebp),%eax
+lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEppEv>
-lea    -0x70(%ebp),%eax
-lea    -0x84(%ebp),%edx
+lea    -0x7c(%ebp),%eax
+lea    -0x98(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE3endEv>
 sub    $0x4,%esp
-lea    -0x70(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0xb8(%ebp),%eax
+lea    -0x7c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x225>
-mov    -0x3c(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x2c0>
+mov    -0x58(%ebp),%eax
 mov    0x1b(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x38a>
+je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x41d>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
-mov    -0x44(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0x30(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x38a>
-mov    -0x3c(%ebp),%eax
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x41d>
+mov    -0x58(%ebp),%eax
 mov    0x1b(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x2d0(%edx),%ecx
-mov    -0x44(%ebp),%edx
+mov    -0x50(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser>
-mov    %eax,-0x40(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    -0x58(%ebp),%eax
 lea    0x1f(%eax),%edx
-mov    -0x44(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-mov    -0x38(%ebp),%eax
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager19InsertUser_CharNameEPcP5CUser>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x409>
-mov    -0x3c(%ebp),%eax
-lea    0x1f(%eax),%esi
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x4a0>
+mov    -0x58(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x2c(%ebp)
+mov    -0x58(%ebp),%eax
+lea    0x1f(%eax),%ebx
 movl   $0x3fd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x58(%ebp),%eax
+mov    0xf(%eax),%eax
+mov    -0x50(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x50d>
+mov    -0x58(%ebp),%eax
+lea    0x1f(%eax),%esi
+mov    -0x58(%ebp),%eax
+mov    0xf(%eax),%ebx
+movl   $0x401,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
-movl   $"uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!",0x8(%esp)
+movl   $"uDBID(%d) uCharName(%s) is already exist at m_mapCharNoUsers!",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x6c(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x3c(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    -0x44(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager17InsertUser_CharNoEjP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x476>
-mov    -0x3c(%ebp),%eax
-lea    0x1f(%eax),%esi
-mov    -0x3c(%ebp),%eax
-mov    0xf(%eax),%ebx
-movl   $0x401,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Insert Fail!\tChar ID : %d\t캐릭터 이름:%s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x44(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager17DeleteCashObjecctEj>
-lea    -0x98(%ebp),%eax
+lea    -0xac(%ebp),%eax
 mov    %eax,%ebx
 mov    $0x4,%esi
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x4b9>
+jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x550>
 mov    %ebx,(%esp)
 call   <T> <_ZN20stTowerRankElement_tC1Ev>
 add    $0x4,%ebx
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x4ab>
-lea    -0x146(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x542>
+lea    -0x12e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Request_Charac_Tower_RankingC1Ev>
-mov    -0x44(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x138(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x120(%ebp)
+mov    -0x58(%ebp),%eax
 mov    0xf(%eax),%eax
-mov    %eax,-0x13c(%ebp)
-movb   $0x0,-0x2d(%ebp)
+mov    %eax,-0x124(%ebp)
+movb   $0x0,-0x3d(%ebp)
 movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x58f>
-mov    -0x3c(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x626>
+mov    -0x58(%ebp),%eax
 lea    0x1f(%eax),%esi
 mov    -0x28(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication12getTowerRankEv>
-lea    -0x98(%ebp),%edx
+lea    -0xac(%ebp),%edx
 mov    %edx,0x10(%esp)
 movl   $0x5,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t>
 mov    %eax,-0x24(%ebp)
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x57e>
+jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x615>
 mov    -0x20(%ebp),%eax
-movzbl -0x98(%ebp,%eax,4),%eax
+movzbl -0xac(%ebp,%eax,4),%eax
 movzbl %al,%ecx
 mov    -0x28(%ebp),%edx
 mov    -0x20(%ebp),%eax
-movzwl -0x96(%ebp,%eax,4),%eax
+movzwl -0xaa(%ebp,%eax,4),%eax
 movzwl %ax,%eax
 shl    $0x2,%ecx
 lea    (%ecx,%edx,1),%edx
 add    $0x4,%edx
-mov    %eax,-0x144(%ebp,%edx,4)
-movb   $0x1,-0x2d(%ebp)
+mov    %eax,-0x12c(%ebp,%edx,4)
+movb   $0x1,-0x3d(%ebp)
 addl   $0x1,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 cmp    -0x24(%ebp),%eax
 setb   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x547>
+jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x5de>
 addl   $0x1,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-cmp    $0x3,%eax
-setbe  %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x4fe>
-cmpb   $0x0,-0x2d(%ebp)
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x5c9>
-movzwl -0x144(%ebp),%eax
+cmpl   $0x3,-0x28(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x595>
+cmpb   $0x0,-0x3d(%ebp)
+je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x65e>
+movzwl -0x12c(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x146(%ebp),%eax
+lea    -0x12e(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x9c(%ebp)
-lea    -0x9c(%ebp),%eax
+mov    %eax,-0xb0(%ebp)
+lea    -0xb0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    (%eax),%edx
-mov    %edx,-0xe4(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0xe0(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0xdc(%ebp)
-mov    0xc(%eax),%edx
-mov    %edx,-0xd8(%ebp)
-mov    0x10(%eax),%edx
-mov    %edx,-0xd4(%ebp)
-mov    0x14(%eax),%edx
-mov    %edx,-0xd0(%ebp)
-mov    0x18(%eax),%edx
-mov    %edx,-0xcc(%ebp)
-mov    0x1c(%eax),%edx
-mov    %edx,-0xc8(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0xc4(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0xc0(%ebp)
-mov    0x28(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+lea    -0xc6(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN31Packet_Send_Time_Sync_For_LoginC1Ev>
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,-0xbc(%ebp)
-lea    -0xb2(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN31Packet_Send_Time_Sync_For_LoginC1Ev>
-mov    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0xa8(%ebp)
-mov    -0x44(%ebp),%eax
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0xa4(%ebp)
-mov    -0xdc(%ebp),%eax
-mov    %ax,-0xa0(%ebp)
-mov    -0xe0(%ebp),%eax
-mov    %ax,-0x9e(%ebp)
-lea    -0xb2(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x44(%ebp),%eax
+mov    %eax,-0xb8(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %ax,-0xb4(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %ax,-0xb2(%ebp)
+lea    -0xc6(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication24GetLoginLogoutStatisticsEv>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x6ff>
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+je     <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x732>
+mov    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager20GetSizeOfCharnoUsersEv>
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN22CLoginLogoutStatistics21CountNumOfOccupationsE17ENUM_LOGIN_LOGOUTi>
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x6ff>
+jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x732>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x84(%ebp),%eax
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x7ad>
-lea    -0x84(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x745>
+lea    -0x98(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x8b8>
-mov    -0x3c(%ebp),%eax
-add    $0x1f,%eax
-mov    %eax,-0x150(%ebp)
-mov    -0x3c(%ebp),%eax
-movzbl 0x17(%eax),%eax
-movsbl %al,%eax
-mov    %eax,-0x14c(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    0x13(%eax),%edi
-mov    -0x3c(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x3c(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x457,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x150(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x14c(%ebp),%edx
-mov    %edx,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"[CHAR_LOGIN_ERR]\tDB ID : %s\tChar Key : %d\tGuild Key : %d\tJob : %d\tname : %s\n",0x8(%esp)
-movl   $"./log/User",0x4(%esp)
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x8b8>
+jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x84d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x84f>
+jne    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x7e7>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnCharLogin() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x463,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCharLogin() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x7e0>
+mov    %edx,%ebx
+mov    %eax,%esi
+call   <T> <__cxa_end_catch>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+call   <T> <__cxa_end_catch>
+jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x84d>
+mov    %eax,(%esp)
+call   <T> <__cxa_begin_catch>
+movl   $"CPacketTranslater::OnCharLogin() Exception Break",(%esp)
+call   <T> <puts>
+movl   $0x469,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnCharLogin() Exception Break\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x848>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x8b8>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $"CPacketTranslater::OnCharLogin() Exception Break",(%esp)
-call   <T> <puts>
-movl   $0x469,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater11OnCharLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnCharLogin() Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x8b0>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader+0x8b8>
-nop
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCharLogin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  PacketHeader PVar3;
  undefined4 uVar4;
  char cVar5;
  uchar uVar6;
  bool bVar7;
  PacketHeader *pPVar8;
  undefined4 uVar9;
  CMemoryCashManager *pCVar10;
  uint uVar11;
  char *pcVar12;
  CServerInterface *this;
  undefined4 uVar13;
  CTowerRank *this_00;
  tm *ptVar14;
  undefined4 uVar15;
  stTowerRankElement_t *this_01;
  int iVar16;
  Packet_Request_Charac_Tower_Ranking local_14a [2];
  ushort local_148 [4];
  undefined4 local_140;
  undefined4 local_13c;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  long local_c4;
  char *local_c0;
  __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
  local_bc [6];
  Packet_Send_Time_Sync_For_Login local_b6 [10];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined2 local_a2;
  time_t local_a0;
  stTowerRankElement_t local_9c [2];
  ushort auStack_9a [9];
  vector<unsigned_int,std::allocator<unsigned_int>> local_88 [12];
  CMyFileLog local_7c [8];
  __normal_iterator local_74 [4];
  CMyFileLog local_70 [8];
  CMyFileLog local_68 [8];
  CMyFileLog local_60 [24];
  CUser *local_48;
  undefined4 local_44;
  PacketHeader *local_40;
  CApplication *local_3c;
  CUser *local_38;
  char local_31;
  CLoginLogoutStatistics *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  if (m_pclApp != (CApplication *)0x0) {
    local_40 = param_1;
    local_3c = m_pclApp + 0x10;
                    /* try { // try from 0807f5dc to 0807f779 has its CatchHandler @ 0807fd4f */
    local_48 = (CUser *)CUserManager::FindUser((uint)local_3c);
    if (local_48 == (CUser *)0x0) {
      pPVar8 = local_40 + 0x1f;
      PVar1 = local_40[0x17];
      uVar13 = *(undefined4 *)(local_40 + 0x13);
      uVar4 = *(undefined4 *)(local_40 + 0xf);
      uVar15 = NumberToString(*(uint *)(local_40 + 10),0);
      CMyFileLog::CMyFileLog(local_60,"OnCharLogin",0x457);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_60,"./log/User",
                 "[CHAR_LOGIN_ERR]\tDB ID : %s\tChar Key : %d\tGuild Key : %d\tJob : %d\tname : %s\n"
                 ,uVar15,uVar4,uVar13,(int)(char)PVar1,pPVar8);
    }
    else {
      CUser::SetUserInfo_CharNo
                (local_48,(char)local_40[0x17],(char)local_40[0x18],*(short *)(local_40 + 0x19),
                 *(uint *)(local_40 + 0xf),(char *)(local_40 + 0x1f));
      PVar1 = local_40[0x3e];
      PVar2 = local_40[0xe];
      pPVar8 = local_40 + 0x1f;
      PVar3 = local_40[0x17];
      uVar13 = *(undefined4 *)(local_40 + 0x1b);
      uVar4 = *(undefined4 *)(local_40 + 0x13);
      uVar15 = *(undefined4 *)(local_40 + 0xf);
      uVar9 = NumberToString(*(uint *)(local_40 + 10),0);
      CMyFileLog::CMyFileLog(local_7c,"OnCharLogin",0x3cf);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_7c,"./log/User",
                 "[CHAR_LOGIN]\tDB ID(%s)\tChar Key(%d)\tGuild K(%d)\tMember K(%d)\tJob(%d)\tname(%s)\tCh No(%d)\treturn_user(%d)\n"
                 ,uVar9,uVar15,uVar4,uVar13,(int)(char)PVar3,pPVar8,(uint)(byte)PVar2,
                 (int)(char)PVar1);
      CUser::SetUserPosState(local_48,'\x03');
      pCVar10 = (CMemoryCashManager *)
                CApplication::_ZN12CApplication21Get_MemoryCashManagerEv(m_pclApp);
      cVar5 = CMemoryCashManager::QueryCashMemoryBuddyInfo(pCVar10,local_48);
      if (cVar5 != '\x01') {
        CUser::QueryBuddyInfo(local_48,*(CServerHandler **)(m_pclApp + 0xa0));
      }
      std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_88);
      uVar11 = CUser::GetUniqCharNo(local_48);
                    /* try { // try from 0807f7a2 to 0807fc83 has its CatchHandler @ 0807fc86 */
      CBuddyRegisterManager::findBuddyRegister
                ((CBuddyRegisterManager *)(m_pclApp + 0x300),uVar11,(vector *)local_88);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
      while( true ) {
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        bVar7 = __gnu_cxx::operator!=(local_bc,local_74);
        if (!bVar7) break;
        __gnu_cxx::
        __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
        operator*(local_bc);
        local_38 = (CUser *)CUserManager::FindUser_CharNo((uint)local_3c);
        if (local_38 != (CUser *)0x0) {
          PVar1 = local_40[0x3e];
          __gnu_cxx::
          __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
          operator*(local_bc);
          cVar5 = CUser::IsBlackUser((uint)local_48);
          pcVar12 = (char *)CUser::GetCharName(local_48);
          uVar11 = CUser::GetUniqCharNo(local_48);
          this = (CServerInterface *)CUser::GetGameServer(local_48);
          uVar6 = CServerInterface::_ZN16CServerInterface12GetChannelNoEv(this);
          CUser::SendNoticeBuddyInOut
                    (local_38,uVar6,uVar11,pcVar12,cVar5 != '\0','\x01',(char)PVar1);
        }
        __gnu_cxx::
        __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
        operator++(local_bc);
      }
      if (*(int *)(local_40 + 0x1b) != 0) {
        pCVar10 = (CMemoryCashManager *)
                  CApplication::_ZN12CApplication21Get_MemoryCashManagerEv(m_pclApp);
        cVar5 = CMemoryCashManager::QueryCashMemoryMember(pCVar10,local_48);
        if (cVar5 != '\x01') {
          local_44 = CMemberManager::_ZN14CMemberManager13MemerMemLoginEjP5CUser
                               ((CMemberManager *)(m_pclApp + 0x2d0),*(uint *)(local_40 + 0x1b),
                                local_48);
        }
      }
      cVar5 = CUserManager::_ZN12CUserManager19InsertUser_CharNameEPcP5CUser
                        ((CUserManager *)local_3c,(char *)(local_40 + 0x1f),local_48);
      if (cVar5 != '\x01') {
        pPVar8 = local_40 + 0x1f;
        uVar13 = NumberToString(*(uint *)(local_40 + 10),0);
        CMyFileLog::CMyFileLog(local_70,"OnCharLogin",0x3fd);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_70,"./log/Except",
                   "uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!",uVar13,pPVar8);
      }
      cVar5 = CUserManager::_ZN12CUserManager17InsertUser_CharNoEjP5CUser
                        ((CUserManager *)local_3c,*(uint *)(local_40 + 0xf),local_48);
      if (cVar5 != '\x01') {
        pPVar8 = local_40 + 0x1f;
        uVar13 = *(undefined4 *)(local_40 + 0xf);
        CMyFileLog::CMyFileLog(local_68,"OnCharLogin",0x401);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_68,"./log/Except",&DAT_0812a7a8,uVar13,pPVar8);
      }
      CUser::GetDBID(local_48);
      uVar11 = CApplication::_ZN12CApplication21Get_MemoryCashManagerEv(m_pclApp);
      CMemoryCashManager::DeleteCashObjecct(uVar11);
      this_01 = local_9c;
      for (iVar16 = 4; iVar16 != -1; iVar16 = iVar16 + -1) {
        stTowerRankElement_t::stTowerRankElement_t(this_01);
        this_01 = this_01 + 4;
      }
      Packet_Request_Charac_Tower_Ranking::Packet_Request_Charac_Tower_Ranking(local_14a);
      local_13c = CUser::GetIdByChannel(local_48);
      local_140 = *(undefined4 *)(local_40 + 0xf);
      local_31 = '\0';
      for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
        pPVar8 = local_40 + 0x1f;
        uVar11 = local_2c + 1;
        this_00 = (CTowerRank *)CApplication::_ZN12CApplication12getTowerRankEv(m_pclApp);
        local_28 = CTowerRank::_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t
                             (this_00,uVar11,(char *)pPVar8,5,local_9c);
        for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
          *(uint *)(local_148 + ((uint)(byte)local_9c[local_24 * 4] * 4 + local_2c + 4) * 2) =
               (uint)auStack_9a[local_24 * 2];
          local_31 = '\x01';
        }
      }
      if (local_31 != '\0') {
        CUser::SendToGameserver(local_48,(char *)local_14a,(uint)local_148[0]);
      }
      local_a0 = time((time_t *)0x0);
      ptVar14 = localtime(&local_a0);
      local_e8 = ptVar14->tm_sec;
      local_e4 = ptVar14->tm_min;
      local_e0 = ptVar14->tm_hour;
      local_dc = ptVar14->tm_mday;
      local_d8 = ptVar14->tm_mon;
      local_d4 = ptVar14->tm_year;
      local_d0 = ptVar14->tm_wday;
      local_cc = ptVar14->tm_yday;
      local_c8 = ptVar14->tm_isdst;
      local_c4 = ptVar14->tm_gmtoff;
      local_c0 = ptVar14->tm_zone;
      Packet_Send_Time_Sync_For_Login::Packet_Send_Time_Sync_For_Login(local_b6);
      local_ac = CUser::GetDBID(local_48);
      local_a8 = CUser::GetIdByChannel(local_48);
      local_a4 = (undefined2)local_e0;
      local_a2 = (undefined2)local_e4;
      CUser::SendTcpGameserver(local_48,(PacketHeader *)local_b6);
      local_30 = (CLoginLogoutStatistics *)
                 CApplication::_ZN12CApplication24GetLoginLogoutStatisticsEv(m_pclApp);
      if (local_30 != (CLoginLogoutStatistics *)0x0) {
        uVar13 = CUserManager::GetSizeOfCharnoUsers((CUserManager *)local_3c);
        CLoginLogoutStatistics::CountNumOfOccupations(local_30,4,uVar13);
      }
                    /* try { // try from 0807fcaa to 0807fd49 has its CatchHandler @ 0807fd4f */
      std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(local_88);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 732 行）：

```cpp
void CPacketTranslater::OnCharLogin(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        try
        {
            Packet_Monitor_Char_Info* info = (Packet_Monitor_Char_Info*)pkt;
            CUserManager* userMgr = &m_pclApp->m_userManager;
            CUser* user = userMgr->FindUser(info->m_dbid);
            if (user == 0)
            {
                char* dbid = NumberToString(info->m_dbid, 0);
                DNF_LOG_SCOPE_LINE(0x457,"./log/User",
                    "[CHAR_LOGIN_ERR]\tDB ID : %s\tChar Key : %d\tGuild Key : %d\tJob : "
                    "%d\tname : %s\n",
                    dbid, info->m_charNo,
                    info->m_guildKey,
                    (int)info->m_job, info->m_name);
            }
            else
            {
                user->SetUserInfo_CharNo(
                    info->m_job, info->m_grade,
                    info->m_level, info->m_charNo,
                    info->m_name);
                char* dbid = NumberToString(info->m_dbid, 0);
                DNF_LOG_SCOPE_LINE(0x3cf,"./log/User",
                    "[CHAR_LOGIN]\tDB ID(%s)\tChar Key(%d)\tGuild K(%d)\tMember K(%d)\tJob(%d)"
                    "\tname(%s)\tCh No(%d)\treturn_user(%d)\n",
                    dbid, info->m_charNo,
                    info->m_guildKey,
                    info->m_memberKey,
                    (int)info->m_job, info->m_name,
                    (unsigned int)(unsigned char)info->m_channel,
                    (int)info->m_returnUser);
                user->SetUserPosState(3);
                CMemoryCashManager* cash =
                    (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
                if (cash->QueryCashMemoryBuddyInfo(user) != 1)
                {
                    user->QueryBuddyInfo(
                        m_pclApp->m_serverHandler2);
                }
                std::vector<unsigned int> vec;
                (&m_pclApp->m_buddyMgr)
                    ->findBuddyRegister(user->GetUniqCharNo(), vec);
                for (std::vector<unsigned int>::iterator it = vec.begin(); it != vec.end();
                     ++it)
                {
                    CUser* other = userMgr->FindUser_CharNo(*it);
                    if (other != 0)
                    {
                        other->SendNoticeBuddyInOut(
                            ((CServerInterface*)user->GetGameServer())->GetChannelNo(),
                            user->GetUniqCharNo(), user->GetCharName(),
                            (unsigned char)(user->IsBlackUser(*it) != 0), 1,
                            info->m_returnUser);
                    }
                }
                if ((int)info->m_memberKey != 0)
                {
                    CMemoryCashManager* cash2 =
                        (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
                    if (cash2->QueryCashMemoryMember(user) != 1)
                    {
                        (&m_pclApp->m_memberManager)
                            ->MemerMemLogin(info->m_memberKey, user);
                    }
                }
                if (userMgr->InsertUser_CharName(info->m_name, user) != 1)
                {
                    char* dbid = NumberToString(info->m_dbid, 0);
                    DNF_LOG_SCOPE_LINE(0x3fd,"./log/Except",
                        "uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!", dbid,
                        info->m_name);
                }
                if (userMgr->InsertUser_CharNo(info->m_charNo, user) != 1)
                {
                    DNF_LOG_SCOPE_LINE(0x401,"./log/Except",
                        "uDBID(%d) uCharName(%s) is already exist at m_mapCharNoUsers!",
                        info->m_charNo, info->m_name);
                }
                ((CMemoryCashManager*)m_pclApp->Get_MemoryCashManager())
                    ->DeleteCashObjecct(user->GetDBID());
                stTowerRankElement_t elements[5];
                Packet_Request_Charac_Tower_Ranking rankPkt;
                rankPkt.m_idByChannel = user->GetIdByChannel();
                rankPkt.m_uniqCharNo = info->m_charNo;
                char hasData = 0;
                for (int t = 0; t < 4; t++)
                {
                    unsigned int cnt =
                        ((CTowerRank*)m_pclApp->getTowerRank())
                            ->getRankData((unsigned int)(t + 1), info->m_name, 5,
                                          elements);
                    for (unsigned int i = 0; i < cnt; i++)
                    {
                        rankPkt.m_scores[(unsigned int)(unsigned char)elements[i].m_job][t] =
                            (unsigned int)elements[i].m_score;
                        hasData = 1;
                    }
                }
                if (hasData != 0)
                {
                    user->SendToGameserver(
                        (char*)&rankPkt, rankPkt.packetSize);
                }
                time_t now = time(0);
                tm* pt = localtime(&now);
                Packet_Send_Time_Sync_For_Login syncPkt;
                syncPkt.m_dbid = user->GetDBID();
                syncPkt.m_idByChannel = user->GetIdByChannel();
                syncPkt.m_hour = (unsigned short)pt->tm_hour;
                syncPkt.m_min = (unsigned short)pt->tm_min;
                user->SendTcpGameserver(&syncPkt);
                CLoginLogoutStatistics* stats =
                    (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
                if (stats != 0)
                {
                    stats->CountNumOfOccupations((ENUM_LOGIN_LOGOUT)4,
                                                 (int)userMgr->GetSizeOfCharnoUsers());
                }
            }
        }
        catch (CDNFException& e)
        {
            printf("CPacketTranslater::OnCharLogin() Exception Break : %s\n", e.what());
            DNF_LOG_SCOPE_LINE(0x463, "./log/Except", "CPacketTranslater::OnCharLogin() Exception Break : %s\n", e.what());
        }
        catch (...)
        {
            puts("CPacketTranslater::OnCharLogin() Exception Break");
            DNF_LOG_SCOPE_LINE(0x469, "./log/Except", "CPacketTranslater::OnCharLogin() Exception Break\n");
        }
    }
}
```
