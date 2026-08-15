## guild _ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog [DIFF] pm=10
```diff
-cmp    $0x32,%eax
-jbe    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x13>
-mov    $0x32,%eax
+cmpl   $0x32,0xc(%ebp)
+jbe    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x19>
+movl   $0x32,-0x10(%ebp)
-jmp    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x47>
+jmp    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x4a>
-jne    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x1f>
+jne    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x22>
```

## guild _ZN11CTcpHandlerC1Ev [DIFF] pm=3
```diff
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
```

## guild _ZN11CUdpHandler16InitServerSocketEi [DIFF] pm=16
```diff
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-movw   $0x2,-0x24(%ebp)
+movw   $0x2,-0x28(%ebp)
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x24(%ebp)
-mov    %ax,-0x22(%ebp)
-lea    -0x24(%ebp),%edx
+mov    %ax,-0x26(%ebp)
+lea    -0x28(%ebp),%edx
-movl   $0xf4240,-0x28(%ebp)
+movl   $0xf4240,-0x18(%ebp)
-lea    -0x28(%ebp),%edx
+lea    -0x18(%ebp),%edx
-mov    -0x28(%ebp),%esi
+mov    -0x18(%ebp),%esi
```

## guild _ZN12CApplication15TranslateSignalEv [DIFF] pm=114
```diff
-jne    <T> <_ZN12CApplication15TranslateSignalEv+0x442>
+jne    <T> <_ZN12CApplication15TranslateSignalEv+0x44e>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x411>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x41d>
-ja     <T> <_ZN12CApplication15TranslateSignalEv+0x406>
-mov    &data#4b157ab8(.rodata)(,%eax,4),%eax
+ja     <T> <_ZN12CApplication15TranslateSignalEv+0x412>
+mov    &data#95d2b392(.rodata)(,%eax,4),%eax
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
+lea    -0x165(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_Monitor_Send_Guild_MailC1Ev>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x15b(%ebp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x157(%ebp)
+movl   $0x17,0x8(%esp)
+movl   $"태스트 길드메일입니다.",0x4(%esp)
+lea    -0x165(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x165(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
-lea    -0x165(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_Monitor_Send_Guild_MailC1Ev>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x15b(%ebp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x157(%ebp)
-movl   $0x17,0x8(%esp)
-movl   $"태스트 길드메일입니다.",0x4(%esp)
-lea    -0x165(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-lea    -0x165(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-movl   $0x2,-0x25(%ebp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x29(%ebp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x20(%ebp)
+lea    -0x33(%ebp),%eax
+movl   $0x2,0x14(%eax)
+lea    -0x33(%ebp),%ebx
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x4(%eax),%eax
+mov    %eax,0xc(%ebx)
+lea    -0x33(%ebp),%ebx
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x8(%eax),%eax
+mov    %eax,0x10(%ebx)
+lea    -0x33(%ebp),%ebx
-mov    %al,-0x21(%ebp)
+mov    %al,0x18(%ebx)
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-movl   $"야메",0x4(%esp)
+movl   $"겪蔘",0x4(%esp)
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x443>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x44f>
```

## guild _ZN12CApplication4LoadEiPPc [DIFF] pm=44
```diff
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
-mov    %ebx,%eax
-mov    %eax,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
+mov    %ebx,%edx
-je     <T> <_ZN12CApplication4LoadEiPPc+0x3bf>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x3bd>
-je     <T> <_ZN12CApplication4LoadEiPPc+0x614>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x612>
-je     <T> <_ZN12CApplication4LoadEiPPc+0x614>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x612>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4a3>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4a1>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4b0>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4ae>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4c8>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4c6>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-je     <T> <_ZN12CApplication4LoadEiPPc+0x592>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x590>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x656>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x654>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x656>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x654>
-lea    -0x63(%ebp),%eax
+lea    -0x62(%ebp),%eax
+lea    -0x62(%ebp),%ebx
-mov    %al,-0x59(%ebp)
+mov    %al,0xa(%ebx)
-lea    -0x63(%ebp),%edx
+lea    -0x62(%ebp),%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x74c>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x74d>
```

## guild _ZN12CUserManager17DeleteUser_CharNoEj [NEAR] pm=8
```diff
-mov    %eax,%ebx
-mov    0xc(%ebp),%esi
+mov    %eax,%esi
+mov    0xc(%ebp),%ebx
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
```

## guild _ZN12CUserManager17InsertUser_CharNoEjP5CUser [NEAR] pm=28
```diff
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
+lea    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
-lea    -0x38(%ebp),%eax
-lea    -0x30(%ebp),%edx
+lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%edx
-movzbl -0x34(%ebp),%eax
+movzbl -0x2c(%ebp),%eax
-mov    %eax,%esi
+mov    %eax,%edi
-mov    %eax,%ebx
-mov    0xc(%ebp),%edi
+mov    %eax,%esi
+mov    0xc(%ebp),%ebx
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
```

## guild _ZN12CUserManager19InsertUser_CharNameEPcP5CUser [NEAR] pm=24
```diff
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%edx
-movzbl -0x1c(%ebp),%ebx
-lea    -0x18(%ebp),%eax
+movzbl -0x14(%ebp),%ebx
+lea    -0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-mov    %eax,%ebx
-mov    0xc(%ebp),%esi
+mov    %eax,%esi
+mov    0xc(%ebp),%ebx
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
```

## guild _ZN13CAppStartInit4InitEP12CApplicationiPPc [DIFF] pm=30
```diff
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xae>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xac>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xbb>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xb9>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xd6>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xd4>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x113>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x111>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x14f>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x14b>
-je     <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x24a>
+je     <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x246>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1f5>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1f1>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1ef>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1eb>
-jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x20c>
+jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x208>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x20c>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x208>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x227>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x223>
-jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x20c>
+jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x208>
```

## guild _ZN13CGuildManager13GuildMemLoginEjP5CUser [DIFF] pm=3
```diff
-xor    $0x1,%eax
-jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x432>
+je     <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x42f>
```

## guild _ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb [DIFF] pm=46
```diff
-je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x153>
-movl   $0x0,(%esp)
+je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x14b>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
-mov    %eax,-0x20(%ebp)
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    %al,-0xe(%ebp)
+mov    %al,-0x12(%ebp)
-mov    %al,-0xd(%ebp)
+mov    %al,-0x11(%ebp)
-jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xfe>
+jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xf6>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xf3>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xeb>
+mov    -0x10(%ebp),%eax
-mov    %eax,%ecx
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%ecx
-mov    %edx,%eax
-shr    $0x3,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%edx
+shr    $0x3,%edx
-jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xf3>
+jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xeb>
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x8d>
+jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x89>
-jbe    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x154>
+jbe    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x14c>
-jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x154>
+jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x14c>
```

## guild _ZN13CGuildManager14GuildMemLogoutEjP5CUser [DIFF] pm=36
```diff
-sete   %al
-test   %al,%al
-jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x33d>
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x336>
-je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x25d>
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x258>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x340>
+test   %al,%al
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x336>
-test   %al,%al
-je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x321>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x2d0>
+movl   $0x0,0x8(%esp)
+mov    0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc>
+jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x336>
-je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x30d>
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x324>
-jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x341>
-movl   $0x0,0x8(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc>
-jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x341>
-nop
-jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x341>
-nop
```

## guild _ZN13CGuildManager16GetAttendanceExpEji [NEAR] pm=8
```diff
-movzbl %al,%edx
-mov    %ebx,%eax
-shl    $0x4,%eax
-add    %ebx,%eax
+movzbl %al,%eax
+mov    %ebx,%edx
+shl    $0x4,%edx
+add    %ebx,%edx
```

## guild _ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo [DIFF] pm=56
```diff
+push   %esi
-sub    $0x24,%esp
+sub    $0x20,%esp
-je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15a>
+je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
+mov    0x10(%ebp),%ebx
-movzwl %ax,%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x4(%eax)
+movzwl %ax,%eax
+mov    %eax,0x4(%ebx)
-je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
+je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
+mov    0x10(%ebp),%ebx
-mov    0x10(%ebp),%edx
-mov    %eax,(%edx)
+mov    %eax,(%ebx)
-mov    -0xc(%ebp),%eax
-mov    &_ZL15guild_att_phase(,%eax,4),%eax
-mov    %eax,%edx
+mov    -0xc(%ebp),%edx
+mov    &_ZL15guild_att_phase(,%edx,4),%edx
+mov    0x10(%ebp),%esi
-add    %edx,%eax
-mov    &_ZL13guild_att_exp(,%eax,4),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x14(%eax)
+lea    (%edx,%eax,1),%eax
+mov    &_ZL13guild_att_exp(,%eax,4),%eax
+mov    %eax,0x14(%esi)
-js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
+js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
-jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
-mov    -0xc(%ebp),%eax
-mov    &_ZL15guild_att_phase(,%eax,4),%eax
-mov    %eax,%edx
+jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
+mov    -0xc(%ebp),%edx
+mov    &_ZL15guild_att_phase(,%edx,4),%edx
+mov    0x10(%ebp),%esi
-add    %edx,%eax
-mov    &_ZL13guild_att_exp(,%eax,4),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0xc(%eax)
-jmp    <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
-nop
-mov    -0x4(%ebp),%ebx
-leave
+lea    (%edx,%eax,1),%eax
+mov    &_ZL13guild_att_exp(,%eax,4),%eax
+mov    %eax,0xc(%esi)
+lea    -0x8(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
```

## guild _ZN13CPowerManager23SendPowerWarProcessInfoEj [DIFF] pm=6
```diff
-mov    -0x14(%ebp),%ebx
-mov    %ebx,0x4(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    -0xc(%ebp),%eax
-mov    -0xc(%ebp),%eax
```

## guild _ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc [DIFF] pm=133
```diff
-movl   $0x0,-0x14(%ebp)
-mov    %eax,-0x10(%ebp)
-lea    -0x64(%ebp),%eax
-mov    -0x10(%ebp),%edx
+mov    %eax,-0x14(%ebp)
+lea    -0x64(%ebp),%eax
+mov    -0x14(%ebp),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x312>
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x31a>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x2cd>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x156>
+movl   $0x463,0x8(%esp)
+movl   $&_ZZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEcE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CharacInfo is NULL",0x8(%esp)
+movl   $"./log/PowerResult",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30b>
+mov    -0x1c(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30b>
+mov    -0x10(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
-je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30b>
+mov    -0x10(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x10(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
-sete   %al
+jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x1fd>
+mov    $0x1,%eax
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x202>
+mov    $0x0,%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
-mov    %eax,-0x20(%ebp)
-movsbl -0x6c(%ebp),%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CPower20GetPowerWarGuildInfoEv>
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN18CPowerWarGuildInfo20GetSpecificGuildInfoEj>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x2aa>
+mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CPower20GetPowerWarGuildInfoEv>
-mov    -0x1c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN18CPowerWarGuildInfo20GetSpecificGuildInfoEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x26c>
-mov    -0x14(%ebp),%eax
-mov    0x8(%eax),%ebx
-mov    -0x14(%ebp),%eax
-mov    0x4(%eax),%ecx
+mov    (%eax),%ebx
-mov    0x4(%eax),%edx
+add    $0x4,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%edx
-mov    -0x20(%ebp),%esi
+mov    -0x28(%ebp),%esi
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-mov    -0x18(%ebp),%eax
-mov    0x4(%eax),%esi
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30b>
+mov    -0x1c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%esi
+mov    -0x10(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
-movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-movl   $0x463,0x8(%esp)
-movl   $&_ZZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEcE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CharacInfo is NULL",0x8(%esp)
-mov    -0x10(%ebp),%edx
+mov    -0x14(%ebp),%edx
-jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x10c>
+jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x105>
```

## guild _ZN13CTcpNetSystem10SendPacketEv [NEAR] pm=12
```diff
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
```

## guild _ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE [DIFF] pm=3
```diff
-jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25b>
+jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>
-nop
```

## guild _ZN14CPacketDecoder9MsgDecodeEP12PacketHeader [DIFF] pm=19
```diff
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1ef>
-ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18f>
+ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18e>
-jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18f>
+jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18e>
-movzwl %ax,%edx
+movzwl %ax,%eax
+lea    0x4(%eax),%edx
-add    $0x4,%edx
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1ef>
-movzwl %ax,%edx
+movzwl %ax,%eax
+lea    0x4(%eax),%edx
-add    $0x4,%edx
-nop
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1ef>
```

## guild _ZN14CPacketDecoderC1Ev [DIFF] pm=6
```diff
-mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x4,%edx
+mov    -0x4(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    0x8(%ebp),%eax
```

## guild _ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader [DIFF] pm=202
```diff
-lea    -0x70(%ebp),%eax
+lea    -0x60(%ebp),%eax
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
-jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0xba>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0xbf>
-lea    -0x68(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
-jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x11c>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x126>
-lea    -0x60(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
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
-je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x25d>
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x199>
-je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x25d>
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x199>
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
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnGuildCargo GUILD CARGO LOCKED!",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x48(%ebp),%eax
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
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x290,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN13CGuildManager11IsCargoLockEv>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x2af>
-movb   $0xcc,-0x71(%ebp)
-movl   $0x18c2,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildCargo GUILD CARGO LOCKED!",0x8(%esp)
-movl   $"./log/GuildCargo",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
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
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
+mov    -0x30(%ebp),%eax
+mov    0xa(%eax),%esi
+mov    -0x30(%ebp),%eax
+mov    0xe(%eax),%ebx
+movl   $0x18aa,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargo : Guild(%d,%d) Not Loaded",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0xc3,-0x71(%ebp)
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
-jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x379>
+jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x390>
+movl   $0x18d5,0x8(%esp)
+movl   $"OnGuildCargo",0x4(%esp)
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x18d5,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x372>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x389>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
-lea    -0x38(%ebp),%eax
+lea    -0x70(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ce>
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3e5>
```

## guild _ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader [DIFF] pm=193
```diff
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xe2>
-lea    -0x51(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xe5>
+lea    -0x35(%ebp),%eax
-lea    -0x51(%ebp),%eax
+lea    -0x35(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x58(%ebp),%esi
+lea    -0x3c(%ebp),%esi
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xc2>
-lea    -0x51(%ebp),%eax
+lea    -0x35(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x321>
-lea    -0x51(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x35(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x34(%ebp)
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x34(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x15b>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x15e>
-movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+movl   $"OnCallGuildInfo",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0xc(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f7>
-lea    -0xb2e(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f5>
+lea    -0xb32(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
+mov    %eax,-0xb28(%ebp)
+mov    -0x34(%ebp),%eax
+mov    0xe(%eax),%eax
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xb20(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
-mov    %al,-0xb1c(%ebp)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2c0>
-mov    -0x20(%ebp),%edx
-mov    -0x28(%ebp),%eax
+mov    %al,-0xb20(%ebp)
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2be>
+mov    -0x24(%ebp),%edx
+mov    -0x34(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x1ed>
+jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x1f0>
-movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x20(%ebp),%eax
+movl   $"OnCallGuildInfo",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x24(%ebp),%eax
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2bc>
-mov    -0x20(%ebp),%edx
-mov    -0x28(%ebp),%eax
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2ba>
+mov    -0x24(%ebp),%edx
+mov    -0x34(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2bb>
-mov    -0x20(%ebp),%edx
-mov    -0x20(%ebp),%ecx
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2b9>
+mov    -0x24(%ebp),%edx
+mov    -0x24(%ebp),%ecx
+mov    -0x34(%ebp),%eax
-sub    $0xb06,%edx
+sub    $0xb0a,%edx
-mov    -0x20(%ebp),%ebx
-mov    -0x30(%ebp),%eax
+mov    -0x24(%ebp),%ebx
+mov    -0x20(%ebp),%eax
-sub    $0xb06,%edx
+sub    $0xb0a,%edx
-mov    -0x20(%ebp),%ebx
-mov    -0x30(%ebp),%eax
+mov    -0x24(%ebp),%ebx
+mov    -0x20(%ebp),%eax
-sub    $0xb06,%edx
+sub    $0xb0a,%edx
-mov    -0x30(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x20(%ebp),%ecx
-lea    -0xb2e(%ebp),%edx
+mov    -0x24(%ebp),%ecx
+lea    -0xb32(%ebp),%edx
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2bc>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2ba>
-addl   $0x1,-0x20(%ebp)
-mov    -0x28(%ebp),%eax
+addl   $0x1,-0x24(%ebp)
+mov    -0x34(%ebp),%eax
-cmp    -0x20(%ebp),%eax
+cmp    -0x24(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x19a>
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x19d>
+mov    -0x34(%ebp),%eax
-mov    %ax,-0xb2c(%ebp)
-movzwl -0xb2c(%ebp),%eax
-movzwl %ax,%edx
-lea    -0xb2e(%ebp),%eax
+mov    %ax,-0x26(%ebp)
+movzwl -0x26(%ebp),%eax
+mov    %ax,-0xb30(%ebp)
+movzwl -0x26(%ebp),%edx
+lea    -0xb32(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f7>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f5>
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x39d>
+jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x39b>
+movl   $0xde9,0x8(%esp)
+movl   $"OnCallGuildInfo",0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xde9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x396>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x394>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f7>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f5>
-lea    -0x38(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f2>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f0>
```

## guild _ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader [DIFF] pm=497
```diff
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xfa>
-lea    -0x91(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xee>
+lea    -0x7d(%ebp),%eax
-lea    -0x91(%ebp),%eax
+lea    -0x7d(%ebp),%eax
-movl   $"CPacketTranslater::OnMonitorSendGuildLetter : 0 == m_pclApp",0x4(%esp)
-lea    -0x98(%ebp),%eax
+movl   $"CPacketTranslater::OnCallGuildInvite : 0 == m_pclApp",0x4(%esp)
+lea    -0x84(%ebp),%eax
-lea    -0x98(%ebp),%esi
+lea    -0x84(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x9f>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x99>
-lea    -0x98(%ebp),%eax
+lea    -0x84(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x99>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x93>
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb9>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb3>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb9>
-lea    -0x98(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb3>
+lea    -0x84(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xd4>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xcb>
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb9>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb3>
-lea    -0x91(%ebp),%eax
+lea    -0x7d(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x849>
-lea    -0x91(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x818>
+lea    -0x7d(%ebp),%eax
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0xae(%ebp),%eax
+lea    -0x9a(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1fd>
-lea    -0x89(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1d3>
+lea    -0x75(%ebp),%eax
-lea    -0x89(%ebp),%eax
+lea    -0x75(%ebp),%eax
-lea    -0x90(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-lea    -0x90(%ebp),%esi
+lea    -0x7c(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1a2>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x181>
-lea    -0x90(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x19c>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x17b>
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1bc>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x198>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1bc>
-lea    -0x90(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x198>
+lea    -0x7c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1d7>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1b0>
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x1bc>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x198>
-lea    -0x89(%ebp),%eax
+lea    -0x75(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x849>
-lea    -0x89(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x818>
+lea    -0x75(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x276>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x246>
+mov    0x8(%ebp),%eax
-lea    -0x88(%ebp),%eax
+lea    -0x74(%ebp),%eax
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-mov    -0x24(%ebp),%eax
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
+mov    0x8(%ebp),%eax
-mov    %eax,-0xa4(%ebp)
-mov    -0x30(%ebp),%eax
+mov    %eax,-0x90(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,-0xa0(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
+mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x32b>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x2fb>
+mov    0x8(%ebp),%eax
-lea    -0x80(%ebp),%eax
+lea    -0x6c(%ebp),%eax
-lea    -0x80(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x22,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x22,-0x88(%ebp)
+lea    -0x9a(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x3b1>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x381>
+mov    0x8(%ebp),%eax
-lea    -0x78(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x22,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-mov    -0x24(%ebp),%eax
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x22,-0x88(%ebp)
+lea    -0x9a(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
+mov    0x8(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x403>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x3d3>
+mov    0x8(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x403>
-mov    -0x30(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x3d3>
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x403>
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x3d3>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x408>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x3d8>
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x482>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x452>
+mov    0x8(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
-lea    -0x70(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x24,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-mov    -0x28(%ebp),%eax
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x24,-0x88(%ebp)
+lea    -0x9a(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x51d>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x4ed>
+mov    0x8(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-lea    -0x68(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x26,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-lea    -0x59(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x26,-0x88(%ebp)
+lea    -0x9a(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
+lea    -0x45(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
-lea    -0x59(%ebp),%eax
+lea    -0x45(%ebp),%eax
-lea    -0x60(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x60(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+lea    -0x4c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %bl
-lea    -0x60(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x59a>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x60(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x563>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x582>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x59(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x54b>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x45(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x849>
-lea    -0x59(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x818>
+lea    -0x45(%ebp),%eax
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x615>
-mov    -0x24(%ebp),%eax
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x5e0>
+mov    0x8(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x3,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-mov    -0x2c(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x3,-0x88(%ebp)
+lea    -0x9a(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
+mov    -0x20(%ebp),%eax
-mov    -0x30(%ebp),%eax
+mov    -0x28(%ebp),%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x651>
-mov    -0x30(%ebp),%eax
+test   %eax,%eax
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x61c>
+mov    -0x28(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x658>
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x623>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x65d>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x628>
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x6cd>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x698>
+mov    0x8(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x4d,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-mov    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x4d,-0x88(%ebp)
+lea    -0x9a(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
+mov    -0x20(%ebp),%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x74d>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x916,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnCallGuildInvite : 0 != pclInvitedUser.GetGuildKey(), Char Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movl   $0x27,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
-movl   $0x0,-0x9c(%ebp)
-lea    -0xae(%ebp),%eax
-movl   $0x16,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    -0x30(%ebp),%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x7ac>
+movl   $0x0,-0x88(%ebp)
+lea    -0x9a(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+mov    -0x28(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-lea    -0xf5(%ebp),%eax
+lea    -0xf3(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xeb(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0xe9(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xe7(%ebp)
-mov    -0x30(%ebp),%eax
+mov    %eax,-0xe5(%ebp)
+mov    -0x28(%ebp),%eax
-lea    -0xf5(%ebp),%eax
+lea    -0xf3(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-lea    -0xf5(%ebp),%eax
+lea    -0xf3(%ebp),%eax
-lea    -0xf5(%ebp),%eax
+lea    -0xf3(%ebp),%eax
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%ebx
+movl   $0x916,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"CPacketTranslater::OnCallGuildInvite : 0 != pclInvitedUser.GetGuildKey(), Char Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x27,-0x88(%ebp)
+lea    -0x9a(%ebp),%eax
+movl   $0x16,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8c5>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x898>
+movl   $0x92d,0x8(%esp)
+movl   $"OnCallGuildInvite",0x4(%esp)
+lea    -0xa4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x92d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8be>
+lea    -0xa4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x891>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
-lea    -0x38(%ebp),%eax
+lea    -0xac(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91a>
+lea    -0xac(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f3>
```

## guild _ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader [DIFF] pm=57
```diff
-jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xe2>
+jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xe5>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xc2>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x20d>
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
-mov    0x12(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x159>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x161>
+mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x315>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x318>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x315>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x318>
-jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x2af>
+jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x2b2>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x2a8>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x2ab>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x315>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x318>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x310>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x313>
```

## guild _ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader [DIFF] pm=162
```diff
-sub    $0x60,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
+sub    $0x70,%esp
-jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x59>
+jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x4c>
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x25e>
+mov    0x8(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,-0x18(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x14d>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
-cmpl   $0x0,-0x10(%ebp)
-sete   %al
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13IsGuildMasterEj>
-je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xc0>
+jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xb6>
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xbd>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xc2>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x112>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN36Packet_DB_Request_Approve_Join_GuildC1Ev>
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x50(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,-0x4c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x48(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+mov    %al,-0x44(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x68(%eax),%eax
+lea    -0x5c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x25e>
+movl   $0x1fad,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnApproveJoinGuild authority error",0x8(%esp)
+movl   $"./log/Guild",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x25e>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xff>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xff>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x104>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x143>
-movl   $0x1fad,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnApproveJoinGuild authority error",0x8(%esp)
-movl   $"./log/Guild",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
-lea    -0x53(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN36Packet_DB_Request_Approve_Join_GuildC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x49(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x45(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x41(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x3d(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%eax
-lea    -0x53(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x25e>
-jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x211>
+jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x204>
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x20a>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x1fd>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x25e>
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x259>
-add    $0x60,%esp
+add    $0x70,%esp
```
