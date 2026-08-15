## guild _ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader [DIFF] pm=201
```diff
-sub    $0x8c,%esp
+sub    $0x7c,%esp
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xf2>
-lea    -0x69(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xef>
+lea    -0x51(%ebp),%eax
-lea    -0x69(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x70(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x70(%ebp),%esi
+lea    -0x58(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x98>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x95>
-lea    -0x70(%ebp),%eax
+lea    -0x58(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x92>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x8f>
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb7>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb4>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb7>
-lea    -0x70(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb4>
+lea    -0x58(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xcf>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xcc>
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb7>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb4>
-lea    -0x69(%ebp),%eax
+lea    -0x51(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x3c7>
-lea    -0x69(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x3b4>
+lea    -0x51(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1df>
-lea    -0x61(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1d6>
+lea    -0x49(%ebp),%eax
-lea    -0x61(%ebp),%eax
+lea    -0x49(%ebp),%eax
-lea    -0x68(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x68(%ebp),%esi
+lea    -0x50(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x185>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x17c>
-lea    -0x68(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x17f>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x176>
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1a4>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x19b>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1a4>
-lea    -0x68(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x19b>
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1bc>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1b3>
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1a4>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x19b>
-lea    -0x61(%ebp),%eax
+lea    -0x49(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x3c7>
-lea    -0x61(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x3b4>
+lea    -0x49(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x24d>
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x23f>
+mov    0x8(%ebp),%eax
-lea    -0x60(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x28(%ebp),%eax
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x2be>
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x2ab>
+mov    0x8(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
-mov    -0x28(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
+mov    0x8(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x327>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x314>
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%esi
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%ebx
-lea    -0x50(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
-mov    -0x28(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
+mov    0x8(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    -0x28(%ebp),%edx
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
+je     <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
-mov    -0x28(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    0x8(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x447>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x432>
+movl   $0xda7,0x8(%esp)
+movl   $"OnCallGuildLevelUp",0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xda7,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x440>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x42b>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
-lea    -0x38(%ebp),%eax
+lea    -0x68(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a0>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x48b>
-add    $0x8c,%esp
+add    $0x7c,%esp
```

## guild _ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader [DIFF] pm=110
```diff
-lea    -0x3d(%ebp),%eax
+lea    -0x31(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x31(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x44(%ebp),%esi
+lea    -0x38(%ebp),%esi
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x31(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x1d2>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x1cb>
+lea    -0x31(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-add    $0x2d,%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x20(%ebp),%eax
-add    $0x16,%eax
-mov    %eax,-0x4c(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,%ebx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%esi
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0x2d,%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x28(%ebp),%eax
+lea    0x16(%eax),%edi
+mov    -0x28(%ebp),%eax
+mov    0x12(%eax),%esi
+mov    -0x28(%ebp),%eax
+mov    0xa(%eax),%ebx
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    -0x50(%ebp),%eax
+mov    -0x4c(%ebp),%eax
-mov    -0x4c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    %edi,0x18(%esp)
+mov    %esi,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2da>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2d1>
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2da>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2d1>
-jne    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x274>
+jne    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x26b>
+movl   $0x290,0x8(%esp)
+movl   $"OnNoticeGuildEnter",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x290,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x26d>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x264>
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2da>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2d1>
-lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2d5>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2cc>
```

## guild _ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader [DIFF] pm=74
```diff
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
-lea    -0x1d3(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f6>
+lea    -0x1d7(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x1c9(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x1cd(%ebp)
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
-movb   $0x0,-0x1c5(%ebp)
-lea    -0x1d3(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f6>
+movb   $0x0,-0x25(%ebp)
+lea    -0x1d7(%ebp),%eax
-lea    -0x1d3(%ebp),%eax
-add    $0xe,%eax
+lea    -0x25(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-movzwl -0x1d1(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x1d3(%ebp),%eax
-mov    %edx,0x8(%esp)
+movzbl -0x25(%ebp),%eax
+mov    %al,-0x1c9(%ebp)
+lea    -0x1d7(%ebp),%eax
+movl   $0x19f,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f6>
-jne    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1a3>
+jne    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x19c>
+movl   $0xf45,0x8(%esp)
+movl   $"OnRequestBlackList",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xf45,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnRequestBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x19c>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x195>
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f6>
-lea    -0x1c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f8>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f1>
```

## guild _ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader [DIFF] pm=103
```diff
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x18(%ebp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %bl
-lea    -0x38(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x108>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x101>
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0xf0>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0xe9>
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x1b7>
-lea    -0x31(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x1ac>
+lea    -0x21(%ebp),%eax
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
-mov    -0x10(%ebp),%eax
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
+mov    -0x18(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x17f>
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x17a>
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
+mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17DeleteToBlackListEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
-call   <T> <_ZN5CUser17DeleteToBlackListEj>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x28f>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-mov    %eax,-0x44(%ebp)
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x233>
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x226>
+movl   $0xf16,0x8(%esp)
+movl   $"OnDeleteToBlackList",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xf16,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x22c>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x21f>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
-lea    -0x20(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x288>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x27b>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
-nop
```

## guild _ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader [DIFF] pm=191
```diff
-push   %edi
-sub    $0x9fc,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x30(%ebp)
+sub    $0x9f0,%esp
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x56>
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x4f>
-lea    -0x68(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x68(%ebp),%eax
+lea    -0x58(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x20(%ebp)
-add    $0x10,%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%eax
+lea    0x10(%eax),%edx
+mov    -0x20(%ebp),%eax
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0xba>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0xb3>
-lea    -0x60(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x60(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
-mov    -0x30(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
+mov    0x8(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,-0x18(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x18(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x11c>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x11a>
-lea    -0x58(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x181>
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1906,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildCargoHistory GUILD CARGO LOCKED!(%d,%d)",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
-mov    -0x28(%ebp),%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x210>
+mov    -0x1c(%ebp),%eax
-mov    %al,-0x1d(%ebp)
-cmpb   $0x3,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x1fc>
-cmpb   $0x1,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x1fc>
-cmpb   $0x2,-0x1d(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x1fc>
-movzbl -0x1d(%ebp),%edi
-mov    -0x30(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x1910,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildCargoHistory : Access Deny(%d,%d,%d)",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
-lea    -0x9da(%ebp),%eax
+mov    %al,-0xd(%ebp)
+cmpb   $0x3,-0xd(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x15d>
+cmpb   $0x1,-0xd(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x15d>
+cmpb   $0x2,-0xd(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x1bf>
+lea    -0x9ca(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0x9d0(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x9cc(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x9c0(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x9bc(%ebp)
+mov    -0x14(%ebp),%eax
-lea    -0x9da(%ebp),%edx
+lea    -0x9ca(%ebp),%edx
-lea    -0x9da(%ebp),%eax
+lea    -0x9ca(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
+movzbl -0xd(%ebp),%ebx
+movl   $0x1910,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargoHistory : Access Deny(%d,%d,%d)",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
+movl   $0x1906,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargoHistory GUILD CARGO LOCKED!(%d,%d)",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2dd>
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2d5>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2d6>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2ce>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x332>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32a>
-add    $0x9fc,%esp
+add    $0x9f0,%esp
-pop    %edi
```

## guild _ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader [DIFF] pm=136
```diff
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xe2>
-lea    -0x39(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xe5>
+lea    -0x29(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x30(%ebp),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xc2>
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x2b9>
-lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x29(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x165>
-lea    -0x5a(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x168>
+lea    -0x4a(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x4c(%ebp)
+mov    %eax,-0x3c(%ebp)
-mov    %eax,-0x44(%ebp)
+mov    %eax,-0x34(%ebp)
+mov    -0x28(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x38(%ebp)
+lea    -0x4a(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x255>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15Packet_No_CacheC1Ev>
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x48(%ebp)
-lea    -0x5a(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x252>
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15Packet_No_CacheC1Ev>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x66(%ebp)
+mov    %eax,-0x56(%ebp)
-mov    %eax,-0x62(%ebp)
-movl   $0x1,-0x5e(%ebp)
+mov    %eax,-0x52(%ebp)
+movl   $0x1,-0x4e(%ebp)
-lea    -0x70(%ebp),%edx
+lea    -0x60(%ebp),%edx
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x66(%ebp)
+mov    %eax,-0x56(%ebp)
-mov    %eax,-0x62(%ebp)
-movl   $0x2,-0x5e(%ebp)
+mov    %eax,-0x52(%ebp)
+movl   $0x2,-0x4e(%ebp)
-lea    -0x70(%ebp),%edx
+lea    -0x60(%ebp),%edx
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38f>
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38b>
+mov    -0x28(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38f>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38b>
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x335>
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x331>
+movl   $0x2f9,0x8(%esp)
+movl   $"OnNoticeGuildSecede",0x4(%esp)
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x2f9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x68(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x32e>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38f>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38b>
-lea    -0x30(%ebp),%eax
+lea    -0x70(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x70(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38a>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x386>
```

## guild _ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader [DIFF] pm=255
```diff
-lea    -0x49(%ebp),%eax
+lea    -0x35(%ebp),%eax
-lea    -0x49(%ebp),%eax
+lea    -0x35(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x50(%ebp),%esi
+lea    -0x3c(%ebp),%esi
-lea    -0x50(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3bc>
-lea    -0x49(%ebp),%eax
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3b6>
+lea    -0x35(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
-xor    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49c>
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x492>
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x233>
-lea    -0x41(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x22a>
+lea    -0x2d(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x48(%ebp),%esi
+lea    -0x34(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1d9>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1d0>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1d3>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1f8>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1f8>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x210>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1f8>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x41(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3bc>
-lea    -0x41(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1ca>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1ef>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1ef>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x207>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x1ef>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x2d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3b6>
+lea    -0x2d(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x322>
-lea    -0x39(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x31c>
+lea    -0x25(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x25(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x2c(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2c8>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2c2>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2c2>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2e7>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2e7>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2ff>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2e7>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3bc>
-lea    -0x39(%ebp),%eax
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2bc>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2e1>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2e1>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2f9>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x2e1>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x25(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3b6>
+lea    -0x25(%ebp),%eax
-lea    -0xcd(%ebp),%eax
+lea    -0xcb(%ebp),%eax
-mov    %al,-0xc3(%ebp)
-lea    -0xcd(%ebp),%eax
-add    $0x5b,%eax
-mov    %eax,0xc(%esp)
-lea    -0xcd(%ebp),%eax
-add    $0x33,%eax
-mov    %eax,0x8(%esp)
-lea    -0xcd(%ebp),%eax
+mov    %al,-0xc1(%ebp)
+lea    -0xcb(%ebp),%eax
+lea    0x5b(%eax),%ecx
+lea    -0xcb(%ebp),%eax
+lea    0x33(%eax),%edx
+lea    -0xcb(%ebp),%eax
+mov    %ecx,0xc(%esp)
+mov    %edx,0x8(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-lea    -0xcd(%ebp),%edx
+lea    -0xcb(%ebp),%edx
-lea    -0x5e(%ebp),%eax
+lea    -0x4a(%ebp),%eax
-movl   $0x9,-0x54(%ebp)
-lea    -0x5e(%ebp),%eax
+movl   $0x9,-0x40(%ebp)
+lea    -0x4a(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49d>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x492>
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x43c>
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x434>
+movl   $0x76d,0x8(%esp)
+movl   $"OnNoticeGuildWarEnd",0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x76d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x54(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x435>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x42d>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49d>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x492>
-lea    -0x30(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x495>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x48d>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49d>
-nop
```

## guild _ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader [DIFF] pm=282
```diff
-sub    $0xbc,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+sub    $0xcc,%esp
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x56>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x50>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x444>
+mov    0x8(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+mov    %eax,-0x3c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x3c(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0xba>
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0xb9>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
-lea    -0xaf(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x444>
+lea    -0xbf(%ebp),%eax
-lea    -0x81(%ebp),%eax
+lea    -0x91(%ebp),%eax
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x77(%ebp)
-mov    -0x77(%ebp),%eax
-mov    %eax,-0xa5(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,-0xb5(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,-0x87(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,-0xb1(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,-0x83(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x2c(%ebp)
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x73(%ebp)
-mov    -0x73(%ebp),%eax
-mov    %eax,-0xa1(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x6f(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x7f(%ebp)
+mov    0x8(%ebp),%eax
-lea    -0x81(%ebp),%eax
+lea    -0x91(%ebp),%eax
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x352>
+cmpl   $0x0,-0x2c(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x356>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x221>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x22f>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1dd>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1c9>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1d7>
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1e6>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1f4>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1e6>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1f4>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1fe>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x20c>
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1e6>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x1f4>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x36c>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x370>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    -0x3c(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x28(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x34(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CGuildManager11CreateGuildEjP14CServerHandlerj>
+mov    %eax,-0x24(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x20(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x8(%esp)
-mov    0xa(%eax),%esi
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x299>
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16QueryGuildMemberEP14CServerHandler>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x20(%ebp)
-mov    0xe(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Get_GuildManagerEv>
-mov    %esi,0xc(%esp)
-mov    -0x24(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CGuildManager11CreateGuildEjP14CServerHandlerj>
-mov    %eax,-0x28(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x28e>
+mov    %eax,0x8(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser21SendSetGuildKeyToUserEjj>
+mov    -0x34(%ebp),%eax
+mov    %eax,-0xad(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x16,%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xbf(%ebp),%eax
+add    $0x16,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+mov    %al,-0x92(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x68(%eax),%eax
+lea    -0xbf(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager11AttendGuildEjj>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,0x4(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16QueryGuildMemberEP14CServerHandler>
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x20(%ebp),%edx
-mov    0xe(%edx),%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser21SendSetGuildKeyToUserEjj>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x9d(%ebp)
-mov    -0x20(%ebp),%eax
-add    $0x16,%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0xaf(%ebp),%eax
-add    $0x16,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x82(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%eax
-lea    -0xaf(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-add    $0x290,%ecx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <_ZN13CGuildManager11AttendGuildEjj>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-lea    -0x81(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+lea    -0x91(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x444>
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3e8>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3ea>
+movl   $0x116d,0x8(%esp)
+movl   $"OnDBReplyGuildCreate",0x4(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x116d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3e1>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3e3>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x444>
-lea    -0x34(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x43d>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x43f>
-add    $0xbc,%esp
+add    $0xcc,%esp
```

## guild _ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader [DIFF] pm=392
```diff
-sub    $0x114c,%esp
+sub    $0x216c,%esp
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5e8>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5c4>
-mov    0x8(%ebp),%eax
+lea    -0x135(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN31Packet_Guild_Reply_Guild_SecedeC1Ev>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x16(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x1a(%eax),%eax
+mov    %al,-0x2d(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x3d(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-lea    -0x125(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN31Packet_Guild_Reply_Guild_SecedeC1Ev>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
+cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x169>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x18e>
-mov    %ebx,0xc(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0xc(%esp)
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6a4>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x40(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x1da>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%ebx
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x1f3>
-mov    %ebx,0xc(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0xc(%esp)
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6a4>
+mov    -0x40(%ebp),%eax
+mov    %eax,-0x12b(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
+mov    %ax,-0x127(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,-0x125(%ebp)
-mov    0xa(%eax),%eax
-mov    %eax,-0x11b(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild26GetTotalCnt_Of_GuildDBInfoEv>
-mov    %ax,-0x117(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x115(%ebp)
-mov    -0x30(%ebp),%eax
-mov    %eax,-0x111(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0x1a(%eax),%eax
-mov    %al,-0x109(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x121(%ebp)
+movzbl -0x2d(%ebp),%eax
+mov    %al,-0x119(%ebp)
+mov    0x8(%ebp),%eax
-mov    -0x28(%ebp),%edx
+mov    0x8(%ebp),%edx
-lea    -0x125(%ebp),%eax
+lea    -0x135(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-lea    -0x125(%ebp),%eax
+lea    -0x135(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x2b2>
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%eax
-cmp    $0x1,%eax
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x2b2>
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x10d(%ebp)
-lea    -0x125(%ebp),%eax
-movl   $0x52,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%eax
-cmp    %eax,%edx
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x44a>
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
+cmpl   $0x0,-0x34(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x28f>
+cmpl   $0x1,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x599>
+mov    -0x3c(%ebp),%eax
+cmp    -0x38(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x40d>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-setne  %al
+sete   %al
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x348>
-lea    -0x7a(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x3a7>
+lea    -0x76(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15Packet_No_CacheC1Ev>
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+movzbl %al,%eax
+mov    %eax,-0x68(%ebp)
+movl   $0x1,-0x64(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x76(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+movzbl %al,%eax
+mov    %eax,-0x68(%ebp)
+movl   $0x2,-0x64(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x76(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader>
+lea    -0x2149(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN21Packet_DBMW_Query_MsgC1Ev>
+movl   $0x4f00,-0x213f(%ebp)
+movl   $0x2,-0x213b(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"upDate charac_info set guild_secede = 1 where charac_no = %u",0x4(%esp)
+lea    -0x1136(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <sprintf>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x2149(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x40d>
+lea    -0x90(%ebp),%eax
-mov    %eax,-0x70(%ebp)
+mov    %eax,-0x86(%ebp)
-mov    %eax,-0x6c(%ebp)
+mov    %eax,-0x82(%ebp)
-mov    %eax,-0x64(%ebp)
+mov    %eax,-0x7e(%ebp)
-mov    %eax,-0x68(%ebp)
-lea    -0x7a(%ebp),%eax
+mov    %eax,-0x7a(%ebp)
+lea    -0x90(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x44a>
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15Packet_No_CacheC1Ev>
-mov    -0x28(%ebp),%eax
-mov    0x3d(%eax),%eax
-mov    %eax,-0x86(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-movzbl %al,%eax
-mov    %eax,-0x82(%ebp)
-movl   $0x1,-0x7e(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x90(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-mov    -0x28(%ebp),%eax
-mov    0x3d(%eax),%eax
-mov    %eax,-0x86(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-movzbl %al,%eax
-mov    %eax,-0x82(%ebp)
-movl   $0x2,-0x7e(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x90(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader>
-lea    -0x1138(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN21Packet_DBMW_Query_MsgC1Ev>
-movl   $0x2,-0x112a(%ebp)
-movl   $0x4f00,-0x112e(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,0x8(%esp)
-movl   $"upDate charac_info set guild_secede = 1 where charac_no = %u",0x4(%esp)
-lea    -0x1138(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <sprintf>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x1138(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-lea    -0xd3(%ebp),%eax
+lea    -0xe3(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0xd3(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0xcb(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0x1a(%eax),%eax
+mov    -0x40(%ebp),%eax
+mov    %eax,-0xe3(%ebp)
+mov    -0x38(%ebp),%eax
+mov    %eax,-0xdb(%ebp)
+movzbl -0x2d(%ebp),%eax
-mov    %ax,-0xc7(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %ax,-0xd7(%ebp)
+mov    0x8(%ebp),%eax
-lea    -0xd3(%ebp),%eax
+lea    -0xe3(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-lea    -0xd3(%ebp),%eax
+lea    -0xe3(%ebp),%eax
-lea    -0xd3(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+lea    -0xe3(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-lea    0x290(%edx),%ecx
-lea    -0xd3(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+lea    -0xe3(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5bc>
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%eax
-cmp    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5bc>
-mov    -0x2c(%ebp),%eax
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x56d>
+cmpl   $0x1,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x56d>
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5a2>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x553>
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-movl   $0x0,-0x10d(%ebp)
-lea    -0x125(%ebp),%eax
+movl   $0x0,-0x11d(%ebp)
+lea    -0x135(%ebp),%eax
-mov    -0x30(%ebp),%eax
+mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6a4>
+mov    -0x34(%ebp),%eax
+mov    %eax,-0x11d(%ebp)
+lea    -0x135(%ebp),%eax
+movl   $0x52,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6a4>
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x664>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x644>
+movl   $0xbff,0x8(%esp)
+movl   $"OnDBReplyGuildSecede",0x4(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xbff,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x98(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x65d>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x63d>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6a4>
-lea    -0x38(%ebp),%eax
+lea    -0xa0(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0xa0(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6b9>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x69f>
-add    $0x114c,%esp
+add    $0x216c,%esp
```

## guild _ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader [DIFF] pm=536
```diff
-mov    %eax,-0x34(%ebp)
-lea    -0xd7(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+lea    -0xdf(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-mov    %eax,-0xc9(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %eax,-0xd1(%ebp)
+mov    -0x3c(%ebp),%eax
-mov    %eax,-0xc4(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1b(%eax),%edx
+mov    %eax,-0xcc(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    (%eax),%edx
+mov    %edx,-0xc8(%ebp)
+mov    0x4(%eax),%edx
+mov    %edx,-0xc4(%ebp)
+mov    0x8(%eax),%edx
-mov    0x1f(%eax),%edx
+mov    0xc(%eax),%edx
-mov    0x23(%eax),%edx
+mov    0x10(%eax),%edx
-mov    0x27(%eax),%edx
+mov    0x14(%eax),%edx
-mov    0x2b(%eax),%edx
+mov    0x18(%eax),%edx
-mov    0x2f(%eax),%edx
+mov    0x1c(%eax),%edx
-mov    0x33(%eax),%edx
+mov    0x20(%eax),%edx
-mov    0x37(%eax),%edx
+mov    0x24(%eax),%edx
-mov    0x3b(%eax),%edx
+mov    0x28(%eax),%edx
-mov    0x3f(%eax),%edx
+mov    0x2c(%eax),%edx
-mov    0x43(%eax),%edx
+mov    0x30(%eax),%edx
-mov    0x47(%eax),%edx
-mov    %edx,-0x94(%ebp)
-mov    0x4b(%eax),%edx
-mov    %edx,-0x90(%ebp)
-movzbl 0x4f(%eax),%eax
-mov    %al,-0x8c(%ebp)
-mov    -0x34(%ebp),%eax
+movzbl 0x34(%eax),%eax
+mov    %al,-0x94(%ebp)
+mov    -0x3c(%ebp),%eax
-mov    %ax,-0x8a(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %ax,-0x92(%ebp)
+mov    -0x3c(%ebp),%eax
-mov    %al,-0x8b(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %al,-0x93(%ebp)
+mov    -0x3c(%ebp),%eax
-mov    %eax,%esi
-mov    -0x34(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+movl   $0x19b3,0x8(%esp)
+movl   $"OnGuildCargoPushItem",0x4(%esp)
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x3c(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-movzwl %ax,%eax
-mov    %eax,-0xf8(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0xf4(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0xf0(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%edi
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x19b3,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x84(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x28(%esp)
+movzwl %ax,%edi
+mov    -0x3c(%ebp),%eax
+mov    0x16(%eax),%esi
+mov    -0x3c(%ebp),%eax
+mov    0x12(%eax),%ebx
+mov    -0x3c(%ebp),%eax
+mov    0xe(%eax),%ecx
+mov    -0x3c(%ebp),%eax
+mov    0xa(%eax),%edx
+mov    -0x38(%ebp),%eax
+mov    %eax,0x28(%esp)
-mov    -0xfc(%ebp),%edx
-mov    %edx,0x20(%esp)
-mov    -0xf8(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0xf4(%ebp),%edx
-mov    %edx,0x18(%esp)
-mov    -0xf0(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0xfc(%ebp),%eax
+mov    %eax,0x20(%esp)
+mov    %edi,0x1c(%esp)
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
-lea    -0x84(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x1f7>
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x1d3>
-lea    -0x7c(%ebp),%eax
+lea    -0x74(%ebp),%eax
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
+mov    %eax,-0x34(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x25b>
+cmpl   $0x0,-0x30(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x237>
-lea    -0x74(%ebp),%eax
+lea    -0x6c(%ebp),%eax
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
-mov    -0x2c(%ebp),%eax
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
+mov    -0x30(%ebp),%eax
-mov    %eax,-0xcd(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %eax,-0xd5(%ebp)
+mov    -0x3c(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x2ea>
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x2c6>
-lea    -0x6c(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x64,-0xc5(%ebp)
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0x64,-0xcd(%ebp)
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x36b>
-mov    -0x34(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x34c>
+mov    -0x3c(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-lea    -0x64(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xcc,-0xc5(%ebp)
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
-mov    -0x28(%ebp),%eax
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0xcc,-0xcd(%ebp)
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
+mov    -0x2c(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x3e8>
-mov    -0x34(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x3c9>
+mov    -0x3c(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-lea    -0x5c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xb5,-0xc5(%ebp)
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
-mov    -0x28(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0xb5,-0xcd(%ebp)
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
+mov    -0x2c(%ebp),%eax
-xor    $0x1,%eax
+cmp    $0x1,%al
+setne  %al
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x46d>
-mov    -0x34(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x450>
+mov    -0x3c(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0xc3,-0xc5(%ebp)
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
-mov    -0x2c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0xc3,-0xcd(%ebp)
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
+mov    -0x30(%ebp),%eax
-mov    %al,-0x21(%ebp)
-cmpb   $0x3,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x504>
-cmpb   $0x1,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x504>
-cmpb   $0x2,-0x21(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x504>
-movzbl -0x21(%ebp),%edi
-mov    -0x34(%ebp),%eax
+mov    %al,-0x25(%ebp)
+cmpb   $0x3,-0x25(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x4e7>
+cmpb   $0x1,-0x25(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x4e7>
+cmpb   $0x2,-0x25(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x4e7>
+movzbl -0x25(%ebp),%edi
+mov    -0x3c(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x24,-0xc5(%ebp)
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
-mov    -0x34(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0x24,-0xcd(%ebp)
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
+mov    -0x3c(%ebp),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    %eax,-0x80(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0xf8(%ebp)
+mov    -0x3c(%ebp),%eax
+movzbl 0x1a(%eax),%eax
+movzbl %al,%edi
+mov    -0x3c(%ebp),%eax
+mov    0x16(%eax),%esi
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    %eax,%ebx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    -0xf8(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    %edi,0x10(%esp)
+mov    %esi,0xc(%esp)
+lea    -0x80(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi>
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %al,-0xcd(%ebp)
+mov    -0x80(%ebp),%eax
+mov    %eax,-0xcc(%ebp)
+cmpl   $0xc1,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x68f>
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+add    $0x1d,%eax
+mov    %eax,-0xf4(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    0x6(%eax),%eax
+mov    %eax,-0xf0(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    0x1(%eax),%eax
-mov    -0x34(%ebp),%eax
-movzbl 0x1a(%eax),%eax
-movzbl %al,%esi
-mov    -0x34(%ebp),%eax
-mov    0x16(%eax),%ebx
-mov    -0x34(%ebp),%eax
-add    $0x1b,%eax
-mov    %eax,-0xec(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-lea    -0x88(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    -0xec(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildCargo10InsertItemER11DnfItemInfoRiihi>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %al,-0xc5(%ebp)
-mov    -0x88(%ebp),%eax
-mov    %eax,-0xc4(%ebp)
-cmpl   $0xc1,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x6ba>
-mov    -0x34(%ebp),%eax
-add    $0x38,%eax
-mov    %eax,-0xe8(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x21(%eax),%eax
-mov    %eax,-0xe4(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1c(%eax),%eax
-mov    %eax,%edi
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    -0x3c(%ebp),%eax
+mov    0xa(%eax),%eax
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    -0xe8(%ebp),%edx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    -0xf4(%ebp),%edx
-mov    -0xe4(%ebp),%edx
+mov    -0xf0(%ebp),%edx
-mov    -0x34(%ebp),%eax
-add    $0x1b,%eax
-mov    %eax,-0xe0(%ebp)
-mov    -0x88(%ebp),%eax
-mov    %eax,-0xdc(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x68(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    %eax,-0xec(%ebp)
+mov    -0x80(%ebp),%edi
+mov    -0x30(%ebp),%eax
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,%edi
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    -0xe0(%ebp),%edx
+mov    -0x3c(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,%esi
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    -0xec(%ebp),%edx
-mov    -0xdc(%ebp),%edx
-mov    %edx,0x14(%esp)
+mov    %edi,0x14(%esp)
-mov    %edi,0xc(%esp)
+mov    %esi,0xc(%esp)
-mov    %esi,0x4(%esp)
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,%esi
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildCargoEv>
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,%ebx
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildCargoEv>
+mov    %ebx,0x8(%esp)
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-lea    -0xd7(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
+lea    -0xdf(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x750>
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x729>
+movl   $0x1a48,0x8(%esp)
+movl   $"OnGuildCargoPushItem",0x4(%esp)
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x1a48,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x749>
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x722>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
-lea    -0x3c(%ebp),%eax
+lea    -0x90(%ebp),%eax
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7a5>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x784>
```

## guild _ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader [DIFF] pm=87
```diff
-lea    -0x3d(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%esi
+lea    -0x34(%ebp),%esi
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x218>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x213>
+lea    -0x2d(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x5a(%ebp),%eax
+lea    -0x4a(%ebp),%eax
-movl   $0x0,-0x50(%ebp)
+movl   $0x0,-0x40(%ebp)
-mov    %eax,-0x4c(%ebp)
-movl   $0x1,-0x48(%ebp)
+mov    %eax,-0x3c(%ebp)
+movl   $0x1,-0x38(%ebp)
-lea    -0x5a(%ebp),%edx
+lea    -0x4a(%ebp),%edx
-movl   $0x0,-0x50(%ebp)
+movl   $0x0,-0x40(%ebp)
-mov    %eax,-0x4c(%ebp)
-movl   $0x2,-0x48(%ebp)
+mov    %eax,-0x3c(%ebp)
+movl   $0x2,-0x38(%ebp)
-lea    -0x5a(%ebp),%edx
+lea    -0x4a(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x320>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x319>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x320>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x319>
-jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2ba>
+jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2b3>
+movl   $0x3c9,0x8(%esp)
+movl   $"OnNoticeGuildDismiss",0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x3c9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x54(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2ac>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x320>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x319>
-lea    -0x2c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x31b>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x314>
```

## guild _ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader [DIFF] pm=130
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x55>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x4f>
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
-mov    -0x10(%ebp),%eax
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
+mov    0x8(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0xb9>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0xb8>
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x118>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x111>
-movzwl -0x5f(%ebp),%eax
-movzwl %ax,%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+movl   $0x2d,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
+mov    -0x10(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x155>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x14b>
-movzwl -0x5f(%ebp),%eax
-movzwl %ax,%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+movl   $0x2d,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x328>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x31c>
+movl   $0x1110,0x8(%esp)
+movl   $"OnRequestGuildCreate",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x1110,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x321>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x315>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x37d>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x371>
```

## guild _ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader [DIFF] pm=102
```diff
-push   %edi
-sub    $0x7c,%esp
+add    $0xffffff80,%esp
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    0xc(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,-0x14(%ebp)
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0xa7>
+jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0xb2>
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x229>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x10e>
+je     <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x115>
-lea    -0x3c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
-lea    -0x62(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x229>
+lea    -0x5c(%ebp),%eax
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x58(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x54(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,-0x48(%ebp)
-lea    -0x62(%ebp),%edx
+lea    -0x5c(%ebp),%edx
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x229>
-jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x1d1>
+jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x1cf>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x1ca>
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x1c8>
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x229>
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x226>
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x224>
-add    $0x7c,%esp
+sub    $0xffffff80,%esp
-pop    %edi
```

## guild _ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader [DIFF] pm=61
```diff
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4aa>
-xor    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4ae>
+je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4aa>
-je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f9>
+je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f8>
-je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f9>
+je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f8>
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x14c>
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x149>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4aa>
+mov    -0x34(%ebp),%edx
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f2>
-mov    -0x34(%ebp),%eax
-movb   $0x1,0xa(%eax)
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f9>
-mov    -0x34(%ebp),%eax
-movb   $0x2,0xa(%eax)
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f0>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f5>
+mov    $0x2,%eax
+mov    %al,0xa(%edx)
-cwtl
-movl   $0x1,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x23d>
-movl   $0x2,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x234>
+mov    $0x2,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x239>
+mov    $0x1,%eax
+mov    %eax,-0x28(%ebp)
-cwtl
-lea    -0x70(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
+lea    -0x70(%ebp),%edx
+mov    %edx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x39a>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x398>
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x373>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3c6>
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x371>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3c4>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3d6>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3d4>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4aa>
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x452>
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x450>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x44b>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x449>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4aa>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4a7>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4a5>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
-nop
```

## guild _ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader [DIFF] pm=59
```diff
-mov    0x12(%eax),%edi
+mov    0x14(%eax),%edi
-mov    0xe(%eax),%esi
+mov    0x10(%eax),%esi
-mov    0xa(%eax),%ebx
+mov    0xc(%eax),%ebx
-lea    -0x4c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x233>
-mov    0xa(%eax),%eax
+mov    0xc(%eax),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x233>
-mov    0xe(%eax),%edi
+mov    0x10(%eax),%edi
-mov    0xa(%eax),%esi
+mov    0xc(%eax),%esi
-mov    0x12(%eax),%ebx
+mov    0x14(%eax),%ebx
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x233>
-jne    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1db>
+jne    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1d9>
+movl   $0x1e29,0x8(%esp)
+movl   $"OnWebGuildBoardDelete",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x1e29,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1d4>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1d2>
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x233>
-lea    -0x2c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x230>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x22e>
```

## guild _ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader [DIFF] pm=110
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x4c>
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x295>
+mov    0x8(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0xb6>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0xab>
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x295>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x11d>
+je     <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x117>
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
-lea    -0x6f(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x295>
+lea    -0x6b(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x65(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x5d(%ebp)
+mov    0x8(%ebp),%eax
+mov    $0x14,%eax
-jg     <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x172>
-mov    -0x10(%ebp),%eax
-mov    -0x18(%ebp),%edx
+cmovbe -0x10(%ebp),%eax
+mov    0x8(%ebp),%edx
-lea    -0x6f(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x192>
-mov    -0x18(%ebp),%eax
-add    $0x12,%eax
-movl   $0x14,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x6f(%ebp),%eax
+lea    -0x6b(%ebp),%eax
-lea    -0x6f(%ebp),%edx
+lea    -0x6b(%ebp),%edx
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x295>
-jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x262>
+jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x23b>
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x234>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x295>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2b7>
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x290>
```

## guild _ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader [DIFF] pm=85
```diff
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x257>
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x257>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x120>
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x11d>
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-mov    %edx,0x8(%esp)
+movl   $0x31,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x257>
+mov    -0x14(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x15d>
+je     <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x157>
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-mov    %edx,0x8(%esp)
+movl   $0x31,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-mov    %edx,0x8(%esp)
+movl   $0x31,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x257>
-jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x208>
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x1fd>
+movl   $0xfca,0x8(%esp)
+movl   $"OnDBMWDeleteToBlackList",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xfca,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x201>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x1f6>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x257>
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x25d>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x252>
```

## guild _ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader [DIFF] pm=45
```diff
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x30(%ebp),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x217>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x247>
-jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1bd>
+jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1e1>
-mov    %eax,%ebx
+mov    %eax,0x4(%esp)
+movl   $"CPacketTranslater::OnNoticeGuildMailArrive() Exception Break : %s\n",(%esp)
+call   <T> <printf>
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,0xc(%esp)
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1b6>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1da>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x217>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x247>
+movl   $"CPacketTranslater::OnNoticeGuildMailArrive() Exception Break",(%esp)
+call   <T> <puts>
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x212>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x242>
```

## guild _ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader [DIFF] pm=16
```diff
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x1ab>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x1a6>
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x166>
+je     <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x161>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2ae>
-jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x24d>
+jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x248>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x246>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x241>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2ae>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2ae>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2a9>
```

## guild _ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader [DIFF] pm=129
```diff
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x120>
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x11d>
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-mov    %edx,0x8(%esp)
+movl   $0x31,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
+mov    -0x14(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
+test   %eax,%eax
+sete   %al
-je     <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x15f>
-movb   $0x2,-0x35(%ebp)
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x65(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x1c3>
+mov    -0x10(%ebp),%eax
-cmp    $0x9,%eax
-setg   %al
+cmp    $0x9,%ax
+setbe  %al
-je     <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x19a>
-movb   $0x4,-0x35(%ebp)
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x65(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
+je     <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x1a0>
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
-mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-mov    %edx,0x8(%esp)
+movl   $0x31,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
+movb   $0x4,-0x35(%ebp)
+lea    -0x65(%ebp),%eax
+movl   $0x31,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
+movb   $0x2,-0x35(%ebp)
+lea    -0x65(%ebp),%eax
+movl   $0x31,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
-jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x264>
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x260>
+movl   $0xf8d,0x8(%esp)
+movl   $"OnDBMWResisterToBlackList",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xf8d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x25d>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x259>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2b9>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2b5>
```

## guild _ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader [DIFF] pm=247
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x34(%ebp)
-jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56>
+jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50>
-lea    -0x7c(%ebp),%eax
+lea    -0x6c(%ebp),%eax
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x30(%ebp)
-add    $0x10,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
+lea    0x10(%eax),%edx
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x74(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x30(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x185>
+jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x181>
-lea    -0x6c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x217>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x212>
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x64(%ebp),%eax
+lea    -0x54(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x294>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x289>
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
-xor    $0x1,%eax
+cmp    $0x1,%al
+setne  %al
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x319>
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x30a>
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x3b0>
+je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x332>
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x3b0>
+je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x332>
-je     <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x3b0>
-movzbl -0x21(%ebp),%edi
-mov    -0x34(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0x197f,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildCargoCheckPushItem : Access Deny(%d,%d,%d)",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movb   $0x24,-0x91(%ebp)
-lea    -0xa3(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
-mov    -0x34(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x3b9>
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
+movzbl -0x21(%ebp),%ebx
+movl   $0x197f,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x14(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargoCheckPushItem : Access Deny(%d,%d,%d)",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0x24,-0x91(%ebp)
+lea    -0xa3(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
-jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4b3>
+jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4a0>
+movl   $0x1994,0x8(%esp)
+movl   $"OnGuildCargoCheckPushItem",0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x1994,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4ac>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x499>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
-lea    -0x3c(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x508>
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4f5>
```

## guild _ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader [DIFF] pm=67
```diff
-jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xdf>
-lea    -0x35(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xdc>
+lea    -0x25(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%esi
+lea    -0x2c(%ebp),%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xbc>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xb9>
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x13c>
-lea    -0x35(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x134>
+lea    -0x25(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x244>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x23a>
+mov    -0x24(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x244>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x23a>
-jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1de>
+jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1d4>
+movl   $0x6a4,0x8(%esp)
+movl   $"OnUpdateChangableCharInfo",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x6a4,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1d7>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1cd>
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x244>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x23a>
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x23f>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x235>
```

## guild _ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader [DIFF] pm=159
```diff
-lea    -0x49(%ebp),%eax
+lea    -0x39(%ebp),%eax
-lea    -0x49(%ebp),%eax
+lea    -0x39(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x50(%ebp),%esi
+lea    -0x40(%ebp),%esi
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x29e>
-lea    -0x49(%ebp),%eax
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x298>
+lea    -0x39(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0x63(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+lea    -0x53(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x31(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x31(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x48(%ebp),%esi
+lea    -0x38(%ebp),%esi
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x41(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x29e>
-lea    -0x41(%ebp),%eax
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x298>
+lea    -0x31(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x24(%ebp)
-add    $0x10,%eax
+lea    0x10(%eax),%edx
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+cmpl   $0x0,-0x20(%ebp)
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x257>
+movl   $0xb0e,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0xa(%eax),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == pclUser, Char Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x374>
+mov    -0x24(%ebp),%eax
+mov    %eax,-0x49(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x45(%ebp)
+mov    -0x28(%ebp),%eax
+movzbl 0x12(%eax),%eax
+mov    %al,-0x41(%ebp)
+lea    -0x53(%ebp),%eax
+movl   $0x13,0x8(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x25a>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xb0e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == pclUser, Char Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x37c>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x59(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x55(%ebp)
-mov    -0x24(%ebp),%eax
-movzbl 0x12(%eax),%eax
-mov    %al,-0x51(%ebp)
-lea    -0x63(%ebp),%eax
-movl   $0x13,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x37c>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x374>
-jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x31e>
+jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x316>
+movl   $0xb19,0x8(%esp)
+movl   $"OnDBMWReplySendGuildLetter",0x4(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xb19,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x317>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x30f>
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x37c>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x374>
-lea    -0x30(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x64(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x377>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x36f>
```

## guild _ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader [DIFF] pm=152
```diff
-push   %edi
-sub    $0x7c,%esp
+sub    $0x60,%esp
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x53>
-movl   $0x1c9d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == m_pclApp",0x8(%esp)
-movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
+je     <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x198>
+mov    -0x20(%ebp),%eax
+mov    0x11(%eax),%eax
+mov    %eax,-0x1c(%ebp)
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x11(%eax),%eax
+lea    0x10(%eax),%edx
+mov    -0x1c(%ebp),%eax
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0xb7>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x7f>
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a9>
+mov    -0x20(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x11e>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0xe6>
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
-mov    -0x24(%ebp),%eax
-add    $0x16,%eax
-mov    %eax,-0x5c(%ebp)
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a9>
+mov    -0x20(%ebp),%eax
+lea    0x16(%eax),%esi
+mov    -0x20(%ebp),%eax
-movsbl %al,%edi
-mov    -0x24(%ebp),%eax
-mov    0x11(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xd(%eax),%ebx
-mov    -0x28(%ebp),%eax
+movsbl %al,%ebx
+mov    -0x10(%ebp),%eax
-mov    -0x5c(%ebp),%edx
-mov    %edx,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    -0x28(%ebp),%edx
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x10(%ebp),%edx
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
-mov    -0x24(%ebp),%eax
-mov    0x11(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xd(%eax),%ebx
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a9>
+mov    -0x10(%ebp),%eax
-mov    -0x2c(%ebp),%edx
+mov    -0x18(%ebp),%edx
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a9>
+movl   $0x1c9d,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == m_pclApp",0x8(%esp)
+movl   $"./log/GuildBoard",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a9>
-jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x25e>
+jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x24f>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x257>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x248>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a9>
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a4>
-add    $0x7c,%esp
+add    $0x60,%esp
-pop    %edi
```

## guild _ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader [DIFF] pm=57
```diff
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%esi
+lea    -0x2c(%ebp),%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x158>
-lea    -0x35(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x152>
+lea    -0x25(%ebp),%eax
-xor    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x230>
+je     <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x258>
-xor    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x233>
+je     <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x258>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x258>
-jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1d4>
+jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1f2>
-mov    %eax,%ebx
+mov    %eax,0x4(%esp)
+movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break : %s\n",(%esp)
+call   <T> <printf>
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,0xc(%esp)
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1cd>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1eb>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x258>
+movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break",(%esp)
+call   <T> <puts>
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x229>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x253>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
-nop
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
-nop
```
