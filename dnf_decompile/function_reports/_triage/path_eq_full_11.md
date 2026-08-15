## monitor _ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader [DIFF] pm=155
```diff
-lea    -0x45(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-lea    -0x45(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x4c(%ebp),%esi
+lea    -0x54(%ebp),%esi
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x45(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x28b>
-lea    -0x45(%ebp),%eax
+lea    -0x4d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x290>
+lea    -0x4d(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x254>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%esi
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x259>
+mov    -0x2c(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%eax
-mov    %eax,%ebx
+mov    %eax,-0x20(%ebp)
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x3c(%ebp),%esi
+lea    -0x44(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x202>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x1f7>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x21c>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x21c>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x231>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x21c>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x35(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x28b>
-lea    -0x35(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x1fc>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x221>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x221>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x236>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x221>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x3d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x290>
+lea    -0x3d(%ebp),%eax
-mov    -0x24(%ebp),%edx
+mov    -0x2c(%ebp),%edx
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x369>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x36e>
-jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x30b>
+jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x310>
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x304>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x309>
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x369>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x36e>
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x364>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x369>
```

## monitor _ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader [DIFF] pm=194
```diff
+movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x24e>
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x245>
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x2d0,%eax
-mov    %eax,-0x14(%ebp)
-mov    0x8(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    0x1f(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x245>
+lea    -0x6d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN32Packet_Monitor_Reply_Charac_InfoC1Ev>
+movl   $0x0,-0x63(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x5f(%ebp)
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x6d(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+lea    -0x2d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+mov    -0x18(%ebp),%eax
+lea    0xa(%eax),%edx
+lea    -0x2d(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
+mov    %eax,-0x20(%ebp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x10c>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0xf4>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x2d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1a1>
+lea    -0x2d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+cmpl   $0x0,-0x20(%ebp)
+sete   %al
+mov    %al,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x12d>
+movb   $0x0,-0x57(%ebp)
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x182>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
-mov    0x1f(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x251>
-lea    -0x69(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN32Packet_Monitor_Reply_Charac_InfoC1Ev>
-movl   $0x0,-0x5f(%ebp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,-0x57(%ebp)
-mov    -0x10(%ebp),%eax
-add    $0xa,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x69(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-lea    -0x29(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-mov    -0x10(%ebp),%eax
-lea    0xa(%eax),%edx
-lea    -0x29(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x30(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-sete   %bl
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x125>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x10d>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x29(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1a8>
-lea    -0x29(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x13a>
-movb   $0x0,-0x53(%ebp)
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x189>
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,-0x53(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x57(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %ax,-0x34(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %ax,-0x38(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %al,-0x32(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %al,-0x36(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %al,-0x31(%ebp)
-lea    -0x69(%ebp),%eax
+mov    %al,-0x35(%ebp)
+lea    -0x6d(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x252>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x245>
-je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1b5>
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1ae>
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x247>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x240>
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x252>
-nop
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x252>
-nop
```

## monitor _ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader [DIFF] pm=121
```diff
-sub    $0x5c,%esp
+sub    $0x6c,%esp
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x44(%ebp),%esi
+lea    -0x58(%ebp),%esi
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1f4>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1f0>
+lea    -0x51(%ebp),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x38(%ebp)
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1b0>
-mov    -0x20(%ebp),%edx
+movl   $0x0,-0x30(%ebp)
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1ac>
+mov    -0x30(%ebp),%edx
-add    -0x24(%ebp),%eax
-lea    0xe(%eax),%ebx
+add    -0x38(%ebp),%eax
+add    $0xe,%eax
+mov    %eax,-0x2c(%ebp)
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x34(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-mov    0x16(%eax,%ecx,1),%edi
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-mov    0x12(%eax,%ecx,1),%esi
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%ecx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-mov    0xe(%eax,%ecx,1),%ebx
+mov    -0x2c(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
-addl   $0x1,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x30(%ebp)
+mov    -0x38(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-jbe    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c8>
-cmpl   $0x1d,-0x20(%ebp)
-ja     <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c8>
+cmp    -0x30(%ebp),%eax
+jbe    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c4>
+cmpl   $0x1d,-0x30(%ebp)
+ja     <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c4>
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1cd>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c9>
-jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x106>
-mov    -0x24(%ebp),%edx
+jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x10c>
+mov    0x8(%ebp),%edx
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2ca>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c6>
-jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x270>
+jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x26c>
-lea    -0x34(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x269>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x265>
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2ca>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c6>
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c5>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c1>
-add    $0x5c,%esp
+add    $0x6c,%esp
```

## monitor _ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader [DIFF] pm=125
```diff
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2ae>
-mov    0x8(%ebp),%eax
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b1>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xa6>
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xa3>
-cmp    -0x20(%ebp),%eax
-jge    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xad>
+mov    -0x20(%ebp),%edx
+cmp    %edx,%eax
+jae    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xaa>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xb2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xaf>
-test   %al,%al
+mov    %al,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
-mov    %eax,-0x10(%ebp)
+lea    0xa(%eax),%edx
+mov    -0x28(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+movb   $0x1,(%eax)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    0xa(%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %edx,0xa(%eax)
-mov    -0x10(%ebp),%eax
-movb   $0x1,0x16(%eax)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
-mov    %eax,-0x14(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0xa(%eax)
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0xe(%eax)
+lea    0xa(%eax),%edx
+mov    -0x28(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x1c(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x28(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,(%edx)
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x11c>
-mov    -0x14(%ebp),%eax
-movb   $0x2,0x16(%eax)
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x154>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x158>
+mov    -0x28(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x10(%ebp)
-lea    0x1(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%ebx
+lea    0x1(%eax),%ebx
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %ebx,0x8(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
-mov    -0x14(%ebp),%eax
-movb   $0x0,0x16(%eax)
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+movb   $0x0,(%eax)
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x161>
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+movb   $0x2,(%eax)
+mov    -0x1c(%ebp),%eax
+lea    0x12(%eax),%ebx
-mov    -0x14(%ebp),%edx
-mov    %eax,0x12(%edx)
-mov    -0x24(%ebp),%eax
+mov    %eax,(%ebx)
+mov    -0x28(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
-jne    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x252>
+jne    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x266>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x24b>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x25f>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2a7>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2bb>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
-nop
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
-nop
```

## monitor _ZN17CUdpNetworkThread8dispatchEPv [DIFF] pm=515
```diff
-sub    $0x9c,%esp
+sub    $0xac,%esp
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x107>
-lea    -0x4d(%ebp),%eax
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x10a>
+lea    -0x61(%ebp),%eax
-lea    -0x4d(%ebp),%eax
+lea    -0x61(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x68(%ebp),%eax
-lea    -0x54(%ebp),%esi
+lea    -0x68(%ebp),%esi
-lea    -0x54(%ebp),%eax
+lea    -0x68(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x68(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0xe4>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0xe7>
-lea    -0x4d(%ebp),%eax
+lea    -0x61(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x4d(%ebp),%eax
+mov    %ecx,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x61(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4f9>
-lea    -0x68(%ebp),%eax
+lea    -0x78(%ebp),%eax
-mov    %eax,-0x58(%ebp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-movl   $0x1800,-0x5c(%ebp)
-movw   $0x0,-0x5e(%ebp)
-movl   $0x0,-0x64(%ebp)
-mov    -0x58(%ebp),%eax
-mov    %eax,%edx
+mov    %eax,-0x38(%ebp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+movl   $0x1800,-0x6c(%ebp)
+movw   $0x0,-0x6e(%ebp)
+movl   $0x0,-0x74(%ebp)
+mov    -0x38(%ebp),%edx
-lea    -0x5e(%ebp),%ecx
+lea    -0x6e(%ebp),%ecx
-lea    -0x64(%ebp),%ecx
+lea    -0x74(%ebp),%ecx
-lea    -0x5c(%ebp),%ecx
+lea    -0x6c(%ebp),%ecx
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
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
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
+mov    %al,-0x31(%ebp)
+mov    -0x6c(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+cmpb   $0x1,-0x31(%ebp)
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4aa>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x1d4>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x511>
+mov    -0x38(%ebp),%eax
+mov    %eax,-0x7c(%ebp)
+mov    -0x38(%ebp),%eax
-mov    -0x5c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
-je     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x2d6>
-mov    -0x20(%ebp),%eax
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x3f7>
+mov    -0x38(%ebp),%eax
+movzwl 0x2(%eax),%eax
+cmp    $0x17ff,%ax
+ja     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x33e>
+mov    -0x6c(%ebp),%eax
+cmp    $0x1800,%eax
+jg     <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x285>
+mov    -0x38(%ebp),%eax
+mov    -0x74(%ebp),%edx
+mov    %edx,0x6(%eax)
+mov    -0x38(%ebp),%eax
+movzwl -0x6e(%ebp),%edx
+mov    %dx,0x4(%eax)
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+lea    -0x7c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4pushERKS1_>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt5queueIP14CUdpRecvBufferSt5dequeIS1_SaIS1_EEE4sizeEv>
+mov    %eax,-0x2c(%ebp)
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4f9>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x80(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x511>
+mov    -0x38(%ebp),%eax
-movzwl %ax,%edi
-mov    -0x5c(%ebp),%esi
-mov    -0x20(%ebp),%eax
+mov    %ax,-0x28(%ebp)
+mov    -0x38(%ebp),%eax
-movzwl %ax,%ebx
+mov    %ax,-0x26(%ebp)
+movzwl -0x28(%ebp),%esi
+movzwl -0x26(%ebp),%ebx
+movl   $0x85,0x8(%esp)
+movl   $&_ZZN17CUdpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
+movl   $"./log/recvErr",0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CUdpRecvBufferdlEPv>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x32b>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x511>
+lea    -0x84(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4f9>
+mov    -0x38(%ebp),%eax
+movzwl (%eax),%eax
+mov    %ax,-0x24(%ebp)
+mov    -0x38(%ebp),%eax
+movzwl 0x2(%eax),%eax
+mov    %ax,-0x22(%ebp)
+movzwl -0x24(%ebp),%esi
+movzwl -0x22(%ebp),%ebx
+movl   $0x79,0x8(%esp)
+movl   $&_ZZN17CUdpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x14(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
+movl   $"./log/recvErr",0x4(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CUdpRecvBufferdlEPv>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x3e4>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x511>
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4f9>
+mov    -0x38(%ebp),%eax
+movzwl (%eax),%eax
+mov    %ax,-0x20(%ebp)
+mov    -0x38(%ebp),%eax
+movzwl 0x2(%eax),%eax
+mov    %ax,-0x1e(%ebp)
+movzwl -0x20(%ebp),%esi
+movzwl -0x1e(%ebp),%ebx
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
+mov    %esi,0x14(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x70(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-mov    -0x58(%ebp),%eax
+mov    -0x38(%ebp),%eax
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
-movzwl 0x2(%eax),%eax
-cmp    $0x17ff,%ax
-jbe    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x38d>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x5c(%ebp),%esi
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x79,0x8(%esp)
-movl   $&_ZZN17CUdpNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
-movl   $"./log/recvErr",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x49a>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x511>
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4f9>
-lea    -0x74(%ebp),%eax
+lea    -0x90(%ebp),%eax
-mov    -0x58(%ebp),%eax
+mov    -0x38(%ebp),%eax
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
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
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
-movl   $0x85,0x8(%esp)
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
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4eb>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x511>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x133>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6f3>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x136>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x739>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5f0>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x636>
-lea    -0x2d(%ebp),%eax
+lea    -0x41(%ebp),%eax
-lea    -0x2d(%ebp),%eax
+lea    -0x41(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x34(%ebp),%esi
+lea    -0x48(%ebp),%esi
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x580>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5c6>
-lea    -0x34(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x57a>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5c0>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5e5>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
-lea    -0x34(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5e5>
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5b4>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5fa>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5e5>
-lea    -0x2d(%ebp),%eax
+lea    -0x41(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5db>
-lea    -0x2d(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x621>
+lea    -0x41(%ebp),%eax
-lea    -0x25(%ebp),%eax
+lea    -0x39(%ebp),%eax
-lea    -0x25(%ebp),%eax
+lea    -0x39(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x2c(%ebp),%esi
+lea    -0x40(%ebp),%esi
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x683>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6c9>
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67d>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6c3>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6e8>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6e8>
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b7>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6fd>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6e8>
-lea    -0x25(%ebp),%eax
+lea    -0x39(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6de>
-lea    -0x25(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x724>
+lea    -0x39(%ebp),%eax
-add    $0x9c,%esp
+add    $0xac,%esp
```

## monitor _ZN18CFrameCountHandler17GetFrameCountInfoEv [DIFF] pm=247
```diff
-sub    $0x6c,%esp
+sub    $0x4c,%esp
+movl   $0x0,-0x38(%ebp)
+movl   $0x0,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x14d>
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x146>
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
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
+lea    -0x21(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x3c(%ebp),%esi
+lea    -0x28(%ebp),%esi
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xf0>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xe9>
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
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xe3>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x108>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x108>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x123>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x108>
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
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x242>
+lea    -0x19(%ebp),%eax
-lea    -0x2d(%ebp),%eax
+lea    -0x19(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x34(%ebp),%esi
+lea    -0x20(%ebp),%esi
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1f3>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1e5>
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
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1df>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x204>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x204>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x21f>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x204>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x19(%ebp),%eax
-lea    -0x2d(%ebp),%eax
+lea    -0x19(%ebp),%eax
-mov    0xc(%eax),%edx
-mov    0x8(%ebp),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
-jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x26c>
+jae    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x260>
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
+jae    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
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
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
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
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
-seta   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
-add    $0x6c,%esp
+add    $0x4c,%esp
```

## monitor _ZN18CMemoryCashManager18ProcessLifeTimeOutEv [DIFF] pm=14
```diff
-je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xfd>
+je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0x100>
-jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xc9>
+jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xce>
-je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xbe>
+setne  %al
+test   %al,%al
+je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xc3>
-je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xc9>
+je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xce>
-jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xc9>
+jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xce>
-jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xfe>
-nop
```

## monitor _ZN18CMemoryCashManager20ProcessCashDataPrintEv [NEAR] pm=44
```diff
-sub    $0x5c,%esp
+sub    $0x4c,%esp
-mov    0x40(%eax),%eax
-mov    %eax,-0x34(%ebp)
+mov    0x40(%eax),%ebx
-mov    0x4c(%eax),%eax
-mov    %eax,-0x30(%ebp)
+mov    0x4c(%eax),%esi
-mov    0x3c(%eax),%eax
-mov    %eax,-0x2c(%ebp)
+mov    0x3c(%eax),%edi
-mov    0x48(%eax),%edi
+mov    0x48(%eax),%eax
+mov    %eax,-0x28(%ebp)
-mov    0x38(%eax),%esi
+mov    0x38(%eax),%eax
+mov    %eax,-0x24(%ebp)
-mov    0x44(%eax),%ebx
+mov    0x44(%eax),%eax
+mov    %eax,-0x20(%ebp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
-mov    -0x34(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x20(%esp)
+mov    %esi,0x1c(%esp)
+mov    %edi,0x18(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
-add    $0x5c,%esp
+add    $0x4c,%esp
```

## monitor _ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser [DIFF] pm=90
```diff
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x289>
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x28c>
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x30(%ebp)
-lea    -0x30(%ebp),%eax
-lea    -0x2c(%ebp),%edx
+lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x284>
-lea    -0x30(%ebp),%eax
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x287>
+lea    -0x34(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x289>
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x28c>
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x23e>
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x241>
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-lea    -0x34(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x38(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-lea    -0x34(%ebp),%edx
+lea    -0x38(%ebp),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    -0x14(%ebp),%edx
+mov    -0x18(%ebp),%edx
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fe>
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x201>
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1f9>
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fd>
-lea    -0x34(%ebp),%edx
+lea    -0x38(%ebp),%edx
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fa>
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fd>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fa>
-nop
-jne    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x17a>
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x233>
+jne    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x180>
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x236>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %al,-0x15(%ebp)
-cmpb   $0x0,-0x15(%ebp)
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x273>
+mov    %al,-0x19(%ebp)
+cmpb   $0x0,-0x19(%ebp)
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x276>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-movzbl -0x15(%ebp),%eax
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x289>
+movzbl -0x19(%ebp),%eax
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x28c>
```

## monitor _ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start [NEAR] pm=2
```diff
+mov    -0x10(%ebp),%edx
-mov    -0x10(%ebp),%edx
```

## monitor _ZN19COnTimeEventManager10StartEventEjj [DIFF] pm=8
```diff
+mov    %ebx,%eax
+mov    0x8(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x0,0x8(%esp)
-mov    %ebx,%eax
-mov    0x8(%ebp),%ecx
-mov    %ecx,0xc(%esp)
-movl   $0x0,0x8(%esp)
```

## monitor _ZN19COnTimeEventManager11OnRewardEndEv [DIFF] pm=18
```diff
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-jmp    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10c>
+jmp    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x109>
-jne    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10b>
+jne    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x109>
-lea    -0x22(%ebp),%eax
+lea    -0x1a(%ebp),%eax
-lea    -0x22(%ebp),%edx
+lea    -0x1a(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x10(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10c>
-nop
```

## monitor _ZN19COnTimeEventManager13OnRewardStartEv [DIFF] pm=40
```diff
+push   %edi
+push   %esi
-sub    $0x34,%esp
+sub    $0x2c,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-je     <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x82>
+je     <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x84>
-jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x17b>
+jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x18f>
-jne    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x17a>
+jne    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x18f>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%edx
+mov    %eax,%esi
-mov    %edx,0x20(%eax)
+mov    %esi,0x20(%eax)
-mov    -0xc(%ebp),%eax
+mov    %esi,%eax
+jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x12b>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
-lea    -0x14(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x17b>
-nop
-add    $0x34,%esp
+add    $0x2c,%esp
+pop    %esi
+pop    %edi
```

## monitor _ZN20CTask_ChristmasEvent10_DoExecuteEv [DIFF] pm=55
```diff
+push   %edi
+push   %esi
-sub    $0x44,%esp
-lea    -0x32(%ebp),%eax
+sub    $0x4c,%esp
+lea    -0x44(%ebp),%eax
-movl   $0x1,-0x28(%ebp)
-movw   $0x14,-0x24(%ebp)
-movw   $0xe10,-0x22(%ebp)
+movl   $0x1,-0x3a(%ebp)
+movw   $0x14,-0x36(%ebp)
+movw   $0xe10,-0x32(%ebp)
+lea    -0x44(%ebp),%ebx
-mov    %eax,-0x10(%ebp)
-lea    -0x32(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x20(%ebp)
-cmp    -0xc(%ebp),%eax
-setl   %al
+cmp    -0x20(%ebp),%eax
+setb   %al
-je     <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0xa5>
+je     <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0xa4>
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0x11f>
+jmp    <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0x13a>
-mov    -0xc(%ebp),%edx
+mov    -0x20(%ebp),%edx
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0xe5>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x1c(%ebp)
+mov    -0x1c(%ebp),%ebx
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
-add    $0x44,%esp
+add    $0x4c,%esp
+pop    %esi
+pop    %edi
```

## monitor _ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo [DIFF] pm=22
```diff
+push   %esi
-sub    $0x24,%esp
+sub    $0x20,%esp
-jne    <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x7f>
+jne    <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x84>
-mov    0x8(%eax),%ebx
+mov    0x8(%eax),%eax
+mov    %eax,%esi
-mov    %ebx,%edx
-sub    %eax,%edx
+mov    %eax,%ebx
+mov    %esi,%edx
+sub    %ebx,%edx
-jmp    <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x80>
+jmp    <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x85>
-mov    -0x4(%ebp),%ebx
-leave
+lea    -0x8(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
```

## monitor _ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv [DIFF] pm=5
```diff
-je     <T> <_ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv+0xa6>
+je     <T> <_ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv+0xa4>
-add    $0x3c,%eax
-mov    %eax,%edx
+lea    0x3c(%eax),%edx
```

## monitor _ZN5CPeer11send_packetEPci [NEAR] pm=6
```diff
-mov    0x1834(%eax),%edx
-mov    0x10(%ebp),%eax
-add    %eax,%edx
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+add    0x10(%ebp),%edx
```

## monitor _ZN5CPeer11send_packetEv [DIFF] pm=82
```diff
-sub    $0x30,%esp
+sub    $0x20,%esp
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x247>
-mov    0x1834(%eax),%ebx
+mov    0x1834(%eax),%eax
+mov    %eax,%ebx
-setle  %al
-test   %al,%al
-je     <T> <_ZN5CPeer11send_packetEv+0xdf>
+jg     <T> <_ZN5CPeer11send_packetEv+0xdc>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x8d>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x8d>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x8d>
-jne    <T> <_ZN5CPeer11send_packetEv+0x9a>
+jne    <T> <_ZN5CPeer11send_packetEv+0x97>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x247>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x247>
-jle    <T> <_ZN5CPeer11send_packetEv+0x243>
+jle    <T> <_ZN5CPeer11send_packetEv+0x244>
-jle    <T> <_ZN5CPeer11send_packetEv+0x1ef>
+jle    <T> <_ZN5CPeer11send_packetEv+0x1ee>
-mov    0x1834(%eax),%edx
-mov    -0xc(%ebp),%eax
-sub    %eax,%edx
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+sub    -0xc(%ebp),%edx
-jbe    <T> <_ZN5CPeer11send_packetEv+0x1a5>
+ja     <T> <_ZN5CPeer11send_packetEv+0x185>
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
+jmp    <T> <_ZN5CPeer11send_packetEv+0x244>
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
+jmp    <T> <_ZN5CPeer11send_packetEv+0x247>
-jge    <T> <_ZN5CPeer11send_packetEv+0x224>
+jge    <T> <_ZN5CPeer11send_packetEv+0x225>
-mov    $0xffffffff,%eax
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+movl   $0xffffffff,-0xc(%ebp)
+jmp    <T> <_ZN5CPeer11send_packetEv+0x244>
-add    $0x30,%esp
+add    $0x20,%esp
```

## monitor _ZN5CUser18MemberEnterProcessEv [DIFF] pm=10
```diff
-je     <T> <_ZN5CUser18MemberEnterProcessEv+0x40>
+je     <T> <_ZN5CUser18MemberEnterProcessEv+0x3b>
-setle  %al
-test   %al,%al
-je     <T> <_ZN5CUser18MemberEnterProcessEv+0x41>
+jg     <T> <_ZN5CUser18MemberEnterProcessEv+0x3e>
-jmp    <T> <_ZN5CUser18MemberEnterProcessEv+0x41>
+jmp    <T> <_ZN5CUser18MemberEnterProcessEv+0x3f>
+nop
+jmp    <T> <_ZN5CUser18MemberEnterProcessEv+0x3f>
```

## monitor _ZN7CMember10LoadMemberER14STMemberDBInfosjj [DIFF] pm=13
```diff
-je     <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0xc9>
+je     <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0xcb>
-movzbl %al,%eax
-cmp    -0x10(%ebp),%eax
-jle    <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0x58>
+movzbl %al,%edx
+mov    -0x10(%ebp),%eax
+cmp    %eax,%edx
+jle    <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0x5a>
+mov    0x8(%ebp),%eax
+lea    0x6(%eax),%edx
-mov    0x8(%ebp),%edx
-add    $0x6,%edx
```

## monitor _ZN7CMember21GetConnLowerMemberCntEv [DIFF] pm=10
```diff
-jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x80>
+jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x7b>
-jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x70>
+jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x6b>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x6b>
+je     <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x66>
-jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x6c>
+jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x67>
```

## monitor _ZN7CMember21NoticeLevelUpToLowersEj [DIFF] pm=36
```diff
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xbc>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xae>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa9>
-mov    -0xc(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa1>
+mov    -0x10(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa4>
-mov    -0x14(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0x9d>
+mov    -0xc(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa5>
-nop
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
-jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xbd>
-nop
```

## monitor _ZN7CMember21NoticeMemberLogin_OutEP5CUserc [DIFF] pm=306
```diff
-test   %al,%al
-jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x31f>
+mov    %al,-0x19(%ebp)
+movzbl -0x19(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
-lea    -0x4c(%ebp),%eax
+lea    -0x51(%ebp),%eax
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
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x308>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x30e>
-mov    %al,-0x42(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %al,-0x47(%ebp)
+mov    -0xc(%ebp),%eax
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
-mov    %al,-0x39(%ebp)
-movb   $0x1,-0x38(%ebp)
+mov    %al,-0x3e(%ebp)
+movb   $0x1,-0x3d(%ebp)
-lea    -0x4c(%ebp),%eax
+lea    -0x51(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
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
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x308>
+jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x30e>
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
-jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x217>
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
-nop
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
-nop
+jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x220>
```

## monitor _ZNK11CUdpHandler12SendToClientEPcitPKcj [DIFF] pm=82
```diff
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fd>
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fd>
-jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x242>
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x23c>
-mov    -0xc(%ebp),%eax
-cmp    $0x61,%eax
-je     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x17d>
-cmp    $0x61,%eax
-jl     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1c8>
-sub    $0x6f,%eax
-cmp    $0x2,%eax
-ja     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1c8>
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",(%esp)
-call   <T> <printf>
-movl   $0x113,0x8(%esp)
+cmpl   $0x61,-0xc(%ebp)
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x15f>
+movl   $"err EAFNOSUPPORT in send",(%esp)
+call   <T> <puts>
+movl   $0x119,0x8(%esp)
-movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",0x8(%esp)
+movl   $"Error( EAFNOSUPPORT ) in send = %d\n",0x8(%esp)
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x238>
-movl   $"err EAFNOSUPPORT in send",(%esp)
-call   <T> <puts>
-movl   $0x119,0x8(%esp)
-movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x232>
+cmpl   $0x60,-0xc(%ebp)
+jle    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x170>
-mov    %eax,0xc(%esp)
-movl   $"Error( EAFNOSUPPORT ) in send = %d\n",0x8(%esp)
-movl   $"./log/UdpErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x238>
+sub    $0x6f,%eax
+cmp    $0x2,%eax
+jbe    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1e2>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x232>
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",(%esp)
+call   <T> <printf>
+movl   $0x113,0x8(%esp)
+movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",0x8(%esp)
+movl   $"./log/UdpErr",0x4(%esp)
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fd>
-jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x291>
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x28b>
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
-mov    0x10(%ebp),%eax
-cmp    -0x10(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fe>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fd>
+mov    -0x10(%ebp),%eax
+cmp    0x10(%ebp),%eax
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x29a>
+mov    $0x1,%eax
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fd>
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
-mov    $0x1,%eax
```

## monitor _ZNK11CUdpHandler12SendToServerEPcitPKc [DIFF] pm=2
```diff
-lea    -0x48(%ebp),%eax
+lea    -0x48(%ebp),%eax
```
