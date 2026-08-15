# statics PATH_EQ compact diffs (31)

## _ZN14CNetworkThread8dispatchEPv  [DIFF]  pm=180
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
... (100 lines omitted) ...
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

## _ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics  [DIFF]  pm=437
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
... (357 lines omitted) ...
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

## _ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc  [DIFF]  pm=211
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
... (131 lines omitted) ...
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

## _ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler  [DIFF]  pm=203
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
... (123 lines omitted) ...
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

## _ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic  [DIFF]  pm=33
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

## _ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler  [DIFF]  pm=32
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

## _ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler  [DIFF]  pm=13
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

## _ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS  [DIFF]  pm=14
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

## _ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler  [DIFF]  pm=193
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
... (113 lines omitted) ...
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

## _ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party  [DIFF]  pm=129
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
... (49 lines omitted) ...
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

## _ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info  [DIFF]  pm=93
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
... (13 lines omitted) ...
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

## _ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item  [DIFF]  pm=95
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
... (15 lines omitted) ...
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

## _ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler  [DIFF]  pm=52
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

## _ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler  [DIFF]  pm=121
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
... (41 lines omitted) ...
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

## _ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics  [DIFF]  pm=355
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
... (275 lines omitted) ...
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

## _ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler  [DIFF]  pm=86
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
... (6 lines omitted) ...
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

## _ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler  [DIFF]  pm=13
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

## _ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac  [DIFF]  pm=125
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
... (45 lines omitted) ...
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

## _ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job  [DIFF]  pm=85
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
... (5 lines omitted) ...
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

## _ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler  [DIFF]  pm=15
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

## _ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party  [DIFF]  pm=81
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
... (1 lines omitted) ...
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

## _ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler  [DIFF]  pm=13
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

## _ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh  [DIFF]  pm=12
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

## _ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler  [DIFF]  pm=11
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

## _ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader  [DIFF]  pm=51
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

## _ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler  [DIFF]  pm=11
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

## _ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct  [DIFF]  pm=519
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
... (439 lines omitted) ...
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

## _ZN17FrameLagCollector18FrameLagDataStruct4initEv  [DIFF]  pm=81
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
... (1 lines omitted) ...
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

## _ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec  [DIFF]  pm=168
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
... (88 lines omitted) ...
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

## _ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add  [DIFF]  pm=96
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
... (16 lines omitted) ...
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

## _ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler  [DIFF]  pm=35
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
