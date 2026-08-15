## dbmw _ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout [DIFF] pm=37
```diff
+mov    %eax,-0x24(%ebp)
+movl   $0x0,(%esp)
+call   <T> <time>
-movl   $0x0,-0x30(%ebp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <time>
-jmp    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x10d>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x103>
+mov    -0x24(%ebp),%eax
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+add    $0xf,%eax
-add    $0xf,%eax
+mov    0xc(%ebp),%edi
-mov    0xc(%ebp),%edi
+add    $0xe,%eax
-add    $0xe,%eax
-movzbl %al,%edx
-mov    -0x30(%ebp),%eax
+movzbl %al,%eax
-mov    %edx,0x10(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x109>
+je     <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0xff>
-jne    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x30>
+jne    <T> <_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout+0x2d>
```

## dbmw _ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo [DIFF] pm=21
```diff
+movl   $0x6002,0x8(%esp)
+movl   $0x0,0x4(%esp)
-mov    $0x6002,%edx
-mov    %edx,0x8(%esp)
-movl   $0x0,0x4(%esp)
-je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0xff>
+je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0xfe>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x169>
+jmp    <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x168>
-je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x164>
+je     <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x163>
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x169>
+jmp    <T> <_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo+0x168>
```

## dbmw _ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History [DIFF] pm=180
```diff
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x148>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %al,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
+jne    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x143>
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x355>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x354>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x196>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x191>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x1e4>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x1df>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
+mov    -0x18(%ebp),%eax
-lea    0x6(%eax),%edx
-mov    -0x10(%ebp),%eax
-addl   $0x1,-0x10(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x22b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
+add    $0x6,%eax
+mov    %eax,%edx
+mov    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x228>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x27a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x277>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2c1>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x2be>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x305>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x302>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
+mov    -0x18(%ebp),%eax
-lea    0x4(%eax),%edx
+add    $0x4,%eax
+mov    %eax,%edx
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x351>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x37a>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x350>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x379>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-jne    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x173>
+jne    <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History+0x16e>
```

## dbmw _ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report [DIFF] pm=13
```diff
-jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x132>
+jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x134>
-jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x11e>
+jmp    <T> <_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report+0x120>
+mov    0xc(%ebp),%eax
-mov    0xc(%ebp),%eax
-mov    0x3(%eax,%edx,4),%edx
+mov    0x3(%eax,%edx,4),%eax
+mov    %eax,%edx
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-movzbl %al,%eax
+movsbl %al,%eax
```

## dbmw _ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo [DIFF] pm=184
```diff
-sub    $0x68,%esp
+push   %ebx
+sub    $0x64,%esp
-jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x1f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x20>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x97>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x91>
-lea    -0x50(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0xff>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0xf2>
-lea    -0x48(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
-jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x161>
+jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x154>
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x358>
+mov    0x10(%ebp),%eax
+mov    0xa(%eax),%eax
+cmp    -0x10(%ebp),%eax
+jbe    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x16c>
+cmpl   $0x1d,-0x10(%ebp)
+jbe    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x176>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x1cd>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x1cf>
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
+mov    0x10(%ebp),%ebx
-add    0x10(%ebp),%eax
-lea    0xe(%eax),%edx
+add    $0xe,%eax
+lea    (%ebx,%eax,1),%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x255>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x253>
-lea    -0x30(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
+mov    0x10(%ebp),%ebx
-add    0x10(%ebp),%eax
-lea    0x12(%eax),%edx
+add    $0x12,%eax
+lea    (%ebx,%eax,1),%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x2d6>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x2d0>
-lea    -0x28(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
+mov    0x10(%ebp),%ebx
-add    0x10(%ebp),%eax
-lea    0x16(%eax),%edx
+add    $0x16,%eax
+lea    (%ebx,%eax,1),%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x354>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x34a>
-lea    -0x20(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x353>
-mov    0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-cmp    -0x10(%ebp),%eax
-jbe    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x370>
-cmpl   $0x1d,-0x10(%ebp)
-ja     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x370>
-mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x375>
-mov    $0x0,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x16d>
-mov    $0x1,%eax
-leave
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x15b>
+add    $0x64,%esp
+pop    %ebx
+pop    %ebp
```

## dbmw _ZN10CDBManager24ChangeGuildNotifyMessageEijPc [DIFF] pm=43
```diff
-lea    -0x6022(%ebp),%eax
-mov    $0x6002,%edx
-mov    %edx,0x8(%esp)
+movl   $0x6002,0x8(%esp)
+lea    -0x601e(%ebp),%eax
-lea    -0x6022(%ebp),%eax
+lea    -0x601e(%ebp),%eax
-lea    -0x6022(%ebp),%eax
+lea    -0x601e(%ebp),%eax
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0xdc>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0xdb>
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1db>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1cc>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x11c>
+jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x114>
-jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x123>
+jne    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x11b>
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x128>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x120>
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1d6>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1c7>
-lea    -0x6022(%ebp),%eax
+lea    -0x601e(%ebp),%eax
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1a7>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x19f>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1db>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1cc>
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1d6>
+je     <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1c7>
-jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1db>
+jmp    <T> <_ZN10CDBManager24ChangeGuildNotifyMessageEijPc+0x1cc>
```

## dbmw _ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer [DIFF] pm=370
```diff
-sub    $0x13c,%esp
+sub    $0x12c,%esp
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x649>
-movl   $0x20,-0x28(%ebp)
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x626>
+mov    0xc(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x24(%ebp),%eax
-mov    %eax,-0xb0(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0xa0(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xac(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x9c(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xa8(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x98(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xa4(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x94(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xa0(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x90(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x9c(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x98(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x88(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x94(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x84(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x90(%ebp)
-mov    0xc(%ebp),%eax
+mov    %eax,-0x80(%ebp)
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xbc(%ebp)
-mov    -0xac(%ebp),%eax
+mov    %eax,-0xac(%ebp)
+mov    -0x9c(%ebp),%eax
-mov    -0xa8(%ebp),%eax
+mov    -0x98(%ebp),%eax
-mov    -0xa4(%ebp),%eax
+mov    -0x94(%ebp),%eax
-mov    -0xa0(%ebp),%eax
+mov    -0x90(%ebp),%eax
-mov    -0x9c(%ebp),%eax
+mov    -0x8c(%ebp),%eax
-mov    -0x98(%ebp),%eax
+mov    -0x88(%ebp),%eax
-mov    -0x94(%ebp),%eax
+mov    -0x84(%ebp),%eax
-mov    -0x90(%ebp),%eax
+mov    -0x80(%ebp),%eax
-mov    -0xbc(%ebp),%eax
+mov    -0xac(%ebp),%eax
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0xb0(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   *-0xa0(%ebp)
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x1ad>
+je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x19f>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x649>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x626>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x58e>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x56b>
-ja     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x285>
+ja     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x277>
-mov    &data#08ae5495(.rodata)(%eax),%eax
+mov    &data#0c18cde0(.rodata)(%eax),%eax
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x52(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x292>
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x52(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x292>
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x52(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x292>
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x52(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x292>
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x52(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x292>
-lea    -0x5a(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x2a0>
+lea    -0x52(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x292>
-lea    -0x5a(%ebp),%eax
+lea    -0x52(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %eax,-0x8c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x48,%eax
-flds   0x13(%eax)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x48,%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x88(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    %eax,-0x7c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+lea    (%ecx,%edx,1),%eax
+add    $0x50,%eax
+flds   0xb(%eax)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+lea    (%ecx,%edx,1),%eax
+add    $0x50,%eax
+mov    0x7(%eax),%eax
+mov    %eax,-0x78(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%ecx
-mov    %eax,-0x84(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    $0x1,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-flds   0x13(%edx,%ecx,1)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    $0x1,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0xf(%edx,%ecx,1),%edx
-mov    %edx,-0x80(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    %eax,-0x74(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+lea    (%ecx,%edx,1),%eax
+add    $0x40,%eax
+flds   0xb(%eax)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
+shl    $0x3,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+lea    (%ecx,%edx,1),%eax
+add    $0x40,%eax
+mov    0x7(%eax),%eax
+mov    %eax,-0x70(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%ecx
-mov    %eax,-0x7c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    %eax,-0x6c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
-add    $0x28,%eax
-flds   0x13(%eax)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+add    $0x30,%eax
+flds   0xb(%eax)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
-add    $0x28,%eax
-mov    0xf(%eax),%eax
-mov    %eax,-0x78(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+add    $0x30,%eax
+mov    0x7(%eax),%eax
+mov    %eax,-0x68(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%ecx
-mov    %eax,-0x74(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    %eax,-0x64(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
-mov    %eax,-0x70(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    %eax,-0x60(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
-mov    %eax,-0x6c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    %eax,-0x5c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x20(%ebp),%ecx
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %eax,-0xbc(%ebp)
+mov    %eax,-0xac(%ebp)
-mov    -0x88(%ebp),%eax
+mov    -0x78(%ebp),%eax
-mov    -0x84(%ebp),%eax
+mov    -0x74(%ebp),%eax
-mov    -0x80(%ebp),%eax
+mov    -0x70(%ebp),%eax
-mov    -0x7c(%ebp),%eax
+mov    -0x6c(%ebp),%eax
-mov    -0x78(%ebp),%eax
+mov    -0x68(%ebp),%eax
-mov    -0x74(%ebp),%eax
+mov    -0x64(%ebp),%eax
-mov    -0x70(%ebp),%eax
+mov    -0x60(%ebp),%eax
-mov    -0x6c(%ebp),%eax
+mov    -0x5c(%ebp),%eax
-mov    -0xbc(%ebp),%eax
+mov    -0xac(%ebp),%eax
-lea    -0x5a(%ebp),%eax
+lea    -0x52(%ebp),%eax
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x8c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   *-0x7c(%ebp)
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x58a>
+je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x567>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x649>
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x626>
-jne    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x1b9>
-mov    -0x2c(%ebp),%eax
+jne    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x1ab>
+mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %al,-0x21(%ebp)
-movzbl -0x21(%ebp),%eax
-je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x5f8>
+je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x5ce>
-jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x649>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x626>
+mov    -0x24(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x644>
-lea    -0x3a(%ebp),%eax
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x5f0>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer+0x626>
+lea    -0x32(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-movzwl -0x38(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+movzwl -0x30(%ebp),%eax
-lea    -0x3a(%ebp),%eax
+lea    -0x32(%ebp),%eax
-add    $0x13c,%esp
+add    $0x12c,%esp
```

## dbmw _ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD [DIFF] pm=30
```diff
-jmp    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c7>
+jmp    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c4>
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
-je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c2>
+je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c0>
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    0xc(%ebp),%ebx
-mov    0xc(%ebp),%ebx
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
-je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c3>
+je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c0>
+mov    0xc(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    0xc(%ebp),%ebx
-mov    0xc(%ebp),%ebx
-je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c3>
+je     <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c0>
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD+0x1c3>
-nop
```

## dbmw _ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj [DIFF] pm=224
```diff
-sub    $0xa8,%esp
+sub    $0xb8,%esp
-mov    %al,-0x7c(%ebp)
+mov    %al,-0x8c(%ebp)
-movzbl -0x7c(%ebp),%edx
+movzbl -0x8c(%ebp),%edx
-mov    0x1c(%ebp),%eax
+mov    0x1c(%ebp),%eax
-mov    0x1c(%ebp),%eax
+mov    0x1c(%ebp),%eax
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0xd7>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0xdd>
-lea    -0x78(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-jne    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x111>
+jne    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x117>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x118>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x11e>
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x11d>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x161>
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x123>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x167>
-lea    -0x70(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-mov    0x1c(%ebp),%eax
-add    $0x8,%eax
+lea    -0x14(%ebp),%eax
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x1cc>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x1cf>
-lea    -0x68(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
+mov    -0x14(%ebp),%edx
+mov    0x1c(%ebp),%eax
+mov    %edx,0x8(%eax)
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x23f>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x24b>
-lea    -0x60(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2af>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2bb>
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-jne    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2e9>
+jne    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2f5>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2f0>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2fc>
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x2f5>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x339>
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x301>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x345>
-lea    -0x50(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x3ac>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x3b8>
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x417>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x423>
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x482>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x48e>
-lea    -0x38(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x4ed>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x4f9>
-lea    -0x30(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x558>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x564>
-lea    -0x28(%ebp),%eax
+lea    -0x6c(%ebp),%eax
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x582>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x58e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x5f6>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x602>
-lea    -0x20(%ebp),%eax
+lea    -0x74(%ebp),%eax
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
-je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x654>
+je     <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x660>
-lea    -0x18(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x659>
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj+0x665>
```

## dbmw _ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack [NEAR] pm=8
```diff
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## dbmw _ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic [DIFF] pm=111
```diff
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3ce>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3cd>
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x844(%ebp),%ebx
+lea    -0x848(%ebp),%ebx
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x301>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x300>
+lea    -0x38(%ebp),%eax
-je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x178>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x177>
+mov    -0x1c(%ebp),%edx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%eax
+mov    -0x24(%ebp),%eax
-lea    -0x844(%ebp),%eax
+lea    -0x848(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x225>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x224>
+mov    -0x1c(%ebp),%edx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
-mov    0xc(%ebp),%eax
+mov    -0x24(%ebp),%eax
-lea    -0x844(%ebp),%eax
+lea    -0x848(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2e8>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2e7>
+mov    -0x28(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2d7>
+je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2d6>
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c3>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c2>
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2fd>
-lea    -0x844(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x2fc>
+lea    -0x848(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jne    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0xae>
-mov    -0x24(%ebp),%eax
+jne    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0xad>
+mov    -0x28(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3a1>
+je     <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3a0>
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c3>
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c2>
-jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c3>
+jmp    <T> <_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic+0x3c2>
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
```

## dbmw _ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic [DIFF] pm=7
```diff
-jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b7>
+jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b5>
-jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b7>
+jmp    <T> <_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic+0x1b5>
-mov    -0xc(%ebp),%eax
-cmp    $0x63,%eax
+cmpl   $0x63,-0xc(%ebp)
```

## dbmw _ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer [DIFF] pm=46
```diff
-sub    $0x9c,%esp
+sub    $0x6c,%esp
-jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x1c>
+jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x19>
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x115>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x35>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x32>
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x115>
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0x5c(%ebp)
+mov    %eax,-0x2c(%ebp)
-mov    %eax,-0x6c(%ebp)
-mov    -0x5c(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x2c(%ebp),%eax
-mov    -0x6c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0xf2>
+je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0xe8>
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x115>
+mov    -0x1c(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11a>
+je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x110>
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x115>
-add    $0x9c,%esp
+add    $0x6c,%esp
```

## dbmw _ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index [DIFF] pm=90
```diff
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x29c>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x294>
+mov    0xc(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x14f>
+je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x14e>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x29c>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x294>
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x297>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x28f>
+mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
-je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x297>
+je     <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x28f>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x29c>
+jmp    <T> <_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index+0x294>
```

## dbmw _ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History [DIFF] pm=15
```diff
-and    $0x1f,%eax
-movzbl %al,%eax
-mov    %eax,-0x144(%ebp)
+movzbl %al,%eax
+mov    %eax,%edx
+and    $0x1f,%edx
+mov    %edx,-0x144(%ebp)
-mov    -0x16c(%ebp),%edi
-mov    %edi,0x10(%esp)
+mov    -0x16c(%ebp),%edx
+mov    %edx,0x10(%esp)
-je     <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2eb>
+je     <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2ed>
-jmp    <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2f0>
+jmp    <T> <_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History+0x2f2>
```

## dbmw _ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic [DIFF] pm=107
```diff
-push   %ebx
-sub    $0x534,%esp
+sub    $0x538,%esp
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x23>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x22>
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x242>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x231>
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x8e>
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x87>
-movzwl %ax,%ebx
+movzwl %ax,%eax
+mov    %eax,-0x10(%ebp)
-cmp    %eax,%ebx
-setge  %al
+cmp    -0x10(%ebp),%eax
+setle  %al
-lea    -0x10d(%ebp),%eax
+lea    -0x114(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe9>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xdf>
+mov    -0x10(%ebp),%eax
+mov    &_ZL18g_szNotiPacketName(,%eax,4),%eax
+mov    %eax,0x4(%esp)
+lea    -0x114(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strcpy>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xdf>
-mov    &g_szNotiPacketName(,%eax,4),%eax
-mov    %eax,0x4(%esp)
-lea    -0x10d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <strcpy>
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe9>
-mov    0xc(%ebp),%eax
-movzwl 0xb(%eax),%eax
-movzwl %ax,%ebx
+mov    %eax,-0xc(%ebp)
-cmp    %eax,%ebx
-setge  %al
+cmp    -0xc(%ebp),%eax
+setle  %al
-je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xc6>
+je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xc3>
-lea    -0x10d(%ebp),%eax
+lea    -0x114(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xe9>
-mov    0xc(%ebp),%eax
-movzwl 0xb(%eax),%eax
-movzwl %ax,%eax
-mov    &g_szCmdPacketName(,%eax,4),%eax
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0xdf>
+mov    -0xc(%ebp),%eax
+mov    &_ZL17g_szCmdPacketName(,%eax,4),%eax
-lea    -0x10d(%ebp),%eax
+lea    -0x114(%ebp),%eax
-lea    -0x10d(%ebp),%ecx
+lea    -0x114(%ebp),%ecx
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x18d>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x17c>
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x194>
+jne    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x183>
-jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x199>
+jmp    <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x188>
-je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x23d>
+je     <T> <_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic+0x22c>
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
-lea    -0x10d(%ebp),%edx
+lea    -0x114(%ebp),%edx
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-lea    -0x50d(%ebp),%eax
+lea    -0x514(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-add    $0x534,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## dbmw _ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward [NEAR] pm=4
```diff
+mov    0xc(%ebp),%eax
-mov    0xc(%ebp),%eax
+mov    0xc(%ebp),%eax
-mov    0xc(%ebp),%eax
```

## dbmw _ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt [DIFF] pm=146
```diff
-sub    $0x48,%esp
+sub    $0x38,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xc8>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xc1>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-jbe    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xf6>
+jbe    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xef>
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3ad>
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x360>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x12c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x11e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x16f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x15a>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x1bd>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x1a1>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x203>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x1e0>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x249>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x21f>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x28f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x25e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x2d5>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x29d>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x31b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x2dc>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x35e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x318>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3a9>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x3c9>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x35c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x37c>
-jne    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0x102>
+jne    <T> <_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt+0xfb>
```

## dbmw _ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party [DIFF] pm=1029
```diff
-sub    $0x91c,%esp
+sub    $0x92c,%esp
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8c6>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x98d>
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7f9>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8c0>
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x3f4>
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x454>
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3a(%eax),%eax
+mov    %eax,-0x8c8(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3e(%eax),%eax
+mov    %eax,-0x8c4(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x42(%eax),%eax
+mov    %eax,-0x8c0(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x46(%eax),%eax
+mov    %eax,-0x8bc(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x36(%eax),%eax
+mov    %eax,-0x8b8(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x32(%eax),%eax
+mov    %eax,-0x8b4(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x2e(%eax),%eax
+mov    %eax,-0x8b0(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x2a(%eax),%eax
+mov    %eax,-0x8ac(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x26(%eax),%eax
+mov    %eax,-0x8a8(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x22(%eax),%eax
+mov    %eax,-0x8a4(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1e(%eax),%eax
+mov    %eax,-0x8a0(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
-mov    %eax,-0x8c8(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x8c4(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x8c0(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x8bc(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x8b8(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-lea    0x0(,%edx,4),%eax
-mov    %eax,%edx
-mov    %edx,%eax
-shl    $0x4,%eax
-sub    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x8b4(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x8b0(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x8ac(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x8a8(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x8a4(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x8a0(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-mov    0x1a(%edx,%ecx,1),%edx
-mov    %edx,-0x89c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x19,%eax
-movzbl (%eax),%eax
+mov    %eax,-0x89c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x18,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x17,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x17(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x16(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x15(%eax),%eax
+movzbl %al,%edi
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x14(%eax),%eax
+movsbl %al,%esi
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x10(%eax),%ebx
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,-0x8cc(%ebp)
+mov    -0x8cc(%ebp),%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
-movzbl %al,%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
-movsbl %al,%esi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-mov    0x10(%edx,%ecx,1),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-movzwl 0xe(%edx,%ecx,1),%eax
+mov    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
-mov    -0x8c8(%ebp),%edx
-mov    %edx,0x54(%esp)
-mov    -0x8c4(%ebp),%ecx
-mov    %ecx,0x50(%esp)
-mov    -0x8c0(%ebp),%edx
-mov    %edx,0x4c(%esp)
-mov    -0x8bc(%ebp),%ecx
-mov    %ecx,0x48(%esp)
-mov    -0x8b8(%ebp),%edx
-mov    %edx,0x44(%esp)
-mov    -0x8b4(%ebp),%ecx
-mov    %ecx,0x40(%esp)
-mov    -0x8b0(%ebp),%edx
-mov    %edx,0x3c(%esp)
-mov    -0x8ac(%ebp),%ecx
-mov    %ecx,0x38(%esp)
-mov    -0x8a8(%ebp),%edx
-mov    %edx,0x34(%esp)
-mov    -0x8a4(%ebp),%ecx
-mov    %ecx,0x30(%esp)
-mov    -0x8a0(%ebp),%edx
-mov    %edx,0x2c(%esp)
-mov    -0x89c(%ebp),%ecx
-mov    %ecx,0x28(%esp)
-mov    -0x898(%ebp),%edx
-mov    %edx,0x24(%esp)
-mov    -0x894(%ebp),%ecx
-mov    %ecx,0x20(%esp)
-mov    -0x890(%ebp),%edx
-mov    %edx,0x1c(%esp)
-mov    -0x88c(%ebp),%ecx
-mov    %ecx,0x18(%esp)
+mov    -0x8c8(%ebp),%ecx
+mov    %ecx,0x54(%esp)
+mov    -0x8c4(%ebp),%edx
+mov    %edx,0x50(%esp)
+mov    -0x8c0(%ebp),%ecx
+mov    %ecx,0x4c(%esp)
+mov    -0x8bc(%ebp),%edx
+mov    %edx,0x48(%esp)
+mov    -0x8b8(%ebp),%ecx
+mov    %ecx,0x44(%esp)
+mov    -0x8b4(%ebp),%edx
+mov    %edx,0x40(%esp)
+mov    -0x8b0(%ebp),%ecx
+mov    %ecx,0x3c(%esp)
+mov    -0x8ac(%ebp),%edx
+mov    %edx,0x38(%esp)
+mov    -0x8a8(%ebp),%ecx
+mov    %ecx,0x34(%esp)
+mov    -0x8a4(%ebp),%edx
+mov    %edx,0x30(%esp)
+mov    -0x8a0(%ebp),%ecx
+mov    %ecx,0x2c(%esp)
+mov    -0x89c(%ebp),%edx
+mov    %edx,0x28(%esp)
+mov    -0x898(%ebp),%ecx
+mov    %ecx,0x24(%esp)
+mov    -0x894(%ebp),%edx
+mov    %edx,0x20(%esp)
+mov    -0x890(%ebp),%ecx
+mov    %ecx,0x1c(%esp)
+mov    -0x88c(%ebp),%edx
+mov    %edx,0x18(%esp)
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x71d>
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7e4>
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3a(%eax),%eax
+mov    %eax,-0x888(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3e(%eax),%eax
+mov    %eax,-0x884(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x42(%eax),%eax
+mov    %eax,-0x880(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x46(%eax),%eax
+mov    %eax,-0x87c(%ebp)
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%ecx
+shl    $0x4,%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x36(%eax),%eax
+mov    %eax,-0x878(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x32(%eax),%eax
+mov    %eax,-0x874(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x2e(%eax),%eax
+mov    %eax,-0x870(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x2a(%eax),%eax
+mov    %eax,-0x86c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x26(%eax),%eax
+mov    %eax,-0x868(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x22(%eax),%eax
+mov    %eax,-0x864(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1e(%eax),%eax
+mov    %eax,-0x860(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
-mov    %eax,-0x888(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x884(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x880(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x30,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x87c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x878(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-lea    0x0(,%edx,4),%eax
-mov    %eax,%edx
-mov    %edx,%eax
-shl    $0x4,%eax
-sub    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x874(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x20,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x870(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x86c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x868(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x864(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x10,%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x860(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-mov    0x1a(%edx,%ecx,1),%edx
-mov    %edx,-0x85c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x19,%eax
-movzbl (%eax),%eax
+mov    %eax,-0x85c(%ebp)
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x18,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x17,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x17(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%edi
+sub    %eax,%edi
+mov    %edi,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x16(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x15(%eax),%eax
+movzbl %al,%edi
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x14(%eax),%eax
+movsbl %al,%esi
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x10(%eax),%ebx
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+shl    $0x4,%edx
+mov    %edx,-0x8cc(%ebp)
+mov    -0x8cc(%ebp),%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
-movzbl %al,%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
-movsbl %al,%esi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-mov    0x10(%edx,%ecx,1),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-shl    $0x2,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
-sub    %eax,%edx
-movzwl 0xe(%edx,%ecx,1),%eax
+mov    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
-mov    -0x888(%ebp),%edx
-mov    %edx,0x54(%esp)
-mov    -0x884(%ebp),%ecx
-mov    %ecx,0x50(%esp)
-mov    -0x880(%ebp),%edx
-mov    %edx,0x4c(%esp)
-mov    -0x87c(%ebp),%ecx
-mov    %ecx,0x48(%esp)
-mov    -0x878(%ebp),%edx
-mov    %edx,0x44(%esp)
-mov    -0x874(%ebp),%ecx
-mov    %ecx,0x40(%esp)
-mov    -0x870(%ebp),%edx
-mov    %edx,0x3c(%esp)
-mov    -0x86c(%ebp),%ecx
-mov    %ecx,0x38(%esp)
-mov    -0x868(%ebp),%edx
-mov    %edx,0x34(%esp)
-mov    -0x864(%ebp),%ecx
-mov    %ecx,0x30(%esp)
-mov    -0x860(%ebp),%edx
-mov    %edx,0x2c(%esp)
-mov    -0x85c(%ebp),%ecx
-mov    %ecx,0x28(%esp)
-mov    -0x858(%ebp),%edx
-mov    %edx,0x24(%esp)
-mov    -0x854(%ebp),%ecx
-mov    %ecx,0x20(%esp)
-mov    -0x850(%ebp),%edx
-mov    %edx,0x1c(%esp)
-mov    -0x84c(%ebp),%ecx
-mov    %ecx,0x18(%esp)
+mov    -0x888(%ebp),%ecx
+mov    %ecx,0x54(%esp)
+mov    -0x884(%ebp),%edx
+mov    %edx,0x50(%esp)
+mov    -0x880(%ebp),%ecx
+mov    %ecx,0x4c(%esp)
+mov    -0x87c(%ebp),%edx
+mov    %edx,0x48(%esp)
+mov    -0x878(%ebp),%ecx
+mov    %ecx,0x44(%esp)
+mov    -0x874(%ebp),%edx
+mov    %edx,0x40(%esp)
+mov    -0x870(%ebp),%ecx
+mov    %ecx,0x3c(%esp)
+mov    -0x86c(%ebp),%edx
+mov    %edx,0x38(%esp)
+mov    -0x868(%ebp),%ecx
+mov    %ecx,0x34(%esp)
+mov    -0x864(%ebp),%edx
+mov    %edx,0x30(%esp)
+mov    -0x860(%ebp),%ecx
+mov    %ecx,0x2c(%esp)
+mov    -0x85c(%ebp),%edx
+mov    %edx,0x28(%esp)
+mov    -0x858(%ebp),%ecx
+mov    %ecx,0x24(%esp)
+mov    -0x854(%ebp),%edx
+mov    %edx,0x20(%esp)
+mov    -0x850(%ebp),%ecx
+mov    %ecx,0x1c(%esp)
+mov    -0x84c(%ebp),%edx
+mov    %edx,0x18(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7e0>
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8a7>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7cf>
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x896>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bb>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x982>
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x7f5>
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bc>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jne    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0xae>
+jne    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0xa7>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x899>
+je     <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x960>
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bb>
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x982>
-jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x8bb>
+jmp    <T> <_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party+0x982>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-add    $0x91c,%esp
+add    $0x92c,%esp
```

## dbmw _ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker [DIFF] pm=32
```diff
-mov    %al,-0x9(%ebp)
+mov    %al,-0xa(%ebp)
-movzbl -0x9(%ebp),%eax
+movzbl -0xa(%ebp),%eax
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-movzbl -0x9(%ebp),%ebx
+movzbl -0xa(%ebp),%ebx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
-je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1f5>
+je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1ee>
-movzbl -0x9(%ebp),%ebx
+movzbl -0xa(%ebp),%ebx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1f5>
+je     <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1ee>
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1fa>
+jmp    <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker+0x1f3>
```

## dbmw _ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query [DIFF] pm=147
```diff
-push   %ebx
-sub    $0x644,%esp
+sub    $0x648,%esp
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x23>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x22>
-jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x37d>
+jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x323>
-mov    %eax,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x367>
+mov    %eax,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x30d>
-mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    -0x10(%ebp),%eax
-add    0xc(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-ja     <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xa8>
-mov    -0xc(%ebp),%eax
-imul   $0x206,%eax,%eax
-add    0xc(%ebp),%eax
+ja     <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xa7>
+mov    -0xc(%ebp),%eax
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xf6>
-mov    -0xc(%ebp),%eax
-imul   $0x206,%eax,%eax
-add    0xc(%ebp),%eax
-lea    0xe(%eax),%ebx
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xec>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+add    $0xe,%eax
+mov    %eax,0xc(%esp)
-jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x363>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x309>
+mov    -0x18(%ebp),%eax
-imul   $0x206,%eax,%eax
-add    0xc(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-imul   $0x206,%eax,%eax
-add    $0x100,%eax
-add    0xc(%ebp),%eax
-add    $0x14,%eax
+add    $0x114,%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x206,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x100,%eax
-movzwl 0xe(%eax),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0xc(%ebp),%eax
+add    $0x10e,%eax
+movzwl (%eax),%eax
-mov    0xc(%ebp),%ecx
-imul   $0x206,%eax,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x100,%eax
-mov    0x10(%eax),%eax
+add    $0x110,%eax
+mov    (%eax),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x247>
-mov    -0x14(%ebp),%eax
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x207>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x24e>
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x20e>
-jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x253>
+jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x213>
-je     <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x323>
+je     <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x2c9>
-mov    0xc(%ebp),%edx
-imul   $0x206,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x100,%eax
-mov    0x10(%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%ecx
-imul   $0x206,%eax,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x100,%eax
-movzwl 0xe(%eax),%eax
+add    $0x110,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x10e,%eax
+movzwl (%eax),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x38>
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x37>
-add    $0x644,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## dbmw _ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job [DIFF] pm=523
```diff
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6bc>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6ef>
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5ef>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x622>
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x2ef>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x13(%eax),%eax
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x305>
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x23(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xf(%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1f(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x1e,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x1e(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-mov    0x1a(%eax,%ecx,1),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1a(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x19,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x18,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x17,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x17(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x16(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x15(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x14(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-mov    0x10(%edx,%ecx,1),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-movzwl 0xe(%edx,%ecx,1),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x10(%eax),%ebx
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x513>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x13(%eax),%eax
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x546>
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x23(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x10,%eax
-mov    0xf(%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1f(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x1e,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x1e(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-mov    0x1a(%eax,%ecx,1),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x1a(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x19,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+lea    0x0(,%eax,4),%edx
+add    %edx,%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-lea    0x0(,%eax,4),%edx
-add    %edx,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x18,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x17,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x17(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x16(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x15(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzbl 0x14(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-mov    0x10(%edx,%ecx,1),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-mov    %eax,%edx
-shl    $0x2,%edx
-add    %eax,%edx
-lea    0x0(,%edx,4),%eax
-add    %eax,%edx
-movzwl 0xe(%edx,%ecx,1),%eax
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+mov    0x10(%eax),%ebx
+mov    0xc(%ebp),%ecx
+mov    -0x1c(%ebp),%eax
+mov    %eax,%edx
+shl    $0x2,%edx
+add    %eax,%edx
+lea    0x0(,%edx,4),%eax
+lea    (%edx,%eax,1),%eax
+add    $0x10,%eax
+lea    (%ecx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5d6>
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x609>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5c5>
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5f8>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6b1>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6e4>
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x5eb>
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x61e>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jne    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0xae>
+jne    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0xa7>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x68f>
+je     <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6c2>
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6b1>
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6e4>
-jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6b1>
+jmp    <T> <_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job+0x6e4>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
```

## dbmw _ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD [DIFF] pm=110
```diff
-push   %edi
-push   %esi
-sub    $0x4c,%esp
+sub    $0x44,%esp
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x19>
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x17>
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f5>
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f0>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x32>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x30>
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f5>
-movl   $0x1,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x14a>
-mov    -0x1c(%ebp),%edx
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f0>
+movl   $0x1,-0xc(%ebp)
+jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x145>
+mov    -0xc(%ebp),%edx
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x64>
-mov    -0x1c(%ebp),%edx
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x62>
+mov    -0xc(%ebp),%edx
-je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x145>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x141>
+mov    -0x10(%ebp),%eax
-mov    -0x1c(%ebp),%edx
+mov    -0xc(%ebp),%edx
-mov    -0x1c(%ebp),%edx
+mov    -0xc(%ebp),%edx
-mov    -0x1c(%ebp),%edx
+mov    -0xc(%ebp),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x146>
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2,%edx
-mov    0x2(%eax,%edx,8),%edi
-mov    -0x1c(%ebp),%edx
-mov    0xc(%ebp),%eax
-add    $0x2,%edx
-mov    0x6(%eax,%edx,8),%esi
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%ebx
+je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x141>
-lea    -0x30(%ebp),%eax
+lea    -0x18(%ebp),%eax
-mov    %edi,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%edx
+add    $0x2,%edx
+mov    0x2(%eax,%edx,8),%ecx
+mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%edx
+add    $0x2,%edx
+mov    0x6(%eax,%edx,8),%edx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %ecx,0x18(%esp)
+mov    %edx,0x14(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jmp    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x146>
-nop
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x64,-0x1c(%ebp)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x64,-0xc(%ebp)
-jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x3e>
-mov    -0x20(%ebp),%eax
+jne    <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x3c>
+mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x10(%ebp),%eax
-je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1f0>
-mov    0xc(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD+0x1eb>
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0xc(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
-add    $0x4c,%esp
+add    $0x44,%esp
-pop    %esi
-pop    %edi
```

## dbmw _ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB [DIFF] pm=344
```diff
-push   %edi
-sub    $0x7c,%esp
+sub    $0x70,%esp
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x1c(%ebp)
+movl   $0x0,-0x2c(%ebp)
+movl   $0x0,-0x28(%ebp)
+movl   $0x0,-0x24(%ebp)
+movl   $0x0,-0x20(%ebp)
-movl   $0x0,-0x4c(%ebp)
-movl   $0x0,-0x48(%ebp)
-movl   $0x0,-0x44(%ebp)
-movl   $0x0,-0x40(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x4c>
+movl   $0x0,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x59>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x455>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x441>
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x7b>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x404>
+mov    0xc(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x3f0>
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x8e>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xc3>
-cmpl   $0x1,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x9e>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xcc>
+cmpl   $0x1,-0x14(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xb1>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xc3>
-cmpl   $0x2,-0x20(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x43c>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xcc>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x42b>
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xf5>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x3dd>
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xfe>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x1,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x11b>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x240>
+cmpl   $0x1,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x124>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x2,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x141>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x240>
+cmpl   $0x2,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x14a>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x3,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x167>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x240>
+cmpl   $0x3,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x170>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x4,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x18d>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x240>
+cmpl   $0x4,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x196>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x5,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1b3>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x240>
+cmpl   $0x5,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1bc>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x6,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1d6>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x240>
+cmpl   $0x6,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1df>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x7,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x1f9>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x240>
+cmpl   $0x7,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x202>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x8,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x21c>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x240>
+cmpl   $0x8,-0x10(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x225>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x241>
-cmpl   $0x9,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x426>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x240>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x24(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%edi
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0xc(%ebp),%ecx
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x14(%ebp),%edx
-add    %ebx,%eax
-add    $0x34,%eax
-mov    0x12(%ecx,%eax,4),%esi
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    %ebx,%eax
-mov    0xa(%ecx,%eax,8),%ecx
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x60(%ebp)
-mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    -0x60(%ebp),%eax
-add    %eax,%eax
-add    $0x1,%eax
-mov    0xa(%ebx,%eax,4),%eax
-lea    -0x4c(%ebp),%edx
-mov    %edx,0x1c(%esp)
-lea    -0x3c(%ebp),%edx
-mov    %edx,0x18(%esp)
-mov    %esi,0x14(%esp)
-mov    %ecx,0x10(%esp)
+add    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%esi
+mov    -0xc(%ebp),%edx
+mov    -0x18(%ebp),%eax
+add    $0x38,%edx
+mov    0x2(%eax,%edx,4),%ecx
+mov    -0xc(%ebp),%edx
+mov    -0x18(%ebp),%eax
+mov    0xa(%eax,%edx,8),%edx
+mov    -0xc(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+mov    0xe(%eax,%ebx,8),%eax
+lea    -0x3c(%ebp),%ebx
+mov    %ebx,0x1c(%esp)
+lea    -0x2c(%ebp),%ebx
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edi
-mov    -0x24(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%esi
+mov    -0x1c(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x322>
+je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x304>
-lea    -0x34(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x44(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x427>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x3d9>
+mov    -0x1c(%ebp),%eax
-mov    (%eax),%edi
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    %ebx,%eax
-add    $0x34,%eax
-mov    0x12(%ecx,%eax,4),%esi
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%ebx
-mov    0xc(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    %ebx,%eax
-mov    0xa(%ecx,%eax,8),%ecx
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x5c(%ebp)
-mov    0xc(%ebp),%ebx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-add    -0x5c(%ebp),%eax
-add    %eax,%eax
-add    $0x1,%eax
-mov    0xa(%ebx,%eax,4),%eax
-mov    %esi,0x1c(%esp)
-mov    %ecx,0x18(%esp)
+mov    (%eax),%esi
+mov    -0xc(%ebp),%edx
+mov    -0x18(%ebp),%eax
+add    $0x38,%edx
+mov    0x2(%eax,%edx,4),%ecx
+mov    -0xc(%ebp),%edx
+mov    -0x18(%ebp),%eax
+mov    0xa(%eax,%edx,8),%edx
+mov    -0xc(%ebp),%ebx
+mov    -0x18(%ebp),%eax
+mov    0xe(%eax,%ebx,8),%eax
+mov    %ecx,0x1c(%esp)
+mov    %edx,0x18(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edi
-mov    -0x24(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%esi
+mov    -0x1c(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x427>
+je     <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x3d9>
-lea    -0x2c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x427>
-nop
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x9,-0x1c(%ebp)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x9,-0x10(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xcf>
-jmp    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x43d>
-nop
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x2,-0x20(%ebp)
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0xd8>
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x2,-0x14(%ebp)
-jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x58>
+jne    <T> <_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB+0x6b>
-add    $0x7c,%esp
+add    $0x70,%esp
-pop    %edi
```

## dbmw _ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac [DIFF] pm=543
```diff
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7ba>
-movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7db>
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6ed>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x70e>
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x36e>
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x1d(%eax),%eax
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x37b>
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x51(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1c,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+movzbl 0x20(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x1d(%eax),%eax
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x41(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x11(%eax),%eax
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x45(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x15(%eax),%eax
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x49(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x19(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x4d(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x19(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3d(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x15(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x39(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x11(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x35(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x1d(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x31(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x19(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x2d(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x15(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x29(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x11(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x25(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x1d(%eax,%edx,1),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x21(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1b,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x1f(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x17(%eax,%edx,1),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x1b(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x1a(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x10(%eax,%edx,1),%ecx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-movzwl 0xe(%eax,%edx,1),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x10(%eax),%ecx
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x611>
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x1d(%eax),%eax
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x632>
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x51(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1c,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+movzbl 0x20(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x1d(%eax),%eax
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x41(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x11(%eax),%eax
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x45(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x15(%eax),%eax
+mov    0xc(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x43,%edx,%edx
+add    $0x10,%edx
+add    %edx,%eax
+mov    0x49(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x30,%eax
-mov    0x19(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x4d(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x19(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x3d(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x15(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x39(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x11(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x35(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x1d(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x31(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x19(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x2d(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x15(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x29(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-mov    0x11(%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x25(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x1d(%eax,%edx,1),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x21(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1b,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x1f(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x17(%eax,%edx,1),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x1b(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x16,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x1a(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x15,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x19(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x14,%eax
-movzbl (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzbl 0x18(%eax),%eax
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-mov    0x10(%eax,%edx,1),%ecx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x43,%eax,%eax
-movzwl 0xe(%eax,%edx,1),%eax
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+mov    0x10(%eax),%ecx
+mov    0xc(%ebp),%edx
+mov    -0x1c(%ebp),%eax
+imul   $0x43,%eax,%eax
+add    $0x10,%eax
+lea    (%edx,%eax,1),%eax
+movzwl 0xe(%eax),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6d4>
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6f5>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6c3>
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6e4>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7af>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7d0>
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x6e9>
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x70a>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jne    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0xae>
+jne    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0xa7>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x78d>
+je     <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7ae>
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7af>
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7d0>
-jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7af>
+jmp    <T> <_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac+0x7d0>
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
```
