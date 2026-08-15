## guild _ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader [DIFF] pm=16
```diff
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-je     <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32c>
+je     <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
-nop
```

## guild _ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader [DIFF] pm=75
```diff
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25e>
+mov    -0x18(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25e>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x147>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x14c>
-mov    -0x14(%ebp),%ecx
+mov    -0x18(%ebp),%ecx
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
-je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x143>
+je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x148>
-mov    -0x14(%ebp),%ecx
+mov    -0x18(%ebp),%ecx
-mov    0x12(%eax),%ecx
+mov    0x12(%eax),%eax
+mov    %eax,%ecx
-add    -0x14(%ebp),%eax
+add    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%ebx
+mov    -0x18(%ebp),%ebx
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x14(%ebp),%ecx
+mov    -0x18(%ebp),%ecx
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25e>
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x201>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x204>
+movl   $0x101b,0x8(%esp)
+movl   $"OnDBMWResponseBlackListOnLogin",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x101b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x1fa>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x1fd>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25e>
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x259>
```

## guild _ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader [DIFF] pm=383
```diff
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x2c(%ebp)
-lea    -0x58(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-mov    -0x20(%ebp),%eax
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x453>
+mov    -0x2c(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0xc7>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x103c,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == pclGuild(%d)",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-lea    -0x92(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN41Packet_Monitor_Set_Sub_Guild_Master_ReplyC1Ev>
-movl   $0x0,-0x88(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-cmp    $0xff,%al
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0xf9>
-movl   $0x2,-0x88(%ebp)
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x25f>
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-cmp    $0xfe,%al
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x113>
-movl   $0x66,-0x88(%ebp)
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x25f>
-mov    -0x20(%ebp),%eax
-movzbl 0x31(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x12d>
-movl   $0x58,-0x88(%ebp)
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x25f>
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%edx
-mov    -0x20(%ebp),%eax
-movzbl 0x31(%eax),%eax
-cmp    %al,%dl
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x14e>
-movl   $0x65,-0x88(%ebp)
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x25f>
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1f7>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild23GetCurSubGuildMasterCntEv>
-cmp    $0x4,%al
-seta   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1c5>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild23GetCurSubGuildMasterCntEv>
-movzbl %al,%ebx
-movl   $0x105b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CRITICAL ERR sub guild master cnt over(%d)",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x59,-0x88(%ebp)
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x232>
-mov    -0x20(%ebp),%eax
-mov    0x32(%eax),%eax
-movl   $0x1,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
-movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x232>
-mov    -0x20(%ebp),%eax
-movzbl 0x31(%eax),%eax
-cmp    $0x2,%al
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x232>
-mov    -0x20(%ebp),%eax
-mov    0x32(%eax),%eax
-movl   $0x0,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
-movl   $0x0,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-mov    -0x88(%ebp),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x25f>
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-movzbl %al,%edx
-mov    -0x20(%ebp),%eax
-mov    0x32(%eax),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xa4(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x32(%eax),%eax
-mov    %eax,-0xa0(%ebp)
-mov    -0x88(%ebp),%eax
-mov    %eax,-0x9c(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x31(%eax),%eax
-movzbl %al,%edi
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-movzbl %al,%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x1073,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0xa4(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0xa0(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x9c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Change Guild(%d) Grade(%d) Prev Grade(%d) result(%d) unconnected charNo(%d) RequestNo(%d)",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x470>
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0xc7>
+mov    -0x2c(%ebp),%eax
+mov    0xa(%eax),%ebx
+movl   $0x103c,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == pclGuild(%d)",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x453>
+lea    -0x96(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN41Packet_Monitor_Set_Sub_Guild_Master_ReplyC1Ev>
+movl   $0x0,-0x24(%ebp)
+mov    -0x2c(%ebp),%eax
+movzbl 0x30(%eax),%eax
+cmp    $0xff,%al
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0xf3>
+movl   $0x2,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x24c>
+mov    -0x2c(%ebp),%eax
+movzbl 0x30(%eax),%eax
+cmp    $0xfe,%al
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x10a>
+movl   $0x66,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x24c>
+mov    -0x2c(%ebp),%eax
+movzbl 0x31(%eax),%eax
+cmp    $0x1,%al
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x121>
+movl   $0x58,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x24c>
+mov    -0x2c(%ebp),%eax
+movzbl 0x30(%eax),%edx
+mov    -0x2c(%ebp),%eax
+movzbl 0x31(%eax),%eax
+cmp    %al,%dl
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x13f>
+movl   $0x65,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x24c>
+mov    -0x2c(%ebp),%eax
+movzbl 0x30(%eax),%eax
+cmp    $0x2,%al
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x1e8>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild23GetCurSubGuildMasterCntEv>
+cmp    $0x4,%al
+setbe  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x197>
+mov    -0x2c(%ebp),%eax
+mov    0x32(%eax),%eax
+movl   $0x1,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
+movl   $0x0,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x223>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild23GetCurSubGuildMasterCntEv>
+movzbl %al,%ebx
+movl   $0x105b,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"CRITICAL ERR sub guild master cnt over(%d)",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x59,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x223>
+mov    -0x2c(%ebp),%eax
+movzbl 0x31(%eax),%eax
+cmp    $0x2,%al
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x223>
+mov    -0x2c(%ebp),%eax
+mov    0x32(%eax),%eax
+movl   $0x0,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild17SetSubGuildMasterEjb>
+movl   $0x0,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x24c>
+mov    -0x2c(%ebp),%eax
+movzbl 0x30(%eax),%eax
+movzbl %al,%edx
+mov    -0x2c(%ebp),%eax
+mov    0x32(%eax),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
+mov    -0x2c(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0xa0(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    0x32(%eax),%eax
+mov    %eax,-0x9c(%ebp)
+mov    -0x2c(%ebp),%eax
+movzbl 0x31(%eax),%eax
+movzbl %al,%edi
+mov    -0x2c(%ebp),%eax
+movzbl 0x30(%eax),%eax
+movzbl %al,%esi
+mov    -0x2c(%ebp),%eax
+mov    0xa(%eax),%ebx
+movl   $0x1073,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xa0(%ebp),%eax
+mov    %eax,0x20(%esp)
+mov    -0x9c(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"Change Guild(%d) Grade(%d) Prev Grade(%d) result(%d) unconnected charNo(%d) RequestNo(%d)",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x2c(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x453>
+mov    -0x24(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,-0x88(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x80(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-mov    %al,-0x7c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+movzbl 0x30(%eax),%eax
+mov    %al,-0x80(%ebp)
+mov    -0x2c(%ebp),%eax
-lea    -0x92(%ebp),%eax
+lea    -0x96(%ebp),%eax
-lea    -0x92(%ebp),%eax
+lea    -0x96(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x453>
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x414>
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x3f9>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x40d>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x3f2>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x453>
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x469>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x44e>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-nop
```

## guild _ZN17CUdpNetworkThread8dispatchEPv [DIFF] pm=470
```diff
-lea    -0x4d(%ebp),%eax
+lea    -0x55(%ebp),%eax
-lea    -0x4d(%ebp),%eax
+lea    -0x55(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x54(%ebp),%esi
+lea    -0x5c(%ebp),%esi
-lea    -0x54(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x4d(%ebp),%eax
+lea    -0x55(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x4d(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x55(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
-mov    %eax,-0x58(%ebp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-movl   $0x1800,-0x5c(%ebp)
-movw   $0x0,-0x5e(%ebp)
-movl   $0x0,-0x64(%ebp)
-mov    -0x58(%ebp),%eax
-mov    %eax,%edx
+mov    %eax,-0x2c(%ebp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+movl   $0x1800,-0x60(%ebp)
+movw   $0x0,-0x62(%ebp)
+movl   $0x0,-0x68(%ebp)
+mov    -0x2c(%ebp),%edx
-lea    -0x5e(%ebp),%ecx
+lea    -0x62(%ebp),%ecx
-lea    -0x64(%ebp),%ecx
+lea    -0x68(%ebp),%ecx
-lea    -0x5c(%ebp),%ecx
+lea    -0x60(%ebp),%ecx
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x1c0>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x215>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,0x4(%esp)
+mov    %al,-0x25(%ebp)
+mov    -0x60(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpb   $0x1,-0x25(%ebp)
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x472>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x1d1>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x205>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
-mov    -0x58(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x70(%ebp)
+mov    -0x70(%ebp),%eax
-mov    -0x5c(%ebp),%eax
+mov    -0x60(%ebp),%eax
-je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x2d6>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x292>
+mov    -0x70(%ebp),%eax
-movzwl %ax,%edi
-mov    -0x5c(%ebp),%esi
-mov    -0x20(%ebp),%eax
+movzwl %ax,%esi
+mov    -0x70(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
+mov    %esi,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x70(%ebp),%eax
+lea    -0x74(%ebp),%eax
-mov    -0x58(%ebp),%eax
+mov    -0x70(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x2c6>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x282>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
+mov    -0x70(%ebp),%eax
-jbe    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x38d>
-mov    -0x20(%ebp),%eax
+ja     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x3d2>
+mov    -0x60(%ebp),%eax
+cmp    $0x1800,%eax
+jle    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x357>
+mov    -0x70(%ebp),%eax
-movzwl %ax,%edi
-mov    -0x5c(%ebp),%esi
-mov    -0x20(%ebp),%eax
+movzwl %ax,%esi
+mov    -0x70(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%ebx
+movl   $0x7d,0x8(%esp)
+movl   $&_ZZN17CUdpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
+movl   $"./log/recvErr",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CUdpRecvBufferdlEPv>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x347>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
+mov    -0x70(%ebp),%eax
+mov    -0x68(%ebp),%edx
+mov    %edx,0x6(%eax)
+mov    -0x70(%ebp),%eax
+movzwl -0x62(%ebp),%edx
+mov    %dx,0x4(%eax)
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+lea    -0x70(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
+mov    %eax,-0x20(%ebp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+mov    -0x70(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%esi
+mov    -0x70(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
+mov    %esi,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x80(%ebp),%eax
-mov    -0x58(%ebp),%eax
+mov    -0x70(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x37d>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x465>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CUdpRecvBufferdlEPv>
-mov    -0x5c(%ebp),%eax
-cmp    $0x1800,%eax
-jbe    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x43e>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x5c(%ebp),%esi
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x7d,0x8(%esp)
-movl   $&_ZZN17CUdpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
-movl   $"./log/recvErr",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x431>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
-mov    -0x64(%ebp),%edx
-mov    -0x20(%ebp),%eax
-mov    %edx,0x6(%eax)
-movzwl -0x5e(%ebp),%edx
-mov    -0x20(%ebp),%eax
-mov    %dx,0x4(%eax)
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-mov    %eax,0x4(%esp)
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-lea    -0x58(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
-mov    %eax,-0x24(%ebp)
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6f3>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x701>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5f0>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5fe>
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
-lea    -0x2d(%ebp),%eax
+lea    -0x35(%ebp),%eax
-lea    -0x2d(%ebp),%eax
+lea    -0x35(%ebp),%eax
-movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x34(%ebp),%eax
+movl   $"CUdpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
+lea    -0x3c(%ebp),%eax
-lea    -0x34(%ebp),%esi
+lea    -0x3c(%ebp),%esi
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x580>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x58e>
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x57a>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x588>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5ad>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
-lea    -0x34(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5ad>
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5b4>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5c2>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5ad>
-lea    -0x2d(%ebp),%eax
+lea    -0x35(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5db>
-lea    -0x2d(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5e9>
+lea    -0x35(%ebp),%eax
-lea    -0x25(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-lea    -0x25(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+movl   $"CUdpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
+lea    -0x34(%ebp),%eax
-lea    -0x2c(%ebp),%esi
+lea    -0x34(%ebp),%esi
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x683>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x691>
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67d>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x68b>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b0>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b0>
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b7>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6c5>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b0>
-lea    -0x25(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6de>
-lea    -0x25(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6ec>
+lea    -0x2d(%ebp),%eax
```

## guild _ZN17STGuildDBInfoOnlyC1Ev [DIFF] pm=8
```diff
-movzbl 0x1c(%eax),%edx
+movzbl 0x1c(%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
-movzbl 0x1c(%eax),%edx
+movzbl 0x1c(%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
```

## guild _ZN18CFrameCountHandler17GetFrameCountInfoEv [DIFF] pm=243
```diff
-sub    $0x6c,%esp
-movl   $0x0,-0x2c(%ebp)
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x1c(%ebp)
+sub    $0x4c,%esp
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x14d>
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x12a>
-lea    -0x4c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xc(%eax)
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-cmp    $0xffffffff,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
-lea    -0x35(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    %eax,0xc(%edx)
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x345>
+lea    -0x21(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x3c(%ebp),%esi
+lea    -0x28(%ebp),%esi
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xf0>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xcd>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xea>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x10f>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x10f>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x12a>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x10f>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xc7>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xec>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xec>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x107>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xec>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x21(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x10(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x10(%edx)
-sete   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x250>
-lea    -0x2d(%ebp),%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x226>
+lea    -0x19(%ebp),%eax
-lea    -0x2d(%ebp),%eax
+lea    -0x19(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x34(%ebp),%esi
+lea    -0x20(%ebp),%esi
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1f3>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1c9>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1ed>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x212>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x212>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x22d>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x212>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x2d(%ebp),%eax
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1c3>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1e8>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1e8>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x203>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1e8>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x19(%ebp),%eax
-lea    -0x2d(%ebp),%eax
+lea    -0x19(%ebp),%eax
-mov    0xc(%eax),%edx
+mov    0xc(%eax),%eax
+mov    %eax,%edx
-jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x26c>
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x244>
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,%ecx
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+mov    0x8(%ebp),%edx
+mov    0x8(%edx),%edx
+mov    %edx,-0x3c(%ebp)
+mov    $0x0,%edx
+divl   -0x3c(%ebp)
+cmp    %eax,%ecx
+jae    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x345>
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+lea    0x1(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x14(%eax)
+mov    0x8(%ebp),%eax
+movb   $0x1,0x24(%eax)
-mov    %eax,-0x2c(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x5c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    $0x0,%edx
-divl   -0x5c(%ebp)
-mov    %eax,-0x20(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-cmp    -0x20(%ebp),%eax
-jae    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-lea    0x1(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x14(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x1,0x24(%eax)
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x63,-0x28(%ebp)
-jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+cmp    $0x63,%eax
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x345>
+mov    0x10(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%ecx
+mov    0x8(%ebp),%eax
-sub    -0x28(%ebp),%eax
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x345>
-seta   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x345>
-add    $0x6c,%esp
+add    $0x4c,%esp
```

## guild _ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt [NEAR] pm=4
```diff
+mov    0xc(%ebp),%edx
-mov    0xc(%ebp),%edx
+mov    0x10(%ebp),%edx
-mov    0x10(%ebp),%edx
```

## guild _ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii [DIFF] pm=166
```diff
-sub    $0x70,%esp
+add    $0xffffff80,%esp
-mov    %al,-0x4c(%ebp)
+mov    %al,-0x5c(%ebp)
+mov    %eax,-0x34(%ebp)
+mov    0x18(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x1c(%ebp),%eax
-mov    0x18(%ebp),%eax
+mov    0x20(%ebp),%eax
-mov    0x1c(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    0x20(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-movl   $0x0,-0x1c(%ebp)
-movl   $0x0,-0x18(%ebp)
+movl   $0x0,-0x24(%ebp)
+movl   $0x0,-0x20(%ebp)
-mov    %eax,%ebx
+mov    %eax,-0x1c(%ebp)
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-mov    %ebx,0x1c(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x20e>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x220>
+lea    -0x4c(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x1c(%ebp)
-cmpb   $0x0,-0x4c(%ebp)
-je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0xda>
-mov    -0x2c(%ebp),%eax
-add    %eax,-0x1c(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x20(%ebp)
+cmpb   $0x0,-0x5c(%ebp)
+je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0xde>
+mov    -0x34(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x18(%ebp),%eax
-add    %eax,-0x1c(%ebp)
-mov    -0x14(%ebp),%eax
+add    %eax,-0x20(%ebp)
+mov    -0x18(%ebp),%eax
-je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x124>
-mov    -0x18(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-jge    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x124>
+je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x131>
-imul   -0x18(%ebp),%eax
-mov    -0x28(%ebp),%edx
-sub    %eax,%edx
-mov    %edx,%eax
+cmp    -0x28(%ebp),%eax
+jge    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x131>
+mov    -0x2c(%ebp),%eax
+imul   -0x24(%ebp),%eax
+mov    -0x30(%ebp),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-and    %edx,%eax
+and    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %edx,0x8(%eax)
+mov    -0x18(%ebp),%eax
+mov    0x8(%eax),%eax
+add    %eax,-0x20(%ebp)
+mov    -0x18(%ebp),%eax
+mov    -0x20(%ebp),%edx
+mov    %edx,0xc(%eax)
+mov    -0x18(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
-mov    %edx,0x8(%eax)
-mov    -0x14(%ebp),%eax
-mov    0x8(%eax),%eax
-add    %eax,-0x1c(%ebp)
-mov    -0x14(%ebp),%eax
-mov    -0x1c(%ebp),%edx
-mov    %edx,0xc(%eax)
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x171>
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16AddPowerWarPointEj>
-movl   $0x0,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x1ff>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x1ec>
-mov    %eax,-0x48(%ebp)
-mov    -0x48(%ebp),%eax
+mov    %eax,-0x50(%ebp)
+mov    -0x50(%ebp),%eax
-je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x1ff>
-mov    -0x48(%ebp),%eax
-mov    -0x10(%ebp),%edx
+je     <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x211>
+mov    -0x50(%ebp),%eax
+mov    -0x14(%ebp),%edx
-mov    -0x48(%ebp),%eax
-mov    -0x14(%ebp),%edx
+mov    -0x50(%ebp),%eax
+mov    -0x18(%ebp),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
-mov    -0x48(%ebp),%eax
+mov    -0x50(%ebp),%eax
-mov    -0x48(%ebp),%eax
+mov    -0x50(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-addl   $0x1,-0x18(%ebp)
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x211>
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16AddPowerWarPointEj>
+movl   $0x0,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+addl   $0x1,-0x24(%ebp)
+lea    -0x4c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jne    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0xb7>
+jne    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0xbb>
```

## guild _ZN5CPeer11recv_packetEv [DIFF] pm=30
```diff
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-mov    -0xc(%ebp),%eax
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN5CPeer11recv_packetEv+0x126>
+cmpl   $0x0,-0xc(%ebp)
+jns    <T> <_ZN5CPeer11recv_packetEv+0x144>
-je     <T> <_ZN5CPeer11recv_packetEv+0xda>
+jne    <T> <_ZN5CPeer11recv_packetEv+0xc1>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-je     <T> <_ZN5CPeer11recv_packetEv+0xda>
+jne    <T> <_ZN5CPeer11recv_packetEv+0xd7>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-je     <T> <_ZN5CPeer11recv_packetEv+0xda>
+jne    <T> <_ZN5CPeer11recv_packetEv+0xed>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-jne    <T> <_ZN5CPeer11recv_packetEv+0xe4>
+jne    <T> <_ZN5CPeer11recv_packetEv+0x102>
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-jne    <T> <_ZN5CPeer11recv_packetEv+0x197>
+jne    <T> <_ZN5CPeer11recv_packetEv+0x1b5>
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
```

## guild _ZN5CPeer11send_packetEPci [NEAR] pm=6
```diff
-mov    0x1834(%eax),%edx
-mov    0x10(%ebp),%eax
-add    %eax,%edx
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+add    0x10(%ebp),%edx
```

## guild _ZN5CPeer11send_packetEv [DIFF] pm=82
```diff
-sub    $0x30,%esp
+sub    $0x20,%esp
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x24a>
-mov    0x1834(%eax),%ebx
+mov    0x1834(%eax),%eax
+mov    %eax,%ebx
-setle  %al
-test   %al,%al
-je     <T> <_ZN5CPeer11send_packetEv+0xdf>
+setle  %bl
+test   %bl,%bl
+je     <T> <_ZN5CPeer11send_packetEv+0xe1>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x92>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x92>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x92>
-jne    <T> <_ZN5CPeer11send_packetEv+0x9a>
+jne    <T> <_ZN5CPeer11send_packetEv+0x9c>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x24a>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x24a>
-jle    <T> <_ZN5CPeer11send_packetEv+0x243>
+jle    <T> <_ZN5CPeer11send_packetEv+0x247>
-jle    <T> <_ZN5CPeer11send_packetEv+0x1ef>
+jle    <T> <_ZN5CPeer11send_packetEv+0x1f3>
-mov    0x1834(%eax),%edx
-mov    -0xc(%ebp),%eax
-sub    %eax,%edx
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+sub    -0xc(%ebp),%edx
-jbe    <T> <_ZN5CPeer11send_packetEv+0x1a5>
+ja     <T> <_ZN5CPeer11send_packetEv+0x18a>
+mov    0x8(%ebp),%eax
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x1838(%eax),%eax
+mov    0x8(%ebp),%ecx
+add    $0x183c,%ecx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <memmove>
+mov    0x8(%ebp),%eax
+lea    0x183c(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x1834(%eax),%eax
+add    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x1838(%eax)
+jmp    <T> <_ZN5CPeer11send_packetEv+0x247>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
-mov    0x8(%ebp),%eax
-mov    0x1834(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x1838(%eax),%eax
-mov    0x8(%ebp),%ecx
-add    $0x183c,%ecx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <memmove>
-mov    0x8(%ebp),%eax
-lea    0x183c(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x1834(%eax),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x1838(%eax)
-jmp    <T> <_ZN5CPeer11send_packetEv+0x243>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x24a>
-jge    <T> <_ZN5CPeer11send_packetEv+0x224>
+jge    <T> <_ZN5CPeer11send_packetEv+0x228>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x24a>
-add    $0x30,%esp
+add    $0x20,%esp
```

## guild _ZN6CGuild12AddGuildFundEj [NEAR] pm=8
```diff
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## guild _ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj [DIFF] pm=79
```diff
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x165>
+je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x1e>
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x165>
+jne    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x28>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x169>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0xdb>
-movl   $0x1,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %ebx,0xc(%esp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    0x8(%ebp),%edx
-add    $0xc4,%edx
-movl   $0x14,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x15e>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0xf7>
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x15e>
+je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x164>
+jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x164>
+movl   $0x1,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    %eax,%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+mov    %ebx,0xc(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    0x8(%ebp),%edx
+add    $0xc4,%edx
+movl   $0x14,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
-jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x16a>
-mov    $0x0,%eax
```

## guild _ZN6CGuild17InsertGuildMemberEjP5CUser [DIFF] pm=13
```diff
-je     <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0xff>
+jne    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x1a>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x103>
+xor    $0x1,%eax
-je     <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x82>
-mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x104>
+je     <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0xfe>
-jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x104>
-mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x103>
+mov    $0x1,%eax
```

## guild _ZN6CGuild17SetSubGuildMasterEjb [DIFF] pm=26
```diff
-jg     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jg     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x101>
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x101>
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xe6>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xe7>
-jne    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xe2>
+jne    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xe3>
-movzbl %al,%eax
-mov    -0xc(%ebp),%edx
-not    %edx
-add    %edx,%eax
+movzbl %al,%edx
+mov    -0xc(%ebp),%eax
+not    %eax
+lea    (%edx,%eax,1),%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xff>
+seta   %bl
+test   %bl,%bl
+je     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x101>
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x101>
```

## guild _ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh [DIFF] pm=16
```diff
-je     <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd9>
+je     <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xcc>
-jne    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd8>
+jne    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xcf>
-jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xa7>
+jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x9f>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x9b>
+je     <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x94>
-jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x9c>
-nop
-jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd9>
+jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd0>
+nop
+jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd0>
```

## guild _ZN6CGuild19SetTodayGuildMemberER18STTodayGuildMember [NEAR] pm=2
```diff
+mov    0xc(%ebp),%edx
-mov    0xc(%ebp),%edx
```

## guild _ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc [DIFF] pm=32
```diff
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11a>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x120>
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11d>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x123>
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x106>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x10c>
+mov    0x8(%ebp),%ecx
-mov    0x8(%ebp),%ecx
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x102>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x108>
+mov    0x8(%ebp),%ecx
-add    $0xf0,%eax
-add    0x8(%ebp),%eax
-add    $0x19,%eax
+add    $0x100,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x9,%eax
+mov    0x8(%ebp),%ecx
-add    $0xf0,%eax
-add    0x8(%ebp),%eax
-lea    0x19(%eax),%edx
+add    $0x100,%eax
+lea    (%ecx,%eax,1),%eax
+lea    0x9(%eax),%edx
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
```

## guild _ZN6CGuild22NotifyTodayGuildMemberEP5CUser [DIFF] pm=50
```diff
-mov    0x66ec(%eax),%edx
-mov    %edx,-0x2f(%ebp)
-mov    0x66f0(%eax),%edx
-mov    %edx,-0x2b(%ebp)
-mov    0x66f4(%eax),%edx
-mov    %edx,-0x27(%ebp)
-mov    0x66f8(%eax),%edx
-mov    %edx,-0x23(%ebp)
-mov    0x66fc(%eax),%edx
-mov    %edx,-0x1f(%ebp)
-mov    0x6700(%eax),%edx
-mov    %edx,-0x1b(%ebp)
-mov    0x6704(%eax),%edx
-mov    %edx,-0x17(%ebp)
-mov    0x6708(%eax),%edx
-mov    %edx,-0x13(%ebp)
-mov    0x670c(%eax),%edx
-mov    %edx,-0xf(%ebp)
-movzwl 0x6710(%eax),%edx
-mov    %dx,-0xb(%ebp)
+mov    0x66ec(%eax),%eax
+mov    %eax,-0x2f(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f0(%eax),%eax
+mov    %eax,-0x2b(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f4(%eax),%eax
+mov    %eax,-0x27(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f8(%eax),%eax
+mov    %eax,-0x23(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66fc(%eax),%eax
+mov    %eax,-0x1f(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6700(%eax),%eax
+mov    %eax,-0x1b(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6704(%eax),%eax
+mov    %eax,-0x17(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6708(%eax),%eax
+mov    %eax,-0x13(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x670c(%eax),%eax
+mov    %eax,-0xf(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0x6710(%eax),%eax
+mov    %ax,-0xb(%ebp)
+mov    0x8(%ebp),%eax
```

## guild _ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo [DIFF] pm=70
```diff
-push   %ebx
-sub    $0x34,%esp
-movl   $0x0,-0xc(%ebp)
+sub    $0x38,%esp
+movl   $0x0,-0x10(%ebp)
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x146>
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x13d>
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x3c>
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x3b>
-jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x149>
-lea    -0x14(%ebp),%eax
+jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x140>
+lea    -0x18(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x117>
-lea    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x10e>
+lea    -0x18(%ebp),%eax
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x89>
-cmpl   $0x12b,-0xc(%ebp)
-jg     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x89>
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x88>
+cmpl   $0x12b,-0x10(%ebp)
+jg     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x88>
-jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x8e>
+jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x8d>
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x10c>
-mov    -0xc(%ebp),%edx
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x103>
+mov    -0x10(%ebp),%edx
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
-lea    -0x14(%ebp),%eax
+add    0xc(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x18(%ebp),%eax
-mov    %eax,(%ebx)
-lea    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %eax,(%edx)
+lea    -0x18(%ebp),%eax
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x108>
-mov    -0xc(%ebp),%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
-lea    -0x14(%ebp),%eax
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0xff>
+lea    -0x18(%ebp),%eax
-mov    %al,0x4(%ebx)
-addl   $0x1,-0xc(%ebp)
-lea    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %al,0x4(%edx)
+addl   $0x1,-0x10(%ebp)
+lea    -0x18(%ebp),%eax
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jne    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x67>
-mov    -0xc(%ebp),%eax
-mov    -0x4(%ebp),%ebx
+jne    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x66>
+mov    -0x10(%ebp),%eax
```

## guild _ZN6CGuild22SendGuildInfoToMembersEb [DIFF] pm=44
```diff
-mov    %eax,-0xc(%ebp)
-cmpl   $0x64,-0xc(%ebp)
-jg     <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x9b>
-mov    -0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-add    $0x4d0a,%edx
+mov    %eax,-0x10(%ebp)
+cmpl   $0x64,-0x10(%ebp)
+jbe    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x79>
+movl   $0x64,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x4d0a(%eax),%edx
+mov    -0x10(%ebp),%eax
-lea    -0x151(%ebp),%eax
-add    $0xd4,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0xc2>
-mov    0x8(%ebp),%eax
-add    $0x4d0a,%eax
-movl   $0x64,0x8(%esp)
-mov    %eax,0x4(%esp)
-jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x154>
+jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x12d>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x148>
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x121>
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x149>
+jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x122>
-jne    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0xd9>
+jne    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0xb7>
```

## guild _ZN6CGuild23LoadGuildOneMemberProxyEP5CUser [DIFF] pm=102
```diff
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1f4>
+je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x2a>
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1f4>
+jne    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x34>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1dc>
-ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x16e>
+ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x158>
-movzwl %ax,%ebx
+mov    %ax,-0xa(%ebp)
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
-mov    0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
+lea    (%esi,%eax,1),%eax
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%edx
+mov    0x8(%ebp),%ebx
+movzwl -0xa(%ebp),%edx
-add    $0xd0,%eax
-add    0x8(%ebp),%eax
-add    $0x11,%eax
+add    $0xe0,%eax
+lea    (%ebx,%eax,1),%eax
+add    $0x1,%eax
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
-mov    0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %dl,0xf(%eax)
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+lea    (%esi,%eax,1),%eax
+add    $0xff,%eax
+mov    %dl,(%eax)
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
-mov    0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %dl,0x10(%eax)
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+lea    (%esi,%eax,1),%eax
+add    $0x100,%eax
+mov    %dl,(%eax)
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
-mov    0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %dl,0x13(%eax)
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+lea    (%esi,%eax,1),%eax
+add    $0x103,%eax
+mov    %dl,(%eax)
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
-mov    %eax,%edx
-mov    0x8(%ebp),%ecx
+movzbl %al,%edx
-lea    (%ecx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %dx,0x11(%eax)
+lea    (%esi,%eax,1),%eax
+add    $0x100,%eax
+mov    %dx,0x1(%eax)
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1df>
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1c9>
+movl   $0x73d,0x8(%esp)
+movl   $"LoadGuildOneMemberProxy",0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-movzwl %ax,%esi
+movzwl %ax,%edx
-mov    0x18(%eax),%ebx
-movl   $0x73d,0x8(%esp)
-movl   $&_ZZN6CGuild23LoadGuildOneMemberProxyEP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x18(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1df>
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1c9>
-jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1f9>
-mov    $0x0,%eax
```

## guild _ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy [DIFF] pm=40
```diff
-push   %esi
-push   %ebx
-sub    $0x30,%esp
+sub    $0x38,%esp
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x109>
+je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x28>
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x109>
+jne    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x32>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x10a>
-ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x83>
+ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x86>
+mov    0x8(%ebp),%ecx
-add    0x8(%ebp),%eax
+lea    (%ecx,%eax,1),%eax
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xf4>
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%esi
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%ebx
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xf7>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+movzwl 0x1e(%eax),%eax
+movzwl %ax,%edx
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xf4>
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xf7>
-jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x10e>
-mov    $0x0,%eax
-add    $0x30,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
```

## guild _ZN6CGuild23SendGuildInfoToManagersEv [DIFF] pm=22
```diff
-je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x191>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x180>
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x162>
+jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x151>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x153>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x146>
-xor    $0x1,%eax
-je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x109>
+jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0xf7>
-xor    $0x1,%eax
-je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x109>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0xfe>
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x10e>
+jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x103>
-jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x156>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x146>
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x157>
-nop
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x157>
-nop
```

## guild _ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh [DIFF] pm=34
```diff
-sub    $0x28,%esp
+push   %ebx
+sub    $0x24,%esp
-je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc5>
+je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xca>
-je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc5>
+je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xca>
-jne    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0x76>
-movzbl -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-add    %edx,%eax
+jne    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0x78>
+movzbl -0x10(%ebp),%eax
+mov    %eax,%edx
+shl    $0x6,%edx
+lea    (%edx,%eax,1),%eax
-jmp    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc5>
-movzbl -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-lea    (%eax,%edx,1),%ecx
+jmp    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xca>
+movzbl -0x10(%ebp),%eax
+mov    %eax,%edx
+shl    $0x6,%edx
+lea    (%edx,%eax,1),%ecx
+mov    0x8(%ebp),%ebx
-add    0x8(%ebp),%eax
+lea    (%ebx,%eax,1),%eax
-leave
+add    $0x24,%esp
+pop    %ebx
+pop    %ebp
```
