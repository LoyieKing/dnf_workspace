## monitor _ZN12CUserManager11AddSchoolNoEjh [NEAR] pm=20
```diff
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
-lea    -0xd4(%ebp),%edx
+lea    -0xd0(%ebp),%edx
-lea    -0xd4(%ebp),%edx
+lea    -0xd0(%ebp),%edx
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
```

## monitor _ZN12CUserManager14GetSchoolCountEjPjRh [DIFF] pm=130
```diff
-push   %edi
-push   %esi
-sub    $0x6c,%esp
+sub    $0x64,%esp
-lea    -0x48(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x28(%ebp),%eax
-je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x21c>
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
-lea    -0x48(%ebp),%eax
+je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x21a>
+movl   $0x0,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
+lea    -0x28(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-lea    -0x4c(%ebp),%eax
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0xc(%ebp)
+lea    -0x34(%ebp),%eax
+mov    -0xc(%ebp),%edx
-jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x17b>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x179>
+mov    -0x14(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-addl   $0x1,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-addl   $0x1,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x14(%ebp)
+movl   $0x423,0x8(%esp)
+movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x14(%ebp),%eax
-mov    (%eax),%edi
-mov    -0x24(%ebp),%eax
+mov    (%eax),%ecx
+mov    -0x14(%ebp),%eax
-mov    (%eax),%esi
-mov    0xc(%ebp),%ebx
-movl   $0x423,0x8(%esp)
-movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
+mov    (%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"GetSchoolCount(%u) channelNo(%u) Count(%u)",0x8(%esp)
+movl   $"./log/School",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+addl   $0x1,-0x10(%ebp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"GetSchoolCount(%u) channelNo(%u) Count(%u)",0x8(%esp)
-movl   $"./log/School",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-addl   $0x1,-0x20(%ebp)
-lea    -0x38(%ebp),%eax
-mov    -0x1c(%ebp),%edx
+lea    -0x18(%ebp),%eax
+mov    -0xc(%ebp),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1bb>
+je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1b9>
-cmp    -0x20(%ebp),%eax
-jle    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1bb>
+cmp    -0x10(%ebp),%eax
+jle    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1b9>
-jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1c0>
+jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1be>
-jne    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0xca>
-mov    -0x20(%ebp),%eax
+jne    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0xc8>
+mov    -0x10(%ebp),%eax
+movl   $0x426,0x8(%esp)
+movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-movzbl %al,%esi
-mov    0xc(%ebp),%ebx
-movl   $0x426,0x8(%esp)
-movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl %al,%edx
+mov    0xc(%ebp),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+mov    -0x4(%ebp),%ebx
+leave
```

## monitor _ZN12CUserManager17InsertUser_CharNoEjP5CUser [NEAR] pm=28
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

## monitor _ZN12CUserManager19InsertUser_CharNameEPcP5CUser [NEAR] pm=24
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

## monitor _ZN12CUserManager23SendConnectedBuddysListEP5CUser [DIFF] pm=119
```diff
+push   %esi
-sub    $0x604,%esp
+sub    $0x600,%esp
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20c>
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x207>
-movl   $0x0,-0x14(%ebp)
+movl   $0x0,-0x18(%ebp)
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x142>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x143>
+mov    -0x18(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x106>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x107>
+mov    -0x10(%ebp),%eax
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x106>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x107>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%ebx
-mov    -0x18(%ebp),%eax
+mov    -0x18(%ebp),%ebx
+mov    -0x10(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x106>
-mov    -0x14(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x107>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%edx
+mov    -0x18(%ebp),%edx
-addl   $0x1,-0x14(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+addl   $0x1,-0x18(%ebp)
+cmpl   $0x0,-0x14(%ebp)
-subl   $0x1,-0x10(%ebp)
+subl   $0x1,-0x14(%ebp)
-jne    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x4f>
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20d>
+jne    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x50>
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x207>
-setne  %al
+sete   %al
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x1d4>
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0x5e5(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-add    %eax,%eax
-add    $0xf,%eax
-mov    %ax,-0x5ed(%ebp)
-movzwl -0x5ed(%ebp),%eax
-movzwl %ax,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x5ef(%ebp),%ebx
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    -0xc(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12SendToServerEPci>
-jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20d>
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x1ac>
-jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20d>
-nop
-add    $0x604,%esp
+jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x207>
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser7GetDBIDEv>
+mov    %eax,-0x5e5(%ebp)
+mov    -0x18(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%ecx
+mov    -0x18(%ebp),%eax
+mov    %eax,%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    %eax,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0xf,%eax
+mov    %ax,-0xa(%ebp)
+movzwl -0xa(%ebp),%esi
+lea    -0x5ef(%ebp),%ebx
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12SendToServerEPci>
+add    $0x600,%esp
+pop    %esi
```

## monitor _ZN12momiji_event13EndEffectTask10_DoExecuteEv [DIFF] pm=11
```diff
-je     <T> <_ZN12momiji_event13EndEffectTask10_DoExecuteEv+0x104>
+je     <T> <_ZN12momiji_event13EndEffectTask10_DoExecuteEv+0x11e>
+jmp    <T> <_ZN12momiji_event13EndEffectTask10_DoExecuteEv+0x91>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
```

## monitor _ZN13CMemberExpTbl11Parse_TableEPci [DIFF] pm=13
```diff
-jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7f>
+jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7d>
-je     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7a>
+je     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x78>
-jg     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7a>
+jg     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x78>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x8(%eax,%ebx,4)
+mov    0x8(%ebp),%edx
+mov    %eax,0x8(%edx,%ebx,4)
-jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7f>
+jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7d>
```

## monitor _ZN13CMemberExpTbl17GetMemberExpLevelEj [DIFF] pm=18
```diff
-ja     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x41>
+ja     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x44>
+movzbl %al,%eax
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x80>
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x84>
-jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x6b>
+jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x6f>
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x80>
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x84>
-jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x63>
+jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x66>
-jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x7c>
+jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x80>
+nop
-jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x4c>
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x7d>
+jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x4f>
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x81>
```

## monitor _ZN13CPacketTracer8WriteLogEv [DIFF] pm=13
```diff
-add    %eax,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
+lea    (%eax,%eax,1),%edx
+mov    %edx,%eax
+shl    $0x4,%eax
+sub    %edx,%eax
+mov    %ecx,%edx
-mov    %ecx,%eax
-sub    %edx,%eax
+mov    %edx,%eax
-jne    <T> <_ZN13CPacketTracer8WriteLogEv+0x80>
+jne    <T> <_ZN13CPacketTracer8WriteLogEv+0x83>
```

## monitor _ZN13CTcpNetSystem14OpenTcpServiceERiPKct [DIFF] pm=70
```diff
-push   %esi
-sub    $0x50,%esp
+sub    $0x64,%esp
-mov    %ax,-0x2c(%ebp)
+mov    %ax,-0x3c(%ebp)
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-xor    $0x1,%eax
-je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x9b>
+sete   %al
+test   %al,%al
+je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x9c>
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1aa>
-movzwl -0x2c(%ebp),%eax
+jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1bb>
+movzwl -0x3c(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
-xor    $0x1,%eax
-je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x129>
+sete   %al
+test   %al,%al
+je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x12c>
-movzwl -0x2c(%ebp),%ebx
+movzwl -0x3c(%ebp),%ebx
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1aa>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1bb>
+mov    -0x18(%ebp),%eax
-mov    %eax,%esi
+mov    %eax,-0x14(%ebp)
-mov    %eax,%ebx
+mov    %eax,-0x10(%ebp)
-mov    %esi,0xc(%esp)
-mov    %ebx,0x8(%esp)
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
-add    $0x50,%esp
+add    $0x64,%esp
-pop    %esi
```

## monitor _ZN13CTcpNetSystem19CleanTcpSendPacketQEv [DIFF] pm=65
```diff
-sub    $0x30,%esp
+sub    $0x20,%esp
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x81>
+jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x7e>
-mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
+mov    (%eax),%esi
-jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x81>
+jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x7e>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+test   %ebx,%ebx
+je     <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xd9>
+mov    0x8(%ebp),%eax
+add    $0x100,%eax
+mov    %eax,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    %esi,(%esp)
+call   <T> <_ZN14CTcpSendBufferdlEPv>
+jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xc9>
-test   %ebx,%ebx
-je     <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xdf>
-mov    0x8(%ebp),%eax
-add    $0x100,%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpSendBufferdlEPv>
-jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xcf>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
+nop
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
-add    $0x30,%esp
+add    $0x20,%esp
```

## monitor _ZN13CTcpNetSystem4InitEt [DIFF] pm=12
```diff
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
-je     <T> <_ZN13CTcpNetSystem4InitEt+0xcb>
+je     <T> <_ZN13CTcpNetSystem4InitEt+0xc9>
-jmp    <T> <_ZN13CTcpNetSystem4InitEt+0xfd>
+jmp    <T> <_ZN13CTcpNetSystem4InitEt+0xfb>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
-je     <T> <_ZN13CTcpNetSystem4InitEt+0x136>
+je     <T> <_ZN13CTcpNetSystem4InitEt+0x132>
```

## monitor _ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE [DIFF] pm=3
```diff
-jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25b>
+jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>
-nop
```

## monitor _ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler [DIFF] pm=121
```diff
-push   %ebx
-sub    $0x64,%esp
+sub    $0x68,%esp
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x6e>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x68>
+movl   $&_ZZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandlerE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclMember is Null, member key(%d)\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x214>
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager14FindMemberUserEj>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0xca>
+movl   $0x273,0x8(%esp)
-movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclMember is Null, member key(%d)\n",0x8(%esp)
+movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclUser is Null, member key(%d)\n",0x8(%esp)
-jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x210>
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager14FindMemberUserEj>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0xd5>
-movl   $0x273,0x8(%esp)
-movl   $&_ZZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandlerE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclUser is Null, member key(%d)\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x210>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x214>
+mov    -0x14(%ebp),%eax
-cwtl
+mov    %ax,-0xe(%ebp)
+movswl -0xe(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
-je     <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x1f1>
-lea    -0x3a(%ebp),%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x139>
+movl   $0x1,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x214>
+lea    -0x42(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-lea    -0x3a(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0x42(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x210>
-movl   $0x1,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc>
-mov    $0x1,%eax
-add    $0x64,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## monitor _ZN14CMemberManager12DeleteMemberEjb [DIFF] pm=22
```diff
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0xc(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0xc(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    0xc(%ebp),%ebx
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
```

## monitor _ZN14CMemberManager12InsertMemberEjP7CMember [DIFF] pm=7
```diff
-je     <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xab>
+je     <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xae>
+xor    $0x1,%eax
-jne    <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xa4>
+je     <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xa7>
-jmp    <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xed>
+jmp    <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xf0>
```

## monitor _ZN14CMemberManager13MemerMemLoginEjP5CUser [DIFF] pm=52
```diff
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x33c>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x337>
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2df>
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2da>
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2d9>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2fe>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2fe>
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2d4>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2f9>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2f9>
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x319>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2fe>
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x314>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2f9>
+movl   $0x0,-0x1c(%ebp)
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
+test   %eax,%eax
-je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x381>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x37e>
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x3be>
+mov    %eax,-0x1c(%ebp)
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x3bb>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
```

## monitor _ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb [DIFF] pm=22
```diff
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x95>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x97>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x105>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x109>
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0xfe>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x102>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x105>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x109>
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
```

## monitor _ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h [DIFF] pm=16
```diff
-je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc4>
+je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
-je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc7>
+je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
-je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xca>
+je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
-jge    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xcd>
+jge    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc4>
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
-nop
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
-nop
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
-nop
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
+jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
```

## monitor _ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i [DIFF] pm=80
```diff
-push   %ebx
-sub    $0x24,%esp
+sub    $0x38,%esp
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x12>
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x1d>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x1c>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x3d>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x3c>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xb0>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa9>
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x6c>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x68>
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x62>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x5e>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x63>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x8a>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x86>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
-cmpl   $0xffffffff,-0xc(%ebp)
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xb0>
-cmpl   $0x0,-0xc(%ebp)
-jle    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xb0>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
+cmpl   $0xffffffff,-0x1c(%ebp)
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa9>
+cmpl   $0x0,-0x1c(%ebp)
+jle    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa9>
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa6>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x9f>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa4>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x132>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13f>
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xed>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xf0>
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xe6>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xe9>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xee>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-mov    %eax,%ebx
+mov    %eax,-0x14(%ebp)
-cwtl
+mov    %ax,-0xe(%ebp)
+movswl -0xe(%ebp),%eax
-cmp    %eax,%ebx
-setae  %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x132>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+cmp    -0x14(%ebp),%eax
+ja     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13f>
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x12b>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x138>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13d>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## monitor _ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh [DIFF] pm=29
```diff
-je     <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xb5>
+je     <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa0>
-jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x37>
-movzbl &_ZL12MEMBER_LOWER,%eax
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x3e>
-movzbl &_ZL12MEMBER_UPPER,%eax
-mov    %al,-0x11(%ebp)
-cmpl   $0x1,0x18(%ebp)
-jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x55>
+jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x40>
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa1>
+movb   $0x1,-0x11(%ebp)
+jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x8e>
+movb   $0x2,-0x11(%ebp)
-jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x69>
-mov    0x10(%ebp),%eax
-mov    %eax,-0x19(%ebp)
-mov    0x14(%ebp),%eax
-mov    %eax,-0x15(%ebp)
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa1>
+je     <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x82>
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xb6>
+jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa0>
+mov    0x10(%ebp),%eax
+mov    %eax,-0x19(%ebp)
+mov    0x14(%ebp),%eax
+mov    %eax,-0x15(%ebp)
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xb6>
-nop
```

## monitor _ZN14CMemberManager25MemberRegisterFlagProcessEv [DIFF] pm=37
```diff
-mov    %eax,-0x20(%ebp)
-lea    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x18(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-xor    $0x1,%eax
-jne    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x10d>
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x10d>
-jmp    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x93>
+jmp    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x95>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jne    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x6c>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x6e>
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x10e>
-nop
```

## monitor _ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi [DIFF] pm=53
```diff
-push   %ebx
-jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x110>
+jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x10e>
-jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x113>
+jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x111>
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x4b>
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x4a>
-ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x116>
+ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x114>
-mov    %eax,-0xc(%ebp)
-cmpl   $0xffffffff,-0xc(%ebp)
+mov    %eax,-0x8(%ebp)
+cmpl   $0xffffffff,-0x8(%ebp)
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x6a>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x69>
+movl   $0x0,-0x8(%ebp)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x115>
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x8f>
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x8e>
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    %eax,-0x8(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xde>
+mov    %eax,-0x4(%ebp)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xdd>
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    %eax,-0x8(%ebp)
+mov    %eax,-0x4(%ebp)
-lea    -0x3e8(%eax),%ebx
+lea    -0x3e8(%eax),%ecx
-mov    (%eax,%edx,4),%edx
-mov    -0x8(%ebp),%eax
-lea    (%edx,%eax,1),%ecx
+mov    (%eax,%edx,4),%eax
+mov    %eax,%edx
+add    -0x4(%ebp),%edx
-lea    0x5138(%ebx),%edx
-mov    %ecx,(%eax,%edx,4)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+add    $0x5138,%ecx
+mov    %edx,(%eax,%ecx,4)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x115>
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x115>
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x115>
-add    $0x10,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## monitor _ZN14CPacketDecoder9MsgDecodeEP12PacketHeader [DIFF] pm=116
```diff
-sub    $0x2c,%esp
+sub    $0x3c,%esp
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1c8>
-cmp    $0x27ff,%ax
-ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18f>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-cmp    $0x3e7,%ax
-jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18f>
+mov    %ax,-0x1e(%ebp)
+cmpw   $0x27ff,-0x1e(%ebp)
+ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x171>
+cmpw   $0x3e7,-0x1e(%ebp)
+jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x171>
-jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xca>
+jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xcc>
-je     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xca>
+je     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xcc>
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xca>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xcc>
-jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xbe>
+jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xc0>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
+movzwl -0x1e(%ebp),%eax
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edx
+movzwl -0x1e(%ebp),%edx
-test   %eax,%eax
-jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x147>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x13f>
+movzwl -0x1e(%ebp),%ebx
+movl   $0x1db,0x8(%esp)
+movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0xc(%esp)
+movl   $"CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.<0 == m_decodProcFunc>\n",0x8(%esp)
+movl   $"./log/Decoder",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1c8>
+movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
+call   <T> <_ZN14CPacketCounterILi1000ELi10240EE13BeforeProcessEv>
+mov    -0x1c(%ebp),%edx
-movzwl (%eax),%eax
-movzwl %ax,%ebx
-movl   $0x1db,0x8(%esp)
+mov    %eax,(%esp)
+call   *%edx
+movzwl -0x1e(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
+call   <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1c8>
+movzwl -0x1e(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $"Undefined Packet Err : Game Message with identifier %d has arrived.\n",(%esp)
+call   <T> <printf>
+movzwl -0x1e(%ebp),%ebx
+movl   $0x1fa,0x8(%esp)
-movl   $"CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.<0 == m_decodProcFunc>\n",0x8(%esp)
+movl   $"Undefined Packet Err: CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",0x8(%esp)
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
-movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
-call   <T> <_ZN14CPacketCounterILi1000ELi10240EE13BeforeProcessEv>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edx
-mov    0x8(%ebp),%eax
-add    $0x4,%edx
-mov    0xc(%eax,%edx,4),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
-mov    %eax,0x4(%esp)
-movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
-call   <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi>
-nop
-mov    $0x1,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
-mov    %eax,0x4(%esp)
-movl   $"Undefined Packet Err : Game Message with identifier %d has arrived.\n",(%esp)
-call   <T> <printf>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%ebx
-movl   $0x1fa,0x8(%esp)
-movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"Undefined Packet Err: CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",0x8(%esp)
-movl   $"./log/Decoder",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-add    $0x2c,%esp
+add    $0x3c,%esp
```

## monitor _ZN14CServerHandler20GetTcpGameServerByChEh [DIFF] pm=7
```diff
-jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x63>
+jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x62>
-je     <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x58>
+je     <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x57>
-jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x96>
-nop
+jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x95>
```
