## statics _ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh [DIFF] pm=12
```diff
-mov    -0xc(%ebp),%ecx
-lea    -0x1803(%ebp),%ebx
+lea    -0x1803(%ebp),%ecx
-lea    (%ebx,%edx,1),%eax
-add    $0x11,%eax
+lea    (%ecx,%edx,1),%eax
+lea    0x11(%eax),%edx
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
```

## statics _ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler [DIFF] pm=11
```diff
-je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x181>
+je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x17f>
-jmp    <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x113>
+jmp    <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x111>
-mov    0x4(%eax),%eax
-mov    %eax,%edx
+mov    0x4(%eax),%edx
-je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x108>
+je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x106>
-je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x181>
+je     <T> <_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler+0x17f>
```

## statics _ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader [DIFF] pm=51
```diff
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8d1>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8d0>
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x894>
+jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x893>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x76b>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x767>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x758>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x754>
-mov    -0x24(%ebp),%ebx
-mov    -0x38(%ebp),%ecx
-add    %ebx,%eax
-add    $0x4,%eax
-mov    0xc(%ecx,%eax,8),%ebx
+add    -0x24(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    -0x38(%ebp),%eax
+mov    0xc(%eax,%edx,8),%ebx
-mov    -0x24(%ebp),%ebx
-mov    -0x38(%ebp),%ecx
-add    %ebx,%eax
-add    $0x4,%eax
-flds   0x10(%ecx,%eax,8)
+add    -0x24(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    -0x38(%ebp),%eax
+flds   0x10(%eax,%edx,8)
-mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting+0x8,%edi
-mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting+0x4,%esi
-mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting,%ebx
+mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting+0x8,%eax
+mov    %eax,%edi
+mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting+0x4,%eax
+mov    %eax,%esi
+mov    &_ZZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeaderE8chk_ting,%eax
+mov    %eax,%ebx
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8ba>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8b9>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8af>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x8ae>
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x89d>
+jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x89c>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9a7>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9a6>
-jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x94d>
+jne    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x94c>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x946>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x945>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9a7>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9a6>
-jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9a2>
+jmp    <T> <_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader+0x9a1>
```

## statics _ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler [DIFF] pm=11
```diff
-jl     <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x16c>
+jl     <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x16e>
-jmp    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x15d>
+jmp    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x15f>
-jmp    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x12b>
+jmp    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x12d>
-je     <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x127>
+je     <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x129>
-mov    0xc(%ecx,%eax,4),%ecx
+mov    0xc(%ecx,%eax,4),%eax
+mov    %eax,%ecx
```

## statics _ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct [DIFF] pm=519
```diff
-sub    $0x24,%esp
+sub    $0x2c,%esp
-jmp    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x409>
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-add    0x10(%ebp),%eax
+jmp    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x418>
+mov    0x10(%ebp),%edx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
-jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x90>
+jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x98>
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ebx
-mov    %ebx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
-add    0x10(%ebp),%eax
+mov    0x10(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%esi
+mov    %esi,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+lea    (%ebx,%eax,1),%eax
-mov    -0x18(%ebp),%eax
-mov    0xc(%ebp),%edx
-lea    0x9(%eax),%ecx
+mov    -0x18(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    0xc(%ebp),%eax
+add    $0x9,%edx
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+lea    0x1(%eax),%edx
+mov    0xc(%ebp),%eax
+add    $0x9,%ecx
-add    %ecx,%edx
-add    $0x8,%edx
-mov    (%edx),%edx
-add    $0x1,%edx
-mov    0xc(%ebp),%ecx
-add    $0x9,%eax
-shl    $0x4,%eax
-lea    (%ecx,%eax,1),%eax
+add    %ecx,%eax
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-mov    %edx,%edi
-sub    %eax,%edi
-mov    %edi,%eax
-add    0x10(%ebp),%eax
+mov    0x10(%ebp),%edx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
-jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x10c>
+jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x119>
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ebx
-mov    %ebx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
-add    0x10(%ebp),%eax
+mov    0x10(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%esi
+mov    %esi,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+lea    (%ebx,%eax,1),%eax
-mov    -0x18(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %eax,%ecx
+mov    -0x18(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    0xc(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x9c,%eax
+mov    (%eax),%eax
+lea    0x1(%eax),%edx
+mov    0xc(%ebp),%eax
-add    %ecx,%edx
-add    $0x9c,%edx
-mov    (%edx),%edx
-add    $0x1,%edx
-mov    0xc(%ebp),%ecx
-shl    $0x4,%eax
-lea    (%ecx,%eax,1),%eax
+add    %ecx,%eax
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-mov    %edx,%edi
-sub    %eax,%edi
-mov    %edi,%eax
-add    0x10(%ebp),%eax
+mov    0x10(%ebp),%edx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
-jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x18a>
+jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x19c>
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ebx
-mov    %ebx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
-add    0x10(%ebp),%eax
+mov    0x10(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%esi
+mov    %esi,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+lea    (%ebx,%eax,1),%eax
-mov    -0x18(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %eax,%ecx
+mov    -0x18(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    0xc(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0xa0,%eax
+mov    (%eax),%eax
+lea    0x1(%eax),%edx
+mov    0xc(%ebp),%eax
-add    %ecx,%edx
-add    $0xa0,%edx
-mov    (%edx),%edx
-add    $0x1,%edx
-mov    0xc(%ebp),%ecx
-shl    $0x4,%eax
-lea    (%ecx,%eax,1),%eax
+add    %ecx,%eax
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-mov    %edx,%edi
-sub    %eax,%edi
-mov    %edi,%eax
-add    0x10(%ebp),%eax
+mov    0x10(%ebp),%edx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
-jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x206>
+jle    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x21d>
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ebx
-mov    %ebx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
-add    0x10(%ebp),%eax
+mov    0x10(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%esi
+mov    %esi,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+lea    (%ebx,%eax,1),%eax
-mov    -0x18(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %eax,%ecx
+mov    -0x18(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    0xc(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0xa4,%eax
+mov    (%eax),%eax
+lea    0x1(%eax),%edx
+mov    0xc(%ebp),%eax
-add    %ecx,%edx
-add    $0xa4,%edx
-mov    (%edx),%edx
-add    $0x1,%edx
-mov    0xc(%ebp),%ecx
-shl    $0x4,%eax
-lea    (%ecx,%eax,1),%eax
+add    %ecx,%eax
-jmp    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x3e2>
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%edi
-mov    0xc(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-mov    0x10(%ebx,%eax,8),%eax
-mov    %eax,%ebx
-mov    -0x18(%ebp),%ecx
-mov    0xc(%ebp),%eax
-mov    0x4(%eax,%ecx,4),%eax
-imul   %ebx,%eax
-mov    %eax,%ebx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-mov    %ebx,0x10(%ecx,%eax,8)
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%edi
-mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-flds   0x14(%ebx,%eax,8)
+jmp    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x3ee>
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%ecx
+add    -0x14(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    0xc(%ebp),%eax
+mov    0x4(%eax,%edx,4),%ebx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%edx
+add    -0x14(%ebp),%edx
+mov    0xc(%ebp),%eax
+add    $0x20,%edx
+mov    (%eax,%edx,8),%eax
+mov    %ebx,%edx
+imul   %eax,%edx
+mov    0xc(%ebp),%eax
+add    $0x20,%ecx
+mov    %edx,(%eax,%ecx,8)
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%ecx
+add    -0x14(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%edx
+add    -0x14(%ebp),%edx
+mov    0xc(%ebp),%eax
+add    $0x20,%edx
+flds   0x4(%eax,%edx,8)
+mov    0xc(%ebp),%eax
+lea    0x20(%ecx),%edx
+fstps  0x4(%eax,%edx,8)
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%ebx
+add    -0x14(%ebp),%ebx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%edx
+add    -0x14(%ebp),%edx
+mov    0xc(%ebp),%eax
+add    $0x20,%edx
+mov    (%eax,%edx,8),%edx
+mov    0x10(%ebp),%ecx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%esi
+mov    %esi,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    %eax,%ecx
+mov    -0x14(%ebp),%eax
+mov    0x8(%ecx,%eax,8),%eax
+lea    (%edx,%eax,1),%ecx
+mov    0xc(%ebp),%eax
+lea    0x20(%ebx),%edx
+mov    %ecx,(%eax,%edx,8)
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%ecx
+add    -0x14(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%edx
+add    -0x14(%ebp),%edx
+mov    0xc(%ebp),%eax
+add    $0x20,%edx
+flds   0x4(%eax,%edx,8)
+mov    0x10(%ebp),%edx
+mov    -0x18(%ebp),%eax
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%ebx
+mov    %ebx,%esi
+sub    %eax,%esi
+mov    %esi,%eax
+add    %eax,%edx
+mov    -0x14(%ebp),%eax
+flds   0xc(%edx,%eax,8)
+faddp  %st,%st(1)
+mov    0xc(%ebp),%eax
+lea    0x20(%ecx),%edx
+fstps  0x4(%eax,%edx,8)
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%ebx
+add    -0x14(%ebp),%ebx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%edx
+add    -0x14(%ebp),%edx
+mov    0xc(%ebp),%eax
+add    $0x20,%edx
+mov    (%eax,%edx,8),%eax
+mov    -0x18(%ebp),%ecx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-fstps  0x14(%edx,%eax,8)
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%edi
-mov    0xc(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-mov    0x10(%ebx,%eax,8),%ebx
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ecx
-mov    %ecx,%edi
-sub    %eax,%edi
-mov    %edi,%eax
-add    0x10(%ebp),%eax
-mov    -0x14(%ebp),%ecx
-mov    0x8(%eax,%ecx,8),%eax
-add    %eax,%ebx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-mov    %ebx,0x10(%ecx,%eax,8)
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%edi
-mov    0xc(%ebp),%ebx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-flds   0x14(%ebx,%eax,8)
-mov    -0x18(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%ecx
-mov    %ecx,%ebx
-sub    %eax,%ebx
-mov    %ebx,%eax
-add    0x10(%ebp),%eax
-mov    -0x14(%ebp),%ecx
-flds   0xc(%eax,%ecx,8)
-faddp  %st,%st(1)
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-fstps  0x14(%ecx,%eax,8)
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%edi
-mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-mov    0x10(%ebx,%eax,8),%eax
-mov    -0x18(%ebp),%ebx
-mov    0xc(%ebp),%edx
-mov    0x4(%edx,%ebx,4),%edx
+mov    0x4(%edx,%ecx,4),%edx
-mov    %edx,-0x2c(%ebp)
+mov    %edx,-0x34(%ebp)
-divl   -0x2c(%ebp)
-mov    %eax,%ebx
-mov    0xc(%ebp),%edx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-mov    %ebx,0x10(%edx,%eax,8)
-mov    -0x18(%ebp),%ecx
-mov    -0x14(%ebp),%esi
-mov    -0x18(%ebp),%edx
-mov    -0x14(%ebp),%edi
-mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x3,%eax
-sub    %edx,%eax
-add    %edi,%eax
-add    $0x1e,%eax
-flds   0x14(%ebx,%eax,8)
+divl   -0x34(%ebp)
+mov    %eax,%edx
+mov    0xc(%ebp),%eax
+lea    0x20(%ebx),%ecx
+mov    %edx,(%eax,%ecx,8)
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%ecx
+add    -0x14(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%edx
+add    -0x14(%ebp),%edx
+mov    0xc(%ebp),%eax
+add    $0x20,%edx
+flds   0x4(%eax,%edx,8)
-mov    $0x0,%edx
-mov    %eax,-0x28(%ebp)
-mov    %edx,-0x24(%ebp)
-fildll -0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
+fildl  -0x2c(%ebp)
-mov    0xc(%ebp),%edx
-mov    %ecx,%eax
-shl    $0x3,%eax
-sub    %ecx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-fstps  0x14(%edx,%eax,8)
+mov    0xc(%ebp),%eax
+lea    0x20(%ecx),%edx
+fstps  0x4(%eax,%edx,8)
-jne    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x212>
-mov    -0x18(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    0x4(%edx,%eax,4),%edx
-lea    0x1(%edx),%ecx
-mov    0xc(%ebp),%edx
-mov    %ecx,0x4(%edx,%eax,4)
+jne    <T> <_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct+0x229>
+mov    -0x18(%ebp),%edx
+mov    -0x18(%ebp),%ecx
+mov    0xc(%ebp),%eax
+mov    0x4(%eax,%ecx,4),%eax
+lea    0x1(%eax),%ecx
+mov    0xc(%ebp),%eax
+mov    %ecx,0x4(%eax,%edx,4)
-add    $0x24,%esp
+add    $0x2c,%esp
```

## statics _ZN17FrameLagCollector18FrameLagDataStruct4initEv [DIFF] pm=81
```diff
-push   %ebx
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x2d>
-mov    -0x10(%ebp),%edx
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x2c>
+mov    -0xc(%ebp),%eax
+lea    0x8(%eax),%edx
-add    $0x8,%edx
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x7,-0x10(%ebp)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x7,-0xc(%ebp)
-jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x19>
+jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x18>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x162>
-mov    -0xc(%ebp),%edx
+movl   $0x0,-0x8(%ebp)
+jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x15f>
+mov    -0x8(%ebp),%edx
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-movl   $0x0,-0x8(%ebp)
-jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x153>
-mov    -0xc(%ebp),%edx
-mov    -0x8(%ebp),%ebx
-mov    0x8(%ebp),%ecx
+movl   $0x0,-0x4(%ebp)
+jmp    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x150>
+mov    -0x8(%ebp),%edx
-add    %ebx,%eax
-add    $0x1e,%eax
-movl   $0x0,0x10(%ecx,%eax,8)
-mov    -0xc(%ebp),%edx
-mov    -0x8(%ebp),%ebx
-mov    0x8(%ebp),%ecx
+mov    %eax,%edx
+add    -0x4(%ebp),%edx
+mov    0x8(%ebp),%eax
+add    $0x20,%edx
+movl   $0x0,(%eax,%edx,8)
+mov    -0x8(%ebp),%edx
-add    %ebx,%eax
-lea    0x1e(%eax),%edx
-mov    $0x0,%eax
-mov    %eax,0x14(%ecx,%edx,8)
+mov    %eax,%edx
+add    -0x4(%ebp),%edx
+mov    0x8(%ebp),%eax
+movl   $0x0,0x104(%eax,%edx,8)
+addl   $0x1,-0x4(%ebp)
+cmpl   $0x5,-0x4(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x113>
-jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x114>
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x5,-0xc(%ebp)
-setle  %al
-test   %al,%al
-jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x62>
-add    $0x10,%esp
-pop    %ebx
-pop    %ebp
+jne    <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv+0x61>
+leave
```

## statics _ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec [DIFF] pm=168
```diff
-jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x269>
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x26e>
-jne    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x264>
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x3d>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x26e>
+mov    0xc(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x2c(%ebp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-mov    0xc(%ebp),%eax
-lea    0xb(%eax),%ecx
-lea    0x1c(%eax),%edx
-lea    -0x20(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+lea    0x1c(%eax),%ecx
+lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
-je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x264>
-mov    0xc(%ebp),%eax
-lea    0xb(%eax),%edx
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x9d>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x26e>
-add    $0x1c,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+lea    0x1c(%eax),%edx
+lea    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x21f>
-mov    -0x1c(%ebp),%edx
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x222>
+mov    -0x20(%ebp),%edx
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x230>
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x233>
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%edx
+add    $0x8,%edx
+mov    0xb(%eax,%edx,4),%eax
+mov    %eax,-0x1c(%ebp)
-mov    0x4c(%eax),%edx
-mov    -0x1c(%ebp),%ecx
+mov    0x4c(%eax),%eax
+cmp    -0x1c(%ebp),%eax
+jge    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x101>
+mov    0x8(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x4c(%eax)
-add    $0x8,%ecx
-mov    0xb(%eax,%ecx,4),%eax
-cmp    %eax,%edx
-jge    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0xf2>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x8,%edx
-mov    0xb(%eax,%edx,4),%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x4c(%eax)
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%edx
-mov    %eax,-0x44(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x50(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %al,-0x40(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %al,-0x4c(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %al,-0x3f(%ebp)
-mov    -0x1c(%ebp),%edx
+mov    %al,-0x4b(%ebp)
+mov    -0x20(%ebp),%edx
-mov    %eax,-0x3c(%ebp)
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0x48(%ebp)
+mov    -0x20(%ebp),%edx
-mov    %eax,-0x38(%ebp)
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0x44(%ebp)
+mov    -0x20(%ebp),%edx
-mov    %ax,-0x34(%ebp)
-mov    -0x1c(%ebp),%edx
+mov    %ax,-0x40(%ebp)
+mov    -0x20(%ebp),%edx
-mov    %eax,-0x30(%ebp)
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0x3c(%ebp)
+mov    -0x20(%ebp),%edx
-mov    %eax,-0x2c(%ebp)
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0x38(%ebp)
+mov    -0x20(%ebp),%edx
-mov    %ax,-0x28(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %ax,-0x34(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %al,-0x26(%ebp)
-mov    -0x1c(%ebp),%eax
-add    $0x4,%eax
-shl    $0x2,%eax
-add    0xc(%ebp),%eax
-lea    0x3(%eax),%edx
+mov    %al,-0x32(%ebp)
-add    $0x54,%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+lea    0x54(%eax),%edx
+lea    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+mov    -0x50(%ebp),%edx
+mov    %edx,(%eax)
+mov    -0x4c(%ebp),%edx
+mov    %edx,0x4(%eax)
+mov    -0x48(%ebp),%edx
+mov    %edx,0x8(%eax)
-mov    %edx,(%eax)
+mov    %edx,0xc(%eax)
-mov    %edx,0x4(%eax)
+mov    %edx,0x10(%eax)
-mov    %edx,0x8(%eax)
+mov    %edx,0x14(%eax)
-mov    %edx,0xc(%eax)
+mov    %edx,0x18(%eax)
-mov    %edx,0x10(%eax)
-mov    -0x30(%ebp),%edx
-mov    %edx,0x14(%eax)
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x18(%eax)
-mov    -0x28(%ebp),%edx
-lea    -0x28c(%ebp),%eax
+lea    -0x298(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x28c(%ebp),%ebx
+lea    -0x298(%ebp),%ebx
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x5,-0x1c(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x5,-0x20(%ebp)
-jne    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0xb2>
-jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x231>
+jne    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0xc1>
+jmp    <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x234>
-mov    0xc(%ebp),%edx
-mov    0xf(%edx),%edx
-cmp    %edx,%eax
+mov    %eax,%edx
+mov    0xc(%ebp),%eax
+mov    0xf(%eax),%eax
+cmp    %eax,%edx
-je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x264>
+je     <T> <_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec+0x269>
```

## statics _ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add [DIFF] pm=96
```diff
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x189>
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x16c>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x175>
+mov    0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
-jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x5e>
+jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x62>
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x189>
+mov    0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
-jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x89>
+jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x91>
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x189>
+mov    0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
-jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xb4>
+jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xc0>
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x189>
+mov    0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
-jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xdf>
+jns    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xef>
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x189>
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x15d>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x166>
+mov    0xc(%ebp),%ecx
-mov    -0x8(%ebp),%ebx
-mov    0xc(%ebp),%ecx
-add    %ebx,%eax
+add    -0x8(%ebp),%eax
-jle    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x10f>
+jle    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x11d>
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x189>
+mov    0xc(%ebp),%ecx
-mov    -0x8(%ebp),%ebx
-mov    0xc(%ebp),%ecx
-add    %ebx,%eax
+add    -0x8(%ebp),%eax
-fucompp
-fnstsw %ax
-sahf
-jne    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x159>
-jp     <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x159>
+fucomip %st(1),%st
+fstp   %st(0)
+jne    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x162>
+jp     <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x162>
+mov    0xc(%ebp),%ecx
-mov    -0x8(%ebp),%ebx
-mov    0xc(%ebp),%ecx
-add    %ebx,%eax
+add    -0x8(%ebp),%eax
-jle    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x159>
+jle    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x162>
-jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x180>
+jmp    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0x189>
-jne    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xe8>
+jne    <T> <_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add+0xf8>
```

## statics _ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler [DIFF] pm=35
```diff
-jmp    <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler+0x16e>
+jmp    <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler+0x174>
-je     <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler+0x169>
+je     <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler+0x16f>
-mov    0xc0(%eax),%esi
+mov    0xc0(%eax),%eax
+mov    %eax,%esi
-mov    0xbc(%eax),%edi
+mov    0xbc(%eax),%eax
+mov    %eax,-0x43c(%ebp)
-mov    %eax,-0x43c(%ebp)
+mov    %eax,-0x438(%ebp)
-mov    %eax,-0x438(%ebp)
+mov    %eax,-0x434(%ebp)
-mov    %eax,-0x434(%ebp)
+mov    %eax,-0x430(%ebp)
-mov    %eax,-0x430(%ebp)
+mov    %eax,-0x42c(%ebp)
-mov    %eax,-0x42c(%ebp)
+mov    %eax,%edi
-mov    0xa4(%eax),%ebx
+mov    0xa4(%eax),%eax
+mov    %eax,%ebx
-mov    %edi,0x2c(%esp)
+mov    %ecx,0x2c(%esp)
+mov    -0x438(%ebp),%ecx
-mov    -0x438(%ebp),%ecx
+mov    -0x434(%ebp),%ecx
-mov    -0x434(%ebp),%ecx
+mov    -0x430(%ebp),%ecx
-mov    -0x430(%ebp),%ecx
+mov    -0x42c(%ebp),%ecx
-mov    -0x42c(%ebp),%ecx
-mov    %ecx,0x18(%esp)
+mov    %edi,0x18(%esp)
```
