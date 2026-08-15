## dbmw _ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader [DIFF] pm=68
```diff
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32a>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31b>
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31e>
+movl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0xdd>
-movl   $0x56,-0x50(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b0>
+jne    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1a9>
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0xeb>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0xea>
-movl   $0x22,-0x50(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b0>
+movl   $0x22,-0x20(%ebp)
+nop
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b3>
-mov    %eax,-0x90(%ebp)
+mov    %eax,-0x8c(%ebp)
-mov    -0x90(%ebp),%eax
+mov    -0x8c(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1a9>
+je     <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b2>
-movl   $0x2,-0x50(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b0>
-movl   $0x0,-0x50(%ebp)
+movl   $0x2,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b3>
+movl   $0x56,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x1b3>
+nop
+movzwl -0x82(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x84(%ebp),%ebx
-mov    %eax,-0x20(%ebp)
-movzwl -0x82(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x84(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
-mov    -0x50(%ebp),%edi
-mov    -0x24(%ebp),%eax
-add    $0x13,%eax
-mov    %eax,-0x8c(%ebp)
+mov    -0x24(%ebp),%eax
+lea    0x13(%eax),%edi
-mov    %edi,0x18(%esp)
-mov    -0x8c(%ebp),%eax
-mov    %eax,0x14(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    %edi,0x14(%esp)
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
-jne    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2ce>
+jne    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2bf>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2c7>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x2b8>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x323>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x314>
-jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x32b>
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
+nop
+jmp    <T> <_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader+0x31f>
```

## dbmw _ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader [DIFF] pm=52
```diff
-sub    $0x250,%esp
+sub    $0x240,%esp
-je     <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x175>
-lea    -0x23e(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x165>
+lea    -0x236(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x14(%ebp)
-lea    -0x23e(%ebp),%eax
+lea    -0x236(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
+xor    $0x1,%eax
-je     <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jne    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x168>
-mov    %eax,-0x18(%ebp)
-movzwl -0x23c(%ebp),%eax
-movzwl %ax,%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x212,-0x10(%ebp)
-lea    -0x23e(%ebp),%eax
-mov    -0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
+mov    %eax,-0x10(%ebp)
+lea    -0x236(%ebp),%eax
+movl   $0x212,0x8(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x169>
-jne    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x119>
+jne    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x109>
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x112>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x102>
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x169>
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x16e>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x15e>
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x169>
-add    $0x250,%esp
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x169>
+nop
+add    $0x240,%esp
```

## dbmw _ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader [DIFF] pm=23
```diff
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27e>
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x280>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
-mov    -0x38(%ebp),%edx
+jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
+mov    -0x38(%ebp),%eax
+mov    %eax,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x222>
+jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x224>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x21b>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x21d>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x277>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x279>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
```

## dbmw _ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader [DIFF] pm=284
```diff
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a3>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x444>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
-movzbl %al,%edi
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%ebx
+mov    %al,-0x31(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0xf(%eax),%eax
+mov    %eax,-0x2c(%ebp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x31(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x0,-0x5c(%ebp)
-lea    -0x71(%ebp),%eax
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x0,-0x64(%ebp)
+lea    -0x79(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x9c>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xac>
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xae>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xbe>
-jb     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xb8>
+jb     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xc8>
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xd3>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xe3>
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xdf>
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xef>
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%edx
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%eax
+mov    -0x30(%ebp),%edx
+movzbl -0x31(%ebp),%eax
-lea    -0x71(%ebp),%ecx
+lea    -0x79(%ebp),%ecx
-lea    -0x5c(%ebp),%ecx
+lea    -0x64(%ebp),%ecx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x182>
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%edi
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x17d>
+movzbl -0x31(%ebp),%ebx
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x14(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
-mov    %eax,-0x78(%ebp)
-lea    -0x78(%ebp),%eax
+mov    %eax,-0x80(%ebp)
+lea    -0x80(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-lea    -0x18e(%ebp),%edx
-mov    $0x100,%ebx
+mov    %eax,-0x24(%ebp)
+lea    -0x1a0(%ebp),%ebx
+mov    $0x40,%edx
+mov    %ebx,%edi
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1f1>
-mov    %ax,(%edx)
-add    $0x2,%edx
-sub    $0x2,%ebx
-mov    %ebx,%ecx
-shr    $0x2,%ecx
-mov    %edx,%edi
-mov    %edi,%edx
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x20b>
-mov    %ax,(%edx)
-add    $0x2,%edx
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x219>
-mov    %al,(%edx)
-add    $0x1,%edx
-lea    -0x71(%ebp),%eax
+lea    -0x79(%ebp),%eax
-lea    -0x18e(%ebp),%eax
+lea    -0x1a0(%ebp),%eax
-movb   $0x1e,-0x126(%ebp)
-movb   $0x1f,-0x111(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%eax
+movb   $0x1e,-0x138(%ebp)
+movb   $0x1f,-0x123(%ebp)
+movl   $0x0,-0x84(%ebp)
+mov    -0x2c(%ebp),%eax
-mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%edx
-lea    -0x7c(%ebp),%edx
+lea    -0x84(%ebp),%edx
-lea    -0x18e(%ebp),%edx
+lea    -0x1a0(%ebp),%edx
-je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x2fe>
-mov    -0x5c(%ebp),%eax
-mov    %eax,-0x1a4(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%edi
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x2b7>
+mov    -0x64(%ebp),%esi
+movzbl -0x31(%ebp),%ebx
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x1a4(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
-lea    -0x8e(%ebp),%eax
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
+lea    -0x96(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x84(%ebp)
-movzwl -0x8c(%ebp),%eax
-movzwl %ax,%esi
-lea    -0x8e(%ebp),%ebx
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x20(%ebp)
+movzwl -0x94(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x96(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
-mov    -0x7c(%ebp),%edi
-mov    %edi,-0x1a0(%ebp)
-mov    -0x5c(%ebp),%eax
-mov    %eax,-0x19c(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%edi
-mov    -0x28(%ebp),%eax
-mov    0xf(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0xb(%eax),%ebx
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x1a0(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x19c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x84(%ebp),%ecx
+mov    -0x64(%ebp),%edx
+movzbl -0x31(%ebp),%eax
+mov    %ecx,0x1c(%esp)
+mov    %edx,0x18(%esp)
+mov    %eax,0x14(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+lea    -0xa0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
-jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x447>
+jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x3e8>
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x440>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x3e1>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x49c>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x43d>
-jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x4a4>
+jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x445>
```

## dbmw _ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader [DIFF] pm=72
```diff
-je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ce>
-movb   $0x0,-0x29(%ebp)
+je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1c9>
+movb   $0x0,-0x25(%ebp)
+movl   $0x0,-0x2c(%ebp)
-movl   $0x0,-0x34(%ebp)
-mov    %eax,-0x10(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-lea    -0x34(%ebp),%eax
-mov    %eax,0x10(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,0xc(%esp)
-lea    -0x29(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x50(%edx),%ecx
+lea    -0x30(%ebp),%edx
+mov    %edx,0x10(%esp)
+lea    -0x2c(%ebp),%edx
+mov    %edx,0xc(%esp)
+lea    -0x25(%ebp),%edx
+mov    %edx,0x8(%esp)
-mov    %edx,(%esp)
+mov    %ecx,(%esp)
-je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x9b>
+je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x96>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
-movzbl -0x29(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
+movzbl -0x25(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
-lea    -0x46(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
+lea    -0x42(%ebp),%eax
-movl   $0x4,-0x3c(%ebp)
+movl   $0x4,-0x38(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %ax,-0x34(%ebp)
-mov    %ax,-0x38(%ebp)
-mov    -0x34(%ebp),%eax
-mov    %ax,-0x36(%ebp)
-movzwl -0x44(%ebp),%eax
+mov    %ax,-0x32(%ebp)
+movzwl -0x40(%ebp),%eax
-lea    -0x46(%ebp),%ebx
+lea    -0x42(%ebp),%ebx
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
-jne    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x172>
+jne    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x16d>
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x16b>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x166>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1c7>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1c2>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader+0x1ca>
```

## dbmw _ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader [DIFF] pm=74
```diff
-lea    -0x39(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x44(%ebp),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x19f>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x19d>
+lea    -0x3d(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x275>
-lea    -0x4fe(%ebp),%eax
+jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x273>
+lea    -0x502(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-cmp    $0x12c,%eax
-jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x12d>
-mov    $0x12c,%eax
-mov    %eax,-0x4f4(%ebp)
+mov    %eax,-0x28(%ebp)
+cmpl   $0x12c,-0x28(%ebp)
+jle    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x134>
+movl   $0x12c,-0x28(%ebp)
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x154>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x155>
-mov    -0x28(%ebp),%edx
+mov    -0x2c(%ebp),%edx
-mov    %edx,-0x4f0(%ebp,%eax,4)
+mov    %edx,-0x4f4(%ebp,%eax,4)
-mov    -0x4f4(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-setg   %al
+mov    -0x20(%ebp),%eax
+cmp    -0x28(%ebp),%eax
+setl   %al
-jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x13c>
+jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x13d>
-movzwl -0x4fc(%ebp),%eax
+movzwl -0x500(%ebp),%eax
-lea    -0x4fe(%ebp),%eax
+lea    -0x502(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x275>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x273>
-jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x21b>
+jne    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x219>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x214>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x212>
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x275>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x273>
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x270>
+jmp    <T> <_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader+0x26e>
```

## dbmw _ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader [DIFF] pm=81
```diff
-sub    $0x50,%esp
+sub    $0x40,%esp
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x22e>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+lea    0xa(%eax),%edx
-mov    %eax,-0x14(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    %edx,0xa(%eax)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0x12(%eax)
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0xe(%eax)
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x22e>
+mov    -0x18(%ebp),%ebx
-mov    %eax,-0x10(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x22e>
-jne    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1da>
+jne    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1d4>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1d3>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x1cd>
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x22e>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x22f>
+jmp    <T> <_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader+0x229>
-add    $0x50,%esp
+add    $0x40,%esp
```

## dbmw _ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader [DIFF] pm=106
```diff
-sub    $0xbc,%esp
+sub    $0xac,%esp
-je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27e>
+je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x275>
-mov    %eax,-0x24(%ebp)
-lea    -0x9a(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x96(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x88(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x84(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x84(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x80(%ebp)
+lea    -0x96(%ebp),%eax
+lea    0xa(%eax),%edi
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-lea    -0x9a(%ebp),%edi
-add    $0xa,%edi
-lea    -0x9a(%ebp),%edi
+lea    -0x96(%ebp),%edi
-je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x117>
-mov    -0x90(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x114>
+mov    -0x8c(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0xc3>
-movl   $0x1,-0x90(%ebp)
-mov    -0x90(%ebp),%edi
-mov    -0x84(%ebp),%esi
-mov    -0x8c(%ebp),%ebx
+jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0xc0>
+movl   $0x1,-0x8c(%ebp)
+mov    -0x8c(%ebp),%edi
+mov    -0x20(%ebp),%eax
+mov    0x12(%eax),%esi
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%ebx
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
+movzwl -0x94(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x96(%ebp),%ebx
-mov    %eax,-0x20(%ebp)
-movzwl -0x98(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x9a(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
-mov    -0x90(%ebp),%edi
-mov    -0x84(%ebp),%esi
-mov    -0x8c(%ebp),%ebx
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x8c(%ebp),%ecx
+mov    -0x20(%ebp),%eax
+mov    0x12(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x276>
-jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x222>
+jne    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x219>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x21b>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x212>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x276>
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x277>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x26e>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader+0x276>
-add    $0xbc,%esp
+add    $0xac,%esp
```

## dbmw _ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader [DIFF] pm=80
```diff
-sub    $0x1e0,%esp
+sub    $0x1d0,%esp
-je     <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20a>
+je     <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1fe>
-mov    %eax,-0x18(%ebp)
-lea    -0x1ce(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x1c6(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %eax,-0x1c4(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x1bc(%ebp)
+mov    -0x10(%ebp),%eax
-lea    -0x1ce(%ebp),%ecx
+lea    -0x1c6(%ebp),%ecx
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
+mov    -0x10(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0xe8>
+jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0xe2>
+movzwl -0x1c4(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x1c6(%ebp),%ebx
-mov    %eax,-0x14(%ebp)
-movzwl -0x1cc(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x1ce(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
+mov    -0x10(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20d>
+jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
+movzwl -0x1c4(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x1c6(%ebp),%ebx
-mov    %eax,-0x10(%ebp)
-movzwl -0x1cc(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x1ce(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
-jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ae>
+jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1a2>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1a7>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x19b>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x203>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1f7>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ff>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
-nop
-add    $0x1e0,%esp
+add    $0x1d0,%esp
```

## dbmw _ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader [DIFF] pm=92
```diff
-sub    $0x50,%esp
+sub    $0x40,%esp
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x138>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x13a>
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+lea    0xa(%eax),%edx
-mov    %eax,-0x14(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0x16(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    %edx,0xa(%eax)
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0xe(%eax)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0x12(%eax)
-mov    -0x20(%ebp),%eax
-mov    0x16(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0x16(%eax)
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
+mov    -0x18(%ebp),%ebx
-mov    %eax,-0x10(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
-jne    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1e6>
+jne    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1e2>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1df>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1db>
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23b>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x237>
-add    $0x50,%esp
+add    $0x40,%esp
```

## dbmw _ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader [DIFF] pm=37
```diff
-je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c8>
+je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
+lea    -0x1807(%ebp),%edx
+add    $0x14,%edx
-lea    -0x1807(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x296>
+je     <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x297>
-lea    (%eax,%edx,1),%edx
+add    %edx,%eax
+mov    %eax,%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x1807(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,(%esp)
+lea    -0x1807(%ebp),%ecx
+add    $0x14,%ecx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
-jne    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x36c>
+jne    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x36d>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x365>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x366>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c1>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c2>
-jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3c9>
+jmp    <T> <_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader+0x3ca>
```

## dbmw _ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader [DIFF] pm=10
```diff
-je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
-je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+je     <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18a>
-jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
-jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x188>
+jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
+nop
+jmp    <T> <_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader+0x18b>
```

## dbmw _ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt [DIFF] pm=16
```diff
-je     <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x60>
+je     <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x61>
+nop
+nop
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xdf>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xe1>
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xd9>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xdb>
-jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x100>
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x100>
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x119>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x11b>
-jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x100>
```

## dbmw _ZN6CMySql10exec_queryEv [DIFF] pm=46
```diff
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x42088(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x42088(%edx)
-je     <T> <_ZN6CMySql10exec_queryEv+0x9b>
+je     <T> <_ZN6CMySql10exec_queryEv+0x99>
-je     <T> <_ZN6CMySql10exec_queryEv+0x9b>
+je     <T> <_ZN6CMySql10exec_queryEv+0x99>
-jne    <T> <_ZN6CMySql10exec_queryEv+0x1b7>
+jne    <T> <_ZN6CMySql10exec_queryEv+0x1b5>
-je     <T> <_ZN6CMySql10exec_queryEv+0x1ad>
+je     <T> <_ZN6CMySql10exec_queryEv+0x1ab>
-je     <T> <_ZN6CMySql10exec_queryEv+0x1ad>
+je     <T> <_ZN6CMySql10exec_queryEv+0x1ab>
-je     <T> <_ZN6CMySql10exec_queryEv+0x177>
+je     <T> <_ZN6CMySql10exec_queryEv+0x175>
-lea    -0x30(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN6CMySql10exec_queryEv+0x1ad>
+jmp    <T> <_ZN6CMySql10exec_queryEv+0x1ab>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    0x42088(%eax),%ebx
+mov    0x42088(%eax),%eax
+mov    %eax,%ebx
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x30(%ebp),%eax
```

## dbmw _ZN6CMySql11blob_to_strEiPvi [DIFF] pm=36
```diff
-jmp    <T> <_ZN6CMySql11blob_to_strEiPvi+0xa1>
-mov    0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-imul   $0x6001,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x6070,%eax
-movb   $0x0,0x9(%eax)
+jmp    <T> <_ZN6CMySql11blob_to_strEiPvi+0xa0>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6001,%edx,%edx
+add    $0x6079,%edx
+add    %edx,%eax
+movb   $0x0,(%eax)
-jle    <T> <_ZN6CMySql11blob_to_strEiPvi+0x8d>
-mov    0xc(%ebp),%eax
-imul   $0x6001,%eax,%eax
-add    $0x6070,%eax
-add    0x8(%ebp),%eax
-add    $0x9,%eax
+jle    <T> <_ZN6CMySql11blob_to_strEiPvi+0x8c>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6001,%edx,%edx
+add    $0x6079,%edx
+add    %edx,%eax
-mov    0xc(%ebp),%eax
-imul   $0x6001,%eax,%eax
-add    $0x6070,%eax
-add    0x8(%ebp),%eax
-add    $0x9,%eax
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6001,%edx,%edx
+add    $0x6079,%edx
+add    %edx,%eax
```

## dbmw _ZN6CMySql4execEj [DIFF] pm=15
```diff
-jmp    <T> <_ZN6CMySql4execEj+0x171>
+jmp    <T> <_ZN6CMySql4execEj+0x173>
-jne    <T> <_ZN6CMySql4execEj+0x12c>
+jne    <T> <_ZN6CMySql4execEj+0x12e>
-je     <T> <_ZN6CMySql4execEj+0x111>
+je     <T> <_ZN6CMySql4execEj+0x113>
-mov    0x8(%ebp),%edx
-mov    %eax,0x18(%edx)
-jmp    <T> <_ZN6CMySql4execEj+0x125>
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x18(%eax)
+jmp    <T> <_ZN6CMySql4execEj+0x127>
-jmp    <T> <_ZN6CMySql4execEj+0x171>
+jmp    <T> <_ZN6CMySql4execEj+0x173>
```

## dbmw _ZN6CMySql4openEPKcS1_S1_S1_ [DIFF] pm=11
```diff
-jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x166>
+jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x164>
-je     <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x161>
+je     <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x15f>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x42088(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x42088(%edx)
-jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x166>
+jmp    <T> <_ZN6CMySql4openEPKcS1_S1_S1_+0x164>
```

## dbmw _ZN6CMySql4openEPKcjS1_S1_S1_ [DIFF] pm=11
```diff
-jmp    <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x164>
+jmp    <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x162>
-je     <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x15f>
+je     <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x15d>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x42088(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x42088(%edx)
-jmp    <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x164>
+jmp    <T> <_ZN6CMySql4openEPKcjS1_S1_S1_+0x162>
```

## dbmw _ZN6CMySql7get_intEiRj [NEAR] pm=16
```diff
-mov    (%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    0x8(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
```

## guild _ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser [DIFF] pm=126
```diff
-sub    $0xd74,%esp
+sub    $0x6f4,%esp
-je     <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x550>
+je     <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x54d>
-lea    -0x6ce(%ebp),%eax
+lea    -0x6ca(%ebp),%eax
-mov    %ax,-0x6c2(%ebp)
+mov    %ax,-0x6be(%ebp)
-mov    %eax,-0x6bf(%ebp)
+mov    %eax,-0x6bb(%ebp)
-mov    %eax,-0x6bb(%ebp)
-movb   $0x0,-0x6c0(%ebp)
-movb   $0x0,-0x6b7(%ebp)
-lea    -0x6ce(%ebp),%eax
+mov    %eax,-0x6b7(%ebp)
+movb   $0x0,-0x6bc(%ebp)
+movb   $0x0,-0x6b3(%ebp)
+lea    -0x6ca(%ebp),%eax
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x554>
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x54e>
-mov    -0x3c(%ebp),%eax
-mov    %eax,-0x44(%ebp)
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x34b>
-lea    -0x6ce(%ebp),%eax
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x345>
+lea    -0x6ca(%ebp),%eax
-mov    %ax,-0x6c2(%ebp)
+mov    %ax,-0x6be(%ebp)
-mov    %eax,-0x6bf(%ebp)
+mov    %eax,-0x6bb(%ebp)
-mov    %eax,-0x6bb(%ebp)
+mov    %eax,-0x6b7(%ebp)
-mov    %al,-0x6c0(%ebp)
-movb   $0xa,-0x6b7(%ebp)
+mov    %al,-0x6bc(%ebp)
+movb   $0xa,-0x6b3(%ebp)
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x2c9>
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x2c3>
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-sub    $0x646,%edx
+sub    $0x642,%edx
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x6ce(%ebp),%eax
+lea    -0x6ca(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-sub    $0x646,%edx
+sub    $0x642,%edx
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-sub    $0x636,%edx
+sub    $0x632,%edx
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x6ce(%ebp),%eax
+lea    -0x6ca(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x1ce>
-lea    -0x6ce(%ebp),%eax
+jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x1c8>
+lea    -0x6ca(%ebp),%eax
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x178>
+jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x172>
-je     <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x553>
-lea    -0xd58(%ebp),%eax
+je     <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x54e>
+lea    -0x6ca(%ebp),%eax
-mov    %ax,-0xd4c(%ebp)
+mov    %ax,-0x6be(%ebp)
-mov    %eax,-0xd49(%ebp)
+mov    %eax,-0x6bb(%ebp)
-mov    %eax,-0xd45(%ebp)
+mov    %eax,-0x6b7(%ebp)
-mov    %al,-0xd4a(%ebp)
+mov    %al,-0x6bc(%ebp)
-mov    %al,-0xd41(%ebp)
+mov    %al,-0x6b3(%ebp)
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4cc>
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4c9>
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-sub    $0xcbc,%edx
-mov    %eax,(%edx)
-lea    -0x44(%ebp),%eax
+sub    $0x642,%edx
+mov    %eax,0x14(%edx)
+lea    -0x3c(%ebp),%eax
-lea    -0xd58(%ebp),%eax
+lea    -0x6ca(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-sub    $0xcc0,%edx
-mov    %eax,(%edx)
+sub    $0x642,%edx
+mov    %eax,0x10(%edx)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-sub    $0xcb8,%edx
-mov    %eax,(%edx)
-lea    -0x44(%ebp),%eax
+sub    $0x632,%edx
+mov    %eax,0x8(%edx)
+lea    -0x3c(%ebp),%eax
-lea    -0xd58(%ebp),%eax
+lea    -0x6ca(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4df>
+jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4dc>
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x3be>
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4e0>
+jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x3b8>
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4dd>
-lea    -0xd58(%ebp),%eax
+lea    -0x6ca(%ebp),%eax
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x554>
-nop
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x554>
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x54e>
```

## guild _ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii [NEAR] pm=2
```diff
+mov    0x1c(%ebp),%edx
-mov    0x1c(%ebp),%edx
```

## guild _ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption [NEAR] pm=16
```diff
-mov    0x20(%ebp),%eax
-mov    (%eax),%edx
-mov    %edx,-0x22(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x1e(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x1a(%ebp)
-movzwl 0xc(%eax),%eax
+mov    0x20(%ebp),%ebx
+mov    (%ebx),%eax
+mov    %eax,-0x22(%ebp)
+mov    0x4(%ebx),%eax
+mov    %eax,-0x1e(%ebp)
+mov    0x8(%ebx),%eax
+mov    %eax,-0x1a(%ebp)
+movzwl 0xc(%ebx),%eax
```

## guild _ZN11CGuildCargo14SendGuildCargoEP5CUser [DIFF] pm=2
```diff
+movl   $0x18dc,0x8(%esp)
-movl   $0x18dc,0x8(%esp)
```

## guild _ZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfo [DIFF] pm=46
```diff
-movzbl %al,%esi
+movzbl %al,%ebx
-movzwl %ax,%edi
+movzwl %ax,%esi
-movzbl %al,%eax
-mov    %eax,-0x28(%ebp)
+movzbl %al,%edi
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x28(%ebp)
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6(%eax),%eax
-mov    0x6(%eax),%eax
-mov    %eax,-0x1c(%ebp)
+movzbl 0x5(%eax),%eax
+movzbl %al,%eax
+mov    %eax,%edx
+and    $0x1f,%edx
+mov    %edx,-0x1c(%ebp)
-and    $0x1f,%eax
-movzbl %al,%ebx
-mov    0x8(%ebp),%eax
-movzbl 0x5(%eax),%eax
-shr    $0x5,%al
+movzbl %al,%eax
+sar    $0x5,%eax
-mov    %esi,0x2c(%esp)
-mov    %edi,0x28(%esp)
-mov    -0x28(%ebp),%esi
-mov    %esi,0x24(%esp)
-mov    -0x24(%ebp),%esi
-mov    %esi,0x20(%esp)
-mov    -0x20(%ebp),%esi
-mov    %esi,0x1c(%esp)
-mov    -0x1c(%ebp),%esi
-mov    %esi,0x18(%esp)
+mov    %ebx,0x2c(%esp)
+mov    %esi,0x28(%esp)
+mov    %edi,0x24(%esp)
+mov    -0x28(%ebp),%ebx
+mov    %ebx,0x20(%esp)
+mov    -0x24(%ebp),%ebx
+mov    %ebx,0x1c(%esp)
+mov    -0x20(%ebp),%ebx
+mov    %ebx,0x18(%esp)
+mov    -0x1c(%ebp),%ebx
```

## guild _ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri [DIFF] pm=16
```diff
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
+mov    %edx,0xe(%eax)
-mov    %edx,0xe(%eax)
+lea    0x12(%eax),%edx
+movl   $0x18d8,0x8(%esp)
-mov    -0xc(%ebp),%edx
-add    $0x12,%edx
-movl   $0x18d8,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
```
