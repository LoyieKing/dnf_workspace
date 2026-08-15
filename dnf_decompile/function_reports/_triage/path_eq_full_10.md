## monitor _ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader [DIFF] pm=97
```diff
-sub    $0x40,%esp
+sub    $0x50,%esp
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2b2>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
-mov    %eax,%edx
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%eax
-cmp    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    0x6(%edx),%edx
+cmp    %edx,%eax
-je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xa2>
+je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xa6>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2b2>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
-mov    %eax,%edx
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%eax
-cmp    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    0x6(%edx),%edx
+cmp    %edx,%eax
-je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xf2>
+je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x100>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2b2>
+mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
-mov    -0x14(%ebp),%edx
+mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    %al,-0xd(%ebp)
-cmpb   $0x0,-0xd(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x151>
-movzbl -0xd(%ebp),%ebx
+mov    %al,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x165>
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x1c(%ebp)
+movzbl -0x11(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%ebx
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
-mov    %eax,%ebx
+mov    %eax,-0x10(%ebp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2b2>
-jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x23a>
+jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x258>
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x233>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x251>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2b2>
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x28f>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2ad>
-add    $0x40,%esp
+add    $0x50,%esp
```

## monitor _ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader [DIFF] pm=127
```diff
-push   %edi
-sub    $0x5c,%esp
+sub    $0x60,%esp
-movzwl %ax,%edi
+movzwl %ax,%eax
+mov    %eax,-0x1c(%ebp)
-mov    0xe(%eax),%esi
+mov    0xe(%eax),%eax
+mov    %eax,-0x18(%ebp)
-mov    0xa(%eax),%ebx
+mov    0xa(%eax),%eax
+mov    %eax,-0x14(%ebp)
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0xae>
-movl   $0x1a60,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x136>
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x9c>
+mov    -0x20(%ebp),%eax
+mov    0xe(%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0xec>
+movl   $0x1a66,0x8(%esp)
+movl   $"OnRegisterEventItem",0x4(%esp)
-movl   $"db error not item",0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"wrong item data",0x8(%esp)
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25e>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x320(%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0xe(%eax),%edx
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0xc2>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0xfd>
-movl   $0x1a66,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN19COnTimeEventManager12SetEventItemEjj>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN19COnTimeEventManager10StartEventEv>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
+movl   $0x1a60,0x8(%esp)
+movl   $"OnRegisterEventItem",0x4(%esp)
+lea    -0x48(%ebp),%eax
-movl   $"wrong item data",0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"db error not item",0x8(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x320(%eax),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN19COnTimeEventManager12SetEventItemEjj>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x320(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN19COnTimeEventManager10StartEventEv>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
-jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x1c5>
+jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x202>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x1be>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x1fb>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21a>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x257>
-add    $0x5c,%esp
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
+nop
+add    $0x60,%esp
-pop    %edi
```

## monitor _ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader [DIFF] pm=119
```diff
-sub    $0x5c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+sub    $0x6c,%esp
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
+mov    -0x34(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x41>
-mov    -0x28(%ebp),%eax
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x48>
+mov    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x48>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x4f>
+mov    -0x34(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x5a>
-mov    $"true",%ebx
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x5f>
-mov    $"false",%ebx
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x61>
+mov    $"true",%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x66>
+mov    $"false",%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x34(%ebp),%eax
-mov    %eax,%esi
+mov    %eax,-0x28(%ebp)
-lea    -0x48(%ebp),%eax
+lea    -0x58(%ebp),%eax
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x58(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    0x6(%eax),%edi
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x34(%ebp),%eax
-movzwl %ax,%esi
-mov    -0x28(%ebp),%ebx
+mov    %ax,-0x1e(%ebp)
+movzwl -0x1e(%ebp),%esi
+mov    0x8(%ebp),%ebx
-mov    %edi,0x14(%esp)
+mov    -0x24(%ebp),%edx
+mov    %edx,0x14(%esp)
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
-je     <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2bb>
-lea    -0x39(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2da>
+lea    -0x49(%ebp),%eax
-lea    -0x39(%ebp),%edx
+lea    -0x49(%ebp),%edx
-lea    -0x40(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x50(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x186>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1a5>
-lea    -0x40(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x180>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19f>
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19d>
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1bc>
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19d>
-lea    -0x40(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1bc>
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1b2>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1d1>
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19d>
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1bc>
-lea    -0x39(%ebp),%eax
+lea    -0x49(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1d5>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1f4>
+lea    -0x49(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x259>
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x278>
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x252>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x271>
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2bb>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2da>
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2b6>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2d5>
-add    $0x5c,%esp
+add    $0x6c,%esp
```

## monitor _ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader [DIFF] pm=8
```diff
-je     <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25b>
+je     <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x259>
-jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25c>
+jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x259>
-jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25c>
+jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x259>
-jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25c>
-nop
```

## monitor _ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader [DIFF] pm=62
```diff
-push   %edi
-sub    $0x5c,%esp
+sub    $0x60,%esp
-jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x4d>
+jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x4c>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1fb>
+mov    0xa(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x24(%ebp),%eax
-mov    %eax,-0x40(%ebp)
+mov    %eax,-0x1c(%ebp)
+movb   $0x0,-0x3d(%ebp)
-mov    %eax,-0x20(%ebp)
-movb   $0x0,-0x41(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%edi
+mov    %eax,-0x18(%ebp)
-movswl %ax,%esi
+mov    %ax,-0x12(%ebp)
-mov    0x10(%eax),%ebx
+mov    0x10(%eax),%eax
+mov    %eax,-0x10(%ebp)
+movswl -0x12(%ebp),%ebx
-lea    -0x41(%ebp),%edx
+lea    -0x3d(%ebp),%edx
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    %ebx,0x8(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
-movzbl -0x41(%ebp),%eax
+movzbl -0x3d(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+je     <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1fb>
-mov    -0x24(%ebp),%edx
-mov    %ax,0xe(%edx)
+mov    %eax,%edx
+mov    -0x24(%ebp),%eax
+mov    %dx,0xe(%eax)
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1fb>
-jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x18f>
+jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1a1>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x188>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x19a>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1fb>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e4>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1f6>
-add    $0x5c,%esp
+add    $0x60,%esp
-pop    %edi
```

## monitor _ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader [DIFF] pm=107
```diff
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x271>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x26e>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x197>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x194>
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x197>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x194>
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x191>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x380>
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x191>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x383>
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%edx
+mov    -0x28(%ebp),%edx
-mov    -0x28(%ebp),%edx
+mov    -0x24(%ebp),%edx
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-nop
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x381>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x384>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x216>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x213>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x210>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x235>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x20d>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x232>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x232>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x24a>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x235>
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
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x271>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x247>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x232>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x26e>
-jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x317>
+jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x314>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x310>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x30d>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x381>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x384>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x37c>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x379>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x384>
+nop
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x384>
+nop
```

## monitor _ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader [DIFF] pm=56
```diff
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x14(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %edx,(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
-je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
+je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16b>
-mov    0x26(%eax),%eax
-mov    %eax,%ebx
+mov    0x26(%eax),%ebx
-mov    0x22(%eax),%eax
-mov    %eax,%ecx
+mov    0x22(%eax),%ecx
-mov    0x1a(%eax),%eax
-mov    %eax,%edx
+mov    0x1a(%eax),%edx
-je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
-lea    -0x1810(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16b>
+lea    -0x1815(%ebp),%eax
-mov    %eax,-0x1806(%ebp)
+mov    %eax,-0x180b(%ebp)
-mov    %eax,-0x1802(%ebp)
+mov    %eax,-0x1807(%ebp)
-mov    %eax,-0x17fe(%ebp)
-movb   $0xff,-0x17f9(%ebp)
-lea    -0x1810(%ebp),%eax
-add    $0x17,%eax
+mov    %eax,-0x1803(%ebp)
+movb   $0xff,-0x1d(%ebp)
+lea    -0x1815(%ebp),%eax
+lea    0x18(%eax),%edx
+lea    -0x1d(%ebp),%eax
-lea    -0x1810(%ebp),%eax
-add    $0x18,%eax
-mov    %eax,0x4(%esp)
+mov    %edx,0x4(%esp)
-movzbl -0x17f9(%ebp),%eax
+movzbl -0x1d(%ebp),%eax
-mov    %ax,-0x180e(%ebp)
-lea    -0x1810(%ebp),%eax
+mov    %ax,-0x1813(%ebp)
+lea    -0x1815(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
+jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16b>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16e>
+jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x166>
```

## monitor _ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader [DIFF] pm=57
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x30(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x30(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x4e>
-mov    -0x30(%ebp),%eax
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x4e>
+mov    -0x28(%ebp),%eax
-mov    -0x30(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%edx
-mov    -0x24(%ebp),%edx
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-lea    -0x41(%ebp),%edx
+lea    -0x3d(%ebp),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x48(%ebp),%esi
+lea    -0x44(%ebp),%esi
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    0x8(%ebp),%eax
+movl   $0xf,0x8(%esp)
+mov    %eax,0x4(%esp)
-movl   $0xf,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
```

## monitor _ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader [DIFF] pm=68
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x4c>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x248>
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x18(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x140>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0xc8>
+movl   $0x1112,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply\t  pclUser is NULL",0x8(%esp)
+movl   $"./log/buddy",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x248>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0xf7>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x129>
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x9f>
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0xd1>
-je     <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x128>
+je     <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x15a>
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
-movl   $0x1112,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply\t  pclUser is NULL",0x8(%esp)
-movl   $"./log/buddy",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x248>
-jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1f7>
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1ee>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1e7>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x248>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x24c>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x243>
```

## monitor _ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader [DIFF] pm=8
```diff
-jmp    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc8>
+jmp    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc0>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc7>
+je     <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc0>
-jmp    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc8>
-nop
```

## monitor _ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader [DIFF] pm=399
```diff
-sub    $0x70,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x38(%ebp)
+sub    $0xa0,%esp
-mov    %eax,-0x34(%ebp)
+mov    %eax,-0x74(%ebp)
-mov    %eax,-0x30(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x70(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+mov    -0x6c(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x68(%ebp)
+cmpl   $0x0,-0x68(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x40d>
+mov    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser9GetMemberEv>
+mov    %eax,-0x64(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0xa0(%eax),%eax
+mov    %eax,-0x60(%ebp)
+cmpl   $0x0,-0x64(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x40d>
+cmpl   $0x0,-0x60(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x40d>
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
+mov    %eax,0x4(%esp)
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager14FindMemberUserEj>
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1d6>
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
+mov    %eax,(%esp)
+call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
+mov    %eax,-0x50(%ebp)
+mov    -0x50(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember21IncConnUpperMemberExpEj>
+mov    %eax,-0x4c(%ebp)
+cmpl   $0x0,-0x4c(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1d6>
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
+mov    %eax,-0x48(%ebp)
+mov    -0x48(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x74(%ebp),%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x151>
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x151>
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
+mov    %eax,(%esp)
+call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
+mov    %eax,-0x34(%ebp)
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember12GetMemberKeyEv>
+mov    %eax,-0x30(%ebp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember21IncConnLowerMemberExpEjj>
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-cmpl   $0x0,-0x40(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d3>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember12GetMemberKeyEv>
+mov    %eax,-0x3c(%ebp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x40(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x60(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager13SaveMemberExpEP14CServerHandlerjjj>
+mov    -0x4c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager18IsMemberExpLevelUpEj>
+test   %al,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1d6>
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d6>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager14FindMemberUserEj>
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1b7>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
-mov    %eax,(%esp)
-call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
+mov    -0x4c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager21NoticeLevelUpToLowersEjj>
+movl   $0x0,-0x5c(%ebp)
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember19GetLowerMemberCountEv>
+mov    %eax,-0x58(%ebp)
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember20GetLowerMember_ProxyEv>
+mov    %eax,-0x54(%ebp)
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x31d>
+subl   $0x1,-0x58(%ebp)
+mov    -0x54(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager10FindMemberEj>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x315>
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
+mov    %eax,(%esp)
+call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x315>
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
+mov    %eax,(%esp)
+call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
-cmpl   $0x0,-0x1c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1b7>
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    -0x54(%ebp),%eax
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
+mov    -0x5c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember21IncConnLowerMemberExpEijj>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x147>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN7CMember12GetMemberKeyEv>
+mov    %eax,-0x14(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x10(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser9GetMemberEv>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x147>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
-mov    %eax,(%esp)
-call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
-mov    %eax,%ebx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember12GetMemberKeyEv>
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
+mov    %eax,0xc(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember21IncConnLowerMemberExpEjj>
-mov    -0x1c(%ebp),%esi
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %eax,%ebx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember12GetMemberKeyEv>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x60(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x70(%ebp),%eax
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x70(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1b7>
-mov    -0x1c(%ebp),%ebx
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x315>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
+mov    %eax,-0x10(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x70(%ebp),%eax
-movl   $0x0,-0x28(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember19GetLowerMemberCountEv>
-mov    %eax,-0x24(%ebp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember20GetLowerMember_ProxyEv>
-mov    %eax,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x2e3>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x3c(%ebp)
-cmpl   $0x0,-0x3c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x2db>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
-mov    %eax,(%esp)
-call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
-mov    %eax,0x4(%esp)
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember21IncConnUpperMemberExpEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x2db>
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager17GetMemberExpTableEv>
-mov    %eax,(%esp)
-call   <T> <_ZN13CMemberExpTbl15GetMaxMemberExpEv>
-mov    -0x20(%ebp),%edx
-mov    (%edx),%edx
-mov    %eax,0xc(%esp)
-mov    %edx,0x8(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember21IncConnLowerMemberExpEijj>
-mov    -0x10(%ebp),%esi
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %eax,%ebx
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember12GetMemberKeyEv>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager13SaveMemberExpEP14CServerHandlerjjj>
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager18IsMemberExpLevelUpEj>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x2db>
-mov    -0x10(%ebp),%ebx
-mov    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager21NoticeLevelUpToLowersEjj>
-addl   $0x1,-0x28(%ebp)
-addl   $0x27,-0x20(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-subl   $0x1,-0x24(%ebp)
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1df>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
+addl   $0x1,-0x5c(%ebp)
+addl   $0x27,-0x54(%ebp)
+cmpl   $0x0,-0x58(%ebp)
+setne  %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1fe>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x40d>
-jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x377>
+jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3b3>
-lea    -0x54(%ebp),%eax
+lea    -0x84(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x84(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x370>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3ac>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x40d>
-lea    -0x4c(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3cc>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x408>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
-nop
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
-nop
-add    $0x70,%esp
+add    $0xa0,%esp
```

## monitor _ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader [DIFF] pm=68
```diff
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x101>
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0xe4>
+mov    0x8(%ebp),%edx
+mov    -0x24(%ebp),%eax
+imul   $0x65,%eax,%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0x20(%ebp)
-imul   $0x65,%eax,%eax
-add    $0x10,%eax
-add    -0x24(%ebp),%eax
-add    $0xc,%eax
+add    $0x1c,%eax
-mov    -0x24(%ebp),%edx
-imul   $0x65,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-movzwl 0x9(%eax),%eax
+movzwl 0x19(%eax),%eax
-mov    -0x24(%ebp),%edx
-imul   $0x65,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-movzwl 0x7(%eax),%eax
+movzwl 0x17(%eax),%eax
-mov    -0x24(%ebp),%edx
-imul   $0x65,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1b,%eax
-movzbl (%eax),%eax
+movzbl 0x1b(%eax),%eax
-addl   $0x1,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
-cmp    -0x20(%ebp),%eax
+cmp    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1cf>
-jne    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x196>
+jne    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x175>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x18f>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x16e>
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1cf>
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1eb>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1ca>
```

## monitor _ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader [DIFF] pm=104
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x4c>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0xb6>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0xb1>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x120>
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x11b>
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
-mov    -0x10(%ebp),%eax
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x151>
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x14c>
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
-mov    -0x10(%ebp),%eax
-mov    0x2c(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
+mov    -0x14(%ebp),%eax
+mov    0x2c(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+test   %al,%al
+setne  %al
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
+mov    -0x10(%ebp),%eax
-setg   %al
+setbe  %al
-je     <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x1cb>
-movb   $0x4,-0x35(%ebp)
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x65(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x1f3>
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
-mov    0x2c(%eax),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    0x2c(%eax),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
+movb   $0x4,-0x35(%ebp)
+movzwl -0x63(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x65(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
```

## monitor _ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader [DIFF] pm=266
```diff
-sub    $0x11c,%esp
+sub    $0x12c,%esp
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x2c(%ebp)
-cmp    %eax,%ebx
-setne  %al
+cmp    -0x2c(%ebp),%eax
+sete   %al
-je     <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x76>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x150a,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"(Ignore another server msg: %d)",0x8(%esp)
-movl   $"./log/ItemLimitEdition",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3dc>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0xdb>
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x2de>
+movl   $0x0,-0x28(%ebp)
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x9b>
+mov    -0x28(%ebp),%edx
+mov    -0x30(%ebp),%eax
-test   %eax,%eax
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0xd6>
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x97>
+mov    -0x28(%ebp),%edx
+mov    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0xd7>
-nop
-addl   $0x1,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x28(%ebp)
+mov    -0x30(%ebp),%eax
-cmp    -0x20(%ebp),%eax
+cmp    -0x28(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x7f>
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x42>
+mov    -0x30(%ebp),%eax
+mov    %eax,-0xb4(%ebp)
+mov    -0x30(%ebp),%eax
+mov    0x6a(%eax),%eax
+mov    %eax,-0xb0(%ebp)
+mov    -0x30(%ebp),%eax
+mov    0x66(%eax),%eax
+mov    %eax,-0xac(%ebp)
+mov    -0x30(%ebp),%eax
+mov    0x62(%eax),%eax
+mov    %eax,-0xa8(%ebp)
+mov    -0x30(%ebp),%eax
+mov    0x5e(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x6a(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x5a(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x66(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x56(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x62(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x52(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x5e(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x4e(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x5a(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x4a(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x56(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x46(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x52(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x42(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x4e(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x3e(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x4a(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x3a(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x46(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x36(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x42(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x32(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x3e(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x2e(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x3a(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x2a(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x36(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x26(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x32(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x22(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x2e(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x1e(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x2a(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x1a(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x26(%eax),%eax
+mov    -0x30(%ebp),%eax
+mov    0x16(%eax),%eax
-mov    -0x24(%ebp),%eax
-mov    0x22(%eax),%eax
-mov    %eax,-0x58(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x1e(%eax),%eax
-mov    %eax,-0x54(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x4c(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xb4(%ebp),%eax
+mov    %eax,0x70(%esp)
+mov    -0xb0(%ebp),%eax
+mov    %eax,0x6c(%esp)
+mov    -0xac(%ebp),%eax
+mov    %eax,0x68(%esp)
+mov    -0xa8(%ebp),%eax
+mov    %eax,0x64(%esp)
-mov    %eax,0x70(%esp)
+mov    %eax,0x60(%esp)
-mov    %eax,0x6c(%esp)
+mov    %eax,0x5c(%esp)
-mov    %eax,0x68(%esp)
+mov    %eax,0x58(%esp)
-mov    %eax,0x64(%esp)
+mov    %eax,0x54(%esp)
-mov    %eax,0x60(%esp)
+mov    %eax,0x50(%esp)
-mov    %eax,0x5c(%esp)
+mov    %eax,0x4c(%esp)
-mov    %eax,0x58(%esp)
+mov    %eax,0x48(%esp)
-mov    %eax,0x54(%esp)
+mov    %eax,0x44(%esp)
-mov    %eax,0x50(%esp)
+mov    %eax,0x40(%esp)
-mov    %eax,0x4c(%esp)
+mov    %eax,0x3c(%esp)
-mov    %eax,0x48(%esp)
+mov    %eax,0x38(%esp)
-mov    %eax,0x44(%esp)
+mov    %eax,0x34(%esp)
-mov    %eax,0x40(%esp)
+mov    %eax,0x30(%esp)
-mov    %eax,0x3c(%esp)
+mov    %eax,0x2c(%esp)
-mov    %eax,0x38(%esp)
+mov    %eax,0x28(%esp)
-mov    %eax,0x34(%esp)
+mov    %eax,0x24(%esp)
-mov    %eax,0x30(%esp)
+mov    %eax,0x20(%esp)
-mov    %eax,0x2c(%esp)
+mov    %eax,0x1c(%esp)
-mov    %eax,0x28(%esp)
-mov    -0x58(%ebp),%eax
-mov    %eax,0x24(%esp)
-mov    -0x54(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x50(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x4c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3dc>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3ff>
+mov    -0x30(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x20(%ebp)
+movl   $0x150a,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"(Ignore another server msg: %d)",0x8(%esp)
+movl   $"./log/ItemLimitEdition",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3ff>
-jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x382>
+jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3a5>
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x37b>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x39e>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3dc>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3ff>
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3d7>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3fa>
-add    $0x11c,%esp
+add    $0x12c,%esp
```

## monitor _ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader [DIFF] pm=87
```diff
-lea    -0x49(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x49(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x50(%ebp),%esi
+lea    -0x58(%ebp),%esi
-lea    -0x50(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x49(%ebp),%eax
+lea    -0x51(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x223>
-lea    -0x49(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x22b>
+lea    -0x51(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-movl   $0x0,-0x2c(%ebp)
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1cc>
-mov    -0x2c(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    %eax,-0x38(%ebp)
+movl   $0x0,-0x30(%ebp)
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1cf>
+mov    -0x30(%ebp),%eax
+mov    -0x38(%ebp),%edx
-je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c7>
-mov    -0x2c(%ebp),%eax
-mov    -0x30(%ebp),%edx
+je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1cb>
+mov    -0x30(%ebp),%eax
+mov    -0x38(%ebp),%edx
-movzbl %al,%ebx
+mov    %al,-0x29(%ebp)
+movzbl -0x29(%ebp),%ebx
-je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c8>
+je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1cb>
-je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c8>
+je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1cb>
+mov    -0x24(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x38(%ebp),%eax
+movzbl 0x3c(%eax),%eax
+mov    %al,(%edx)
-mov    -0x30(%ebp),%eax
-movzbl 0x3c(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    %dl,0xa(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x30(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    -0x38(%ebp),%edx
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c8>
-nop
-addl   $0x1,-0x2c(%ebp)
-cmpl   $0x31,-0x2c(%ebp)
+addl   $0x1,-0x30(%ebp)
+cmpl   $0x31,-0x30(%ebp)
-movzwl %ax,%ebx
+mov    %ax,-0x32(%ebp)
+movzwl -0x32(%ebp),%ebx
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2f9>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x301>
-jne    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x29f>
+jne    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2a7>
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x298>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2a0>
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2f9>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x301>
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2f4>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2fc>
```

## monitor _ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader [DIFF] pm=14
```diff
-je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x1a1>
+je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x19f>
-mov    0x12(%eax),%eax
-mov    %eax,%ebx
+mov    0x12(%eax),%ebx
-mov    -0x18(%ebp),%edx
-mov    %al,0x15e(%edx)
+mov    %eax,%edx
+mov    -0x18(%ebp),%eax
+mov    %dl,0x15e(%eax)
-je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x1a2>
+je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x19f>
-jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x1a2>
-nop
```

## monitor _ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader [DIFF] pm=298
```diff
-lea    -0x51(%ebp),%eax
+lea    -0x55(%ebp),%eax
-lea    -0x51(%ebp),%eax
+lea    -0x55(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x58(%ebp),%esi
+lea    -0x5c(%ebp),%esi
-lea    -0x58(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x51(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3de>
-lea    -0x51(%ebp),%eax
+lea    -0x55(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3b8>
+lea    -0x55(%ebp),%eax
-movl   $0x0,-0x30(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x34(%ebp)
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+movl   $0x0,-0x2c(%ebp)
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b5>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b4>
+mov    -0x30(%ebp),%eax
-ja     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b5>
-lea    -0x49(%ebp),%eax
+ja     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b4>
+lea    -0x4d(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-lea    -0x49(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x54(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x10(%eax),%edx
-lea    -0x50(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x18e>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x176>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x4d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3b8>
+lea    -0x4d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
-setne  %bl
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x18f>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x177>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3de>
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1ae>
+je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1ac>
-mov    %eax,-0x30(%ebp)
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b5>
-movl   $0xffffffff,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x318>
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b1>
+mov    $0xffffffff,%eax
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x2f2>
+mov    -0x30(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c2>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN35Packet_Notice_Find_Factory_Hub_UserC1Ev>
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e8>
-lea    -0x8c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN35Packet_Notice_Find_Factory_Hub_UserC1Ev>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x10(%eax),%edx
-mov    -0x30(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x28b>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x297>
-mov    %eax,-0x82(%ebp)
-movb   $0x1,-0x5f(%ebp)
-movb   $0x0,-0x7e(%ebp)
-mov    -0x2c(%ebp),%eax
-movzwl 0x2d(%eax),%eax
-mov    %ax,-0x5e(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x2f(%eax),%eax
-mov    %eax,-0x5c(%ebp)
-movw   $0x34,-0x8a(%ebp)
-movzwl -0x8a(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x8c(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e9>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x82(%ebp)
-movb   $0x0,-0x5f(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x86(%ebp)
+movb   $0x0,-0x63(%ebp)
+mov    -0x30(%ebp),%eax
-mov    %al,-0x7e(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %al,-0x82(%ebp)
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%edx
+mov    -0x30(%ebp),%edx
-lea    -0x8c(%ebp),%eax
+lea    -0x90(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    %ax,-0x5e(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %ax,-0x62(%ebp)
+mov    -0x30(%ebp),%eax
-mov    %eax,-0x5c(%ebp)
-movw   $0x34,-0x8a(%ebp)
-movzwl -0x8a(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x8c(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
+mov    %eax,-0x60(%ebp)
+movw   $0x34,-0x8e(%ebp)
+lea    -0x90(%ebp),%eax
+movl   $0x34,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c3>
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x86(%ebp)
+movb   $0x1,-0x63(%ebp)
+movb   $0x0,-0x82(%ebp)
+mov    -0x30(%ebp),%eax
+movzwl 0x2d(%eax),%eax
+mov    %ax,-0x62(%ebp)
+mov    -0x30(%ebp),%eax
+mov    0x2f(%eax),%eax
+mov    %eax,-0x60(%ebp)
+movw   $0x34,-0x8e(%ebp)
+lea    -0x90(%ebp),%eax
+movl   $0x34,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e9>
-lea    -0x41(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c3>
+lea    -0x45(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x45(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x48(%ebp),%esi
+lea    -0x4c(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x38f>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x369>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x389>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x363>
-jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3a6>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x380>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3a6>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3bb>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x380>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x395>
-jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3a6>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x380>
-lea    -0x41(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3de>
-lea    -0x41(%ebp),%eax
+lea    -0x45(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3b8>
+lea    -0x45(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x480>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x45a>
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x479>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x453>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e9>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c3>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e1>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4bb>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e9>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c3>
```

## monitor _ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader [DIFF] pm=46
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x76>
-mov    -0x10(%ebp),%edx
-mov    -0x18(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x6b>
+mov    0x8(%ebp),%eax
+mov    -0x14(%ebp),%edx
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x72>
-mov    -0x10(%ebp),%ebx
-mov    -0x10(%ebp),%edx
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x67>
+mov    -0x14(%ebp),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
-add    $0x4,%edx
-mov    0xa(%eax,%edx,4),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x3,-0x10(%ebp)
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x3,-0x14(%ebp)
-jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x3e>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x15c>
+jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x38>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x151>
-jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x102>
+jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0xf7>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0xfb>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0xf0>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x15c>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x151>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x157>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x14c>
```

## monitor _ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader [DIFF] pm=189
```diff
-sub    $0x7c,%esp
+sub    $0x8c,%esp
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xef>
-lea    -0x51(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xf2>
+lea    -0x69(%ebp),%eax
-lea    -0x51(%ebp),%eax
+lea    -0x69(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x70(%ebp),%eax
-lea    -0x58(%ebp),%esi
+lea    -0x70(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x95>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x98>
-lea    -0x58(%ebp),%eax
+lea    -0x70(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x8f>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x92>
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb4>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb7>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb4>
-lea    -0x58(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb7>
+lea    -0x70(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xcc>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xcf>
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb4>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb7>
-lea    -0x51(%ebp),%eax
+lea    -0x69(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x329>
-lea    -0x51(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x33f>
+lea    -0x69(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x40(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x257>
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%esi
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+cmpl   $0x0,-0x3c(%ebp)
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x25f>
+mov    -0x40(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x40(%ebp),%eax
-mov    %eax,%ebx
+mov    %eax,-0x30(%ebp)
-lea    -0x50(%ebp),%eax
+lea    -0x68(%ebp),%eax
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x68(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x59(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x59(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x60(%ebp),%eax
-lea    -0x48(%ebp),%esi
+lea    -0x60(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x205>
-lea    -0x48(%ebp),%eax
+lea    -0x60(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x1f7>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x1ff>
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x21c>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x224>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x21c>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x224>
+lea    -0x60(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x23c>
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x21c>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x224>
-lea    -0x41(%ebp),%eax
+lea    -0x59(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x329>
-lea    -0x41(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x33f>
+lea    -0x59(%ebp),%eax
-mov    -0x28(%ebp),%edx
+mov    -0x40(%ebp),%edx
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+jg     <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x29b>
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x41d>
+mov    -0x40(%ebp),%eax
+movl   $0x0,0x1a(%eax)
+mov    -0x38(%ebp),%edx
+mov    -0x40(%ebp),%eax
+mov    %edx,0x22(%eax)
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+mov    -0x40(%ebp),%eax
+mov    0x1a(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x40(%ebp),%eax
+mov    0x16(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x40(%ebp),%eax
+mov    0x22(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x40(%ebp),%eax
+mov    0x12(%eax),%eax
-cmpl   $0x0,-0x20(%ebp)
-jle    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x30e>
-mov    -0x28(%ebp),%eax
-movl   $0x0,0x1a(%eax)
-mov    -0x20(%ebp),%edx
-mov    -0x28(%ebp),%eax
-mov    %edx,0x22(%eax)
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-mov    -0x28(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x5c(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x16(%eax),%edi
-mov    -0x28(%ebp),%eax
-mov    0x22(%eax),%esi
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%ebx
-lea    -0x40(%ebp),%eax
+lea    -0x58(%ebp),%eax
-mov    -0x5c(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x58(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x407>
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x407>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x41d>
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3a9>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3bf>
-lea    -0x38(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3a2>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3b8>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x407>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x41d>
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x402>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x418>
-add    $0x7c,%esp
+add    $0x8c,%esp
```

## monitor _ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader [DIFF] pm=148
```diff
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x35>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x8b>
+mov    -0x28(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+movzbl %al,%eax
+cmp    -0x24(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0xa1>
+mov    -0x28(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x20(%ebp)
+movl   $0x146d,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"(Ignore another server msg: %d)",0x8(%esp)
+movl   $"./log/ItemLimitEdition",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3aa>
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x99>
-mov    -0x20(%ebp),%eax
-mov    0xb(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-movzbl %al,%eax
-cmp    %eax,%ebx
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x99>
-mov    -0x20(%ebp),%eax
-mov    0xb(%eax),%ebx
-movl   $0x146d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"(Ignore another server msg: %d)",0x8(%esp)
-movl   $"./log/ItemLimitEdition",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a2>
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a2>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3aa>
-jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x348>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x350>
-lea    -0x30(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x341>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x349>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a2>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3aa>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x39d>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a5>
```

## monitor _ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader [DIFF] pm=179
```diff
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55a>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x53d>
+mov    -0x30(%ebp),%eax
-movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb5>
-mov    -0x28(%ebp),%edx
-mov    -0x2c(%ebp),%ecx
+movl   $0x0,-0x2c(%ebp)
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xa4>
+mov    -0x2c(%ebp),%edx
+mov    -0x30(%ebp),%ecx
-cmp    $0xc34ff,%eax
-jbe    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xad>
-mov    -0x28(%ebp),%edx
-mov    -0x2c(%ebp),%ecx
+mov    %eax,-0x28(%ebp)
+cmpl   $0xc34ff,-0x28(%ebp)
+jbe    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xa0>
+cmpl   $0xf423f,-0x28(%ebp)
+ja     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xa0>
+mov    -0x2c(%ebp),%edx
-mov    0xf(%eax,%ecx,1),%eax
-cmp    $0xf423f,%eax
-ja     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb0>
-mov    -0x28(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    -0x2c(%ebp),%eax
-lea    0xf(%eax),%ebx
+add    -0x30(%ebp),%eax
+add    $0xf,%eax
+mov    %eax,%ebx
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb1>
-nop
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb1>
-nop
-addl   $0x1,-0x28(%ebp)
-mov    -0x2c(%ebp),%eax
+addl   $0x1,-0x2c(%ebp)
+mov    -0x30(%ebp),%eax
-cmp    -0x28(%ebp),%eax
+cmp    -0x2c(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
-lea    -0x833(%ebp),%eax
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x53d>
+lea    -0x837(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    %al,-0x829(%ebp)
-movl   $0x0,-0x828(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %al,-0x82d(%ebp)
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x3cd>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
-lea    -0x833(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x45e>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x424>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x44a>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x40e>
-mov    -0x2c(%ebp),%ecx
+mov    -0x30(%ebp),%ecx
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x445>
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x40a>
-lea    -0x833(%ebp),%ecx
+lea    -0x837(%ebp),%ecx
-mov    -0x828(%ebp),%eax
+mov    -0x82c(%ebp),%eax
-mov    %eax,-0x828(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x446>
-nop
+mov    %eax,-0x82c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x3d6>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x39d>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x443>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
+lea    -0x837(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start>
-lea    -0x833(%ebp),%edx
+lea    -0x837(%ebp),%edx
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x53d>
-jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4fe>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4e3>
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4f7>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4dc>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x53d>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x553>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x538>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
-nop
```

## monitor _ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader [DIFF] pm=110
```diff
-sub    $0x6c,%esp
+sub    $0x7c,%esp
-lea    -0x39(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x54(%ebp),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x1ce>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x1f0>
+lea    -0x4d(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-lea    -0x52(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0x66(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x34(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x11b>
+jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x1cf>
+mov    -0x34(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x30(%ebp)
-mov    -0x20(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate>
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2a4>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication25getLimitNpcBuyItemManagerEv>
-lea    -0x52(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x2c(%ebp)
+lea    -0x66(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
-lea    -0x52(%ebp),%edx
+lea    -0x66(%ebp),%edx
-mov    -0x20(%ebp),%edx
+mov    0x8(%ebp),%edx
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%ebx
+mov    -0x34(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x34(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x34(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x20(%ebp)
-lea    -0x38(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2a4>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c6>
+mov    0x8(%ebp),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication25getLimitNpcBuyItemManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c6>
-jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x24a>
+jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x26c>
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x243>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x265>
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2a4>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c6>
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x29f>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c1>
-add    $0x6c,%esp
+add    $0x7c,%esp
```

## monitor _ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader [DIFF] pm=37
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x52>
-movl   $0xdc4,0x8(%esp)
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x4c>
+movl   $0xdc3,0x8(%esp)
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x263>
+mov    0x8(%ebp),%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xb6>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xab>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x263>
+mov    0x8(%ebp),%eax
+mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x147>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x144>
-xor    $0x1,%eax
+cmp    $0x1,%al
+setne  %al
-je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x143>
+je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x140>
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xc2>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xbd>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x263>
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x20c>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x209>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x205>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x202>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x263>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x261>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25e>
```

## monitor _ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader [DIFF] pm=122
```diff
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x292>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x291>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b8>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b7>
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b8>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b7>
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b2>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a3>
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b2>
-mov    -0x20(%ebp),%eax
-lea    0xf(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a6>
+mov    -0x28(%ebp),%eax
+add    $0xf,%eax
+mov    %eax,%ecx
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%ecx
-lea    0x148(%ecx),%ebx
-mov    -0x28(%ebp),%ecx
-mov    %ecx,0x14(%esp)
-mov    %esi,0x10(%esp)
+mov    -0x28(%ebp),%ebx
+lea    0x148(%ebx),%esi
+mov    -0x24(%ebp),%ebx
+mov    %ebx,0x14(%esp)
+mov    %ecx,0x10(%esp)
-mov    %ebx,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    %esi,0x4(%esp)
+mov    -0x20(%ebp),%eax
-nop
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a2>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a7>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x237>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x236>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x231>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x256>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x230>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x255>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x255>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x26b>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x256>
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
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x292>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x26a>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x255>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x291>
-jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x338>
+jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x337>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x331>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x330>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a2>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a7>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39d>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39c>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a7>
+nop
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a7>
+nop
```

## monitor _ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader [DIFF] pm=62
```diff
-push   %edi
-sub    $0x5c,%esp
+sub    $0x50,%esp
-movl   $0x0,-0x24(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x16f>
+je     <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x171>
-mov    %eax,-0x3c(%ebp)
+mov    %eax,-0x20(%ebp)
-mov    0xe(%eax),%edi
+mov    0xe(%eax),%eax
+mov    %eax,-0x1c(%ebp)
-mov    %eax,%ebx
+mov    %eax,-0x18(%ebp)
-mov    0x12(%eax),%esi
+mov    0x12(%eax),%eax
+mov    %eax,-0x14(%ebp)
-mov    -0x3c(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    %edi,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x170>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x171>
-jne    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x113>
+jne    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x117>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x10c>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x110>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x170>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x171>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x168>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x16c>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x170>
-nop
-add    $0x5c,%esp
+add    $0x50,%esp
-pop    %edi
```
