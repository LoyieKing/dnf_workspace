## monitor _ZNK11CUdpHandler14RecvFromClientEPcPiPjPt [DIFF] pm=66
```diff
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26b>
-movl   $0x10,-0x58(%ebp)
-lea    -0x58(%ebp),%ebx
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x25f>
+movl   $0x10,-0x44(%ebp)
+lea    -0x44(%ebp),%ebx
-jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x12b>
+jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x125>
-mov    -0x1c(%ebp),%eax
-cmp    $0x58,%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x86>
-cmp    $0x68,%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0xca>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x10e>
+cmpl   $0x58,-0x1c(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0xbe>
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x121>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x11b>
+cmpl   $0x68,-0x1c(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x108>
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x121>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x11b>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26b>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x25f>
-jg     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x192>
+jg     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x18c>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26b>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x25f>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1fb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1ef>
+mov    0xc(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1fb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1ef>
+mov    0xc(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1fb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1ef>
+mov    0xc(%ebp),%eax
-jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x25b>
+jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x24f>
-mov    -0x20(%ebp),%eax
+mov    0xc(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## monitor _ZNK11CUdpHandler14RecvFromServerEPcPiPjPt [DIFF] pm=58
```diff
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x255>
-movl   $0x10,-0x58(%ebp)
-lea    -0x58(%ebp),%ebx
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x249>
+movl   $0x10,-0x44(%ebp)
+lea    -0x44(%ebp),%ebx
-jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x12d>
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x127>
-mov    -0x1c(%ebp),%eax
-cmp    $0x58,%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x88>
-cmp    $0x68,%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xcc>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x110>
+cmpl   $0x58,-0x1c(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xc0>
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x123>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x11d>
+cmpl   $0x68,-0x1c(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x10a>
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x123>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x11d>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x255>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x249>
-jg     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x194>
+jg     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x18e>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x255>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x249>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1e5>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1d9>
+mov    0xc(%ebp),%eax
-jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x245>
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x239>
-mov    -0x20(%ebp),%eax
+mov    0xc(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## monitor _ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t [NEAR] pm=2
```diff
+mov    0x8(%ebp),%eax
-mov    0x8(%ebp),%eax
```

## statics _ZN14CNetworkThread8dispatchEPv [DIFF] pm=180
```diff
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x524>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x1c0>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x1c7>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x524>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x524>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x524>
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
+movl   $"./log/recvErr",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CUdpRecvBufferdlEPv>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x37d>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x524>
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x507>
+mov    -0x60(%ebp),%eax
+cmp    $0x1800,%eax
+jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x441>
+mov    -0x20(%ebp),%eax
+movzwl (%eax),%eax
+movzwl %ax,%edi
+mov    -0x60(%ebp),%esi
+mov    -0x20(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%ebx
+movl   $0x8d,0x8(%esp)
+movl   $&_ZZN14CNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x78(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x37d>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x507>
-mov    -0x60(%ebp),%eax
-cmp    $0x1800,%eax
-jbe    <T> <_ZN14CNetworkThread8dispatchEPv+0x441>
-mov    -0x20(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edi
-mov    -0x60(%ebp),%esi
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ebx
-movl   $0x8d,0x8(%esp)
-movl   $&_ZZN14CNetworkThread8dispatchEPvE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",0x8(%esp)
-movl   $"./log/recvErr",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,0x4(%esp)
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x431>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CUdpRecvBufferdlEPv>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x431>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x524>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x51f>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x524>
+setne  %al
+test   %al,%al
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x747>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x74c>
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x644>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x649>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5d4>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5d9>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5ce>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5d3>
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x5f3>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x5f8>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5f3>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x5f8>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x608>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x60d>
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x5f3>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x5f8>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x62f>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x634>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6d7>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6dc>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6d1>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6d6>
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x6f6>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x6fb>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6f6>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x6fb>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x70b>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x710>
-jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x6f6>
+jne    <T> <_ZN14CNetworkThread8dispatchEPv+0x6fb>
-jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x732>
+jmp    <T> <_ZN14CNetworkThread8dispatchEPv+0x737>
```

## statics _ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics [DIFF] pm=437
```diff
-movl   $0x0,-0x40(%ebp)
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x178>
-mov    -0x40(%ebp),%edx
-mov    0xc(%ebp),%ecx
+movl   $0x0,-0x2c(%ebp)
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x16b>
+mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
-je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x174>
-mov    -0x40(%ebp),%edx
+je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x167>
+mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
-add    0xc(%ebp),%eax
-add    $0xb,%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x40(%ebp),%edx
+mov    0xb(%eax,%ecx,1),%eax
+mov    %eax,-0x28(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
-add    0xc(%ebp),%eax
-add    $0xf,%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x3c(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x34(%ebp)
-mov    -0x38(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x40(%ebp),%ebx
-mov    -0x40(%ebp),%edx
+mov    0xf(%eax,%ecx,1),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%ebx
+mov    -0x2c(%ebp),%edx
-flds   -0x34(%ebp)
+flds   -0x28(%ebp)
-mov    -0x40(%ebp),%ecx
-mov    -0x40(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x37,%edx
+mov    -0x2c(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
+mov    0x8(%ebp),%eax
-add    $0x4,%eax
+add    $0x374,%eax
-flds   -0x30(%ebp)
+flds   -0x24(%ebp)
-add    $0x37,%ecx
-add    $0x4,%eax
+add    $0x374,%eax
-mov    -0x40(%ebp),%ebx
-mov    -0x40(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x37,%edx
+mov    -0x2c(%ebp),%ebx
+mov    -0x2c(%ebp),%edx
+mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    (%eax),%esi
-mov    -0x40(%ebp),%edx
-mov    0xc(%ebp),%ecx
+add    $0x378,%eax
+mov    (%eax),%eax
+mov    %eax,%esi
+mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
-lea    (%esi,%eax,1),%edx
-mov    0x8(%ebp),%eax
-lea    0x37(%ebx),%ecx
+lea    (%esi,%eax,1),%eax
+mov    0x8(%ebp),%edx
+mov    %ebx,%ecx
+shl    $0x4,%ecx
+add    %ecx,%edx
+add    $0x378,%edx
+mov    %eax,(%edx)
+mov    -0x2c(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
+mov    0x8(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x37c,%eax
+mov    (%eax),%eax
+lea    0x1(%eax),%edx
+mov    0x8(%ebp),%eax
-add    $0x8,%eax
+add    $0x37c,%eax
-mov    -0x40(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x37(%eax),%ecx
-shl    $0x4,%ecx
-add    %ecx,%edx
-add    $0xc,%edx
-mov    (%edx),%edx
-add    $0x1,%edx
-mov    0x8(%ebp),%ecx
-add    $0x37,%eax
-shl    $0x4,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0xc,%eax
-mov    %edx,(%eax)
-addl   $0x1,-0x40(%ebp)
-cmpl   $0x7,-0x40(%ebp)
+addl   $0x1,-0x2c(%ebp)
+cmpl   $0x7,-0x2c(%ebp)
-test   %al,%al
-je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x6bb>
-mov    0xc(%ebp),%eax
-movzbl 0x5b(%eax),%eax
-cmp    $0xa,%al
-ja     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x6bb>
-movl   $0x0,-0x2c(%ebp)
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x6a3>
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x50,%eax
-add    0xc(%ebp),%eax
-lea    0xc(%eax),%ecx
-mov    0x8(%ebp),%eax
-lea    0x3f0(%eax),%edx
-lea    -0x98(%ebp),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %al,-0x2d(%ebp)
+cmpb   $0x0,-0x2d(%ebp)
+je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x694>
+cmpb   $0xa,-0x2d(%ebp)
+ja     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x694>
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x682>
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x50,%eax
+mov    0xf(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x50,%eax
+mov    0x13(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x50,%eax
+mov    0x1a(%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x60,%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x50,%eax
+movzwl 0xc(%eax),%eax
+mov    %ax,-0x86(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x3f0(%eax),%ecx
+lea    -0x8c(%ebp),%eax
+lea    -0x86(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x50,%eax
-add    0xc(%ebp),%eax
-add    $0xf,%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x50,%eax
-add    0xc(%ebp),%eax
-add    $0x13,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x50,%eax
-add    0xc(%ebp),%eax
-add    $0x1a,%eax
-mov    %eax,-0x18(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x60,%eax
-add    0xc(%ebp),%eax
-add    $0xe,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
-jne    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2b6>
+jne    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2a6>
-lea    -0x94(%ebp),%eax
+lea    -0x84(%ebp),%eax
-lea    -0x94(%ebp),%eax
+lea    -0x84(%ebp),%eax
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2bd>
+je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2ad>
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2c2>
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x2b2>
-test   %al,%al
-je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x4c7>
-lea    -0xb8(%ebp),%eax
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x4a2>
+lea    -0xac(%ebp),%eax
-flds   -0x20(%ebp)
-fnstcw -0xba(%ebp)
-movzwl -0xba(%ebp),%eax
-mov    $0xc,%ah
-mov    %ax,-0xbc(%ebp)
-fldcw  -0xbc(%ebp)
-fistpll -0xc8(%ebp)
-fldcw  -0xba(%ebp)
-mov    -0xc8(%ebp),%eax
-mov    -0xc4(%ebp),%edx
-mov    %eax,-0xb8(%ebp)
-fldcw  -0xbc(%ebp)
-fistpll -0xc8(%ebp)
-fldcw  -0xba(%ebp)
-mov    -0xc8(%ebp),%eax
-mov    -0xc4(%ebp),%edx
-mov    %eax,-0xb4(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+fnstcw -0xba(%ebp)
+movzwl -0xba(%ebp),%eax
+mov    $0xc,%ah
+mov    %ax,-0xbc(%ebp)
+fldcw  -0xbc(%ebp)
+fistpll -0xc8(%ebp)
+fldcw  -0xba(%ebp)
+mov    -0xc8(%ebp),%eax
+mov    -0xc4(%ebp),%edx
+mov    %eax,-0xac(%ebp)
+flds   -0x18(%ebp)
+fldcw  -0xbc(%ebp)
+fistpll -0xc8(%ebp)
+fldcw  -0xba(%ebp)
+mov    -0xc8(%ebp),%eax
+mov    -0xc4(%ebp),%edx
+mov    %eax,-0xa8(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
-mov    %eax,-0xb0(%ebp)
-movl   $0x1,-0xac(%ebp)
+mov    %eax,-0xa4(%ebp)
+movl   $0x1,-0xa0(%ebp)
+flds   -0x14(%ebp)
+fldcw  -0xbc(%ebp)
+fistpll -0xc8(%ebp)
+fldcw  -0xba(%ebp)
+mov    -0xc8(%ebp),%eax
+mov    -0xc4(%ebp),%edx
+mov    %eax,-0x9c(%ebp)
-mov    %eax,-0xa8(%ebp)
-flds   -0xc(%ebp)
-fldcw  -0xbc(%ebp)
-fistpll -0xc8(%ebp)
-fldcw  -0xba(%ebp)
-mov    -0xc8(%ebp),%eax
-mov    -0xc4(%ebp),%edx
-mov    %eax,-0xa4(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    %eax,-0x98(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%edx
-mov    %eax,-0xa0(%ebp)
-movl   $0x1,-0x9c(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x50,%eax
-add    0xc(%ebp),%eax
-lea    0xc(%eax),%ecx
-lea    -0x64(%ebp),%eax
-lea    -0xb8(%ebp),%edx
+mov    %eax,-0x94(%ebp)
+movl   $0x1,-0x90(%ebp)
+lea    -0x54(%ebp),%eax
+lea    -0xac(%ebp),%edx
+mov    %edx,0x8(%esp)
+lea    -0x86(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZSt9make_pairIRtR22STDungeonLagStatisticsESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
+sub    $0x4,%esp
+lea    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIKt22STDungeonLagStatisticsEC1ItS1_EEOS_IT_T0_E>
+mov    0x8(%ebp),%eax
+lea    0x3f0(%eax),%ecx
+lea    -0x80(%ebp),%eax
+lea    -0x78(%ebp),%edx
-call   <T> <_ZSt9make_pairIRtR22STDungeonLagStatisticsESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
-sub    $0x4,%esp
-lea    -0x64(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x88(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKt22STDungeonLagStatisticsEC1ItS1_EEOS_IT_T0_E>
-mov    0x8(%ebp),%eax
-lea    0x3f0(%eax),%ecx
-lea    -0x90(%ebp),%eax
-lea    -0x88(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-lea    -0x88(%ebp),%eax
+lea    -0x78(%ebp),%eax
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIt22STDungeonLagStatisticsED1Ev>
-lea    -0xb8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN22STDungeonLagStatisticsD1Ev>
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x69f>
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x464>
-lea    -0x88(%ebp),%eax
+lea    -0x78(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x494>
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x44f>
-lea    -0x64(%ebp),%eax
+lea    -0x54(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x4a9>
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x471>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIt22STDungeonLagStatisticsED1Ev>
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x48f>
-lea    -0xb8(%ebp),%eax
+lea    -0xac(%ebp),%eax
-lea    -0x98(%ebp),%eax
+lea    -0xac(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN22STDungeonLagStatisticsD1Ev>
+jmp    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x67e>
+lea    -0x8c(%ebp),%eax
-flds   -0x20(%ebp)
+flds   -0x1c(%ebp)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-flds   -0x1c(%ebp)
+flds   -0x18(%ebp)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-mov    0xc(%edx),%ebx
-mov    -0x2c(%ebp),%ecx
+mov    0xc(%edx),%eax
+mov    %eax,%ebx
+mov    -0x20(%ebp),%ecx
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-flds   -0x10(%ebp)
+flds   -0x14(%ebp)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-flds   -0xc(%ebp)
+flds   -0x10(%ebp)
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-mov    0x1c(%edx),%ebx
-mov    -0x2c(%ebp),%ecx
+mov    0x1c(%edx),%eax
+mov    %eax,%ebx
+mov    -0x20(%ebp),%ecx
-lea    -0x98(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-addl   $0x1,-0x2c(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x5b(%eax),%eax
-movzbl %al,%eax
-cmp    -0x2c(%ebp),%eax
+addl   $0x1,-0x20(%ebp)
+movzbl -0x2d(%ebp),%eax
+cmp    -0x20(%ebp),%eax
-jne    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x1b1>
+jne    <T> <_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics+0x1a4>
```

## statics _ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc [DIFF] pm=211
```diff
-jmp    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x1c6>
+jmp    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x1c3>
+mov    -0x1c(%ebp),%edx
+mov    0x8(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x37c,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jle    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x1bf>
+movl   $0x400,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x43e(%ebp),%eax
+add    $0xa,%eax
+mov    %eax,(%esp)
+call   <T> <memset>
-add    %edx,%eax
-add    $0xc,%eax
-mov    (%eax),%eax
-test   %eax,%eax
-jle    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x1c2>
-movl   $0x400,0x8(%esp)
-movl   $0x0,0x4(%esp)
-lea    -0x43e(%ebp),%eax
-add    $0xa,%eax
-mov    %eax,(%esp)
-call   <T> <memset>
-mov    -0x1c(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x37,%edx
+mov    (%edx,%eax,1),%eax
+mov    -0x1c(%ebp),%ecx
+mov    0x8(%ebp),%edx
+shl    $0x4,%ecx
+add    %ecx,%edx
+add    $0x37c,%edx
+mov    (%edx),%edx
+mov    %edx,-0x45c(%ebp)
+mov    $0x0,%edx
+divl   -0x45c(%ebp)
+mov    %eax,%edi
+mov    -0x1c(%ebp),%edx
+mov    0x8(%ebp),%eax
-add    $0x8,%eax
+add    $0x374,%eax
-add    $0x37,%ecx
-add    $0xc,%edx
+add    $0x37c,%edx
+mov    (%edx),%edx
+mov    %edx,-0x45c(%ebp)
+mov    $0x0,%edx
+divl   -0x45c(%ebp)
+mov    %eax,%esi
+mov    -0x1c(%ebp),%edx
+mov    0x8(%ebp),%eax
+shl    $0x4,%edx
+add    %edx,%eax
+add    $0x378,%eax
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%ecx
+mov    0x8(%ebp),%edx
+shl    $0x4,%ecx
+add    %ecx,%edx
+add    $0x37c,%edx
-mov    %eax,%edi
-mov    -0x1c(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x37,%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0x4,%eax
-mov    (%eax),%eax
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%edx
-add    $0x37,%ecx
-shl    $0x4,%ecx
-add    %ecx,%edx
-add    $0xc,%edx
-mov    (%edx),%edx
-mov    %edx,-0x45c(%ebp)
-mov    $0x0,%edx
-divl   -0x45c(%ebp)
-mov    %eax,%esi
-mov    -0x1c(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x37,%edx
-shl    $0x4,%edx
-mov    (%edx,%eax,1),%eax
-mov    -0x1c(%ebp),%ecx
-mov    0x8(%ebp),%edx
-add    $0x37,%ecx
-shl    $0x4,%ecx
-add    %ecx,%edx
-add    $0xc,%edx
-mov    (%edx),%edx
-mov    %edx,-0x45c(%ebp)
-mov    $0x0,%edx
-divl   -0x45c(%ebp)
-xor    $0x1,%eax
-je     <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x48e>
+jne    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x492>
-jmp    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x449>
+jmp    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x44b>
-mov    0x1c(%eax),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x20(%eax),%eax
+mov    0x4(%eax),%eax
+mov    %eax,%ebx
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x10(%eax),%eax
+mov    %eax,-0x45c(%ebp)
+mov    %ebx,%eax
+mov    $0x0,%edx
+divl   -0x45c(%ebp)
+mov    %eax,%edi
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x8(%eax),%eax
+mov    %eax,%ebx
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x10(%eax),%eax
+mov    %eax,-0x45c(%ebp)
+mov    %ebx,%eax
+mov    $0x0,%edx
+divl   -0x45c(%ebp)
+mov    %eax,-0x458(%ebp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0xc(%eax),%ebx
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x10(%eax),%eax
-mov    %eax,%edi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x18(%eax),%ebx
+mov    %eax,-0x454(%ebp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x14(%eax),%eax
+mov    %eax,%ebx
-mov    %eax,-0x458(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x14(%eax),%ebx
+mov    %eax,-0x450(%ebp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x18(%eax),%eax
+mov    %eax,%ebx
-mov    %eax,-0x454(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0xc(%eax),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x10(%eax),%eax
+mov    %eax,-0x44c(%ebp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x1c(%eax),%ebx
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
+mov    0x20(%eax),%eax
-mov    %eax,-0x450(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x8(%eax),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x10(%eax),%eax
-mov    %eax,-0x45c(%ebp)
-mov    %ebx,%eax
-mov    $0x0,%edx
-divl   -0x45c(%ebp)
-mov    %eax,-0x44c(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x4(%eax),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKt22STDungeonLagStatisticsEEptEv>
-mov    0x10(%eax),%eax
-mov    %eax,-0x45c(%ebp)
-mov    %ebx,%eax
-mov    $0x0,%edx
-divl   -0x45c(%ebp)
-jne    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x210>
+jne    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x20a>
+jmp    <T> <_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc+0x493>
+nop
```

## statics _ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler [DIFF] pm=203
```diff
-je     <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x4b5>
+je     <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x4ae>
-jmp    <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x422>
+jmp    <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x41b>
-movzbl 0x9(%eax),%ecx
+movzbl 0x9(%eax),%eax
+mov    %eax,%ecx
-movzbl 0xa(%eax),%ecx
+movzbl 0xa(%eax),%eax
+mov    %eax,%ecx
-movzbl 0xb(%eax),%ecx
+movzbl 0xb(%eax),%eax
+mov    %eax,%ecx
-movzbl 0xc(%eax),%ecx
+movzbl 0xc(%eax),%eax
+mov    %eax,%ecx
-mov    0x14(%eax),%ecx
+mov    0x14(%eax),%edx
+mov    %ebx,%eax
+shl    $0x4,%eax
+sub    %ebx,%eax
+add    $0x1,%eax
+mov    %edx,-0x1788(%ebp,%eax,4)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
+mov    0x18(%eax),%ecx
+mov    %ebx,%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+sub    %eax,%edx
+lea    -0x8(%ebp),%eax
+add    %edx,%eax
+sub    $0x1792,%eax
+mov    %ecx,0x1a(%eax)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
+mov    0x1c(%eax),%ecx
+mov    %ebx,%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+sub    %eax,%edx
+lea    -0x8(%ebp),%eax
+add    %edx,%eax
+sub    $0x178e,%eax
+mov    %ecx,0x1a(%eax)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
+mov    0x20(%eax),%ecx
-mov    %ecx,0xe(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x18(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x178a,%eax
-mov    %ecx,0x12(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x1c(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x178a,%eax
-mov    %ecx,0x16(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x20(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x178a,%eax
+sub    $0x1786,%eax
+mov    %ecx,0x1a(%eax)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
+mov    0x28(%eax),%ecx
+mov    %ebx,%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+sub    %eax,%edx
+lea    -0x8(%ebp),%eax
+add    %edx,%eax
+sub    $0x1782,%eax
+mov    %ecx,0x1a(%eax)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
+mov    0x2c(%eax),%ecx
+mov    %ebx,%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+sub    %eax,%edx
+lea    -0x8(%ebp),%eax
+add    %edx,%eax
+sub    $0x177e,%eax
+mov    %ecx,0x1a(%eax)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
+mov    0x30(%eax),%ecx
+mov    %ebx,%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+sub    %eax,%edx
+lea    -0x8(%ebp),%eax
+add    %edx,%eax
-mov    %ecx,0xe(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x28(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x177a,%eax
-mov    %ecx,0x12(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x2c(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x177a,%eax
-mov    %ecx,0x16(%eax)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK19STPartyStatisticKey14PartyStatisticEEptEv>
-mov    0x30(%eax),%ecx
-mov    %ebx,%eax
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    -0x8(%ebp),%eax
-add    %edx,%eax
-sub    $0x177a,%eax
-sub    $0x176a,%eax
-mov    %ecx,0xe(%eax)
+sub    $0x1776,%eax
+mov    %ecx,0x1a(%eax)
-sub    $0x176a,%eax
-mov    %ecx,0x12(%eax)
+sub    $0x1772,%eax
+mov    %ecx,0x1a(%eax)
-sub    $0x176a,%eax
-mov    %ecx,0x16(%eax)
+sub    $0x176e,%eax
+mov    %ecx,0x1a(%eax)
-mov    -0xc(%ebp),%eax
-cmp    $0x63,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x417>
+cmpl   $0x63,-0xc(%ebp)
+jbe    <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x410>
-je     <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x4b5>
+je     <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler+0x4ae>
```

## statics _ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic [DIFF] pm=33
```diff
-je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21c>
+je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21a>
-jg     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21f>
+jg     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21d>
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x206>
+jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x204>
-je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x17e>
+je     <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x17c>
-add    $0x10,%eax
-mov    0xe(%eax),%eax
+add    $0x1c,%eax
+mov    0x2(%eax),%eax
-mov    0x8(%edx),%ebx
-mov    -0xc(%ebp),%ecx
-mov    0xc(%ebp),%esi
+mov    0x8(%edx),%esi
+mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%ebx
+lea    0x1(%eax),%ecx
+mov    0x2(%eax,%ebx,1),%eax
-add    $0x10,%eax
-mov    0x6(%eax),%eax
-lea    (%ebx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xa(%eax),%eax
+add    $0x18,%eax
+mov    0x2(%eax),%eax
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x202>
+jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x200>
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x220>
+jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21e>
-jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x220>
+jmp    <T> <_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic+0x21e>
```

## statics _ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler [DIFF] pm=32
```diff
-je     <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x39e>
+je     <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x3a2>
-jmp    <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x30b>
+jmp    <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x30f>
-movzbl 0x9(%eax),%edx
+movzbl 0x9(%eax),%eax
+mov    %eax,%edx
-movzbl 0xa(%eax),%edx
+movzbl 0xa(%eax),%eax
+mov    %eax,%edx
-movzbl 0xb(%eax),%edx
+movzbl 0xb(%eax),%eax
+mov    %eax,%edx
-movzbl 0xc(%eax),%edx
+movzbl 0xc(%eax),%eax
+mov    %eax,%edx
-mov    0x10(%eax),%edx
+mov    0x10(%eax),%eax
+mov    %eax,%edx
-sub    $0x17d5,%eax
-mov    %edx,0x13(%eax)
+sub    $0x17d1,%eax
+mov    %edx,0xf(%eax)
-mov    -0xc(%ebp),%eax
-cmp    $0xf2,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x300>
+cmpl   $0xf2,-0xc(%ebp)
+jbe    <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x304>
-je     <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x39e>
+je     <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler+0x3a2>
```

## statics _ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler [DIFF] pm=13
```diff
-je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x1a0>
+je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x19a>
-jmp    <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x10a>
+jmp    <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x104>
-mov    -0xc(%ebp),%eax
-cmp    $0x2fd,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0xff>
+cmpl   $0x2fd,-0xc(%ebp)
+jbe    <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0xf9>
-je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x1a0>
+je     <T> <_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler+0x19a>
```

## statics _ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS [DIFF] pm=14
```diff
-jle    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x97>
+jle    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x9e>
-jg     <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x9a>
+jg     <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xa1>
-je     <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x73>
+je     <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x77>
-jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x9b>
+jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xa2>
-jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x9b>
+jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xa2>
-jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0x9b>
+jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xa2>
+nop
+jmp    <T> <_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS+0xa2>
```

## statics _ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler [DIFF] pm=193
```diff
-je     <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x447>
+je     <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x440>
-jmp    <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x3b4>
+jmp    <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x3ad>
+sub    $0x1771,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x1c(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x176d,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x20(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x1769,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x24(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
-mov    %eax,0x11(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x1c(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1765,%edx
-mov    %eax,0x15(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x20(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1765,%edx
-mov    %eax,0x19(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x24(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1765,%edx
+sub    $0x1761,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x2c(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x175d,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x30(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x1759,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x34(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
-mov    %eax,0x11(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x2c(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1755,%edx
-mov    %eax,0x15(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x30(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1755,%edx
-mov    %eax,0x19(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x34(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1755,%edx
+sub    $0x1751,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x3c(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x174d,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x40(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
+sub    $0x1749,%edx
+mov    %eax,0x1d(%edx)
+mov    -0xc(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
+mov    0x44(%eax),%eax
+imul   $0x43,%ebx,%edx
+lea    -0x8(%ebp),%ecx
+lea    (%ecx,%edx,1),%edx
-mov    %eax,0x11(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x3c(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1745,%edx
-mov    %eax,0x15(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x40(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1745,%edx
-mov    %eax,0x19(%edx)
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK16STPartyCharacKey20PartyCharacStatisticEEptEv>
-mov    0x44(%eax),%eax
-imul   $0x43,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1745,%edx
-mov    -0xc(%ebp),%eax
-cmp    $0x58,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x3a9>
+cmpl   $0x58,-0xc(%ebp)
+jbe    <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x3a2>
-je     <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x447>
+je     <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler+0x440>
```

## statics _ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party [DIFF] pm=129
```diff
-sub    $0xf0,%esp
-lea    -0xa8(%ebp),%eax
+sub    $0xe0,%esp
+lea    -0xa4(%ebp),%eax
-movw   $0x0,-0xa8(%ebp)
+movw   $0x0,-0xa4(%ebp)
-mov    %eax,-0xa4(%ebp)
+mov    %eax,-0xa0(%ebp)
-mov    %al,-0xa0(%ebp)
+mov    %al,-0x9c(%ebp)
-mov    %al,-0x9f(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0x9b(%ebp)
-mov    %al,-0x9e(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0x9a(%ebp)
-mov    %al,-0x9d(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0x99(%ebp)
-mov    %al,-0x9c(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0x98(%ebp)
-mov    %al,-0x9b(%ebp)
-lea    -0xdc(%ebp),%eax
+mov    %al,-0x97(%ebp)
+lea    -0xd8(%ebp),%eax
-mov    %eax,-0xdc(%ebp)
+mov    %eax,-0xd8(%ebp)
-mov    %eax,-0xd8(%ebp)
+mov    %eax,-0xd4(%ebp)
-mov    %eax,-0xd4(%ebp)
+mov    %eax,-0xd0(%ebp)
-mov    %eax,-0xd0(%ebp)
+mov    %eax,-0xcc(%ebp)
-mov    %eax,-0xcc(%ebp)
+mov    %eax,-0xc8(%ebp)
-mov    %eax,-0xc8(%ebp)
+mov    %eax,-0xc4(%ebp)
-mov    %eax,-0xc4(%ebp)
+mov    %eax,-0xc0(%ebp)
-mov    %eax,-0xc0(%ebp)
+mov    %eax,-0xbc(%ebp)
-mov    %eax,-0xbc(%ebp)
+mov    %eax,-0xb8(%ebp)
-mov    %eax,-0xb8(%ebp)
+mov    %eax,-0xb4(%ebp)
-mov    %eax,-0xb4(%ebp)
+mov    %eax,-0xb0(%ebp)
-lea    -0xac(%ebp),%eax
-lea    -0xa8(%ebp),%edx
+lea    -0xa8(%ebp),%eax
+lea    -0xa4(%ebp),%edx
-jne    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x17e>
+jne    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x192>
-lea    -0x98(%ebp),%eax
+lea    -0x94(%ebp),%eax
-lea    -0x98(%ebp),%eax
+lea    -0x94(%ebp),%eax
-lea    -0xac(%ebp),%eax
+lea    -0xa8(%ebp),%eax
-je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x185>
+je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x199>
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x18a>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x19e>
-je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x239>
-lea    -0x4c(%ebp),%eax
-lea    -0xdc(%ebp),%edx
+je     <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x24c>
+lea    -0x48(%ebp),%eax
+lea    -0xd8(%ebp),%edx
-lea    -0xa8(%ebp),%edx
+lea    -0xa4(%ebp),%edx
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x8c(%ebp),%eax
+lea    -0x88(%ebp),%eax
-lea    -0x94(%ebp),%eax
-lea    -0x8c(%ebp),%edx
+lea    -0x90(%ebp),%eax
+lea    -0x88(%ebp),%edx
-lea    -0x8c(%ebp),%eax
+lea    -0x88(%ebp),%eax
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI19STPartyStatisticKey14PartyStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x298>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x23f>
-lea    -0x8c(%ebp),%eax
+lea    -0x88(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x224>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x22a>
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x264>
-lea    -0xac(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x271>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI19STPartyStatisticKey14PartyStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x289>
+lea    -0xa8(%ebp),%eax
-add    $0x10,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0xdc(%ebp),%eax
+lea    0x10(%eax),%edx
+lea    -0xd8(%ebp),%eax
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x298>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x289>
-lea    -0xdc(%ebp),%eax
+lea    -0xd8(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x299>
+lea    -0xd8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14PartyStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party+0x2b7>
-lea    -0xa8(%ebp),%eax
+lea    -0xa4(%ebp),%eax
-lea    -0xdc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14PartyStatisticD1Ev>
-lea    -0xa8(%ebp),%eax
+lea    -0xa4(%ebp),%eax
```

## statics _ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info [DIFF] pm=93
```diff
-je     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x328>
-lea    -0x642(%ebp),%eax
+je     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x324>
+lea    -0x63e(%ebp),%eax
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
-mov    %ax,-0x542(%ebp)
+mov    %ax,-0x53e(%ebp)
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
-lea    -0x43c(%ebp),%eax
+lea    -0x438(%ebp),%eax
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
-lea    -0x43c(%ebp),%eax
+lea    -0x438(%ebp),%eax
-lea    -0x434(%ebp),%eax
+lea    -0x430(%ebp),%eax
-lea    -0x434(%ebp),%eax
+lea    -0x430(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x318>
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x314>
-lea    -0x440(%ebp),%eax
-lea    -0x642(%ebp),%edx
+lea    -0x43c(%ebp),%eax
+lea    -0x63e(%ebp),%edx
-lea    -0x42c(%ebp),%eax
+lea    -0x428(%ebp),%eax
-lea    -0x42c(%ebp),%eax
+lea    -0x428(%ebp),%eax
-lea    -0x440(%ebp),%eax
+lea    -0x43c(%ebp),%eax
-je     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2d5>
-movl   $0x1,-0x10(%ebp)
-lea    -0x218(%ebp),%eax
-lea    -0x10(%ebp),%edx
+je     <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2d7>
+movl   $0x1,-0xc(%ebp)
+lea    -0x214(%ebp),%eax
+lea    -0xc(%ebp),%edx
-lea    -0x642(%ebp),%edx
+lea    -0x63e(%ebp),%edx
-lea    -0x218(%ebp),%eax
+lea    -0x214(%ebp),%eax
-lea    -0x420(%ebp),%eax
+lea    -0x41c(%ebp),%eax
-lea    -0x428(%ebp),%eax
-lea    -0x420(%ebp),%edx
+lea    -0x424(%ebp),%eax
+lea    -0x41c(%ebp),%edx
-lea    -0x420(%ebp),%eax
+lea    -0x41c(%ebp),%eax
-lea    -0x218(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI18STAssertManagerKeyiED1Ev>
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x318>
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2c7>
-lea    -0x420(%ebp),%eax
+lea    -0x41c(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2bd>
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2af>
-lea    -0x218(%ebp),%eax
+lea    -0x214(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2fa>
-lea    -0x440(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x2f6>
+lea    -0x214(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI18STAssertManagerKeyiED1Ev>
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x314>
+lea    -0x43c(%ebp),%eax
-add    $0x204,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-lea    0x1(%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,(%eax)
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x318>
+mov    0x204(%eax),%edx
+add    $0x1,%edx
+mov    %edx,0x204(%eax)
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x314>
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
-lea    -0x642(%ebp),%eax
+lea    -0x63e(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x329>
+jmp    <T> <_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info+0x325>
```

## statics _ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item [DIFF] pm=95
```diff
-lea    -0x74(%ebp),%eax
+lea    -0x70(%ebp),%eax
-mov    %al,-0x74(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0x70(%ebp)
-mov    %eax,-0x70(%ebp)
+mov    %eax,-0x6c(%ebp)
-mov    %al,-0x6c(%ebp)
+mov    %al,-0x68(%ebp)
-mov    %al,-0x6b(%ebp)
+mov    %al,-0x67(%ebp)
-mov    %al,-0x6a(%ebp)
-lea    -0x90(%ebp),%eax
+mov    %al,-0x66(%ebp)
+lea    -0x8c(%ebp),%eax
-lea    -0x90(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-lea    -0x94(%ebp),%eax
-lea    -0x74(%ebp),%edx
+lea    -0x90(%ebp),%eax
+lea    -0x70(%ebp),%edx
-jne    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xe5>
+jne    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xea>
-lea    -0x68(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x68(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x94(%ebp),%eax
+lea    -0x90(%ebp),%eax
-je     <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xec>
+je     <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xf1>
-jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xf1>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0xf6>
-je     <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x191>
-lea    -0x34(%ebp),%eax
-lea    -0x90(%ebp),%edx
+je     <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x195>
+lea    -0x30(%ebp),%eax
+lea    -0x8c(%ebp),%edx
-lea    -0x74(%ebp),%edx
+lea    -0x70(%ebp),%edx
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x64(%ebp),%eax
-lea    -0x5c(%ebp),%edx
+lea    -0x60(%ebp),%eax
+lea    -0x58(%ebp),%edx
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI27STHellPartyStatisticItemKey18HellPartyItenmDataED1Ev>
-jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1ed>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x188>
-lea    -0x5c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x17c>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x173>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1bc>
-lea    -0x94(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1ba>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI27STHellPartyStatisticItemKey18HellPartyItenmDataED1Ev>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1d2>
+lea    -0x90(%ebp),%eax
-add    $0xc,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x90(%ebp),%eax
+lea    0xc(%eax),%edx
+lea    -0x8c(%ebp),%eax
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1ed>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1d2>
-lea    -0x90(%ebp),%eax
+lea    -0x8c(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1e2>
+lea    -0x8c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18HellPartyItenmDataD1Ev>
+jmp    <T> <_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item+0x1fd>
-lea    -0x74(%ebp),%eax
+lea    -0x70(%ebp),%eax
-lea    -0x90(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN18HellPartyItenmDataD1Ev>
-lea    -0x74(%ebp),%eax
+lea    -0x70(%ebp),%eax
```

## statics _ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler [DIFF] pm=52
```diff
-je     <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x234>
+je     <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x22c>
-jmp    <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x19e>
+jmp    <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x196>
-mov    -0xc(%ebp),%edx
-lea    -0x1268(%ebp),%ecx
-imul   $0x206,%edx,%edx
-lea    (%ecx,%edx,1),%edx
-add    $0xe,%edx
+lea    -0x1268(%ebp),%edx
+mov    -0xc(%ebp),%ecx
+imul   $0x206,%ecx,%ecx
+add    $0xe,%ecx
+add    %ecx,%edx
-mov    -0xc(%ebp),%ebx
+mov    -0xc(%ebp),%eax
+imul   $0x206,%eax,%eax
+add    $0x10e,%eax
+lea    -0x1268(%ebp),%ebx
+add    %eax,%ebx
-imul   $0x206,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1160,%edx
-mov    %ax,0xe(%edx)
-mov    -0xc(%ebp),%ebx
+mov    %ax,(%ebx)
+lea    -0x1268(%ebp),%eax
+mov    -0xc(%ebp),%edx
+imul   $0x206,%edx,%edx
+add    $0x110,%edx
+lea    (%eax,%edx,1),%ebx
-imul   $0x206,%ebx,%edx
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0x1150,%edx
-mov    %eax,(%edx)
+mov    %eax,(%ebx)
+lea    -0x1268(%ebp),%edx
-lea    -0x1268(%ebp),%edx
-add    $0x100,%ecx
+add    $0x114,%ecx
-add    $0x14,%edx
-mov    -0xc(%ebp),%eax
-cmp    $0x8,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x193>
+cmpl   $0x8,-0xc(%ebp)
+jbe    <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x18b>
-je     <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x234>
+je     <T> <_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler+0x22c>
```

## statics _ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler [DIFF] pm=121
```diff
-je     <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x2a5>
+je     <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x29f>
-jmp    <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x20f>
-mov    -0xc(%ebp),%ebx
+jmp    <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x209>
+lea    -0x17d2(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    $0xe,%eax
+lea    (%ecx,%eax,1),%ebx
-movzbl (%eax),%edx
-mov    %ebx,%eax
+movzbl (%eax),%eax
+mov    %al,(%ebx)
+lea    -0x17d2(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
-add    %ebx,%eax
+add    %edx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %dl,0xe(%eax)
-mov    -0xc(%ebp),%ebx
+add    $0xf,%eax
+lea    (%ecx,%eax,1),%ebx
-mov    0x4(%eax),%edx
-mov    %ebx,%eax
+mov    0x4(%eax),%eax
+mov    %eax,(%ebx)
+lea    -0x17d2(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
-add    %ebx,%eax
+add    %edx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %edx,0xf(%eax)
-mov    -0xc(%ebp),%ebx
+add    $0x13,%eax
+lea    (%ecx,%eax,1),%ebx
-movzbl 0x8(%eax),%edx
-mov    %ebx,%eax
+movzbl 0x8(%eax),%eax
+mov    %al,(%ebx)
+lea    -0x17d2(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
-add    %ebx,%eax
+add    %edx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %dl,0x13(%eax)
-mov    -0xc(%ebp),%ebx
+add    $0x14,%eax
+lea    (%ecx,%eax,1),%ebx
-movzbl 0x9(%eax),%edx
-mov    %ebx,%eax
+movzbl 0x9(%eax),%eax
+mov    %al,(%ebx)
+lea    -0x17d2(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
-add    %ebx,%eax
+add    %edx,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %dl,0x14(%eax)
-mov    -0xc(%ebp),%ebx
+add    $0x15,%eax
+lea    (%ecx,%eax,1),%ebx
-movzbl 0xa(%eax),%edx
-mov    %ebx,%eax
-shl    $0x3,%eax
-add    %ebx,%eax
-shl    $0x2,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %dl,0x15(%eax)
+movzbl 0xa(%eax),%eax
+mov    %al,(%ebx)
+lea    -0x17d2(%ebp),%ebx
-lea    -0x17d2(%ebp),%ebx
+add    $0x1a,%eax
-add    $0x1a,%eax
-mov    -0xc(%ebp),%ebx
+lea    -0x17d2(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+add    %edx,%eax
+shl    $0x2,%eax
+add    $0x16,%eax
+lea    (%ecx,%eax,1),%ebx
-mov    0xc(%eax),%edx
-mov    %ebx,%eax
-shl    $0x3,%eax
-add    %ebx,%eax
-shl    $0x2,%eax
-lea    -0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-sub    $0x17ca,%eax
-mov    %edx,0x16(%eax)
+mov    0xc(%eax),%eax
+mov    %eax,(%ebx)
-mov    -0xc(%ebp),%eax
-cmp    $0xa7,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x204>
+cmpl   $0xa7,-0xc(%ebp)
+jbe    <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x1fe>
-je     <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x2a5>
+je     <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler+0x29f>
```

## statics _ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics [DIFF] pm=355
```diff
-sub    $0xb0,%esp
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x579>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
+sub    $0xc0,%esp
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x58d>
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%edx
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x63>
-mov    -0x1c(%ebp),%ebx
-mov    -0x1c(%ebp),%edx
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x66>
+mov    -0x20(%ebp),%ebx
+mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
+mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%eax
-mov    0x8(%ebp),%edx
-lea    0x58(%eax),%ecx
-mov    0x4(%edx,%ecx,4),%edx
-lea    0x1(%edx),%ecx
-mov    0x8(%ebp),%edx
-add    $0x58,%eax
-mov    %ecx,0x4(%edx,%eax,4)
-cmpl   $0x7,-0x1c(%ebp)
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2ee>
+mov    -0x20(%ebp),%edx
+mov    -0x20(%ebp),%ecx
+mov    0x8(%ebp),%eax
+add    $0x58,%ecx
+mov    0x4(%eax,%ecx,4),%eax
+lea    0x1(%eax),%ecx
+mov    0x8(%ebp),%eax
+add    $0x58,%edx
+mov    %ecx,0x4(%eax,%edx,4)
+cmpl   $0x7,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2fb>
-mov    %ax,-0x16(%ebp)
-cmpw   $0x0,-0x16(%ebp)
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2ee>
-lea    -0x84(%ebp),%eax
+mov    %ax,-0x1a(%ebp)
+cmpw   $0x0,-0x1a(%ebp)
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2fb>
+lea    -0x88(%ebp),%eax
-mov    %eax,-0x84(%ebp)
-movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2ae>
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    %eax,-0x88(%ebp)
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2bb>
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
-mov    %ax,-0x80(%ebp)
+mov    %ax,-0x84(%ebp)
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2aa>
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2b7>
-lea    -0x88(%ebp),%eax
-lea    -0x84(%ebp),%edx
+lea    -0x8c(%ebp),%eax
+lea    -0x88(%ebp),%edx
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x154>
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x15a>
-lea    -0x7c(%ebp),%eax
+lea    -0x80(%ebp),%eax
-lea    -0x7c(%ebp),%eax
+lea    -0x80(%ebp),%eax
-lea    -0x88(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x15b>
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x161>
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x160>
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x166>
-test   %al,%al
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2aa>
-lea    -0x90(%ebp),%eax
+mov    %al,-0x13(%ebp)
+cmpb   $0x0,-0x13(%ebp)
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2b7>
+lea    -0x94(%ebp),%eax
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
-mov    %al,-0x90(%ebp)
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    %al,-0x94(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
-mov    %ax,-0x8e(%ebp)
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    %ax,-0x92(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
-mov    %ax,-0x8c(%ebp)
-mov    -0x14(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    %ax,-0x90(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x18(%ebp),%edx
-mov    %ax,-0x8a(%ebp)
-lea    -0x60(%ebp),%eax
-lea    -0x90(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0x84(%ebp),%edx
+mov    %ax,-0x8e(%ebp)
+lea    -0x64(%ebp),%eax
+lea    -0x94(%ebp),%edx
+mov    %edx,0x8(%esp)
+lea    -0x88(%ebp),%edx
-lea    -0x60(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x70(%ebp),%eax
+lea    -0x74(%ebp),%eax
-lea    -0x78(%ebp),%eax
-lea    -0x70(%ebp),%edx
+lea    -0x7c(%ebp),%eax
+lea    -0x74(%ebp),%edx
-lea    -0x70(%ebp),%eax
+lea    -0x74(%ebp),%eax
-lea    -0x60(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x284>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x26f>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x64(%ebp),%eax
-lea    -0x90(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x291>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataED1Ev>
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2a9>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x94(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2aa>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIK25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x27d>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI25STPowerwarFightLoadingKey26STPowerwarFightLoadingDataED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x292>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x90(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2cf>
+lea    -0x94(%ebp),%eax
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2c2>
-addl   $0x1,-0x14(%ebp)
-movzwl -0x16(%ebp),%eax
-cmp    -0x14(%ebp),%eax
+addl   $0x1,-0x18(%ebp)
+movzwl -0x1a(%ebp),%eax
+cmp    -0x18(%ebp),%eax
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0xa9>
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2e0>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x84(%ebp),%eax
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0xac>
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x2ed>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x88(%ebp),%eax
-lea    -0x84(%ebp),%eax
+lea    -0x88(%ebp),%eax
-cmpl   $0x8,-0x1c(%ebp)
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x575>
+cmpl   $0x8,-0x20(%ebp)
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x589>
-mov    %ax,-0xe(%ebp)
-cmpw   $0x0,-0xe(%ebp)
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x575>
-lea    -0x98(%ebp),%eax
+mov    %ax,-0x12(%ebp)
+cmpw   $0x0,-0x12(%ebp)
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x589>
+lea    -0x9c(%ebp),%eax
-mov    %eax,-0x98(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x535>
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    %eax,-0x9c(%ebp)
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x549>
+mov    0xc(%ebp),%ecx
+mov    -0x10(%ebp),%edx
-mov    %ax,-0x94(%ebp)
+mov    %ax,-0x98(%ebp)
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x531>
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x545>
-lea    -0x9c(%ebp),%eax
-lea    -0x98(%ebp),%edx
+lea    -0xa0(%ebp),%eax
+lea    -0x9c(%ebp),%edx
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x3eb>
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x3f8>
-lea    -0x50(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x9c(%ebp),%eax
+lea    -0xa0(%ebp),%eax
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x3f2>
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x3ff>
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x3f7>
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x404>
-test   %al,%al
-je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x531>
-lea    -0xa8(%ebp),%eax
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x545>
+lea    -0xac(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    0xc(%ebp),%ecx
+mov    -0x10(%ebp),%edx
-mov    %al,-0xa8(%ebp)
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    %al,-0xac(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x10(%ebp),%edx
-mov    %eax,-0xa4(%ebp)
-mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
+mov    %eax,-0xa8(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x10(%ebp),%edx
-mov    %eax,-0xa0(%ebp)
-lea    -0x30(%ebp),%eax
-lea    -0xa8(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    -0x98(%ebp),%edx
+mov    %eax,-0xa4(%ebp)
+lea    -0x34(%ebp),%eax
+lea    -0xac(%ebp),%edx
+mov    %edx,0x8(%esp)
+lea    -0x9c(%ebp),%edx
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x4c(%ebp),%eax
-lea    -0x44(%ebp),%edx
+lea    -0x50(%ebp),%eax
+lea    -0x48(%ebp),%edx
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x30(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x512>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x4fd>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x34(%ebp),%eax
-lea    -0xa8(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x51f>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI21STPowerwarFightLagKey22STPowerwarFightLagDataED1Ev>
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x537>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0xac(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x531>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIK21STPowerwarFightLagKey22STPowerwarFightLagDataED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x504>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI21STPowerwarFightLagKey22STPowerwarFightLagDataED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x519>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0xa8(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x55d>
+lea    -0xac(%ebp),%eax
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x549>
-addl   $0x1,-0xc(%ebp)
-movzwl -0xe(%ebp),%eax
-cmp    -0xc(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+movzwl -0x12(%ebp),%eax
+cmp    -0x10(%ebp),%eax
-jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x337>
-jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x567>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x98(%ebp),%eax
+jne    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x344>
+jmp    <T> <_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics+0x57b>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x9c(%ebp),%eax
-lea    -0x98(%ebp),%eax
+lea    -0x9c(%ebp),%eax
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x8,-0x1c(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x8,-0x20(%ebp)
```

## statics _ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler [DIFF] pm=86
```diff
-lea    -0x180b(%ebp),%eax
+lea    -0x180f(%ebp),%eax
-movl   $0x0,-0xc(%ebp)
+movl   $0x0,-0x10(%ebp)
-je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x208>
+je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x210>
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x172>
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x17a>
+mov    -0x10(%ebp),%ebx
+lea    -0x28(%ebp),%eax
-movzbl (%eax),%edx
+movzbl (%eax),%eax
+mov    %eax,%edx
-sub    $0x17f5,%eax
+sub    $0x17f9,%eax
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+mov    -0x10(%ebp),%ebx
+lea    -0x28(%ebp),%eax
-movzwl 0x2(%eax),%edx
+movzwl 0x2(%eax),%eax
+mov    %eax,%edx
-sub    $0x1803,%eax
+sub    $0x1807,%eax
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+mov    -0x10(%ebp),%ebx
+lea    -0x28(%ebp),%eax
-sub    $0x1803,%eax
+sub    $0x1807,%eax
-mov    -0xc(%ebp),%ebx
-lea    -0x24(%ebp),%eax
+mov    -0x10(%ebp),%ebx
+lea    -0x28(%ebp),%eax
-sub    $0x1803,%eax
+sub    $0x1807,%eax
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x196,%eax
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x196,-0x10(%ebp)
-test   %al,%al
-je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x167>
-movl   $0x197,-0x1801(%ebp)
-lea    -0x180b(%ebp),%eax
+mov    %al,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x16f>
+movl   $0x197,-0x1805(%ebp)
+lea    -0x180f(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-movl   $0x0,-0xc(%ebp)
-lea    -0x24(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x208>
-mov    -0xc(%ebp),%eax
-mov    %eax,-0x1801(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler+0x210>
+mov    -0x10(%ebp),%eax
+mov    %eax,-0x1805(%ebp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x180b(%ebp),%eax
+lea    -0x180f(%ebp),%eax
```

## statics _ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler [DIFF] pm=13
```diff
-je     <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x1a0>
+je     <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x19a>
-jmp    <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x10a>
+jmp    <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x104>
-mov    -0xc(%ebp),%eax
-cmp    $0x2fd,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0xff>
+cmpl   $0x2fd,-0xc(%ebp)
+jbe    <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0xf9>
-je     <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x1a0>
+je     <T> <_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler+0x19a>
```

## statics _ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac [DIFF] pm=125
```diff
-lea    -0xbc(%ebp),%eax
+lea    -0xb8(%ebp),%eax
-movw   $0x0,-0xbc(%ebp)
+movw   $0x0,-0xb8(%ebp)
-mov    %eax,-0xb8(%ebp)
+mov    %eax,-0xb4(%ebp)
-mov    %al,-0xb4(%ebp)
+mov    %al,-0xb0(%ebp)
-mov    %al,-0xb3(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0xaf(%ebp)
-mov    %al,-0xb2(%ebp)
+test   %al,%al
+setne  %al
+mov    %al,-0xae(%ebp)
-mov    %eax,-0xb0(%ebp)
+mov    %eax,-0xac(%ebp)
-mov    %al,-0xac(%ebp)
+mov    %al,-0xa8(%ebp)
-mov    %al,-0xab(%ebp)
-lea    -0xf4(%ebp),%eax
+mov    %al,-0xa7(%ebp)
+lea    -0xf0(%ebp),%eax
-mov    %eax,-0xf4(%ebp)
+mov    %eax,-0xf0(%ebp)
-mov    %eax,-0xf0(%ebp)
+mov    %eax,-0xec(%ebp)
-mov    %eax,-0xec(%ebp)
+mov    %eax,-0xe8(%ebp)
-mov    %eax,-0xe8(%ebp)
+mov    %eax,-0xe4(%ebp)
-mov    %eax,-0xe4(%ebp)
+mov    %eax,-0xe0(%ebp)
-mov    %eax,-0xe0(%ebp)
+mov    %eax,-0xdc(%ebp)
-mov    %eax,-0xdc(%ebp)
+mov    %eax,-0xd8(%ebp)
-mov    %eax,-0xd8(%ebp)
+mov    %eax,-0xd4(%ebp)
-mov    %eax,-0xd4(%ebp)
+mov    %eax,-0xd0(%ebp)
-mov    %eax,-0xd0(%ebp)
+mov    %eax,-0xcc(%ebp)
-mov    %eax,-0xcc(%ebp)
+mov    %eax,-0xc8(%ebp)
-mov    %eax,-0xc4(%ebp)
+mov    %eax,-0xc0(%ebp)
-lea    -0xc0(%ebp),%eax
-lea    -0xbc(%ebp),%edx
+lea    -0xbc(%ebp),%eax
+lea    -0xb8(%ebp),%edx
-jne    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x189>
+jne    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x193>
-lea    -0xa8(%ebp),%eax
+lea    -0xa4(%ebp),%eax
-lea    -0xa8(%ebp),%eax
+lea    -0xa4(%ebp),%eax
-lea    -0xc0(%ebp),%eax
+lea    -0xbc(%ebp),%eax
-je     <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x190>
+je     <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x19a>
-jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x195>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x19f>
-je     <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x244>
-lea    -0x54(%ebp),%eax
-lea    -0xf4(%ebp),%edx
+je     <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x24d>
+lea    -0x50(%ebp),%eax
+lea    -0xf0(%ebp),%edx
-lea    -0xbc(%ebp),%edx
+lea    -0xb8(%ebp),%edx
-lea    -0x54(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
-lea    -0xa4(%ebp),%eax
-lea    -0x9c(%ebp),%edx
+lea    -0xa0(%ebp),%eax
+lea    -0x98(%ebp),%edx
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI16STPartyCharacKey20PartyCharacStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x2a3>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x240>
-lea    -0x9c(%ebp),%eax
+lea    -0x98(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x22f>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x22b>
-lea    -0x54(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x26f>
-lea    -0xc0(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x272>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI16STPartyCharacKey20PartyCharacStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x28a>
+lea    -0xbc(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0xf4(%ebp),%eax
+lea    0x14(%eax),%edx
+lea    -0xf0(%ebp),%eax
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x2a3>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x28a>
-lea    -0xf4(%ebp),%eax
+lea    -0xf0(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x29a>
+lea    -0xf0(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN20PartyCharacStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac+0x2b8>
-lea    -0xbc(%ebp),%eax
+lea    -0xb8(%ebp),%eax
-lea    -0xf4(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN20PartyCharacStatisticD1Ev>
-lea    -0xbc(%ebp),%eax
+lea    -0xb8(%ebp),%eax
```

## statics _ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job [DIFF] pm=85
```diff
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-mov    %al,-0x4c(%ebp)
+mov    %al,-0x48(%ebp)
-mov    %ax,-0x4a(%ebp)
+mov    %ax,-0x46(%ebp)
-mov    %al,-0x44(%ebp)
+mov    %al,-0x40(%ebp)
-mov    %eax,-0x48(%ebp)
-lea    -0x54(%ebp),%eax
+mov    %eax,-0x44(%ebp)
+lea    -0x50(%ebp),%eax
-mov    %eax,-0x54(%ebp)
+mov    %eax,-0x50(%ebp)
-lea    -0x58(%ebp),%eax
-lea    -0x4c(%ebp),%edx
+lea    -0x54(%ebp),%eax
+lea    -0x48(%ebp),%edx
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
-je     <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x15c>
-lea    -0x20(%ebp),%eax
-lea    -0x54(%ebp),%edx
+je     <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x15e>
+lea    -0x1c(%ebp),%eax
+lea    -0x50(%ebp),%edx
-lea    -0x4c(%ebp),%edx
+lea    -0x48(%ebp),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x3c(%ebp),%eax
-lea    -0x34(%ebp),%edx
+lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%edx
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x1af>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x151>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x147>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x13c>
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x181>
-lea    -0x58(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x17d>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI35STDeathTowerPlayDataJobStatisticKey20PlayDataJobStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x192>
+lea    -0x54(%ebp),%eax
-add    $0xc,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x54(%ebp),%eax
+lea    0xc(%eax),%edx
+lea    -0x50(%ebp),%eax
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x1af>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x192>
-lea    -0x54(%ebp),%eax
+lea    -0x50(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x19f>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN20PlayDataJobStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job+0x1ba>
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN20PlayDataJobStatisticD1Ev>
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
```

## statics _ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler [DIFF] pm=15
```diff
-je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x3b5>
+je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x3af>
-jmp    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x31f>
+jmp    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x319>
-jmp    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x314>
+jmp    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x30e>
-mov    -0x1c(%ebp),%eax
-cmp    $0x17d,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x314>
+cmpl   $0x17d,-0x1c(%ebp)
+jbe    <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x30e>
-je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x3b5>
+je     <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler+0x3af>
```

## statics _ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party [DIFF] pm=81
```diff
-lea    -0x32(%ebp),%eax
+lea    -0x2e(%ebp),%eax
-mov    %al,-0x32(%ebp)
+mov    %al,-0x2e(%ebp)
-mov    %al,-0x31(%ebp)
-lea    -0x3c(%ebp),%eax
+mov    %al,-0x2d(%ebp)
+lea    -0x38(%ebp),%eax
-mov    %eax,-0x3c(%ebp)
+mov    %eax,-0x38(%ebp)
-lea    -0x40(%ebp),%eax
-lea    -0x32(%ebp),%edx
+lea    -0x3c(%ebp),%eax
+lea    -0x2e(%ebp),%edx
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-je     <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x148>
-lea    -0x18(%ebp),%eax
-lea    -0x3c(%ebp),%edx
+je     <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x14a>
+lea    -0x14(%ebp),%eax
+lea    -0x38(%ebp),%edx
-lea    -0x32(%ebp),%edx
+lea    -0x2e(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x2c(%ebp),%eax
-lea    -0x24(%ebp),%edx
+lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticED1Ev>
-jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x19b>
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x13d>
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x133>
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x128>
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x16d>
-lea    -0x40(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x169>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairI37STDeathTowerPlayDataPartyStatisticKey22PlayDataPartyStatisticED1Ev>
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x17e>
+lea    -0x3c(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,-0xc(%ebp)
-lea    -0x3c(%ebp),%eax
+lea    0x4(%eax),%edx
+lea    -0x38(%ebp),%eax
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x19b>
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x17e>
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x18b>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN22PlayDataPartyStatisticD1Ev>
+jmp    <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party+0x1a6>
-lea    -0x32(%ebp),%eax
+lea    -0x2e(%ebp),%eax
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN22PlayDataPartyStatisticD1Ev>
-lea    -0x32(%ebp),%eax
+lea    -0x2e(%ebp),%eax
```

## statics _ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler [DIFF] pm=13
```diff
-je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x25f>
+je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x259>
-jmp    <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x1c9>
+jmp    <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x1c3>
-mov    -0xc(%ebp),%eax
-cmp    $0x263,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x1be>
+cmpl   $0x263,-0xc(%ebp)
+jbe    <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x1b8>
-je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x25f>
+je     <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler+0x259>
```
