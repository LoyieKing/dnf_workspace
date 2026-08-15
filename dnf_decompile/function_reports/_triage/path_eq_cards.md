# PATH_EQ judgment cards

## dbmw `_ZL16allocStackBufferjPPhPi` [NEAR] pm=2 canonΔ=0 size 0x272→0x272
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN10CAppConfig11Parse_TableEPci` [DIFF] pm=1069 canonΔ=7 size 0x142a→0x1424
flags: FRAME,IMM
- frame ORIG ['sub    $0xb0,%esp', 'add    $0xb0,%esp'] OURS ['sub    $0xa0,%esp', 'add    $0xa0,%esp']
- imm ORIG-only ['$0xb0', '$0xb0'] OURS-only ['$0xa0', '$0xa0']
ORIG leftover (canon):
  - sub    $0xb0,%r
  - mov    %r,%r
  - mov    %r,%r
  - mov    %r,%r
  - add    $0xb0,%r
OURS leftover (canon):
  + sub    $0xa0,%r
  + add    $0xa0,%r

## dbmw `_ZN10CDBManager10InsertMailEjPcS0_jjii` [NEAR] pm=22 canonΔ=0 size 0x192→0x192
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN10CDBManager10QueryGuildEhjR27Packet_DB_Reply_Query_Guild` [NEAR] pm=10 canonΔ=0 size 0x537→0x537
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN10CDBManager11GuildSecedeEP30Packet_DB_Request_Guild_SecedeRjS2_S2_` [DIFF] pm=1102 canonΔ=74 size 0xdbb→0xdbd
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0xdc,%esp', 'add    $0xdc,%esp'] OURS ['sub    $0xc4,%esp', 'add    $0xc4,%esp']
- imm ORIG-only ['$0xdc', '$0xdc'] OURS-only ['$0x0', '$0x0', '$0x0', '$0x0', '$0x0', '$0x0', '$0x0', '$0x0', '$0x1', '$0x1']
- jcc ORIG {'je': 37, 'jmp': 36, 'jne': 7} OURS {'je': 45, 'jmp': 44, 'jne': 7}
ORIG leftover (canon):
  - push   %r
  - push   %r
  - sub    $0xdc,%r
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
OURS leftover (canon):
  + sub    $0xc4,%r
  + je     <T>
  + je     <T>
  + je     <T>
  + je     <T>
  + je     <T>
  + je     <T>
  + je     <T>

## dbmw `_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly` [DIFF] pm=19 canonΔ=3 size 0x172→0x16e
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
OURS leftover (canon):
  + movzbl %bl,%r

## dbmw `_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh` [DIFF] pm=118 canonΔ=32 size 0x2c1→0x274
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x27', '$0x27', '$0x27', '$0x27', '$0x27'] OURS-only ['$0x1']
- jcc ORIG {'jmp': 10, 'je': 7, 'jne': 2} OURS {'jmp': 10, 'je': 8, 'jne': 1}
ORIG leftover (canon):
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + je     <T>
  + mov    $0x1,%r

## dbmw `_ZN10CDBManager14SaveGuildSkillEhjR17STGuildDBInfoOnly` [DIFF] pm=31 canonΔ=7 size 0x198→0x190
flags: SHAPE_ONLY
ORIG leftover (canon):
  - add    %r,%r
  - add    %r,%r
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
OURS leftover (canon):
  + lea    (%r,%r,1),%r
  + lea    (%r,%r,1),%r

## dbmw `_ZN10CDBManager15OnLoadGuildAgitEP25Packet_DB_Load_Guild_AgitR28Packet_Guild_Load_Guild_Agit` [NEAR] pm=8 canonΔ=0 size 0x176→0x176
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN10CDBManager15QueryGuildSkillEhjR27Packet_DB_Reply_Query_Guild` [DIFF] pm=26 canonΔ=2 size 0x20d→0x20e
flags: SHAPE_ONLY
ORIG leftover (canon):
  - add    %r,%r
OURS leftover (canon):
  + lea    (%r,%r,1),%r

## dbmw `_ZN10CDBManager15SaveGuildMemberEhjR18STGuildMemerDBInfojh` [DIFF] pm=136 canonΔ=10 size 0x219→0x20a
flags: FRAME,IMM
- frame ORIG ['sub    $0x6c,%esp', 'add    $0x6c,%esp'] OURS ['sub    $0x60,%esp', 'add    $0x60,%esp']
- imm ORIG-only ['$0x6c', '$0x6c'] OURS-only ['$0x60', '$0x60']
ORIG leftover (canon):
  - push   %r
  - sub    $0x6c,%r
  - mov    %al,SLOT(%r)
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - movzbl SLOT(%r),%r
  - add    $0x6c,%r
  - pop    %r
OURS leftover (canon):
  + sub    $0x60,%r
  + add    $0x60,%r

## dbmw `_ZN10CDBManager16SaveMemberInsertEjjh` [DIFF] pm=162 canonΔ=6 size 0x647→0x653
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0x1', '$0x1']
- jcc ORIG {'jne': 6, 'jmp': 14, 'je': 10} OURS {'jne': 5, 'jmp': 16, 'je': 11}
ORIG leftover (canon):
  - jne    <T>
OURS leftover (canon):
  + jmp    <T>
  + jmp    <T>
  + je     <T>
  + mov    $0x1,%r
  + mov    $0x1,%r

## dbmw `_ZN10CDBManager17OnWriteGuildBoardEP40Packet_DB_Load_Request_Guild_Board_WriteP18STGuildBoardDBInfo` [DIFF] pm=126 canonΔ=4 size 0x307→0x30b
flags: IMM
- imm ORIG-only [] OURS-only ['$0x17']
ORIG leftover (canon):
  - lea    0x17(%r),%r
OURS leftover (canon):
  + mov    %r,%r
  + mov    %r,%r
  + add    $0x17,%r

## dbmw `_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic` [DIFF] pm=396 canonΔ=74 size 0x5d8→0x5f0
flags: CALL_DIFF,FRAME,IMM
- calls ORIG ['call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *-0x3c(%ebp)', 'call   *-0x40(%ebp)', 'call   *-0x44(%ebp)']
- calls OURS ['call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *-0x4c(%ebp)', 'call   *-0x50(%ebp)', 'call   *-0x54(%ebp)']
- frame ORIG ['sub    $0x6c,%esp', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'add    $0x6c,%esp'] OURS ['sub    $0x7c,%esp', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'add    $0x7c,%esp']
- imm ORIG-only ['$0x6c', '$0x6c'] OURS-only ['$0x7c', '$0x7c']
ORIG leftover (canon):
  - sub    $0x6c,%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
OURS leftover (canon):
  + sub    $0x7c,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## dbmw `_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh` [DIFF] pm=327 canonΔ=31 size 0x390→0x34c
flags: CALL_DIFF,IMM
- calls ORIG ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'call   *%ecx', 'call   *%ecx', 'call   *%ecx', 'call   *%ecx', 'call   *%edx', 'call   *%edx', 'call   *%edx']
- calls OURS ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *%edx', 'call   *%edx']
- imm ORIG-only ['$0x1', '$0x1', '$0x1'] OURS-only ['$0x2', '$0x3']
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
OURS leftover (canon):
  + movl   $0x0,0x4(%r)
  + movl   $0x1,0x4(%r)
  + movl   $0x2,0x4(%r)
  + movl   $0x3,0x4(%r)

## dbmw `_ZN10CDBManager18updateCollectItemsEhijh` [DIFF] pm=93 canonΔ=3 size 0x1a7→0x1a4
flags: IMM
- imm ORIG-only [] OURS-only ['$0x0']
ORIG leftover (canon):
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
OURS leftover (canon):
  + movb   $0x0,SLOT(%r)

## dbmw `_ZN10CDBManager19QueryCharacNoByNameEPcRjPi` [DIFF] pm=68 canonΔ=18 size 0x281→0x283
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0x0', '$0x0', '$0x1']
- jcc ORIG {'jmp': 8, 'je': 7, 'jg': 1, 'jne': 1} OURS {'jmp': 9, 'je': 9, 'jle': 1}
ORIG leftover (canon):
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
  - movzbl SLOT(%r),%r
  - movzbl SLOT(%r),%r
  - movzbl SLOT(%r),%r
OURS leftover (canon):
  + jmp    <T>
  + je     <T>
  + je     <T>
  + jle    <T>
  + movl   $0x0,SLOT(%r)
  + mov    $0x1,%r
  + mov    $0x0,%r
  + test   %al,%al

## dbmw `_ZN10CDBManager19QuerySubGuildMasterEhjR27Packet_DB_Reply_Query_Guild` [DIFF] pm=66 canonΔ=14 size 0x1b3→0x199
flags: IMM
- imm ORIG-only ['$0x8'] OURS-only ['$0x20']
ORIG leftover (canon):
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
  - movzbl SLOT(%r),%r
  - movzbl SLOT(%r),%r
  - add    $0x8,%r
  - movzbl 0x2d(%r),%r
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + add    $0x20,%r
  + setl   %al

## dbmw `_ZN10CDBManager19SendGuildCoinByMailEijjjiPcS0_` [DIFF] pm=66 canonΔ=14 size 0x2e1→0x2db
flags: IMM
- imm ORIG-only [] OURS-only ['$0x0', '$0x0']
ORIG leftover (canon):
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
  - movzbl SLOT(%r),%r
  - movzbl SLOT(%r),%r
  - mov    0x8(%r),%r
  - mov    %r,0x8(%r)
OURS leftover (canon):
  + mov    0xc(%r),%r
  + mov    %r,0xc(%r)
  + movl   $0x0,0x8(%r)
  + movl   $0x0,SLOT(%r)
  + movl   $0x0,SLOT(%r)

## dbmw `_ZN10CDBManager20OnSaveFatigueBatteryEP43Packet_DBMW_Fatigue_Battery_Money_Statistic` [DIFF] pm=45 canonΔ=13 size 0x127→0x114
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x30,%esp', 'add    $0x30,%esp'] OURS ['sub    $0x34,%esp', 'add    $0x34,%esp']
- imm ORIG-only ['$0x30', '$0x30'] OURS-only ['$0x34', '$0x34']
- jcc ORIG {'jne': 3, 'jmp': 3, 'je': 1} OURS {'jne': 2, 'jmp': 2, 'je': 1}
ORIG leftover (canon):
  - push   %r
  - sub    $0x30,%r
  - jne    <T>
  - jmp    <T>
  - mov    0xc(%r),%r
  - mov    SLOT(%r),%r
  - mov    0xa(%r,%r,8),%r
  - test   %r,%r
OURS leftover (canon):
  + sub    $0x34,%r
  + add    $0x34,%r

## dbmw `_ZN10CDBManager20updateCollectItemsGmEhiij` [DIFF] pm=68 canonΔ=2 size 0x11b→0x114
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
OURS leftover (canon):

## dbmw `_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message` [DIFF] pm=50 canonΔ=10 size 0x296→0x2a7
flags: FRAME,IMM
- frame ORIG ['sub    $0x48,%esp'] OURS ['sub    $0x58,%esp']
- imm ORIG-only ['$0x20a', '$0x20e', '$0x48'] OURS-only ['$0x58']
ORIG leftover (canon):
  - sub    $0x48,%r
  - add    $0x20a,%r
  - add    $0x20e,%r
OURS leftover (canon):
  + sub    $0x58,%r
  + lea    SLOT(%r),%r
  + lea    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    %r,0x20a(%r)
  + mov    %r,0x20e(%r)

## dbmw `_ZN10CDBManager21OnSecretShopStatisticEP28Packet_Secret_Shop_Statistic` [DIFF] pm=104 canonΔ=68 size 0x2a6→0x28c
flags: IMM
- imm ORIG-only ['$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x2', '$0x2'] OURS-only ['$0x1', '$0x1', '$0x3', '$0x3', '$0x4', '$0x4', '$0x4', '$0x4', '$0x4', '$0x4']
ORIG leftover (canon):
  - shl    $0x2,%r
  - shl    $0x2,%r
  - shl    $0x2,%r
  - shl    $0x2,%r
  - shl    $0x2,%r
  - shl    $0x2,%r
  - shl    $0x2,%r
  - shl    $0x2,%r
OURS leftover (canon):
  + add    $0x4,%r
  + add    $0x4,%r
  + add    $0x4,%r
  + add    $0x4,%r
  + add    $0x4,%r
  + add    $0x4,%r
  + add    $0x4,%r
  + add    $0x4,%r

## dbmw `_ZN10CDBManager21QueryGuildMemberProxyEjjR18STGuildMemberProxy` [DIFF] pm=54 canonΔ=16 size 0x25b→0x223
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
OURS leftover (canon):

## dbmw `_ZN10CDBManager21SaveGuildWarPointListEiPjS0_` [DIFF] pm=55 canonΔ=13 size 0x145→0x137
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x40,%esp', 'add    $0x40,%esp'] OURS ['sub    $0x38,%esp']
- imm ORIG-only ['$0x40', '$0x40'] OURS-only ['$0x38']
- jcc ORIG {'je': 4, 'jne': 2, 'jmp': 4} OURS {'jne': 3, 'jmp': 4, 'je': 3}
ORIG leftover (canon):
  - push   %r
  - push   %r
  - sub    $0x40,%r
  - je     <T>
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
  - add    $0x40,%r
  - pop    %r
OURS leftover (canon):
  + sub    $0x38,%r
  + jne    <T>
  + leave

## dbmw `_ZN10CDBManager22OnStatisticLoginLogoutEP34Packet_DBMW_Statistic_Login_Logout` [DIFF] pm=37 canonΔ=7 size 0x12e→0x124
flags: SHAPE_ONLY
ORIG leftover (canon):
  - movl   $0x0,SLOT(%r)
  - lea    SLOT(%r),%r
  - mov    %r,(%r)
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + movl   $0x0,(%r)

## dbmw `_ZN10CDBManager22OnWriteGuildMemberMemoEP33Packet_DB_Write_Guild_Member_Memo` [DIFF] pm=21 canonΔ=3 size 0x16b→0x16a
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    $0x6002,%r
  - mov    %r,0x8(%r)
OURS leftover (canon):
  + movl   $0x6002,0x8(%r)

## dbmw `_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History` [DIFF] pm=180 canonΔ=12 size 0x384→0x383
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1'] OURS-only ['$0x0', '$0x4', '$0x6']
- jcc ORIG {'je': 8, 'jmp': 9, 'jne': 1} OURS {'jne': 2, 'jmp': 9, 'je': 7}
ORIG leftover (canon):
  - movzbl SLOT(%r),%r
  - xor    $0x1,%r
  - test   %al,%al
  - je     <T>
  - lea    0x6(%r),%r
  - lea    0x4(%r),%r
OURS leftover (canon):
  + cmpb   $0x0,SLOT(%r)
  + jne    <T>
  + add    $0x6,%r
  + mov    %r,%r
  + mov    %r,%r
  + add    $0x4,%r

## dbmw `_ZN10CDBManager23OnSaveLoadingTimeReportEP31Packet_DBMW_Loading_Time_Report` [DIFF] pm=13 canonΔ=3 size 0x134→0x136
flags: SHAPE_ONLY
ORIG leftover (canon):
  - movzbl %al,%r
OURS leftover (canon):
  + mov    %r,%r
  + movsbl %al,%r

## dbmw `_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo` [DIFF] pm=184 canonΔ=40 size 0x384→0x359
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x68,%esp'] OURS ['sub    $0x64,%esp', 'add    $0x64,%esp']
- imm ORIG-only ['$0x0', '$0x1', '$0x68'] OURS-only ['$0x12', '$0x16', '$0x64', '$0x64', '$0xe']
- jcc ORIG {'jne': 3, 'jmp': 10, 'je': 6, 'jbe': 1, 'ja': 1} OURS {'jne': 2, 'jmp': 10, 'je': 6, 'jbe': 2}
ORIG leftover (canon):
  - sub    $0x68,%r
  - jne    <T>
  - mov    $0x0,%r
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
OURS leftover (canon):
  + push   %r
  + sub    $0x64,%r
  + mov    0x10(%r),%r
  + mov    0x10(%r),%r
  + mov    0x10(%r),%r
  + jbe    <T>
  + add    $0xe,%r
  + lea    (%r,%r,1),%r

## dbmw `_ZN10CDBManager24ChangeGuildNotifyMessageEijPc` [DIFF] pm=43 canonΔ=7 size 0x1dd→0x1ce
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    $0x6002,%r
  - mov    %r,0x8(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
  - movzbl SLOT(%r),%r
OURS leftover (canon):
  + movl   $0x6002,0x8(%r)

## dbmw `_ZN10CDBManager24InsertFrameLagStatisticsEP42Packet_Frame_Lag_Statistic_Write_Lag_IndexP17CStatisticsServer` [DIFF] pm=370 canonΔ=118 size 0x654→0x631
flags: CALL_DIFF,FRAME,IMM,JCC_MNEM
- calls ORIG ['T', 'T', 'T', 'T', 'T', 'T', 'call   *-0x8c(%ebp)', 'call   *-0xb0(%ebp)']
- calls OURS ['T', 'T', 'T', 'T', 'T', 'T', 'call   *-0x7c(%ebp)', 'call   *-0xa0(%ebp)']
- frame ORIG ['sub    $0x13c,%esp', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'add    $0x13c,%esp'] OURS ['sub    $0x12c,%esp', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'add    $0x12c,%esp']
- imm ORIG-only ['$0x0', '$0x1', '$0x13c', '$0x13c', '$0x20', '$0x28', '$0x28', '$0x48', '$0x48'] OURS-only ['$0x12c', '$0x12c', '$0x30', '$0x30', '$0x40', '$0x40', '$0x50', '$0x50']
- jcc ORIG {'jmp': 11, 'je': 3, 'ja': 1, 'jne': 2} OURS {'jmp': 12, 'je': 4, 'ja': 1, 'jne': 1}
ORIG leftover (canon):
  - sub    $0x13c,%r
  - cmpl   $0x0,SLOT(%r)
  - movl   $0x20,SLOT(%r)
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
OURS leftover (canon):
  + sub    $0x12c,%r
  + jmp    <T>
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## dbmw `_ZN10CDBManager24OnGoldcardEventStatisticEP35Packet_Goldcard_Event_Statistic_STD` [DIFF] pm=30 canonΔ=2 size 0x1e2→0x1df
flags: JCC_MNEM
- jcc ORIG {'jmp': 2, 'je': 3} OURS {'jmp': 1, 'je': 3}
ORIG leftover (canon):
  - jmp    <T>
  - nop
OURS leftover (canon):

## dbmw `_ZN10CDBManager24OnGuildJoinByListApproveEjcjjR15STGuildJoinInfoRj` [DIFF] pm=224 canonΔ=6 size 0x65b→0x667
flags: FRAME,IMM
- frame ORIG ['sub    $0xa8,%esp'] OURS ['sub    $0xb8,%esp']
- imm ORIG-only ['$0x8', '$0xa8'] OURS-only ['$0xb8']
ORIG leftover (canon):
  - sub    $0xa8,%r
  - add    $0x8,%r
OURS leftover (canon):
  + sub    $0xb8,%r
  + lea    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    %r,0x8(%r)

## dbmw `_ZN10CDBManager24OnManagerEventTriggerAckEP32Packet_Manager_Event_Trigger_Ack` [NEAR] pm=8 canonΔ=0 size 0x143→0x143
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN10CDBManager24QueryCubeStatisticCreateEP26Packet_DBMW_Cube_Statistic` [DIFF] pm=111 canonΔ=23 size 0x3db→0x3da
flags: IMM
- imm ORIG-only ['$0x0'] OURS-only []
ORIG leftover (canon):
  - movl   $0x0,SLOT(%r)
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## dbmw `_ZN10CDBManager24QueryUpdateChannelOccNumEP27Packet_User_Count_Statistic` [DIFF] pm=7 canonΔ=3 size 0x1be→0x1bc
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - cmp    $0x63,%r
OURS leftover (canon):
  + cmpl   $0x63,SLOT(%r)

## dbmw `_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer` [DIFF] pm=46 canonΔ=6 size 0x12a→0x11d
flags: FRAME,IMM
- frame ORIG ['sub    $0x9c,%esp', 'add    $0x9c,%esp'] OURS ['sub    $0x6c,%esp', 'add    $0x6c,%esp']
- imm ORIG-only ['$0x9c', '$0x9c'] OURS-only ['$0x6c', '$0x6c']
ORIG leftover (canon):
  - sub    $0x9c,%r
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
  - add    $0x9c,%r
OURS leftover (canon):
  + sub    $0x6c,%r
  + add    $0x6c,%r

## dbmw `_ZN10CDBManager24updateCompatibilityIndexEP31Packet_Stat_Compatibility_Index` [DIFF] pm=90 canonΔ=44 size 0x2a7→0x29f
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## dbmw `_ZN10CDBManager25OnInsertGuildCargoHistoryEP36Packet_DB_Insert_Guild_Cargo_History` [DIFF] pm=15 canonΔ=1 size 0x2fb→0x2fd
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + mov    %r,%r

## dbmw `_ZN10CDBManager25OnSavePacketOverflowWriteEP37Packet_DBMW_Packet_Overflow_Statistic` [DIFF] pm=107 canonΔ=31 size 0x24b→0x233
flags: FRAME,IMM
- frame ORIG ['sub    $0x534,%esp', 'add    $0x534,%esp'] OURS ['sub    $0x538,%esp']
- imm ORIG-only ['$0x534', '$0x534'] OURS-only ['$0x538']
ORIG leftover (canon):
  - push   %r
  - sub    $0x534,%r
  - movzwl %ax,%r
  - movzwl %ax,%r
  - cmp    %r,%r
  - cmp    %r,%r
  - setge  %al
  - setge  %al
OURS leftover (canon):
  + sub    $0x538,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + cmp    SLOT(%r),%r
  + cmp    SLOT(%r),%r
  + setle  %al
  + setle  %al
  + mov    SLOT(%r),%r

## dbmw `_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward` [NEAR] pm=4 canonΔ=0 size 0x101→0x101
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN10CDBManager25QueryGuildAllMembersProxyEjP18STGuildMemberProxyRt` [DIFF] pm=146 canonΔ=24 size 0x3cb→0x37e
flags: FRAME,IMM
- frame ORIG ['sub    $0x48,%esp'] OURS ['sub    $0x38,%esp']
- imm ORIG-only ['$0x48'] OURS-only ['$0x38']
ORIG leftover (canon):
  - sub    $0x48,%r
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
OURS leftover (canon):
  + sub    $0x38,%r

## dbmw `_ZN10CDBManager25QueryPartyStatisticCreateEP35Packet_DBMW_Dungeon_Statistic_Party` [DIFF] pm=1029 canonΔ=227 size 0x8d3→0x99a
flags: FRAME,IMM
- frame ORIG ['sub    $0x91c,%esp', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %edx,%eax', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %edx,%eax', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'add    $0x91c,%esp'] OURS ['sub    $0x92c,%esp', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%ebx', 'sub    %eax,%ebx', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%ebx', 'sub    %eax,%ebx', 'add    $0x92c,%esp']
- imm ORIG-only ['$0x0', '$0x14', '$0x14', '$0x15', '$0x15', '$0x16', '$0x16', '$0x17', '$0x17', '$0x18'] OURS-only ['$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10']
ORIG leftover (canon):
  - sub    $0x91c,%r
  - movl   $0x0,SLOT(%r)
  - add    $0x20,%r
  - add    $0x20,%r
  - add    $0x20,%r
  - add    $0x20,%r
  - add    $0x20,%r
  - add    $0x20,%r
OURS leftover (canon):
  + sub    $0x92c,%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + shl    $0x2,%r
  + shl    $0x2,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r

## dbmw `_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker` [DIFF] pm=32 canonΔ=2 size 0x201→0x1fa
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
OURS leftover (canon):

## dbmw `_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query` [DIFF] pm=147 canonΔ=51 size 0x386→0x325
flags: FRAME,IMM
- frame ORIG ['sub    $0x644,%esp', 'add    $0x644,%esp'] OURS ['sub    $0x648,%esp']
- imm ORIG-only ['$0x100', '$0x100', '$0x100', '$0x100', '$0x100', '$0x14', '$0x206', '$0x206', '$0x206', '$0x206'] OURS-only ['$0x10e', '$0x10e', '$0x110', '$0x110', '$0x114', '$0x648', '$0xe']
ORIG leftover (canon):
  - push   %r
  - sub    $0x644,%r
  - add    0xc(%r),%r
  - add    0xc(%r),%r
  - add    0xc(%r),%r
  - add    0xc(%r),%r
  - add    0xc(%r),%r
  - imul   $0x206,%r,%r
OURS leftover (canon):
  + sub    $0x648,%r
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + add    $0xe,%r
  + add    $0x114,%r
  + add    $0x10e,%r
  + add    $0x10e,%r
  + movzwl (%r),%r

## dbmw `_ZN10CDBManager28QueryPartyJobStatisticCreateEP39Packet_DBMW_Dungeon_Statistic_Party_Job` [DIFF] pm=523 canonΔ=117 size 0x6c9→0x6fc
flags: IMM
- imm ORIG-only ['$0x0', '$0x14', '$0x14', '$0x15', '$0x15', '$0x16', '$0x16', '$0x17', '$0x17', '$0x18'] OURS-only ['$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10']
ORIG leftover (canon):
  - movl   $0x0,SLOT(%r)
  - add    %r,%r
  - add    %r,%r
  - add    %r,%r
  - add    %r,%r
  - add    %r,%r
  - add    %r,%r
  - add    %r,%r
OURS leftover (canon):
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r

## dbmw `_ZN10CDBManager28QueryTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_STD` [DIFF] pm=110 canonΔ=10 size 0x1fd→0x1f6
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x4c,%esp', 'add    $0x4c,%esp'] OURS ['sub    $0x44,%esp', 'add    $0x44,%esp']
- imm ORIG-only ['$0x4c', '$0x4c'] OURS-only ['$0x44', '$0x44']
- jcc ORIG {'jne': 4, 'jmp': 4, 'je': 3} OURS {'jne': 4, 'jmp': 3, 'je': 3}
ORIG leftover (canon):
  - push   %r
  - push   %r
  - sub    $0x4c,%r
  - jmp    <T>
  - nop
  - add    $0x4c,%r
  - pop    %r
  - pop    %r
OURS leftover (canon):
  + sub    $0x44,%r
  + add    $0x44,%r

## dbmw `_ZN10CDBManager29UpdateDisjointAvatarStatisticEP35Packet_Avater_Disjoint_Statistic_DB` [DIFF] pm=344 canonΔ=58 size 0x45d→0x40b
flags: CALL_DIFF,FRAME,IMM,JCC_MNEM
- calls ORIG ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'call   *%edi', 'call   *%edi']
- calls OURS ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'call   *%esi', 'call   *%esi']
- frame ORIG ['sub    $0x7c,%esp', 'add    $0x7c,%esp'] OURS ['sub    $0x70,%esp', 'add    $0x70,%esp']
- imm ORIG-only ['$0x1', '$0x1', '$0x2', '$0x3', '$0x3', '$0x3', '$0x3', '$0x3', '$0x34', '$0x34'] OURS-only ['$0x0', '$0x0', '$0x38', '$0x38', '$0x70', '$0x70']
- jcc ORIG {'jne': 16, 'jmp': 16, 'je': 3} OURS {'jne': 14, 'jmp': 14, 'je': 3}
ORIG leftover (canon):
  - push   %r
  - sub    $0x7c,%r
  - jne    <T>
  - jne    <T>
  - jmp    <T>
  - jmp    <T>
  - cmpl   $0x2,SLOT(%r)
  - cmpl   $0x9,SLOT(%r)
OURS leftover (canon):
  + sub    $0x70,%r
  + movl   $0x0,SLOT(%r)
  + movl   $0x0,SLOT(%r)
  + mov    SLOT(%r),%r
  + add    $0x38,%r
  + add    $0x38,%r
  + mov    0x2(%r,%r,4),%r
  + mov    0x2(%r,%r,4),%r

## dbmw `_ZN10CDBManager31QueryPartyCharacStatisticCreateEP42Packet_DBMW_Dungeon_Statistic_Party_Charac` [DIFF] pm=543 canonΔ=157 size 0x7c7→0x7e8
flags: IMM
- imm ORIG-only ['$0x0', '$0x14', '$0x14', '$0x15', '$0x15', '$0x16', '$0x16', '$0x1b', '$0x1b', '$0x1c'] OURS-only ['$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10', '$0x10']
ORIG leftover (canon):
  - movl   $0x0,SLOT(%r)
  - lea    (%r,%r,1),%r
  - lea    (%r,%r,1),%r
  - add    $0x30,%r
  - add    $0x30,%r
  - add    $0x30,%r
  - add    $0x30,%r
  - add    $0x30,%r
OURS leftover (canon):
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r
  + add    $0x10,%r

## dbmw `_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj` [DIFF] pm=156 canonΔ=14 size 0x391→0x360
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - mov    %al,SLOT(%r)
  - movzbl SLOT(%r),%r
OURS leftover (canon):

## dbmw `_ZN10CDBManager41QueryDeathTowerPlayDataJobStatisticCreateEP45Packet_DBMW_DeathTower_Statistic_Playdata_Job` [DIFF] pm=235 canonΔ=59 size 0x57a→0x571
flags: FRAME,IMM
- frame ORIG ['sub    $0x87c,%esp', 'add    $0x87c,%esp'] OURS ['sub    $0x88c,%esp', 'add    $0x88c,%esp']
- imm ORIG-only ['$0x0', '$0x87c', '$0x87c'] OURS-only ['$0x88c', '$0x88c']
ORIG leftover (canon):
  - sub    $0x87c,%r
  - movl   $0x0,SLOT(%r)
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
OURS leftover (canon):
  + sub    $0x88c,%r
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## dbmw `_ZN10CDBManager43QueryDeathTowerPlayDataPartyStatisticCreateEP47Packet_DBMW_DeathTower_Statistic_Playdata_Party` [DIFF] pm=145 canonΔ=39 size 0x4ea→0x4e9
flags: FRAME,IMM
- frame ORIG ['sub    $0x85c,%esp', 'add    $0x85c,%esp'] OURS ['sub    $0x86c,%esp', 'add    $0x86c,%esp']
- imm ORIG-only ['$0x0', '$0x85c', '$0x85c'] OURS-only ['$0x86c', '$0x86c']
ORIG leftover (canon):
  - sub    $0x85c,%r
  - movl   $0x0,SLOT(%r)
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
OURS leftover (canon):
  + sub    $0x86c,%r
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## dbmw `_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi` [DIFF] pm=125 canonΔ=3 size 0x441→0x44f
flags: IMM
- imm ORIG-only [] OURS-only ['$0x0']
ORIG leftover (canon):
OURS leftover (canon):
  + movl   $0x0,SLOT(%r)
  + mov    %al,SLOT(%r)
  + movzbl SLOT(%r),%r

## dbmw `_ZN12CApplication15TranslateSignalEv` [DIFF] pm=65 canonΔ=7 size 0x3da→0x3d8
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1f'] OURS-only ['$0x0']
- jcc ORIG {'jne': 2, 'jmp': 8, 'je': 5} OURS {'jne': 2, 'jmp': 8, 'je': 4, 'jns': 1}
ORIG leftover (canon):
  - je     <T>
  - mov    SLOT(%r),%r
  - shr    $0x1f,%r
  - test   %al,%al
OURS leftover (canon):
  + mov    %r,%r
  + cmpl   $0x0,SLOT(%r)
  + jns    <T>

## dbmw `_ZN12CApplication4LoadEiPPc` [DIFF] pm=18 canonΔ=0 size 0x5d0→0x5d0
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN13CPacketTracer19EndPacketProcessLogEj` [NEAR] pm=10 canonΔ=0 size 0xa6→0xa6
flags: CALL_DIFF
- calls ORIG ['call   *%edx']
- calls OURS ['call   *%eax']
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN13CPacketTracer21WritePacketProcessLogEv` [DIFF] pm=51 canonΔ=3 size 0x164→0x162
flags: SHAPE_ONLY
ORIG leftover (canon):
  - fldl   SLOT(%r)
  - fdivp  %st,%st(1)
OURS leftover (canon):
  + fdivrl SLOT(%r)

## dbmw `_ZN13CPacketTracerC1Ev` [NEAR] pm=12 canonΔ=8 size 0xad→0xaf
flags: FRAME,IMM
- frame ORIG ['sub    $0x10,%esp', 'add    $0x10,%esp'] OURS ['sub    $0x20,%esp', 'add    $0x20,%esp']
- imm ORIG-only ['$0x10', '$0x10'] OURS-only ['$0x20', '$0x20']
ORIG leftover (canon):
  - sub    $0x10,%r
  - mov    %r,%r
  - mov    %r,%r
  - add    $0x10,%r
OURS leftover (canon):
  + sub    $0x20,%r
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + add    $0x20,%r

## dbmw `_ZN13CQueryCounter10WriteDBLogER10CDBManager` [DIFF] pm=23 canonΔ=1 size 0x2b6→0x2b8
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + mov    %r,%r

## dbmw `_ZN13CTcpNetSystem14OpenTcpServiceERiPKct` [DIFF] pm=12 canonΔ=0 size 0x1b1→0x1b1
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN13CTcpNetSystem18PushTcpSendPacketQEPc` [DIFF] pm=50 canonΔ=6 size 0xe9→0xe7
flags: FRAME,IMM
- frame ORIG ['sub    $0x4c,%esp', 'add    $0x4c,%esp'] OURS ['sub    $0x40,%esp', 'add    $0x40,%esp']
- imm ORIG-only ['$0x4c', '$0x4c'] OURS-only ['$0x40', '$0x40']
ORIG leftover (canon):
  - push   %r
  - sub    $0x4c,%r
  - add    $0x4c,%r
  - pop    %r
OURS leftover (canon):
  + sub    $0x40,%r
  + add    $0x40,%r

## dbmw `_ZN13CTcpNetSystem21SetEpollAcceptedPeersEv` [DIFF] pm=30 canonΔ=4 size 0x19c→0x199
flags: FRAME
- frame ORIG ['add    $0x0,%esp'] OURS ['add    $0x0,%esp']
ORIG leftover (canon):
  - setne  %al
  - test   %al,%al
OURS leftover (canon):
  + nop
  + nop

## dbmw `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE` [NEAR] pm=2 canonΔ=0 size 0x265→0x265
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN14CNetworkThread8dispatchEPv` [DIFF] pm=22 canonΔ=0 size 0x6d6→0x6d6
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi` [DIFF] pm=55 canonΔ=15 size 0x11d→0x112
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['add    $0x10,%esp'] OURS []
- imm ORIG-only ['$0x10'] OURS-only ['$0x5138']
- jcc ORIG {'jg': 1, 'jle': 1, 'je': 3, 'ja': 1, 'jmp': 5} OURS {'jg': 1, 'jle': 1, 'je': 2, 'ja': 1, 'jne': 1, 'jmp': 5}
ORIG leftover (canon):
  - push   %r
  - je     <T>
  - sete   %al
  - test   %al,%al
  - mov    SLOT(%r),%r
  - lea    (%r,%r,1),%r
  - lea    0x5138(%r),%r
  - add    $0x10,%r
OURS leftover (canon):
  + jne    <T>
  + mov    %r,%r
  + add    SLOT(%r),%r
  + add    $0x5138,%r
  + leave

## dbmw `_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader` [DIFF] pm=16 canonΔ=2 size 0xfa→0xfa
flags: FRAME,IMM
- frame ORIG [] OURS ['sub    $0xa,%eax']
- imm ORIG-only [] OURS-only ['$0xa']
ORIG leftover (canon):
  - lea    -0xa(%r),%r
OURS leftover (canon):
  + sub    $0xa,%r

## dbmw `_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader` [DIFF] pm=122 canonΔ=6 size 0x2cd→0x2bb
flags: JCC_MNEM
- jcc ORIG {'je': 2, 'jmp': 5, 'jne': 1} OURS {'je': 2, 'jmp': 6, 'jne': 1}
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + jmp    <T>
  + nop

## dbmw `_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader` [DIFF] pm=24 canonΔ=2 size 0x28f→0x28b
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %r,%r
  - mov    %r,%r
OURS leftover (canon):

## dbmw `_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader` [DIFF] pm=111 canonΔ=35 size 0x27a→0x25e
flags: IMM
- imm ORIG-only [] OURS-only ['$0xff', '$0xff', '$0xff']
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - movzbl 0xa(%r),%r
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + movzbl %dl,%r

## dbmw `_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader` [DIFF] pm=32 canonΔ=2 size 0x335→0x33b
flags: JCC_MNEM
- jcc ORIG {'je': 2, 'jmp': 7, 'jne': 1} OURS {'je': 2, 'jmp': 8, 'jne': 1}
ORIG leftover (canon):
OURS leftover (canon):
  + jmp    <T>
  + nop

## dbmw `_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader` [DIFF] pm=8 canonΔ=2 size 0x204→0x201
flags: JCC_MNEM
- jcc ORIG {'je': 1, 'jmp': 3} OURS {'je': 1, 'jmp': 2}
ORIG leftover (canon):
  - jmp    <T>
  - nop
OURS leftover (canon):

## dbmw `_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader` [DIFF] pm=23 canonΔ=1 size 0x298→0x29a
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + mov    %r,%r

## dbmw `_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader` [DIFF] pm=66 canonΔ=6 size 0x1e5→0x1d9
flags: FRAME,IMM
- frame ORIG ['sub    $0x8c,%esp', 'add    $0x8c,%esp'] OURS ['sub    $0x7c,%esp', 'add    $0x7c,%esp']
- imm ORIG-only ['$0x8c', '$0x8c'] OURS-only ['$0x7c', '$0x7c']
ORIG leftover (canon):
  - sub    $0x8c,%r
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - add    $0x8c,%r
OURS leftover (canon):
  + sub    $0x7c,%r
  + add    $0x7c,%r

## dbmw `_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader` [DIFF] pm=29 canonΔ=3 size 0x1e4→0x1ee
flags: IMM
- imm ORIG-only ['$0x12'] OURS-only []
ORIG leftover (canon):
  - add    $0x12,%r
OURS leftover (canon):
  + lea    0x12(%r),%r
  + mov    %r,%r

## dbmw `_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader` [DIFF] pm=68 canonΔ=12 size 0x336→0x32a
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x13'] OURS-only []
- jcc ORIG {'je': 5, 'jmp': 8, 'jne': 1} OURS {'je': 4, 'jne': 2, 'jmp': 9}
ORIG leftover (canon):
  - je     <T>
  - mov    %r,SLOT(%r)
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - add    $0x13,%r
OURS leftover (canon):
  + jne    <T>
  + nop
  + nop
  + nop
  + jmp    <T>
  + lea    0x13(%r),%r

## dbmw `_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader` [DIFF] pm=52 canonΔ=16 size 0x180→0x173
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x250,%esp', 'add    $0x250,%esp'] OURS ['sub    $0x240,%esp', 'add    $0x240,%esp']
- imm ORIG-only ['$0x250', '$0x250'] OURS-only ['$0x1', '$0x240', '$0x240']
- jcc ORIG {'je': 2, 'jmp': 5, 'jne': 1} OURS {'je': 1, 'jne': 2, 'jmp': 6}
ORIG leftover (canon):
  - sub    $0x250,%r
  - je     <T>
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - movzwl SLOT(%r),%r
  - movzwl %ax,%r
  - movl   $0x212,SLOT(%r)
  - mov    %r,0x8(%r)
OURS leftover (canon):
  + sub    $0x240,%r
  + xor    $0x1,%r
  + jne    <T>
  + movl   $0x212,0x8(%r)
  + jmp    <T>
  + nop
  + add    $0x240,%r

## dbmw `_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader` [DIFF] pm=23 canonΔ=1 size 0x286→0x288
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + mov    %r,%r

## dbmw `_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader` [DIFF] pm=284 canonΔ=52 size 0x4af→0x450
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x2,%ebx'] OURS []
- imm ORIG-only ['$0x1', '$0x1', '$0x100', '$0x2', '$0x2', '$0x2', '$0x2', '$0x2', '$0x2'] OURS-only ['$0x0', '$0x40']
- jcc ORIG {'je': 10, 'jb': 1, 'jmp': 7, 'jne': 1} OURS {'je': 7, 'jb': 1, 'jmp': 7, 'jne': 1}
ORIG leftover (canon):
  - je     <T>
  - je     <T>
  - je     <T>
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - movzbl %al,%r
OURS leftover (canon):
  + mov    %al,SLOT(%r)
  + movzbl SLOT(%r),%r
  + movzbl SLOT(%r),%r
  + movzbl SLOT(%r),%r
  + movzbl SLOT(%r),%r
  + movzbl SLOT(%r),%r
  + movl   $0x0,SLOT(%r)
  + mov    $0x40,%r

## dbmw `_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader` [DIFF] pm=72 canonΔ=2 size 0x1d6→0x1d1
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
OURS leftover (canon):

## dbmw `_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader` [DIFF] pm=74 canonΔ=8 size 0x280→0x27e
flags: SHAPE_ONLY
ORIG leftover (canon):
  - cmp    $0x12c,%r
  - mov    $0x12c,%r
  - mov    %r,-0x4f0(%r,%r,4)
  - setg   %al
OURS leftover (canon):
  + cmpl   $0x12c,SLOT(%r)
  + movl   $0x12c,SLOT(%r)
  + mov    %r,-0x4f4(%r,%r,4)
  + setl   %al

## dbmw `_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader` [DIFF] pm=81 canonΔ=17 size 0x23b→0x235
flags: FRAME,IMM
- frame ORIG ['sub    $0x50,%esp', 'add    $0x50,%esp'] OURS ['sub    $0x40,%esp', 'add    $0x40,%esp']
- imm ORIG-only ['$0x50', '$0x50'] OURS-only ['$0x40', '$0x40']
ORIG leftover (canon):
  - sub    $0x50,%r
  - mov    %r,SLOT(%r)
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    %r,0xa(%r)
  - mov    %r,0x12(%r)
  - mov    %r,0xe(%r)
OURS leftover (canon):
  + sub    $0x40,%r
  + lea    0xa(%r),%r
  + mov    %r,(%r)
  + mov    %r,(%r)
  + mov    %r,(%r)
  + lea    0x12(%r),%r
  + lea    0xe(%r),%r
  + add    $0x40,%r

## dbmw `_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader` [DIFF] pm=106 canonΔ=12 size 0x28a→0x281
flags: FRAME,IMM
- frame ORIG ['sub    $0xbc,%esp', 'add    $0xbc,%esp'] OURS ['sub    $0xac,%esp', 'add    $0xac,%esp']
- imm ORIG-only ['$0xa', '$0xbc', '$0xbc'] OURS-only ['$0xac', '$0xac']
ORIG leftover (canon):
  - sub    $0xbc,%r
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - add    $0xa,%r
  - add    $0xbc,%r
OURS leftover (canon):
  + sub    $0xac,%r
  + lea    0xa(%r),%r
  + mov    0x12(%r),%r
  + mov    0x12(%r),%r
  + mov    0xa(%r),%r
  + mov    0xa(%r),%r
  + add    $0xac,%r

## dbmw `_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader` [DIFF] pm=80 canonΔ=10 size 0x218→0x209
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x1e0,%esp', 'add    $0x1e0,%esp'] OURS ['sub    $0x1d0,%esp', 'add    $0x1d0,%esp']
- imm ORIG-only ['$0x1e0', '$0x1e0'] OURS-only ['$0x1d0', '$0x1d0']
- jcc ORIG {'je': 1, 'jmp': 8, 'jne': 3} OURS {'je': 1, 'jmp': 7, 'jne': 3}
ORIG leftover (canon):
  - sub    $0x1e0,%r
  - mov    %r,SLOT(%r)
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - jmp    <T>
  - nop
  - add    $0x1e0,%r
OURS leftover (canon):
  + sub    $0x1d0,%r
  + add    $0x1d0,%r

## dbmw `_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader` [DIFF] pm=92 canonΔ=20 size 0x247→0x243
flags: FRAME,IMM
- frame ORIG ['sub    $0x50,%esp', 'add    $0x50,%esp'] OURS ['sub    $0x40,%esp', 'add    $0x40,%esp']
- imm ORIG-only ['$0x50', '$0x50'] OURS-only ['$0x40', '$0x40']
ORIG leftover (canon):
  - sub    $0x50,%r
  - mov    %r,SLOT(%r)
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    %r,0xa(%r)
  - mov    %r,0xe(%r)
  - mov    %r,0x12(%r)
OURS leftover (canon):
  + sub    $0x40,%r
  + lea    0xa(%r),%r
  + mov    %r,(%r)
  + mov    %r,(%r)
  + mov    %r,(%r)
  + mov    %r,(%r)
  + lea    0xe(%r),%r
  + lea    0x12(%r),%r

## dbmw `_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader` [DIFF] pm=37 canonΔ=3 size 0x3d4→0x3d5
flags: SHAPE_ONLY
ORIG leftover (canon):
  - lea    (%r,%r,1),%r
OURS leftover (canon):
  + add    %r,%r
  + mov    %r,%r

## dbmw `_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader` [DIFF] pm=10 canonΔ=2 size 0x18f→0x192
flags: JCC_MNEM
- jcc ORIG {'je': 2, 'jmp': 2} OURS {'je': 2, 'jmp': 3}
ORIG leftover (canon):
OURS leftover (canon):
  + jmp    <T>
  + nop

## dbmw `_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt` [DIFF] pm=16 canonΔ=2 size 0x13c→0x13e
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + nop
  + nop

## dbmw `_ZN6CMySql10exec_queryEv` [DIFF] pm=46 canonΔ=0 size 0x271→0x271
flags: CALL_DIFF
- calls ORIG ['call   *%edx']
- calls OURS ['call   *%eax']
canon multisets equal (reg/slot/target stripped)

## dbmw `_ZN6CMySql11blob_to_strEiPvi` [DIFF] pm=36 canonΔ=18 size 0xa3→0xa2
flags: IMM
- imm ORIG-only ['$0x6070', '$0x6070', '$0x6070', '$0x9', '$0x9'] OURS-only ['$0x6079', '$0x6079', '$0x6079']
ORIG leftover (canon):
  - lea    (%r,%r,1),%r
  - add    $0x6070,%r
  - add    $0x6070,%r
  - add    $0x6070,%r
  - movb   $0x0,0x9(%r)
  - add    0x8(%r),%r
  - add    0x8(%r),%r
  - add    $0x9,%r
OURS leftover (canon):
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + add    $0x6079,%r
  + add    $0x6079,%r
  + add    $0x6079,%r
  + add    %r,%r
  + add    %r,%r
  + add    %r,%r

## dbmw `_ZN6CMySql4execEj` [DIFF] pm=15 canonΔ=1 size 0x177→0x179
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + mov    %r,%r

## dbmw `_ZN6CMySql4openEPKcS1_S1_S1_` [DIFF] pm=11 canonΔ=1 size 0x168→0x166
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %r,%r
OURS leftover (canon):

## dbmw `_ZN6CMySql4openEPKcjS1_S1_S1_` [DIFF] pm=11 canonΔ=1 size 0x166→0x164
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %r,%r
OURS leftover (canon):

## dbmw `_ZN6CMySql7get_intEiRj` [NEAR] pm=16 canonΔ=0 size 0x28→0x28
flags: CALL_DIFF
- calls ORIG ['call   *%edx']
- calls OURS ['call   *%eax']
canon multisets equal (reg/slot/target stripped)

## guild `_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser` [DIFF] pm=126 canonΔ=24 size 0x559→0x553
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0xd74,%esp', 'sub    $0x646,%edx', 'sub    $0x646,%edx', 'sub    $0x636,%edx', 'sub    $0xcbc,%edx', 'sub    $0xcc0,%edx', 'sub    $0xcb8,%edx'] OURS ['sub    $0x6f4,%esp', 'sub    $0x642,%edx', 'sub    $0x642,%edx', 'sub    $0x632,%edx', 'sub    $0x642,%edx', 'sub    $0x642,%edx', 'sub    $0x632,%edx']
- imm ORIG-only ['$0x636', '$0x646', '$0x646', '$0xcb8', '$0xcbc', '$0xcc0', '$0xd74'] OURS-only ['$0x632', '$0x632', '$0x642', '$0x642', '$0x642', '$0x642', '$0x6f4']
- jcc ORIG {'je': 2, 'jmp': 7, 'jne': 4} OURS {'je': 2, 'jmp': 6, 'jne': 4}
ORIG leftover (canon):
  - sub    $0xd74,%r
  - mov    %r,SLOT(%r)
  - jmp    <T>
  - mov    SLOT(%r),%r
  - sub    $0x646,%r
  - sub    $0x646,%r
  - sub    $0x636,%r
  - sub    $0xcbc,%r
OURS leftover (canon):
  + sub    $0x6f4,%r
  + sub    $0x642,%r
  + sub    $0x642,%r
  + sub    $0x642,%r
  + sub    $0x642,%r
  + sub    $0x632,%r
  + sub    $0x632,%r
  + mov    %r,0x14(%r)

## guild `_ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii` [NEAR] pm=2 canonΔ=0 size 0x239→0x239
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption` [NEAR] pm=16 canonΔ=0 size 0x11a→0x11a
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN11CGuildCargo14SendGuildCargoEP5CUser` [DIFF] pm=2 canonΔ=0 size 0x79→0x79
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfo` [DIFF] pm=46 canonΔ=4 size 0xea→0xef
flags: SHAPE_ONLY
ORIG leftover (canon):
  - shr    $0x5,%al
OURS leftover (canon):
  + movzbl %al,%r
  + mov    %r,%r
  + sar    $0x5,%r

## guild `_ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri` [DIFF] pm=16 canonΔ=4 size 0x83→0x7d
flags: IMM
- imm ORIG-only ['$0x12'] OURS-only []
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - add    $0x12,%r
OURS leftover (canon):
  + lea    0x12(%r),%r

## guild `_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog` [DIFF] pm=10 canonΔ=4 size 0x56→0x59
flags: SHAPE_ONLY
ORIG leftover (canon):
  - cmp    $0x32,%r
  - mov    $0x32,%r
OURS leftover (canon):
  + cmpl   $0x32,0xc(%r)
  + movl   $0x32,SLOT(%r)

## guild `_ZN11CTcpHandlerC1Ev` [DIFF] pm=3 canonΔ=1 size 0x4c→0x4a
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %r,%r
OURS leftover (canon):

## guild `_ZN11CUdpHandler16InitServerSocketEi` [DIFF] pm=16 canonΔ=0 size 0x1b8→0x1b8
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN12CApplication15TranslateSignalEv` [DIFF] pm=114 canonΔ=16 size 0x44d→0x459
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    &data#4b157ab8(.rodata)(,%r,4),%r
  - mov    %r,SLOT(%r)
  - mov    %r,SLOT(%r)
  - movl   $0x2,SLOT(%r)
  - mov    %al,SLOT(%r)
  - movl   $"야메",0x4(%r)
OURS leftover (canon):
  + mov    &data#95d2b392(.rodata)(,%r,4),%r
  + lea    SLOT(%r),%r
  + lea    SLOT(%r),%r
  + lea    SLOT(%r),%r
  + lea    SLOT(%r),%r
  + movl   $0x2,0x14(%r)
  + mov    %r,0xc(%r)
  + mov    %r,0x10(%r)

## guild `_ZN12CApplication4LoadEiPPc` [DIFF] pm=44 canonΔ=4 size 0x77a→0x77b
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %r,%r
  - mov    %al,SLOT(%r)
OURS leftover (canon):
  + lea    SLOT(%r),%r
  + mov    %al,0xa(%r)

## guild `_ZN12CUserManager17DeleteUser_CharNoEj` [NEAR] pm=8 canonΔ=0 size 0xbb→0xbb
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN12CUserManager17InsertUser_CharNoEjP5CUser` [NEAR] pm=28 canonΔ=0 size 0xdf→0xdf
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN12CUserManager19InsertUser_CharNameEPcP5CUser` [NEAR] pm=24 canonΔ=0 size 0xdf→0xdf
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN13CAppStartInit4InitEP12CApplicationiPPc` [DIFF] pm=30 canonΔ=2 size 0x252→0x24e
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %r,%r
  - mov    %r,%r
OURS leftover (canon):

## guild `_ZN13CGuildManager13GuildMemLoginEjP5CUser` [DIFF] pm=3 canonΔ=3 size 0x43d→0x43a
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1'] OURS-only []
- jcc ORIG {'jne': 1} OURS {'je': 1}
ORIG leftover (canon):
  - xor    $0x1,%r
  - jne    <T>
OURS leftover (canon):
  + je     <T>

## guild `_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb` [DIFF] pm=46 canonΔ=6 size 0x159→0x151
flags: IMM
- imm ORIG-only ['$0x0'] OURS-only []
ORIG leftover (canon):
  - movl   $0x0,(%r)
  - mov    %r,SLOT(%r)
  - mov    %r,%r
  - mov    %r,%r
OURS leftover (canon):
  + lea    SLOT(%r),%r
  + mov    %r,(%r)

## guild `_ZN13CGuildManager14GuildMemLogoutEjP5CUser` [DIFF] pm=36 canonΔ=10 size 0x349→0x33e
flags: JCC_MNEM
- jcc ORIG {'jne': 2, 'je': 3, 'jmp': 3} OURS {'je': 5, 'jmp': 1}
ORIG leftover (canon):
  - sete   %al
  - test   %al,%al
  - jne    <T>
  - jne    <T>
  - jmp    <T>
  - jmp    <T>
  - nop
  - nop
OURS leftover (canon):
  + je     <T>
  + je     <T>

## guild `_ZN13CGuildManager16GetAttendanceExpEji` [NEAR] pm=8 canonΔ=0 size 0xc5→0xc5
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo` [DIFF] pm=56 canonΔ=18 size 0x160→0x161
flags: FRAME,IMM,FIELD,JCC_MNEM
- frame ORIG ['sub    $0x24,%esp'] OURS ['sub    $0x20,%esp', 'add    $0x0,%esp']
- imm ORIG-only ['$0x24'] OURS-only ['$0x0', '$0x20']
- field ORIG-only []
- field OURS-only ['0x14(%esi)', '0xc(%esi)']
- jcc ORIG {'je': 2, 'js': 1, 'jg': 1, 'jmp': 1} OURS {'je': 2, 'js': 1, 'jg': 1}
ORIG leftover (canon):
  - sub    $0x24,%r
  - mov    SLOT(%r),%r
  - mov    %r,%r
  - mov    %r,%r
  - add    %r,%r
  - add    %r,%r
  - jmp    <T>
  - nop
OURS leftover (canon):
  + push   %r
  + sub    $0x20,%r
  + lea    (%r,%r,1),%r
  + lea    (%r,%r,1),%r
  + lea    SLOT(%r),%r
  + add    $0x0,%r
  + pop    %r
  + pop    %r

## guild `_ZN13CPowerManager23SendPowerWarProcessInfoEj` [DIFF] pm=6 canonΔ=0 size 0x252→0x252
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc` [DIFF] pm=133 canonΔ=31 size 0x389→0x391
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x6c'] OURS-only ['$0x1', '$0x4', '$0x4', '$0x4', '$0x4', '$0x4']
- jcc ORIG {'jmp': 3, 'je': 4, 'jne': 1} OURS {'jmp': 4, 'jne': 3, 'je': 3}
ORIG leftover (canon):
  - movl   $0x0,SLOT(%r)
  - je     <T>
  - mov    0x4(%r),%r
  - mov    0x4(%r),%r
  - mov    0x4(%r),%r
  - mov    0x4(%r),%r
  - mov    0x4(%r),%r
  - sete   %al
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + jmp    <T>
  + jne    <T>
  + jne    <T>
  + add    $0x4,%r
  + add    $0x4,%r

## guild `_ZN13CTcpNetSystem10SendPacketEv` [NEAR] pm=12 canonΔ=0 size 0x2f1→0x2f1
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE` [DIFF] pm=3 canonΔ=1 size 0x265→0x264
flags: SHAPE_ONLY
ORIG leftover (canon):
  - nop
OURS leftover (canon):

## guild `_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader` [DIFF] pm=19 canonΔ=5 size 0x1f8→0x1f7
flags: IMM
- imm ORIG-only ['$0x4', '$0x4'] OURS-only []
ORIG leftover (canon):
  - add    $0x4,%r
  - add    $0x4,%r
  - nop
OURS leftover (canon):
  + lea    0x4(%r),%r
  + lea    0x4(%r),%r

## guild `_ZN14CPacketDecoderC1Ev` [DIFF] pm=6 canonΔ=2 size 0x60f→0x60f
flags: IMM
- imm ORIG-only ['$0x4'] OURS-only []
ORIG leftover (canon):
  - add    $0x4,%r
OURS leftover (canon):
  + lea    0x4(%r),%r

## guild `_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader` [DIFF] pm=202 canonΔ=14 size 0x3de→0x3f5
flags: JCC_MNEM
- jcc ORIG {'jmp': 10, 'jne': 3, 'je': 5} OURS {'jmp': 10, 'je': 6, 'jne': 2}
ORIG leftover (canon):
  - jne    <T>
  - xor    $0x1,%r
  - movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%r)
  - mov    %r,%r
OURS leftover (canon):
  + sete   %al
  + sete   %al
  + sete   %al
  + test   %al,%al
  + test   %al,%al
  + test   %al,%al
  + je     <T>
  + cmp    $0x1,%al

## guild `_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader` [DIFF] pm=193 canonΔ=23 size 0x402→0x400
flags: CALL_DIFF,FRAME,IMM,JCC_MNEM
- calls ORIG ['T', 'T', 'T', 'T', 'T', 'T', 'T']
- calls OURS ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T']
- frame ORIG ['sub    $0xb06,%edx', 'sub    $0xb06,%edx', 'sub    $0xb06,%edx'] OURS ['sub    $0xb0a,%edx', 'sub    $0xb0a,%edx', 'sub    $0xb0a,%edx']
- imm ORIG-only ['$0xb06', '$0xb06', '$0xb06'] OURS-only ['$0xb0a', '$0xb0a', '$0xb0a']
- jcc ORIG {'jne': 5, 'jmp': 10, 'je': 1} OURS {'jne': 4, 'jmp': 9, 'je': 2}
ORIG leftover (canon):
  - jne    <T>
  - jmp    <T>
  - movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%r)
  - movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%r)
  - movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%r)
  - sete   %al
  - test   %al,%al
  - sub    $0xb06,%r
OURS leftover (canon):
  + mov    %r,(%r)
  + call   <T>
  + je     <T>
  + movl   $"OnCallGuildInfo",0x4(%r)
  + movl   $"OnCallGuildInfo",0x4(%r)
  + movl   $"OnCallGuildInfo",0x4(%r)
  + sub    $0xb0a,%r
  + sub    $0xb0a,%r

## guild `_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader` [DIFF] pm=497 canonΔ=47 size 0x92a→0x903
flags: JCC_MNEM
- jcc ORIG {'jne': 8, 'jmp': 27, 'je': 12} OURS {'jne': 9, 'jmp': 27, 'je': 11}
ORIG leftover (canon):
  - movl   $"CPacketTranslater::OnMonitorSendGuildLetter : 0 == m_pclApp",0x4(%r)
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + jne    <T>
  + movl   $"CPacketTranslater::OnCallGuildInvite : 0 == m_pclApp",0x4(%r)
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r

## guild `_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader` [DIFF] pm=57 canonΔ=5 size 0x320→0x323
flags: CALL_DIFF,IMM,JCC_MNEM
- calls ORIG []
- calls OURS ['T']
- imm ORIG-only ['$0x290'] OURS-only []
- jcc ORIG {'jne': 2, 'jmp': 7, 'je': 1} OURS {'jne': 2, 'jmp': 6, 'je': 1}
ORIG leftover (canon):
  - jmp    <T>
  - add    $0x290,%r
OURS leftover (canon):
  + mov    %r,(%r)
  + call   <T>
  + lea    0x290(%r),%r

## guild `_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader` [DIFF] pm=162 canonΔ=20 size 0x272→0x265
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x60,%esp', 'add    $0x60,%esp'] OURS ['sub    $0x70,%esp', 'add    $0x70,%esp']
- imm ORIG-only ['$0x0', '$0x1', '$0x1', '$0x290', '$0x60', '$0x60'] OURS-only ['$0x70', '$0x70']
- jcc ORIG {'jne': 2, 'jmp': 8, 'je': 4} OURS {'jne': 3, 'jmp': 8, 'je': 3}
ORIG leftover (canon):
  - sub    $0x60,%r
  - movl   $0x0,SLOT(%r)
  - mov    SLOT(%r),%r
  - add    $0x290,%r
  - sete   %al
  - je     <T>
  - mov    0xe(%r),%r
  - mov    0xe(%r),%r
OURS leftover (canon):
  + sub    $0x70,%r
  + jne    <T>
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    %r,SLOT(%r)
  + lea    0x290(%r),%r
  + setne  %al
  + add    $0x70,%r

## guild `_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader` [DIFF] pm=201 canonΔ=35 size 0x4b0→0x498
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x8c,%esp', 'add    $0x8c,%esp'] OURS ['sub    $0x7c,%esp', 'add    $0x7c,%esp']
- imm ORIG-only ['$0x8c', '$0x8c'] OURS-only ['$0x7c', '$0x7c']
- jcc ORIG {'jne': 7, 'jmp': 16, 'je': 4} OURS {'jne': 8, 'jmp': 16, 'je': 3}
ORIG leftover (canon):
  - sub    $0x8c,%r
  - mov    %r,SLOT(%r)
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + sub    $0x7c,%r
  + jne    <T>
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r

## guild `_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader` [DIFF] pm=110 canonΔ=8 size 0x2e2→0x2d9
flags: IMM
- imm ORIG-only ['$0x16'] OURS-only []
ORIG leftover (canon):
  - add    $0x16,%r
  - mov    %r,%r
  - mov    %r,%r
  - setne  %al
  - test   %al,%al
  - movl   $&_ZZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeaderE12__FUNCTION__,0x4(%r)
OURS leftover (canon):
  + lea    0x16(%r),%r
  + movl   $"OnNoticeGuildEnter",0x4(%r)

## guild `_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader` [DIFF] pm=74 canonΔ=10 size 0x207→0x200
flags: IMM
- imm ORIG-only ['$0xe'] OURS-only ['$0x19f']
ORIG leftover (canon):
  - add    $0xe,%r
  - movzwl SLOT(%r),%r
  - movzwl %ax,%r
  - mov    %r,0x8(%r)
  - mov    %r,%r
  - movl   $&_ZZN17CPacketTranslater18OnRequestBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%r)
OURS leftover (canon):
  + movzbl SLOT(%r),%r
  + mov    %al,SLOT(%r)
  + movl   $0x19f,0x8(%r)
  + movl   $"OnRequestBlackList",0x4(%r)

## guild `_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader` [DIFF] pm=103 canonΔ=11 size 0x297→0x287
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1'] OURS-only []
- jcc ORIG {'jmp': 10, 'je': 2, 'jne': 2} OURS {'jmp': 9, 'je': 3, 'jne': 1}
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - jmp    <T>
  - setne  %bl
  - test   %bl,%bl
  - xor    $0x1,%r
  - jne    <T>
  - mov    %r,%r
  - movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%r)
OURS leftover (canon):
  + je     <T>
  + movl   $"OnDeleteToBlackList",0x4(%r)

## guild `_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader` [DIFF] pm=191 canonΔ=21 size 0x342→0x339
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x9fc,%esp', 'add    $0x9fc,%esp'] OURS ['sub    $0x9f0,%esp', 'add    $0x9f0,%esp']
- imm ORIG-only ['$0x10', '$0x290', '$0x9fc', '$0x9fc'] OURS-only ['$0x9f0', '$0x9f0']
- jcc ORIG {'jne': 4, 'jmp': 9, 'je': 4} OURS {'jne': 5, 'jmp': 9, 'je': 3}
ORIG leftover (canon):
  - push   %r
  - sub    $0x9fc,%r
  - add    $0x10,%r
  - mov    SLOT(%r),%r
  - mov    0xe(%r),%r
  - mov    0xe(%r),%r
  - mov    0xe(%r),%r
  - add    $0x290,%r
OURS leftover (canon):
  + sub    $0x9f0,%r
  + jne    <T>
  + mov    0x8(%r),%r
  + lea    0x10(%r),%r
  + lea    0x290(%r),%r
  + sete   %al
  + test   %al,%al
  + add    $0x9f0,%r

## guild `_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader` [DIFF] pm=136 canonΔ=8 size 0x39a→0x396
flags: CALL_DIFF,JCC_MNEM
- calls ORIG ['T', 'T', 'T']
- calls OURS ['T', 'T', 'T', 'T']
- jcc ORIG {'jne': 2, 'jmp': 7, 'je': 2} OURS {'jne': 2, 'jmp': 6, 'je': 2}
ORIG leftover (canon):
  - jmp    <T>
  - setne  %al
  - test   %al,%al
  - mov    %r,%r
  - movl   $&_ZZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%r)
OURS leftover (canon):
  + mov    %r,(%r)
  + call   <T>
  + movl   $"OnNoticeGuildSecede",0x4(%r)

## guild `_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader` [DIFF] pm=255 canonΔ=17 size 0x4a8→0x49d
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1', '$0x33', '$0x5b'] OURS-only []
- jcc ORIG {'jmp': 16, 'jne': 6, 'je': 2} OURS {'jmp': 15, 'je': 3, 'jne': 5}
ORIG leftover (canon):
  - mov    %r,%r
  - jmp    <T>
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - xor    $0x1,%r
  - xor    $0x1,%r
  - jne    <T>
  - add    $0x5b,%r
OURS leftover (canon):
  + je     <T>
  + cmp    $0x1,%r
  + setne  %al
  + lea    0x5b(%r),%r
  + lea    0x33(%r),%r
  + movl   $"OnNoticeGuildWarEnd",0x4(%r)

## guild `_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader` [DIFF] pm=282 canonΔ=32 size 0x44d→0x44f
flags: FRAME,IMM
- frame ORIG ['sub    $0xbc,%esp', 'add    $0xbc,%esp'] OURS ['sub    $0xcc,%esp', 'add    $0xcc,%esp']
- imm ORIG-only ['$0x1', '$0x10', '$0x290', '$0xbc', '$0xbc'] OURS-only ['$0x0', '$0xcc', '$0xcc']
ORIG leftover (canon):
  - sub    $0xbc,%r
  - add    $0x10,%r
  - mov    0xa(%r),%r
  - mov    0xa(%r),%r
  - mov    0xa(%r),%r
  - mov    0x12(%r),%r
  - test   %r,%r
  - sete   %al
OURS leftover (canon):
  + sub    $0xcc,%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)

## guild `_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader` [DIFF] pm=392 canonΔ=68 size 0x6c9→0x6af
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x114c,%esp', 'add    $0x114c,%esp'] OURS ['sub    $0x216c,%esp', 'add    $0x216c,%esp']
- imm ORIG-only ['$0x10', '$0x114c', '$0x114c', '$0x12', '$0x290'] OURS-only ['$0x0', '$0x216c', '$0x216c']
- jcc ORIG {'jmp': 9, 'je': 8, 'jne': 2} OURS {'jmp': 9, 'je': 6, 'jne': 4}
ORIG leftover (canon):
  - sub    $0x114c,%r
  - add    $0x10,%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + sub    $0x216c,%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r

## guild `_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader` [DIFF] pm=536 canonΔ=60 size 0x7b5→0x794
flags: IMM
- imm ORIG-only ['$0x38'] OURS-only ['$0x1b', '$0x1b', '$0x1b', '$0x1b', '$0x1d']
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    0x1b(%r),%r
  - mov    0x1f(%r),%r
  - mov    0x23(%r),%r
  - mov    0x27(%r),%r
  - mov    0x2b(%r),%r
OURS leftover (canon):
  + add    $0x1b,%r
  + add    $0x1b,%r
  + add    $0x1b,%r
  + add    $0x1b,%r
  + mov    (%r),%r
  + mov    0x4(%r),%r
  + mov    0x8(%r),%r
  + mov    0xc(%r),%r

## guild `_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader` [DIFF] pm=87 canonΔ=5 size 0x328→0x321
flags: SHAPE_ONLY
ORIG leftover (canon):
  - setne  %al
  - test   %al,%al
  - mov    %r,%r
  - movl   $&_ZZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeaderE12__FUNCTION__,0x4(%r)
OURS leftover (canon):
  + movl   $"OnNoticeGuildDismiss",0x4(%r)

## guild `_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader` [DIFF] pm=130 canonΔ=18 size 0x38c→0x380
flags: IMM
- imm ORIG-only ['$0x10'] OURS-only ['$0x2d', '$0x2d']
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - add    $0x10,%r
  - mov    0xa(%r),%r
  - movzwl SLOT(%r),%r
  - movzwl SLOT(%r),%r
  - movzwl %ax,%r
  - movzwl %ax,%r
OURS leftover (canon):
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + lea    0x10(%r),%r
  + movl   $0x2d,0x8(%r)
  + movl   $0x2d,0x8(%r)
  + movl   $"OnRequestGuildCreate",0x4(%r)

## guild `_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader` [DIFF] pm=102 canonΔ=22 size 0x233→0x230
flags: FRAME,IMM
- frame ORIG ['sub    $0x7c,%esp', 'add    $0x7c,%esp'] OURS ['add    $0xffffff80,%esp', 'sub    $0xffffff80,%esp']
- imm ORIG-only ['$0x290', '$0x7c', '$0x7c'] OURS-only ['$0xffffff80', '$0xffffff80']
ORIG leftover (canon):
  - push   %r
  - sub    $0x7c,%r
  - mov    0x12(%r),%r
  - mov    0x12(%r),%r
  - mov    0xe(%r),%r
  - mov    0xe(%r),%r
  - mov    0xa(%r),%r
  - mov    0xa(%r),%r
OURS leftover (canon):
  + add    $0xffffff80,%r
  + mov    0xc(%r),%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x10(%r),%r
  + mov    0x14(%r),%r

## guild `_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader` [DIFF] pm=61 canonΔ=19 size 0x4ba→0x4b5
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1'] OURS-only []
- jcc ORIG {'jmp': 11, 'jne': 6, 'je': 2} OURS {'jmp': 11, 'je': 3, 'jne': 5}
ORIG leftover (canon):
  - xor    $0x1,%r
  - jne    <T>
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - movb   $0x1,0xa(%r)
  - movb   $0x2,0xa(%r)
  - cwtl
  - cwtl
OURS leftover (canon):
  + je     <T>
  + mov    $0x1,%r
  + mov    $0x1,%r
  + mov    $0x2,%r
  + mov    $0x2,%r
  + mov    %al,0xa(%r)
  + mov    %r,SLOT(%r)
  + mov    0x8(%r),%r

## guild `_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader` [DIFF] pm=59 canonΔ=17 size 0x23d→0x23b
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    0x12(%r),%r
  - mov    0x12(%r),%r
  - mov    0xe(%r),%r
  - mov    0xe(%r),%r
  - mov    0xa(%r),%r
  - mov    0xa(%r),%r
  - mov    0xa(%r),%r
  - mov    %r,%r
OURS leftover (canon):
  + mov    0x14(%r),%r
  + mov    0x14(%r),%r
  + mov    0x10(%r),%r
  + mov    0x10(%r),%r
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + movl   $"OnWebGuildBoardDelete",0x4(%r)

## guild `_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader` [DIFF] pm=110 canonΔ=30 size 0x2c3→0x29c
flags: CALL_DIFF,IMM,JCC_MNEM
- calls ORIG ['T']
- calls OURS []
- imm ORIG-only ['$0x12', '$0x12', '$0x290'] OURS-only []
- jcc ORIG {'jne': 3, 'jmp': 8, 'je': 1, 'jg': 1} OURS {'jne': 3, 'jmp': 7, 'je': 1}
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - lea    SLOT(%r),%r
  - jmp    <T>
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + lea    0x290(%r),%r
  + mov    $0x14,%r

## guild `_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader` [DIFF] pm=85 canonΔ=15 size 0x269→0x25e
flags: IMM
- imm ORIG-only [] OURS-only ['$0x31', '$0x31', '$0x31']
ORIG leftover (canon):
  - movzwl SLOT(%r),%r
  - movzwl SLOT(%r),%r
  - movzwl SLOT(%r),%r
  - movzwl %ax,%r
  - movzwl %ax,%r
  - movzwl %ax,%r
  - mov    %r,0x8(%r)
  - mov    %r,0x8(%r)
OURS leftover (canon):
  + movl   $0x31,0x8(%r)
  + movl   $0x31,0x8(%r)
  + movl   $0x31,0x8(%r)
  + movl   $"OnDBMWDeleteToBlackList",0x4(%r)

## guild `_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader` [DIFF] pm=45 canonΔ=13 size 0x21f→0x24f
flags: CALL_DIFF,IMM
- calls ORIG []
- calls OURS ['T', 'T', 'call   *%edx']
- imm ORIG-only [] OURS-only ['$0x8']
ORIG leftover (canon):
  - mov    %r,%r
OURS leftover (canon):
  + mov    %r,0x4(%r)
  + movl   $"CPacketTranslater::OnNoticeGuildMailArrive() Exception Break : %s\n",(%r)
  + call   <T>
  + call   <T>
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    (%r),%r
  + mov    (%r),%r

## guild `_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader` [DIFF] pm=16 canonΔ=2 size 0x2bb→0x2b6
flags: SHAPE_ONLY
ORIG leftover (canon):
  - setne  %al
  - test   %al,%al
OURS leftover (canon):

## guild `_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader` [DIFF] pm=129 canonΔ=25 size 0x2c5→0x2c1
flags: IMM
- imm ORIG-only [] OURS-only ['$0x31', '$0x31', '$0x31', '$0x31']
ORIG leftover (canon):
  - movzwl SLOT(%r),%r
  - movzwl SLOT(%r),%r
  - movzwl SLOT(%r),%r
  - movzwl SLOT(%r),%r
  - movzwl %ax,%r
  - movzwl %ax,%r
  - movzwl %ax,%r
  - movzwl %ax,%r
OURS leftover (canon):
  + movl   $0x31,0x8(%r)
  + movl   $0x31,0x8(%r)
  + movl   $0x31,0x8(%r)
  + movl   $0x31,0x8(%r)
  + test   %r,%r
  + sete   %al
  + cmp    $0x9,%ax
  + setbe  %al

## guild `_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader` [DIFF] pm=247 canonΔ=49 size 0x518→0x505
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x10', '$0x290'] OURS-only []
- jcc ORIG {'jne': 3, 'jmp': 11, 'je': 6} OURS {'jne': 4, 'jmp': 11, 'je': 5}
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + jne    <T>
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r

## guild `_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader` [DIFF] pm=67 canonΔ=5 size 0x24c→0x242
flags: SHAPE_ONLY
ORIG leftover (canon):
  - setne  %al
  - test   %al,%al
  - mov    %r,%r
  - movl   $&_ZZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeaderE12__FUNCTION__,0x4(%r)
OURS leftover (canon):
  + movl   $"OnUpdateChangableCharInfo",0x4(%r)

## guild `_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader` [DIFF] pm=159 canonΔ=7 size 0x384→0x37c
flags: IMM
- imm ORIG-only ['$0x10'] OURS-only []
ORIG leftover (canon):
  - mov    %r,%r
  - add    $0x10,%r
  - mov    0xa(%r),%r
  - mov    0xa(%r),%r
  - movl   $&_ZZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%r)
OURS leftover (canon):
  + lea    0x10(%r),%r
  + movl   $"OnDBMWReplySendGuildLetter",0x4(%r)

## guild `_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader` [DIFF] pm=152 canonΔ=18 size 0x2c0→0x2b0
flags: FRAME,IMM
- frame ORIG ['sub    $0x7c,%esp', 'add    $0x7c,%esp'] OURS ['sub    $0x60,%esp', 'add    $0x60,%esp']
- imm ORIG-only ['$0x10', '$0x16', '$0x290', '$0x7c', '$0x7c'] OURS-only ['$0x60', '$0x60']
ORIG leftover (canon):
  - push   %r
  - sub    $0x7c,%r
  - add    $0x10,%r
  - mov    0x11(%r),%r
  - mov    0x11(%r),%r
  - add    $0x290,%r
  - sete   %al
  - test   %al,%al
OURS leftover (canon):
  + sub    $0x60,%r
  + lea    0x10(%r),%r
  + lea    0x290(%r),%r
  + lea    0x16(%r),%r
  + add    $0x60,%r

## guild `_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader` [DIFF] pm=57 canonΔ=23 size 0x23c→0x260
flags: CALL_DIFF,IMM,JCC_MNEM
- calls ORIG []
- calls OURS ['T', 'T', 'call   *%edx']
- imm ORIG-only ['$0x1', '$0x1'] OURS-only ['$0x8']
- jcc ORIG {'jmp': 7, 'jne': 3} OURS {'jmp': 5, 'je': 2, 'jne': 1}
ORIG leftover (canon):
  - jmp    <T>
  - jmp    <T>
  - xor    $0x1,%r
  - xor    $0x1,%r
  - jne    <T>
  - jne    <T>
  - mov    %r,%r
  - nop
OURS leftover (canon):
  + je     <T>
  + je     <T>
  + mov    %r,0x4(%r)
  + movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break : %s\n",(%r)
  + call   <T>
  + call   <T>
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## guild `_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader` [DIFF] pm=16 canonΔ=2 size 0x338→0x335
flags: JCC_MNEM
- jcc ORIG {'jmp': 7, 'je': 1} OURS {'jmp': 6, 'je': 1}
ORIG leftover (canon):
  - jmp    <T>
  - nop
OURS leftover (canon):

## guild `_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader` [DIFF] pm=75 canonΔ=5 size 0x262→0x265
flags: SHAPE_ONLY
ORIG leftover (canon):
  - xor    $0x1,%r
  - movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%r)
OURS leftover (canon):
  + cmp    $0x1,%r
  + setne  %al
  + movl   $"OnDBMWResponseBlackListOnLogin",0x4(%r)

## guild `_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader` [DIFF] pm=383 canonΔ=11 size 0x47c→0x45e
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0x0']
- jcc ORIG {'jmp': 13, 'je': 2, 'jne': 9} OURS {'jmp': 12, 'je': 3, 'jne': 8}
ORIG leftover (canon):
  - jmp    <T>
  - mov    SLOT(%r),%r
  - sete   %al
  - test   %al,%al
  - jne    <T>
  - seta   %al
  - test   %r,%r
  - nop
OURS leftover (canon):
  + je     <T>
  + setbe  %al
  + cmpl   $0x0,SLOT(%r)

## guild `_ZN17CUdpNetworkThread8dispatchEPv` [DIFF] pm=470 canonΔ=18 size 0x6fe→0x70c
flags: CALL_DIFF,JCC_MNEM
- calls ORIG ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'call   *%edx']
- calls OURS ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'call   *%eax']
- jcc ORIG {'jmp': 28, 'je': 2, 'jbe': 2, 'jne': 5} OURS {'jmp': 27, 'jne': 6, 'je': 1, 'ja': 1, 'jle': 1}
ORIG leftover (canon):
  - jmp    <T>
  - mov    %r,%r
  - xor    $0x1,%r
  - test   %al,%al
  - je     <T>
  - jbe    <T>
  - jbe    <T>
  - movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%r)
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    %al,SLOT(%r)
  + cmpb   $0x1,SLOT(%r)
  + jne    <T>
  + ja     <T>
  + jle    <T>
  + movl   $"CUdpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%r)

## guild `_ZN17STGuildDBInfoOnlyC1Ev` [DIFF] pm=8 canonΔ=4 size 0x16f→0x179
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + mov    %r,%r
  + mov    %r,%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r

## guild `_ZN18CFrameCountHandler17GetFrameCountInfoEv` [DIFF] pm=243 canonΔ=41 size 0x37c→0x350
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x6c,%esp', 'sub    %eax,%ecx', 'sub    -0x28(%ebp),%eax', 'add    $0x6c,%esp'] OURS ['sub    $0x4c,%esp', 'sub    %eax,%ebx', 'sub    %eax,%ebx', 'add    $0x4c,%esp']
- imm ORIG-only ['$0x0', '$0x0', '$0x0', '$0x0', '$0x6c', '$0x6c'] OURS-only ['$0x4c', '$0x4c']
- jcc ORIG {'jne': 5, 'je': 4, 'jmp': 8, 'jbe': 2, 'jae': 1} OURS {'jne': 7, 'jmp': 8, 'jbe': 4, 'jae': 1}
ORIG leftover (canon):
  - sub    $0x6c,%r
  - movl   $0x0,SLOT(%r)
  - movl   $0x0,SLOT(%r)
  - movl   $0x0,SLOT(%r)
  - movl   $0x0,SLOT(%r)
  - sete   %al
  - sete   %al
  - test   %al,%al
OURS leftover (canon):
  + sub    $0x4c,%r
  + jne    <T>
  + jne    <T>
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0xc(%r),%r
  + mov    %r,%r
  + mov    %r,%r

## guild `_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt` [NEAR] pm=4 canonΔ=0 size 0x13c→0x13c
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii` [DIFF] pm=166 canonΔ=12 size 0x24a→0x25c
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x70,%esp', 'sub    %eax,%edx'] OURS ['add    $0xffffff80,%esp', 'sub    %eax,%ecx']
- imm ORIG-only ['$0x70'] OURS-only ['$0xffffff80']
- jcc ORIG {'jmp': 2, 'je': 4, 'jge': 1, 'jne': 1} OURS {'jmp': 2, 'je': 3, 'jge': 1, 'jne': 2}
ORIG leftover (canon):
  - sub    $0x70,%r
  - je     <T>
  - add    %r,SLOT(%r)
  - and    %r,%r
OURS leftover (canon):
  + add    $0xffffff80,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + and    SLOT(%r),%r
  + jne    <T>

## guild `_ZN5CPeer11recv_packetEv` [DIFF] pm=30 canonΔ=18 size 0x1a1→0x1bf
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1f'] OURS-only ['$0x0', '$0x0', '$0x0', '$0x0']
- jcc ORIG {'jmp': 4, 'je': 4, 'jne': 2} OURS {'jmp': 7, 'jns': 1, 'jne': 5}
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - shr    $0x1f,%r
  - test   %al,%al
  - je     <T>
  - je     <T>
  - je     <T>
  - je     <T>
OURS leftover (canon):
  + jmp    <T>
  + jmp    <T>
  + jmp    <T>
  + cmpl   $0x0,SLOT(%r)
  + jns    <T>
  + jne    <T>
  + jne    <T>
  + jne    <T>

## guild `_ZN5CPeer11send_packetEPci` [NEAR] pm=6 canonΔ=4 size 0x21b→0x21b
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    0x10(%r),%r
  - add    %r,%r
OURS leftover (canon):
  + mov    %r,%r
  + add    0x10(%r),%r

## guild `_ZN5CPeer11send_packetEv` [DIFF] pm=82 canonΔ=16 size 0x24d→0x251
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x30,%esp', 'sub    %eax,%edx', 'add    $0x30,%esp'] OURS ['sub    $0x20,%esp', 'sub    -0xc(%ebp),%edx', 'add    $0x20,%esp']
- imm ORIG-only ['$0x30', '$0x30'] OURS-only ['$0x20', '$0x20']
- jcc ORIG {'jmp': 6, 'je': 4, 'jne': 1, 'jle': 2, 'jbe': 1, 'jge': 1} OURS {'jmp': 6, 'je': 4, 'jne': 1, 'jle': 2, 'ja': 1, 'jge': 1}
ORIG leftover (canon):
  - sub    $0x30,%r
  - setle  %al
  - test   %al,%al
  - mov    SLOT(%r),%r
  - sub    %r,%r
  - jbe    <T>
  - add    $0x30,%r
OURS leftover (canon):
  + sub    $0x20,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + setle  %bl
  + test   %bl,%bl
  + sub    SLOT(%r),%r
  + ja     <T>

## guild `_ZN6CGuild12AddGuildFundEj` [NEAR] pm=8 canonΔ=0 size 0x169→0x169
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj` [DIFF] pm=79 canonΔ=9 size 0x170→0x16f
flags: JCC_MNEM
- jcc ORIG {'je': 4, 'jmp': 2} OURS {'je': 2, 'jne': 2, 'jmp': 2}
ORIG leftover (canon):
  - je     <T>
  - je     <T>
  - setne  %al
  - test   %al,%al
  - mov    %r,%r
OURS leftover (canon):
  + jne    <T>
  + jne    <T>
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r

## guild `_ZN6CGuild17InsertGuildMemberEjP5CUser` [DIFF] pm=13 canonΔ=3 size 0x10f→0x10e
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0x1']
- jcc ORIG {'je': 2, 'jmp': 2} OURS {'jne': 1, 'jmp': 2, 'je': 1}
ORIG leftover (canon):
  - je     <T>
OURS leftover (canon):
  + jne    <T>
  + xor    $0x1,%r

## guild `_ZN6CGuild17SetSubGuildMasterEjb` [DIFF] pm=26 canonΔ=6 size 0x15d→0x15e
flags: SHAPE_ONLY
ORIG leftover (canon):
  - add    %r,%r
  - seta   %al
  - test   %al,%al
OURS leftover (canon):
  + lea    (%r,%r,1),%r
  + seta   %bl
  + test   %bl,%bl

## guild `_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh` [DIFF] pm=16 canonΔ=4 size 0xdb→0xd2
flags: JCC_MNEM
- jcc ORIG {'je': 1, 'jne': 2, 'jmp': 3} OURS {'je': 2, 'jne': 1, 'jmp': 3}
ORIG leftover (canon):
  - jne    <T>
  - sete   %al
  - test   %al,%al
OURS leftover (canon):
  + je     <T>

## guild `_ZN6CGuild19SetTodayGuildMemberER18STTodayGuildMember` [NEAR] pm=2 canonΔ=0 size 0x70→0x70
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc` [DIFF] pm=32 canonΔ=14 size 0x124→0x12a
flags: IMM
- imm ORIG-only ['$0x19', '$0xf0', '$0xf0'] OURS-only ['$0x100', '$0x100', '$0x9']
ORIG leftover (canon):
  - add    $0xf0,%r
  - add    $0xf0,%r
  - add    0x8(%r),%r
  - add    0x8(%r),%r
  - add    $0x19,%r
  - lea    0x19(%r),%r
OURS leftover (canon):
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + add    $0x100,%r
  + add    $0x100,%r
  + lea    (%r,%r,1),%r
  + lea    (%r,%r,1),%r
  + add    $0x9,%r
  + lea    0x9(%r),%r

## guild `_ZN6CGuild22NotifyTodayGuildMemberEP5CUser` [DIFF] pm=50 canonΔ=12 size 0xbb→0xd9
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %dx,SLOT(%r)
OURS leftover (canon):
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r

## guild `_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo` [DIFF] pm=70 canonΔ=10 size 0x14e→0x142
flags: FRAME,IMM
- frame ORIG ['sub    $0x34,%esp'] OURS ['sub    $0x38,%esp']
- imm ORIG-only ['$0x2', '$0x34'] OURS-only ['$0x38']
ORIG leftover (canon):
  - push   %r
  - sub    $0x34,%r
  - mov    %r,%r
  - mov    %r,%r
  - mov    %r,%r
  - add    0xc(%r),%r
  - shl    $0x2,%r
  - add    %r,%r
OURS leftover (canon):
  + sub    $0x38,%r
  + mov    %r,SLOT(%r)

## guild `_ZN6CGuild22SendGuildInfoToMembersEb` [DIFF] pm=44 canonΔ=18 size 0x185→0x15e
flags: CALL_DIFF,IMM,JCC_MNEM
- calls ORIG ['T']
- calls OURS []
- imm ORIG-only ['$0x4d0a', '$0x4d0a', '$0xd4'] OURS-only []
- jcc ORIG {'jg': 1, 'jmp': 3, 'jne': 2} OURS {'jbe': 1, 'jmp': 2, 'je': 1, 'jne': 1}
ORIG leftover (canon):
  - jg     <T>
  - mov    0x8(%r),%r
  - add    $0x4d0a,%r
  - add    $0x4d0a,%r
  - lea    SLOT(%r),%r
  - add    $0xd4,%r
  - mov    %r,(%r)
  - call   <T>
OURS leftover (canon):
  + jbe    <T>
  + movl   $0x64,SLOT(%r)
  + lea    0x4d0a(%r),%r
  + je     <T>

## guild `_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser` [DIFF] pm=102 canonΔ=50 size 0x200→0x1e3
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x11', '$0xd0', '$0xf0', '$0xf0', '$0xf0', '$0xf0'] OURS-only ['$0x1', '$0x100', '$0x100', '$0x103', '$0xe0', '$0xff']
- jcc ORIG {'je': 2, 'ja': 1, 'jbe': 2, 'jmp': 1} OURS {'je': 1, 'jne': 1, 'jmp': 1, 'ja': 1, 'jbe': 2}
ORIG leftover (canon):
  - je     <T>
  - movzwl %ax,%r
  - movzwl %ax,%r
  - movzwl %ax,%r
  - movzwl %ax,%r
  - movzwl %ax,%r
  - movzwl %ax,%r
  - mov    0x8(%r),%r
OURS leftover (canon):
  + jne    <T>
  + mov    %ax,SLOT(%r)
  + movzwl SLOT(%r),%r
  + movzwl SLOT(%r),%r
  + movzwl SLOT(%r),%r
  + movzwl SLOT(%r),%r
  + movzwl SLOT(%r),%r
  + movzwl SLOT(%r),%r

## guild `_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy` [DIFF] pm=40 canonΔ=14 size 0x115→0x10c
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x30,%esp', 'add    $0x30,%esp'] OURS ['sub    $0x38,%esp']
- imm ORIG-only ['$0x30', '$0x30'] OURS-only ['$0x38']
- jcc ORIG {'je': 2, 'ja': 1, 'jbe': 2, 'jmp': 1} OURS {'je': 1, 'jne': 1, 'jmp': 1, 'ja': 1, 'jbe': 2}
ORIG leftover (canon):
  - push   %r
  - push   %r
  - sub    $0x30,%r
  - je     <T>
  - add    0x8(%r),%r
  - add    $0x30,%r
  - pop    %r
  - pop    %r
OURS leftover (canon):
  + sub    $0x38,%r
  + jne    <T>
  + mov    0x8(%r),%r
  + lea    (%r,%r,1),%r
  + leave

## guild `_ZN6CGuild23SendGuildInfoToManagersEv` [DIFF] pm=22 canonΔ=10 size 0x193→0x182
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1', '$0x1'] OURS-only []
- jcc ORIG {'je': 3, 'jmp': 4, 'jne': 2} OURS {'je': 4, 'jmp': 2, 'jne': 1}
ORIG leftover (canon):
  - jmp    <T>
  - jmp    <T>
  - sete   %al
  - test   %al,%al
  - jne    <T>
  - xor    $0x1,%r
  - xor    $0x1,%r
  - nop
OURS leftover (canon):
  + je     <T>

## guild `_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh` [DIFF] pm=34 canonΔ=12 size 0xc7→0xd0
flags: FRAME,IMM
- frame ORIG ['sub    $0x28,%esp'] OURS ['sub    $0x24,%esp', 'add    $0x24,%esp']
- imm ORIG-only ['$0x28'] OURS-only ['$0x24', '$0x24']
ORIG leftover (canon):
  - sub    $0x28,%r
  - add    %r,%r
  - add    0x8(%r),%r
  - leave
OURS leftover (canon):
  + push   %r
  + sub    $0x24,%r
  + lea    (%r,%r,1),%r
  + lea    (%r,%r,1),%r
  + mov    0x8(%r),%r
  + add    $0x24,%r
  + pop    %r
  + pop    %r

## guild `_ZN6CGuild25ChangeGuildMemberCharNameEjPc` [DIFF] pm=57 canonΔ=23 size 0x170→0x17b
flags: IMM
- imm ORIG-only ['$0x11', '$0x66f0', '$0xd0', '$0xd0'] OURS-only ['$0x1', '$0x4', '$0x4', '$0x66ec', '$0xe0', '$0xe0']
ORIG leftover (canon):
  - add    $0xd0,%r
  - add    $0xd0,%r
  - add    0x8(%r),%r
  - add    0x8(%r),%r
  - add    $0x11,%r
  - lea    0x11(%r),%r
  - mov    0x66ec(%r),%r
  - add    $0x66f0,%r
OURS leftover (canon):
  + add    $0xe0,%r
  + add    $0xe0,%r
  + lea    (%r,%r,1),%r
  + lea    (%r,%r,1),%r
  + add    $0x1,%r
  + lea    0x1(%r),%r
  + add    $0x66ec,%r
  + mov    %r,SLOT(%r)

## guild `_ZN6CGuild25NotifyAllTodayGuildMemberEv` [DIFF] pm=60 canonΔ=16 size 0x132→0x14b
flags: JCC_MNEM
- jcc ORIG {'jmp': 2, 'jne': 2} OURS {'jmp': 2, 'je': 1, 'jne': 1}
ORIG leftover (canon):
  - mov    %dx,SLOT(%r)
  - sete   %al
  - test   %al,%al
  - jne    <T>
OURS leftover (canon):
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r

## guild `_ZN6CGuild26NotifyAllAchieveAttendanceEjj` [DIFF] pm=8 canonΔ=6 size 0xcc→0xc4
flags: JCC_MNEM
- jcc ORIG {'jmp': 2, 'jne': 1} OURS {'jmp': 1, 'je': 1}
ORIG leftover (canon):
  - jmp    <T>
  - sete   %al
  - test   %al,%al
  - jne    <T>
  - nop
OURS leftover (canon):
  + je     <T>

## guild `_ZN6CGuild26NotifyMessageToGuildMemberEv` [DIFF] pm=22 canonΔ=2 size 0x158→0x155
flags: JCC_MNEM
- jcc ORIG {'je': 1, 'jne': 1, 'jmp': 1} OURS {'je': 1, 'jne': 1}
ORIG leftover (canon):
  - jmp    <T>
  - nop
OURS leftover (canon):

## guild `_ZN6CGuild26SendGuildAgitInfoToMembersEv` [DIFF] pm=8 canonΔ=6 size 0xe4→0xdc
flags: JCC_MNEM
- jcc ORIG {'jmp': 2, 'jne': 1} OURS {'jmp': 1, 'je': 1}
ORIG leftover (canon):
  - jmp    <T>
  - sete   %al
  - test   %al,%al
  - jne    <T>
  - nop
OURS leftover (canon):
  + je     <T>

## guild `_ZN6CGuild26UpdateChangableInfoProcessEv` [DIFF] pm=25 canonΔ=11 size 0x106→0x104
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0xf0'] OURS-only ['$0x100']
- jcc ORIG {'je': 3, 'jmp': 1, 'jne': 1} OURS {'je': 2, 'jbe': 1, 'jmp': 1, 'jne': 1}
ORIG leftover (canon):
  - je     <T>
  - seta   %al
  - test   %al,%al
  - mov    %r,%r
  - add    $0xf0,%r
  - mov    %r,0x15(%r)
OURS leftover (canon):
  + jbe    <T>
  + test   %r,%r
  + setne  %al
  + add    $0x100,%r
  + mov    %r,0x5(%r)

## guild `_ZN6CGuild27DismissGuildMemberAndNoticeEi` [DIFF] pm=16 canonΔ=4 size 0x143→0x13e
flags: JCC_MNEM
- jcc ORIG {'je': 1, 'jne': 2, 'jmp': 3} OURS {'je': 2, 'jne': 1, 'jmp': 3}
ORIG leftover (canon):
  - jne    <T>
  - sete   %al
  - test   %al,%al
OURS leftover (canon):
  + je     <T>

## guild `_ZN6CGuild28SendGuildNameChangeToMembersEv` [DIFF] pm=8 canonΔ=6 size 0xe2→0xda
flags: JCC_MNEM
- jcc ORIG {'jmp': 2, 'jne': 1} OURS {'jmp': 1, 'je': 1}
ORIG leftover (canon):
  - jmp    <T>
  - sete   %al
  - test   %al,%al
  - jne    <T>
  - nop
OURS leftover (canon):
  + je     <T>

## guild `_ZN6CGuild29getUnconnectedGuildMemberNameEj` [NEAR] pm=2 canonΔ=0 size 0x84→0x84
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji` [NEAR] pm=18 canonΔ=4 size 0x8c→0x8b
flags: IMM
- imm ORIG-only ['$0xf0'] OURS-only ['$0x104']
ORIG leftover (canon):
  - add    $0xf0,%r
  - mov    %cl,0x14(%r)
OURS leftover (canon):
  + add    $0x104,%r
  + mov    %cl,(%r)

## guild `_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc` [DIFF] pm=37 canonΔ=9 size 0x172→0x174
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0x0', '$0x1']
- jcc ORIG {'jne': 1, 'je': 3, 'jmp': 4, 'jg': 1, 'jge': 1} OURS {'jne': 1, 'je': 3, 'jmp': 2, 'jle': 1, 'jg': 1, 'jge': 1}
ORIG leftover (canon):
  - jmp    <T>
  - jmp    <T>
  - setg   %al
  - nop
  - nop
  - nop
OURS leftover (canon):
  + jle    <T>
  + mov    $0x1,%r
  + mov    $0x0,%r

## guild `_ZN8WongWork11CGMAccounts4isGMEj` [NEAR] pm=18 canonΔ=0 size 0xa7→0xa7
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZN9CGuildWar13DBSaveProcessEP12CApplication` [DIFF] pm=21 canonΔ=11 size 0x9d→0xa2
flags: FRAME,IMM
- frame ORIG ['sub    $0x78,%esp'] OURS ['sub    $0x74,%esp', 'add    $0x74,%esp']
- imm ORIG-only ['$0x78'] OURS-only ['$0x74', '$0x74']
ORIG leftover (canon):
  - sub    $0x78,%r
  - sete   %al
  - test   %al,%al
  - leave
OURS leftover (canon):
  + push   %r
  + sub    $0x74,%r
  + sete   %bl
  + test   %bl,%bl
  + add    $0x74,%r
  + pop    %r
  + pop    %r

## guild `_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info` [DIFF] pm=30 canonΔ=20 size 0x120→0x12c
flags: IMM
- imm ORIG-only [] OURS-only ['$0x4', '$0x8']
ORIG leftover (canon):
  - mov    %r,%r
  - mov    %r,%r
  - add    0xc(%r),%r
  - add    0xc(%r),%r
  - add    0xc(%r),%r
  - add    0xc(%r),%r
  - mov    %r,0x4(%r)
  - mov    %dx,0x8(%r)
OURS leftover (canon):
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + lea    (%r,%r,1),%r
  + lea    (%r,%r,1),%r
  + lea    (%r,%r,1),%r
  + lea    (%r,%r,1),%r

## guild `_ZNK11CUdpHandler12SendToServerEPcitPKc` [DIFF] pm=2 canonΔ=0 size 0x27b→0x27b
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## guild `_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo` [DIFF] pm=23 canonΔ=7 size 0x95→0x9b
flags: FRAME,IMM
- frame ORIG ['sub    $0x28,%esp'] OURS ['sub    $0x24,%esp']
- imm ORIG-only ['$0x28'] OURS-only ['$0x24', '$0x4']
ORIG leftover (canon):
  - sub    $0x28,%r
  - mov    0x4(%r),%r
OURS leftover (canon):
  + push   %r
  + sub    $0x24,%r
  + add    $0x4,%r
  + mov    (%r),%r
  + mov    SLOT(%r),%r

## monitor `_ZN10CAppConfig11Parse_TableEPci` [NEAR] pm=10 canonΔ=0 size 0x311→0x311
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## monitor `_ZN10CIPCounter11setLoadTermEh` [DIFF] pm=24 canonΔ=18 size 0x4c→0x53
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x4,%esp'] OURS ['sub    $0x14,%esp']
- imm ORIG-only ['$0x4', '$0x708'] OURS-only ['$0x14', '$0x707']
- jcc ORIG {'jle': 1, 'jae': 1} OURS {'jbe': 1, 'ja': 1}
ORIG leftover (canon):
  - sub    $0x4,%r
  - cmp    $0x2a30,%r
  - jle    <T>
  - mov    $0x2a30,%r
  - mov    %r,%r
  - cmp    $0x708,%r
  - jae    <T>
  - mov    $0x708,%r
OURS leftover (canon):
  + sub    $0x14,%r
  + mov    %r,SLOT(%r)
  + cmpl   $0x2a30,SLOT(%r)
  + jbe    <T>
  + movl   $0x2a30,SLOT(%r)
  + mov    SLOT(%r),%r
  + cmp    $0x707,%r
  + ja     <T>

## monitor `_ZN10CIPCounter13setMinIPCountEh` [DIFF] pm=10 canonΔ=6 size 0x20→0x1a
flags: IMM
- imm ORIG-only ['$0xffffffc8'] OURS-only ['$0xc8']
ORIG leftover (canon):
  - movzbl SLOT(%r),%r
  - cmp    $0xc8,%al
  - mov    $0xffffffc8,%r
  - mov    %al,(%r)
OURS leftover (canon):
  + cmpb   $0xc8,SLOT(%r)
  + movb   $0xc8,(%r)

## monitor `_ZN10CIPCounter9setOptionEhh` [NEAR] pm=20 canonΔ=2 size 0x89→0x89
flags: FRAME,IMM
- frame ORIG ['sub    $0x28,%esp'] OURS ['sub    $0x10,%esp']
- imm ORIG-only ['$0x28'] OURS-only ['$0x10']
ORIG leftover (canon):
  - sub    $0x28,%r
OURS leftover (canon):
  + sub    $0x10,%r

## monitor `_ZN11CCashObject15GetBuddysObjectEPP6CBuddy` [NEAR] pm=22 canonΔ=2 size 0x70→0x70
flags: FRAME,IMM
- frame ORIG ['sub    $0x14,%esp'] OURS ['sub    $0x28,%esp']
- imm ORIG-only ['$0x14'] OURS-only ['$0x28']
ORIG leftover (canon):
  - sub    $0x14,%r
OURS leftover (canon):
  + sub    $0x28,%r

## monitor `_ZN11CUdpHandler16InitServerSocketEi` [DIFF] pm=71 canonΔ=23 size 0x1b8→0x1ad
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x40,%esp', 'add    $0x40,%esp'] OURS ['sub    $0x58,%esp']
- imm ORIG-only ['$0x40', '$0x40'] OURS-only ['$0x0', '$0x58']
- jcc ORIG {'jne': 1, 'jmp': 5, 'je': 4} OURS {'jne': 3, 'jmp': 3, 'je': 2}
ORIG leftover (canon):
  - push   %r
  - push   %r
  - sub    $0x40,%r
  - mov    SLOT(%r),%r
  - jmp    <T>
  - jmp    <T>
  - je     <T>
  - je     <T>
OURS leftover (canon):
  + sub    $0x58,%r
  + jne    <T>
  + jne    <T>
  + cmpl   $0x62,SLOT(%r)
  + cmpl   $0x63,SLOT(%r)
  + cmpl   $0x0,SLOT(%r)
  + leave

## monitor `_ZN12CApplication15TranslateSignalEv` [DIFF] pm=58 canonΔ=0 size 0x36c→0x36c
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## monitor `_ZN12CApplication4LoadEiPPc` [DIFF] pm=561 canonΔ=35 size 0x10df→0x110e
flags: CALL_DIFF,FRAME,IMM,JCC_MNEM
- calls ORIG ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T']
- calls OURS ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T']
- frame ORIG ['sub    $0x18c,%esp', 'add    $0x18c,%esp'] OURS ['sub    $0x13c,%esp', 'add    $0x13c,%esp']
- imm ORIG-only ['$0x1', '$0x1', '$0x18c', '$0x18c'] OURS-only ['$0x13c', '$0x13c']
- jcc ORIG {'jmp': 39, 'je': 6, 'jne': 5} OURS {'jmp': 45, 'je': 6, 'jne': 5}
ORIG leftover (canon):
  - sub    $0x18c,%r
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - xor    $0x1,%r
  - xor    $0x1,%r
  - setge  %al
  - add    $0x18c,%r
OURS leftover (canon):
  + sub    $0x13c,%r
  + jmp    <T>
  + jmp    <T>
  + jmp    <T>
  + jmp    <T>
  + jmp    <T>
  + jmp    <T>
  + mov    %r,%r

## monitor `_ZN12CBuddyHandle11addFromCashEP6CBuddy` [DIFF] pm=7 canonΔ=1 size 0xb3→0xb6
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + movzbl %al,%r

## monitor `_ZN12CUserManager11AddSchoolNoEjh` [NEAR] pm=20 canonΔ=0 size 0x41b→0x41b
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## monitor `_ZN12CUserManager14GetSchoolCountEjPjRh` [DIFF] pm=130 canonΔ=12 size 0x227→0x21f
flags: FRAME,IMM
- frame ORIG ['sub    $0x6c,%esp', 'add    $0x0,%esp'] OURS ['sub    $0x64,%esp']
- imm ORIG-only ['$0x0', '$0x6c'] OURS-only ['$0x64']
ORIG leftover (canon):
  - push   %r
  - push   %r
  - sub    $0x6c,%r
  - lea    SLOT(%r),%r
  - add    $0x0,%r
  - pop    %r
  - pop    %r
  - pop    %r
OURS leftover (canon):
  + sub    $0x64,%r
  + mov    SLOT(%r),%r
  + leave

## monitor `_ZN12CUserManager17InsertUser_CharNoEjP5CUser` [NEAR] pm=28 canonΔ=0 size 0xdf→0xdf
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## monitor `_ZN12CUserManager19InsertUser_CharNameEPcP5CUser` [NEAR] pm=24 canonΔ=0 size 0xdf→0xdf
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## monitor `_ZN12CUserManager23SendConnectedBuddysListEP5CUser` [DIFF] pm=119 canonΔ=15 size 0x216→0x211
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x604,%esp', 'subl   $0x1,-0x10(%ebp)', 'add    $0x604,%esp'] OURS ['sub    $0x600,%esp', 'subl   $0x1,-0x14(%ebp)', 'add    $0x600,%esp']
- imm ORIG-only ['$0x604', '$0x604'] OURS-only ['$0x600', '$0x600']
- jcc ORIG {'je': 6, 'jmp': 3, 'jne': 1} OURS {'je': 6, 'jmp': 2, 'jne': 1}
ORIG leftover (canon):
  - sub    $0x604,%r
  - mov    %r,SLOT(%r)
  - jmp    <T>
  - setne  %al
  - add    %r,%r
  - movzwl %ax,%r
  - nop
  - add    $0x604,%r
OURS leftover (canon):
  + push   %r
  + sub    $0x600,%r
  + sete   %al
  + lea    0x0(,%r,8),%r
  + lea    (%r,%r,1),%r
  + add    $0x600,%r
  + pop    %r

## monitor `_ZN12momiji_event13EndEffectTask10_DoExecuteEv` [DIFF] pm=11 canonΔ=9 size 0x121→0x13b
flags: CALL_DIFF,JCC_MNEM
- calls ORIG []
- calls OURS ['T', 'T']
- jcc ORIG {'je': 1} OURS {'je': 1, 'jmp': 1}
ORIG leftover (canon):
OURS leftover (canon):
  + jmp    <T>
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,(%r)
  + mov    %r,(%r)
  + call   <T>

## monitor `_ZN13CMemberExpTbl11Parse_TableEPci` [DIFF] pm=13 canonΔ=1 size 0x85→0x83
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %r,%r
OURS leftover (canon):

## monitor `_ZN13CMemberExpTbl17GetMemberExpLevelEj` [DIFF] pm=18 canonΔ=2 size 0x82→0x86
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + movzbl %al,%r
  + nop

## monitor `_ZN13CPacketTracer8WriteLogEv` [DIFF] pm=13 canonΔ=3 size 0x86→0x89
flags: FRAME
- frame ORIG ['sub    %edx,%eax'] OURS ['sub    %edx,%eax']
ORIG leftover (canon):
  - add    %r,%r
OURS leftover (canon):
  + lea    (%r,%r,1),%r
  + mov    %r,%r

## monitor `_ZN13CTcpNetSystem14OpenTcpServiceERiPKct` [DIFF] pm=70 canonΔ=20 size 0x1b1→0x1c1
flags: FRAME,IMM
- frame ORIG ['sub    $0x50,%esp', 'add    $0x50,%esp'] OURS ['sub    $0x64,%esp', 'add    $0x64,%esp']
- imm ORIG-only ['$0x1', '$0x1', '$0x50', '$0x50'] OURS-only ['$0x64', '$0x64']
ORIG leftover (canon):
  - push   %r
  - sub    $0x50,%r
  - xor    $0x1,%r
  - xor    $0x1,%r
  - mov    %r,%r
  - mov    %r,%r
  - add    $0x50,%r
  - pop    %r
OURS leftover (canon):
  + sub    $0x64,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + sete   %al

## monitor `_ZN13CTcpNetSystem19CleanTcpSendPacketQEv` [DIFF] pm=65 canonΔ=7 size 0x11c→0x117
flags: FRAME,IMM
- frame ORIG ['sub    $0x30,%esp', 'add    $0x30,%esp'] OURS ['sub    $0x20,%esp', 'add    $0x20,%esp']
- imm ORIG-only ['$0x30', '$0x30'] OURS-only ['$0x20', '$0x20']
ORIG leftover (canon):
  - sub    $0x30,%r
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - add    $0x30,%r
OURS leftover (canon):
  + sub    $0x20,%r
  + nop
  + add    $0x20,%r

## monitor `_ZN13CTcpNetSystem4InitEt` [DIFF] pm=12 canonΔ=2 size 0x13e→0x13a
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %r,%r
  - mov    %r,%r
OURS leftover (canon):

## monitor `_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE` [DIFF] pm=3 canonΔ=1 size 0x265→0x264
flags: SHAPE_ONLY
ORIG leftover (canon):
  - nop
OURS leftover (canon):

## monitor `_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler` [DIFF] pm=121 canonΔ=19 size 0x216→0x216
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x64,%esp', 'add    $0x64,%esp'] OURS ['sub    $0x68,%esp']
- imm ORIG-only ['$0x64', '$0x64'] OURS-only ['$0x68']
- jcc ORIG {'je': 3, 'jmp': 3} OURS {'jne': 2, 'jmp': 3, 'je': 1}
ORIG leftover (canon):
  - push   %r
  - sub    $0x64,%r
  - sete   %al
  - test   %al,%al
  - je     <T>
  - je     <T>
  - cwtl
  - mov    %r,%r
OURS leftover (canon):
  + sub    $0x68,%r
  + mov    %r,SLOT(%r)
  + jne    <T>
  + jne    <T>
  + mov    SLOT(%r),%r
  + mov    %ax,SLOT(%r)
  + movswl SLOT(%r),%r
  + leave

## monitor `_ZN14CMemberManager12DeleteMemberEjb` [DIFF] pm=22 canonΔ=0 size 0x14a→0x14a
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## monitor `_ZN14CMemberManager12InsertMemberEjP7CMember` [DIFF] pm=7 canonΔ=3 size 0xf2→0xf5
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0x1']
- jcc ORIG {'je': 1, 'jne': 1, 'jmp': 1} OURS {'je': 2, 'jmp': 1}
ORIG leftover (canon):
  - jne    <T>
OURS leftover (canon):
  + je     <T>
  + xor    $0x1,%r

## monitor `_ZN14CMemberManager13MemerMemLoginEjP5CUser` [DIFF] pm=52 canonΔ=8 size 0x3c9→0x3c6
flags: JCC_MNEM
- jcc ORIG {'je': 2, 'jmp': 5, 'jne': 2} OURS {'jne': 3, 'jmp': 5, 'je': 1}
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - cmpl   $0x0,SLOT(%r)
  - sete   %al
  - test   %al,%al
  - je     <T>
OURS leftover (canon):
  + jne    <T>
  + movl   $0x0,SLOT(%r)
  + test   %r,%r

## monitor `_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb` [DIFF] pm=22 canonΔ=6 size 0x112→0x116
flags: IMM
- imm ORIG-only ['$0x1', '$0x1'] OURS-only []
ORIG leftover (canon):
  - xor    $0x1,%r
  - xor    $0x1,%r
OURS leftover (canon):
  + test   %r,%r
  + test   %r,%r
  + sete   %al
  + sete   %al

## monitor `_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h` [DIFF] pm=16 canonΔ=6 size 0xd0→0xc7
flags: JCC_MNEM
- jcc ORIG {'je': 3, 'jge': 1, 'jmp': 4} OURS {'je': 3, 'jge': 1, 'jmp': 1}
ORIG leftover (canon):
  - jmp    <T>
  - jmp    <T>
  - jmp    <T>
  - nop
  - nop
  - nop
OURS leftover (canon):

## monitor `_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i` [DIFF] pm=80 canonΔ=22 size 0x13d→0x146
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x24,%esp', 'add    $0x24,%esp'] OURS ['sub    $0x38,%esp']
- imm ORIG-only ['$0x24', '$0x24'] OURS-only ['$0x38']
- jcc ORIG {'je': 8, 'jne': 6, 'jmp': 11, 'jle': 1} OURS {'je': 7, 'jne': 6, 'jmp': 11, 'jle': 1, 'ja': 1}
ORIG leftover (canon):
  - push   %r
  - sub    $0x24,%r
  - je     <T>
  - mov    %r,%r
  - cwtl
  - cmp    %r,%r
  - setae  %al
  - test   %al,%al
OURS leftover (canon):
  + sub    $0x38,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    %ax,SLOT(%r)
  + movswl SLOT(%r),%r

## monitor `_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh` [DIFF] pm=29 canonΔ=13 size 0xb8→0xa2
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0x2']
- jcc ORIG {'je': 1, 'jne': 3, 'jmp': 5} OURS {'je': 2, 'jne': 1, 'jmp': 2}
ORIG leftover (canon):
  - jne    <T>
  - jne    <T>
  - movzbl &_ZL12MEMBER_LOWER,%r
  - jmp    <T>
  - jmp    <T>
  - jmp    <T>
  - movzbl &_ZL12MEMBER_UPPER,%r
  - mov    %al,SLOT(%r)
OURS leftover (canon):
  + je     <T>
  + movb   $0x1,SLOT(%r)
  + movb   $0x2,SLOT(%r)

## monitor `_ZN14CMemberManager25MemberRegisterFlagProcessEv` [DIFF] pm=37 canonΔ=7 size 0x118→0x117
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1'] OURS-only []
- jcc ORIG {'jne': 2, 'jmp': 2} OURS {'je': 1, 'jmp': 1, 'jne': 1}
ORIG leftover (canon):
  - xor    $0x1,%r
  - jne    <T>
  - jmp    <T>
  - nop
OURS leftover (canon):
  + setne  %al
  + test   %al,%al
  + je     <T>

## monitor `_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi` [DIFF] pm=53 canonΔ=11 size 0x11d→0x117
flags: FRAME,IMM
- frame ORIG ['add    $0x10,%esp'] OURS []
- imm ORIG-only ['$0x10'] OURS-only ['$0x5138']
ORIG leftover (canon):
  - push   %r
  - mov    SLOT(%r),%r
  - lea    (%r,%r,1),%r
  - lea    0x5138(%r),%r
  - add    $0x10,%r
  - pop    %r
  - pop    %r
OURS leftover (canon):
  + mov    %r,%r
  + add    SLOT(%r),%r
  + add    $0x5138,%r
  + leave

## monitor `_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader` [DIFF] pm=116 canonΔ=46 size 0x1f8→0x1d0
flags: FRAME,IMM
- frame ORIG ['sub    $0x2c,%esp', 'add    $0x2c,%esp'] OURS ['sub    $0x3c,%esp', 'add    $0x3c,%esp']
- imm ORIG-only ['$0x2c', '$0x2c', '$0x4'] OURS-only ['$0x0', '$0x3c', '$0x3c']
ORIG leftover (canon):
  - sub    $0x2c,%r
  - cmp    $0x27ff,%ax
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
OURS leftover (canon):
  + sub    $0x3c,%r
  + mov    %ax,SLOT(%r)
  + cmpw   $0x27ff,SLOT(%r)
  + cmpw   $0x3e7,SLOT(%r)
  + movzwl SLOT(%r),%r
  + movzwl SLOT(%r),%r
  + movzwl SLOT(%r),%r
  + movzwl SLOT(%r),%r

## monitor `_ZN14CServerHandler20GetTcpGameServerByChEh` [DIFF] pm=7 canonΔ=1 size 0x98→0x97
flags: SHAPE_ONLY
ORIG leftover (canon):
  - nop
OURS leftover (canon):

## monitor `_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb` [DIFF] pm=45 canonΔ=17 size 0xb3→0xcf
flags: CALL_DIFF,FRAME,IMM,JCC_MNEM
- calls ORIG []
- calls OURS ['T', 'T']
- frame ORIG ['sub    $0x24,%esp', 'add    $0x24,%esp'] OURS ['sub    $0x2c,%esp', 'add    $0x2c,%esp']
- imm ORIG-only ['$0x24', '$0x24'] OURS-only ['$0x2c', '$0x2c']
- jcc ORIG {'je': 1} OURS {'je': 1, 'jmp': 1}
ORIG leftover (canon):
  - sub    $0x24,%r
  - add    $0x15180,%r
  - add    $0x24,%r
OURS leftover (canon):
  + push   %r
  + push   %r
  + sub    $0x2c,%r
  + addl   $0x15180,SLOT(%r)
  + jmp    <T>
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,(%r)

## monitor `_ZN16CDNFProhibitUser20IsTimeOutConnectableEv` [DIFF] pm=14 canonΔ=12 size 0x33→0x38
flags: FRAME,IMM,JCC_MNEM
- frame ORIG [] OURS ['sub    $0x4,%esp']
- imm ORIG-only [] OURS-only ['$0x4']
- jcc ORIG {'je': 1, 'jmp': 1} OURS {'jg': 1, 'jmp': 1}
ORIG leftover (canon):
  - setle  %al
  - test   %al,%al
  - je     <T>
  - mov    $0x1,%r
  - mov    $0x0,%r
  - pop    %r
OURS leftover (canon):
  + sub    $0x4,%r
  + jg     <T>
  + movl   $0x1,SLOT(%r)
  + movl   $0x0,SLOT(%r)
  + mov    SLOT(%r),%r
  + leave

## monitor `_ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb` [DIFF] pm=2 canonΔ=0 size 0x50→0x50
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## monitor `_ZN16CServerInterface19IsHeartBeatTimeOverEv` [DIFF] pm=16 canonΔ=10 size 0x58→0x5a
flags: SHAPE_ONLY
ORIG leftover (canon):
  - sete   %al
  - test   %al,%al
  - test   %al,%al
  - seta   %al
OURS leftover (canon):
  + push   %r
  + sete   %bl
  + test   %bl,%bl
  + test   %bl,%bl
  + seta   %bl
  + pop    %r

## monitor `_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv` [DIFF] pm=74 canonΔ=26 size 0x270→0x271
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x0', '$0x3', '$0x3', '$0x3'] OURS-only ['$0x4', '$0x5']
- jcc ORIG {'jmp': 1, 'jle': 1, 'jne': 1} OURS {'jmp': 1, 'jge': 1, 'jne': 1}
ORIG leftover (canon):
  - movl   $0x0,SLOT(%r)
  - mov    %r,SLOT(%r)
  - mov    &_ZN16village_attacked26village_attacked_schedulerE(,%r,8),%r
  - shl    $0x3,%r
  - shl    $0x3,%r
  - shl    $0x3,%r
  - shl    $0x3,%r
  - mov    &_ZN16village_attacked26village_attacked_schedulerE(%r),%r
OURS leftover (canon):
  + add    %r,%r
  + add    %r,%r
  + add    %r,%r
  + add    %r,%r
  + add    %r,%r
  + mov    &_ZN16village_attacked26village_attacked_schedulerE(,%r,4),%r
  + mov    &_ZN16village_attacked26village_attacked_schedulerE(,%r,4),%r
  + mov    &_ZN16village_attacked26village_attacked_schedulerE(,%r,4),%r

## monitor `_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii` [DIFF] pm=94 canonΔ=56 size 0x1bd→0x239
flags: CALL_DIFF,FRAME,IMM,JCC_MNEM
- calls ORIG []
- calls OURS ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T']
- frame ORIG ['sub    $0x14,%esp', 'sub    %eax,%ecx', 'sub    %eax,%ecx', 'sub    %eax,%ecx', 'add    $0x14,%esp'] OURS ['sub    $0x3c,%esp', 'sub    $0x258,%eax', 'sub    $0x12c,%eax', 'sub    $0x3c,%eax', 'add    $0x3c,%esp']
- imm ORIG-only ['$0x14', '$0x14'] OURS-only ['$0x12c', '$0x258', '$0x3c', '$0x3c', '$0x3c']
- jcc ORIG {} OURS {'jmp': 5}
ORIG leftover (canon):
  - sub    $0x14,%r
  - mov    &_ZN16village_attacked20COUNTDOWN_FIRST_TIMEE,%r
  - sub    %r,%r
  - sub    %r,%r
  - sub    %r,%r
  - mov    &_ZN16village_attacked21COUNTDOWN_SECOND_TIMEE,%r
  - mov    &_ZN16village_attacked20COUNTDOWN_THIRD_TIMEE,%r
  - add    $0x14,%r
OURS leftover (canon):
  + push   %r
  + push   %r
  + sub    $0x3c,%r
  + sub    $0x3c,%r
  + sub    $0x258,%r
  + jmp    <T>
  + jmp    <T>
  + jmp    <T>

## monitor `_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv` [DIFF] pm=48 canonΔ=26 size 0x147→0x183
flags: CALL_DIFF,FRAME,IMM,JCC_MNEM
- calls ORIG []
- calls OURS ['T', 'T', 'T', 'T']
- frame ORIG ['sub    $0x24,%esp', 'add    $0x24,%esp'] OURS ['sub    $0x2c,%esp', 'add    $0x2c,%esp']
- imm ORIG-only ['$0x24', '$0x24'] OURS-only ['$0x2c', '$0x2c']
- jcc ORIG {'jne': 1, 'jb': 1, 'jmp': 2} OURS {'jne': 1, 'jb': 1, 'jmp': 4}
ORIG leftover (canon):
  - sub    $0x24,%r
  - add    $0x24,%r
OURS leftover (canon):
  + push   %r
  + push   %r
  + sub    $0x2c,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + jmp    <T>
  + jmp    <T>
  + mov    %r,%r

## monitor `_ZN16village_attacked23CVillageAttackedManager25SendRequestRevengeDungeonEPc` [DIFF] pm=17 canonΔ=11 size 0x2b→0x2a
flags: FRAME,IMM
- frame ORIG ['sub    $0x28,%esp'] OURS ['sub    $0x4,%esp', 'add    $0x4,%esp']
- imm ORIG-only ['$0x28'] OURS-only ['$0x4', '$0x4']
ORIG leftover (canon):
  - sub    $0x28,%r
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - leave
OURS leftover (canon):
  + push   %r
  + sub    $0x4,%r
  + mov    0xc(%r),%r
  + add    $0x4,%r
  + pop    %r
  + pop    %r

## monitor `_ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv` [DIFF] pm=17 canonΔ=11 size 0x258→0x258
flags: IMM
- imm ORIG-only ['$0x3'] OURS-only []
ORIG leftover (canon):
  - mov    &_ZN16village_attacked26village_attacked_schedulerE(,%r,8),%r
  - shl    $0x3,%r
  - mov    &_ZN16village_attacked26village_attacked_schedulerE(%r),%r
  - mov    SLOT(%r),%r
  - lea    (%r,%r,1),%r
OURS leftover (canon):
  + add    %r,%r
  + add    %r,%r
  + mov    &_ZN16village_attacked26village_attacked_schedulerE(,%r,4),%r
  + mov    &_ZN16village_attacked26village_attacked_schedulerE(,%r,4),%r
  + mov    %r,%r
  + add    SLOT(%r),%r

## monitor `_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader` [DIFF] pm=32 canonΔ=4 size 0x313→0x30d
flags: JCC_MNEM
- jcc ORIG {'je': 4, 'jmp': 9} OURS {'je': 4, 'jmp': 7}
ORIG leftover (canon):
  - jmp    <T>
  - jmp    <T>
  - nop
  - nop
OURS leftover (canon):

## monitor `_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader` [DIFF] pm=70 canonΔ=6 size 0x2ea→0x2f0
flags: FRAME,IMM
- frame ORIG ['sub    $0x5c,%esp', 'add    $0x5c,%esp'] OURS ['sub    $0x6c,%esp', 'add    $0x6c,%esp']
- imm ORIG-only ['$0x5c', '$0x5c'] OURS-only ['$0x6c', '$0x6c']
ORIG leftover (canon):
  - sub    $0x5c,%r
  - add    $0x5c,%r
OURS leftover (canon):
  + sub    $0x6c,%r
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + add    $0x6c,%r

## monitor `_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader` [DIFF] pm=10 canonΔ=2 size 0x210→0x20d
flags: JCC_MNEM
- jcc ORIG {'je': 1, 'jmp': 4} OURS {'je': 1, 'jmp': 3}
ORIG leftover (canon):
  - jmp    <T>
  - nop
OURS leftover (canon):

## monitor `_ZN17CPacketTranslater12OnEventStartEP12PacketHeader` [DIFF] pm=68 canonΔ=8 size 0x28a→0x29a
flags: SHAPE_ONLY
ORIG leftover (canon):
  - movzwl %ax,%r
  - movzwl %ax,%r
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    %ax,SLOT(%r)
  + mov    %ax,SLOT(%r)
  + movzwl SLOT(%r),%r
  + movzwl SLOT(%r),%r

## monitor `_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader` [DIFF] pm=32 canonΔ=4 size 0x296→0x28c
flags: SHAPE_ONLY
ORIG leftover (canon):
  - sete   %al
  - test   %al,%al
  - sete   %bl
  - test   %bl,%bl
OURS leftover (canon):

## monitor `_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader` [DIFF] pm=290 canonΔ=22 size 0x524→0x516
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0x0', '$0x0', '$0x1', '$0x2']
- jcc ORIG {'je': 11, 'jne': 4, 'jmp': 16} OURS {'je': 11, 'jne': 4, 'jmp': 12}
ORIG leftover (canon):
  - sete   %al
  - sete   %al
  - sete   %al
  - jmp    <T>
  - jmp    <T>
  - jmp    <T>
  - jmp    <T>
  - sete   %bl
OURS leftover (canon):
  + movb   $0x0,SLOT(%r)
  + movl   $0x0,SLOT(%r)
  + setne  %al
  + setne  %al
  + setne  %al
  + movb   $0x2,SLOT(%r)
  + movb   $0x1,SLOT(%r)

## monitor `_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader` [DIFF] pm=266 canonΔ=44 size 0x58b→0x5a5
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x10'] OURS-only ['$0x0', '$0x0', '$0xc']
- jcc ORIG {'jmp': 9, 'je': 4, 'jne': 2} OURS {'jmp': 8, 'jne': 5, 'je': 1}
ORIG leftover (canon):
  - jmp    <T>
  - mov    &_ZN17CPacketTranslater8m_pclAppE,%r
  - sete   %al
  - sete   %al
  - sete   %al
  - test   %al,%al
  - test   %al,%al
  - test   %al,%al
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + jne    <T>
  + jne    <T>
  + jne    <T>

## monitor `_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader` [DIFF] pm=134 canonΔ=12 size 0x2f4→0x2fe
flags: JCC_MNEM
- jcc ORIG {'jmp': 6, 'je': 1, 'jne': 1} OURS {'jmp': 6, 'jne': 2}
ORIG leftover (canon):
  - xor    $0x1,%r
  - test   %al,%al
  - je     <T>
  - mov    %r,%r
  - mov    %r,%r
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    %al,SLOT(%r)
  + cmpb   $0x1,SLOT(%r)
  + jne    <T>

## monitor `_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader` [DIFF] pm=102 canonΔ=10 size 0x196→0x18d
flags: IMM
- imm ORIG-only ['$0x4'] OURS-only []
ORIG leftover (canon):
  - movzbl %al,%r
  - movzbl %al,%r
  - movzbl SLOT(%r),%r
  - shl    $0x4,%r
  - add    $0x18,%r
  - mov    %ax,SLOT(%r)
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + movw   $0x18,SLOT(%r)

## monitor `_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader` [DIFF] pm=194 canonΔ=10 size 0x2c0→0x2b2
flags: JCC_MNEM
- jcc ORIG {'jne': 3, 'jmp': 9, 'je': 3} OURS {'jne': 5, 'jmp': 9, 'je': 1}
ORIG leftover (canon):
  - setne  %al
  - setne  %al
  - setne  %al
  - test   %al,%al
  - test   %al,%al
  - je     <T>
  - je     <T>
OURS leftover (canon):
  + jne    <T>
  + jne    <T>
  + sete   %al

## monitor `_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader` [DIFF] pm=60 canonΔ=4 size 0x25b→0x253
flags: JCC_MNEM
- jcc ORIG {'jmp': 6, 'je': 1, 'jne': 1} OURS {'jmp': 5, 'je': 1, 'jne': 1}
ORIG leftover (canon):
  - jmp    <T>
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - nop
OURS leftover (canon):

## monitor `_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader` [DIFF] pm=156 canonΔ=8 size 0x25d→0x25a
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x300'] OURS-only []
- jcc ORIG {'jne': 3, 'jmp': 7, 'je': 1} OURS {'jne': 4, 'jmp': 7}
ORIG leftover (canon):
  - setne  %al
  - test   %al,%al
  - je     <T>
  - add    $0x300,%r
OURS leftover (canon):
  + jne    <T>
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + lea    0x300(%r),%r

## monitor `_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader` [DIFF] pm=169 canonΔ=15 size 0x328→0x328
flags: FRAME,IMM
- frame ORIG ['sub    $0x9c,%esp', 'add    $0x9c,%esp'] OURS ['sub    $0x8c,%esp', 'add    $0x8c,%esp']
- imm ORIG-only ['$0x4c3', '$0x4c9', '$0x9c', '$0x9c'] OURS-only ['$0x4dd', '$0x4e3', '$0x8c', '$0x8c']
ORIG leftover (canon):
  - sub    $0x9c,%r
  - mov    SLOT(%r),%r
  - mov    %r,%r
  - mov    %r,%r
  - movzbl %al,%r
  - movl   $0x4c3,0x8(%r)
  - movl   $0x4c9,0x8(%r)
  - add    $0x9c,%r
OURS leftover (canon):
  + sub    $0x8c,%r
  + mov    %al,SLOT(%r)
  + movzbl SLOT(%r),%r
  + mov    0x8(%r),%r
  + movl   $0x4dd,0x8(%r)
  + movl   $0x4e3,0x8(%r)
  + add    $0x8c,%r

## monitor `_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader` [DIFF] pm=152 canonΔ=20 size 0x2ae→0x2a8
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1', '$0xd'] OURS-only ['$0xa', '$0xb', '$0xb']
- jcc ORIG {'je': 5, 'jmp': 2} OURS {'je': 5, 'jmp': 1}
ORIG leftover (canon):
  - add    $0xd,%r
  - mov    %r,%r
  - xor    $0x1,%r
  - movb   $0x1,0xb(%r)
  - movzbl 0x1(%r),%r
  - movzbl %al,%r
  - jmp    <T>
  - movb   $0x0,0xb(%r)
OURS leftover (canon):
  + lea    0xd(%r),%r
  + mov    %r,(%r)
  + add    $0xb,%r
  + add    $0xb,%r
  + movb   $0x0,(%r)
  + movb   $0x0,(%r)
  + movb   $0x1,(%r)
  + add    $0xa,%r

## monitor `_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader` [DIFF] pm=234 canonΔ=40 size 0x38f→0x3a9
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x50,%esp', 'add    $0x50,%esp'] OURS ['sub    $0x60,%esp', 'add    $0x60,%esp']
- imm ORIG-only ['$0x0', '$0x50', '$0x50'] OURS-only ['$0x60', '$0x60', '$0xa', '$0xa', '$0xa']
- jcc ORIG {'jmp': 10, 'je': 6, 'jne': 1} OURS {'jmp': 7, 'je': 6, 'jne': 1}
ORIG leftover (canon):
  - sub    $0x50,%r
  - jmp    <T>
  - jmp    <T>
  - jmp    <T>
  - mov    %r,%r
  - mov    %r,%r
  - mov    %r,%r
  - movzbl %al,%r
OURS leftover (canon):
  + sub    $0x60,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## monitor `_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader` [DIFF] pm=242 canonΔ=20 size 0x353→0x352
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0xb0,%esp', 'add    $0xb0,%esp'] OURS ['sub    $0xc0,%esp', 'add    $0xc0,%esp']
- imm ORIG-only ['$0xb0', '$0xb0'] OURS-only ['$0xc0', '$0xc0']
- jcc ORIG {'jne': 2, 'jmp': 10, 'je': 3} OURS {'jne': 3, 'jmp': 10, 'je': 2}
ORIG leftover (canon):
  - sub    $0xb0,%r
  - mov    &_ZN17CPacketTranslater8m_pclAppE,%r
  - lea    0x10(%r),%r
  - setne  %bl
  - test   %bl,%bl
  - je     <T>
  - sete   %al
  - test   %al,%al
OURS leftover (canon):
  + sub    $0xc0,%r
  + jne    <T>
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + cmp    $0x1,%r

## monitor `_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader` [DIFF] pm=97 canonΔ=19 size 0x29b→0x2b9
flags: FRAME,IMM
- frame ORIG ['sub    $0x40,%esp', 'add    $0x40,%esp'] OURS ['sub    $0x50,%esp', 'add    $0x50,%esp']
- imm ORIG-only ['$0x40', '$0x40'] OURS-only ['$0x50', '$0x50']
ORIG leftover (canon):
  - sub    $0x40,%r
  - mov    %r,%r
  - mov    %r,%r
  - mov    %r,%r
  - add    $0x40,%r
OURS leftover (canon):
  + sub    $0x50,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r

## monitor `_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader` [DIFF] pm=127 canonΔ=37 size 0x227→0x266
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x5c,%esp', 'add    $0x5c,%esp'] OURS ['sub    $0x60,%esp', 'add    $0x60,%esp']
- imm ORIG-only ['$0x5c', '$0x5c'] OURS-only ['$0x60', '$0x60']
- jcc ORIG {'je': 3, 'jmp': 6, 'jne': 2} OURS {'jne': 3, 'je': 2, 'jmp': 7}
ORIG leftover (canon):
  - push   %r
  - sub    $0x5c,%r
  - je     <T>
  - movl   $&_ZZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%r)
  - movl   $&_ZZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%r)
  - mov    &_ZN17CPacketTranslater8m_pclAppE,%r
  - mov    0x320(%r),%r
  - add    $0x5c,%r
OURS leftover (canon):
  + sub    $0x60,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## monitor `_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader` [DIFF] pm=119 canonΔ=23 size 0x2c3→0x2e2
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x5c,%esp', 'add    $0x5c,%esp'] OURS ['sub    $0x6c,%esp', 'add    $0x6c,%esp']
- imm ORIG-only ['$0x5c', '$0x5c'] OURS-only ['$0x6c', '$0x6c']
- jcc ORIG {'jne': 5, 'jmp': 10, 'je': 1} OURS {'je': 2, 'jmp': 10, 'jne': 4}
ORIG leftover (canon):
  - sub    $0x5c,%r
  - cmpl   $0x0,SLOT(%r)
  - jne    <T>
  - mov    %r,%r
  - movzwl %ax,%r
  - xor    $0x1,%r
  - add    $0x5c,%r
OURS leftover (canon):
  + sub    $0x6c,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    0x8(%r),%r
  + movl   $0x0,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + test   %r,%r

## monitor `_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader` [DIFF] pm=8 canonΔ=2 size 0x264→0x261
flags: JCC_MNEM
- jcc ORIG {'je': 1, 'jmp': 3} OURS {'je': 1, 'jmp': 2}
ORIG leftover (canon):
  - jmp    <T>
  - nop
OURS leftover (canon):

## monitor `_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader` [DIFF] pm=62 canonΔ=16 size 0x1f1→0x202
flags: FRAME,IMM
- frame ORIG ['sub    $0x5c,%esp', 'add    $0x5c,%esp'] OURS ['sub    $0x60,%esp', 'add    $0x60,%esp']
- imm ORIG-only ['$0x5c', '$0x5c'] OURS-only ['$0x60', '$0x60']
ORIG leftover (canon):
  - push   %r
  - sub    $0x5c,%r
  - movswl %ax,%r
  - mov    %ax,0xe(%r)
  - add    $0x5c,%r
  - pop    %r
OURS leftover (canon):
  + sub    $0x60,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    %ax,SLOT(%r)
  + movswl SLOT(%r),%r
  + mov    %r,%r

## monitor `_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader` [DIFF] pm=107 canonΔ=7 size 0x389→0x38c
flags: JCC_MNEM
- jcc ORIG {'jmp': 10, 'je': 4, 'jne': 3} OURS {'jmp': 12, 'je': 4, 'jne': 3}
ORIG leftover (canon):
  - setne  %al
  - setne  %al
  - test   %al,%al
  - test   %al,%al
OURS leftover (canon):
  + jmp    <T>
  + jmp    <T>
  + nop

## monitor `_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader` [DIFF] pm=56 canonΔ=10 size 0x17d→0x175
flags: IMM
- imm ORIG-only ['$0x17', '$0x18'] OURS-only []
ORIG leftover (canon):
  - mov    %r,%r
  - mov    %r,%r
  - mov    %r,%r
  - add    $0x17,%r
  - add    $0x18,%r
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + setne  %al
  + test   %al,%al
  + lea    0x18(%r),%r

## monitor `_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader` [DIFF] pm=57 canonΔ=9 size 0x254→0x254
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x0'] OURS-only []
- jcc ORIG {'jne': 1} OURS {'je': 1}
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - cmpl   $0x0,SLOT(%r)
  - jne    <T>
OURS leftover (canon):
  + mov    0x8(%r),%r
  + test   %r,%r
  + sete   %al
  + test   %al,%al
  + je     <T>

## monitor `_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader` [DIFF] pm=68 canonΔ=4 size 0x258→0x24f
flags: JCC_MNEM
- jcc ORIG {'jne': 3, 'jmp': 7, 'je': 2} OURS {'jne': 4, 'jmp': 7, 'je': 1}
ORIG leftover (canon):
  - setne  %al
  - test   %al,%al
  - je     <T>
OURS leftover (canon):
  + jne    <T>

## monitor `_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader` [DIFF] pm=8 canonΔ=6 size 0xca→0xc2
flags: JCC_MNEM
- jcc ORIG {'jmp': 2, 'jne': 1} OURS {'jmp': 1, 'je': 1}
ORIG leftover (canon):
  - jmp    <T>
  - sete   %al
  - test   %al,%al
  - jne    <T>
  - nop
OURS leftover (canon):
  + je     <T>

## monitor `_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader` [DIFF] pm=399 canonΔ=43 size 0x3de→0x417
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x70,%esp', 'subl   $0x1,-0x24(%ebp)', 'add    $0x70,%esp'] OURS ['sub    $0xa0,%esp', 'subl   $0x1,-0x58(%ebp)', 'add    $0xa0,%esp']
- imm ORIG-only ['$0x70', '$0x70'] OURS-only ['$0xa0', '$0xa0']
- jcc ORIG {'je': 10, 'jne': 3, 'jmp': 7} OURS {'je': 11, 'jmp': 5, 'jne': 2}
ORIG leftover (canon):
  - sub    $0x70,%r
  - setne  %al
  - setne  %al
  - test   %al,%al
  - test   %al,%al
  - test   %al,%al
  - sete   %al
  - jne    <T>
OURS leftover (canon):
  + sub    $0xa0,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)

## monitor `_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader` [DIFF] pm=68 canonΔ=22 size 0x1f8→0x1d7
flags: IMM
- imm ORIG-only ['$0x10', '$0x10', '$0x10', '$0x1b', '$0x65', '$0x65', '$0x65', '$0xc'] OURS-only ['$0x1c']
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - imul   $0x65,%r,%r
  - imul   $0x65,%r,%r
  - imul   $0x65,%r,%r
  - add    $0x10,%r
  - add    $0x10,%r
  - add    $0x10,%r
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    0x8(%r),%r
  + add    $0x1c,%r
  + movzwl 0x19(%r),%r
  + movzwl 0x17(%r),%r
  + movzbl 0x1b(%r),%r

## monitor `_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader` [DIFF] pm=104 canonΔ=6 size 0x2f6→0x2f6
flags: JCC_MNEM
- jcc ORIG {'jne': 3, 'je': 2, 'jmp': 4} OURS {'jne': 4, 'jmp': 4, 'je': 1}
ORIG leftover (canon):
  - sete   %al
  - je     <T>
  - setg   %al
OURS leftover (canon):
  + jne    <T>
  + setne  %al
  + setbe  %al

## monitor `_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader` [DIFF] pm=266 canonΔ=18 size 0x3e7→0x40a
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x11c,%esp', 'add    $0x11c,%esp'] OURS ['sub    $0x12c,%esp', 'add    $0x12c,%esp']
- imm ORIG-only ['$0x11c', '$0x11c'] OURS-only ['$0x0', '$0x12c', '$0x12c']
- jcc ORIG {'je': 1, 'jmp': 7, 'jne': 3} OURS {'je': 2, 'jmp': 6, 'jne': 2}
ORIG leftover (canon):
  - sub    $0x11c,%r
  - cmp    %r,%r
  - setne  %al
  - jmp    <T>
  - test   %r,%r
  - test   %al,%al
  - jne    <T>
  - nop
OURS leftover (canon):
  + sub    $0x12c,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + cmp    SLOT(%r),%r
  + je     <T>
  + cmpl   $0x0,SLOT(%r)

## monitor `_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader` [DIFF] pm=87 canonΔ=11 size 0x301→0x309
flags: JCC_MNEM
- jcc ORIG {'jmp': 7, 'je': 3, 'jne': 1} OURS {'jmp': 6, 'je': 3, 'jne': 1}
ORIG leftover (canon):
  - jmp    <T>
  - movzbl %al,%r
  - mov    %dl,0xa(%r)
  - nop
  - movzwl %ax,%r
OURS leftover (canon):
  + mov    %al,SLOT(%r)
  + movzbl SLOT(%r),%r
  + lea    0xa(%r),%r
  + mov    %al,(%r)
  + mov    %ax,SLOT(%r)
  + movzwl SLOT(%r),%r

## monitor `_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader` [DIFF] pm=14 canonΔ=4 size 0x1a9→0x1a6
flags: JCC_MNEM
- jcc ORIG {'je': 2, 'jmp': 1} OURS {'je': 2}
ORIG leftover (canon):
  - mov    %al,0x15e(%r)
  - jmp    <T>
  - nop
OURS leftover (canon):
  + mov    %dl,0x15e(%r)

## monitor `_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader` [DIFF] pm=298 canonΔ=26 size 0x4f4→0x4ce
flags: IMM
- imm ORIG-only ['$0x0', '$0x0'] OURS-only ['$0x34', '$0x34']
ORIG leftover (canon):
  - movl   $0x0,SLOT(%r)
  - movl   $0x0,SLOT(%r)
  - mov    &_ZN17CPacketTranslater8m_pclAppE,%r
  - mov    &_ZN17CPacketTranslater8m_pclAppE,%r
  - lea    0x10(%r),%r
  - lea    0x10(%r),%r
  - setne  %bl
  - test   %bl,%bl
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    $0xffffffff,%r
  + movl   $0x34,0x8(%r)
  + movl   $0x34,0x8(%r)

## monitor `_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader` [DIFF] pm=46 canonΔ=6 size 0x163→0x158
flags: IMM
- imm ORIG-only ['$0x4'] OURS-only ['$0x0']
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - test   %r,%r
  - add    $0x4,%r
  - mov    0xa(%r,%r,4),%r
OURS leftover (canon):
  + cmpl   $0x0,SLOT(%r)

## monitor `_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader` [DIFF] pm=189 canonΔ=21 size 0x40f→0x428
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x7c,%esp', 'add    $0x7c,%esp'] OURS ['sub    $0x8c,%esp', 'add    $0x8c,%esp']
- imm ORIG-only ['$0x7c', '$0x7c'] OURS-only ['$0x8c', '$0x8c']
- jcc ORIG {'jne': 6, 'jmp': 15, 'je': 1, 'jle': 1} OURS {'jne': 7, 'jmp': 15, 'jg': 1}
ORIG leftover (canon):
  - sub    $0x7c,%r
  - sete   %al
  - test   %al,%al
  - je     <T>
  - mov    %r,%r
  - jle    <T>
  - add    $0x7c,%r
OURS leftover (canon):
  + sub    $0x8c,%r
  + jne    <T>
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r

## monitor `_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader` [DIFF] pm=148 canonΔ=8 size 0x3ad→0x3b5
flags: JCC_MNEM
- jcc ORIG {'je': 2, 'jmp': 6, 'jne': 1} OURS {'jne': 2, 'je': 1, 'jmp': 5}
ORIG leftover (canon):
  - je     <T>
  - jmp    <T>
  - cmp    %r,%r
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + jne    <T>
  + cmp    SLOT(%r),%r

## monitor `_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader` [DIFF] pm=179 canonΔ=27 size 0x566→0x548
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x0', '$0x3', '$0x3'] OURS-only ['$0xf']
- jcc ORIG {'je': 4, 'jmp': 11, 'jbe': 1, 'ja': 1, 'jne': 2} OURS {'je': 3, 'jmp': 7, 'jbe': 1, 'ja': 1, 'jne': 3}
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - je     <T>
  - movl   $0x0,SLOT(%r)
  - jmp    <T>
  - jmp    <T>
  - jmp    <T>
  - jmp    <T>
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + cmpl   $0xc34ff,SLOT(%r)
  + cmpl   $0xf423f,SLOT(%r)
  + add    $0xf,%r
  + cmp    $0x1,%al
  + setne  %al
  + jne    <T>

## monitor `_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader` [DIFF] pm=110 canonΔ=16 size 0x2ac→0x2ce
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x6c,%esp', 'add    $0x6c,%esp'] OURS ['sub    $0x7c,%esp', 'add    $0x7c,%esp']
- imm ORIG-only ['$0x6c', '$0x6c'] OURS-only ['$0x7c', '$0x7c']
- jcc ORIG {'jmp': 6, 'je': 1, 'jne': 1} OURS {'jmp': 6, 'jne': 2}
ORIG leftover (canon):
  - sub    $0x6c,%r
  - je     <T>
  - add    $0x6c,%r
OURS leftover (canon):
  + sub    $0x7c,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## monitor `_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader` [DIFF] pm=37 canonΔ=11 size 0x26d→0x26a
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0xdc4'] OURS-only ['$0xdc3']
- jcc ORIG {'jne': 3, 'jmp': 7, 'je': 2} OURS {'jne': 4, 'jmp': 7, 'je': 1}
ORIG leftover (canon):
  - movl   $0xdc4,0x8(%r)
  - mov    SLOT(%r),%r
  - sete   %al
  - test   %al,%al
  - je     <T>
  - xor    $0x1,%r
OURS leftover (canon):
  + jne    <T>
  + movl   $0xdc3,0x8(%r)
  + mov    0x8(%r),%r
  + cmp    $0x1,%al
  + setne  %al

## monitor `_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader` [DIFF] pm=122 canonΔ=10 size 0x3aa→0x3af
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0xf']
- jcc ORIG {'jmp': 10, 'je': 4, 'jne': 3} OURS {'jmp': 12, 'je': 4, 'jne': 3}
ORIG leftover (canon):
  - setne  %al
  - setne  %al
  - test   %al,%al
  - test   %al,%al
  - lea    0xf(%r),%r
OURS leftover (canon):
  + jmp    <T>
  + jmp    <T>
  + add    $0xf,%r
  + mov    %r,%r
  + nop

## monitor `_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader` [DIFF] pm=62 canonΔ=20 size 0x178→0x178
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x5c,%esp', 'add    $0x5c,%esp'] OURS ['sub    $0x50,%esp', 'add    $0x50,%esp']
- imm ORIG-only ['$0x0', '$0x5c', '$0x5c'] OURS-only ['$0x50', '$0x50']
- jcc ORIG {'jne': 2, 'jmp': 5} OURS {'je': 1, 'jmp': 4, 'jne': 1}
ORIG leftover (canon):
  - push   %r
  - sub    $0x5c,%r
  - movl   $0x0,SLOT(%r)
  - sete   %al
  - test   %al,%al
  - jne    <T>
  - mov    %r,%r
  - jmp    <T>
OURS leftover (canon):
  + sub    $0x50,%r
  + je     <T>
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r
  + mov    SLOT(%r),%r

## monitor `_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader` [DIFF] pm=155 canonΔ=9 size 0x371→0x376
flags: JCC_MNEM
- jcc ORIG {'jmp': 10, 'je': 1, 'jne': 3} OURS {'jmp': 10, 'jne': 4}
ORIG leftover (canon):
  - mov    %r,%r
  - sete   %al
  - test   %al,%al
  - je     <T>
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + jne    <T>
  + mov    0x8(%r),%r

## monitor `_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader` [DIFF] pm=194 canonΔ=14 size 0x259→0x24c
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x2d0'] OURS-only ['$0x0']
- jcc ORIG {'je': 3, 'jne': 1, 'jmp': 8} OURS {'je': 4, 'jmp': 6}
ORIG leftover (canon):
  - mov    &_ZN17CPacketTranslater8m_pclAppE,%r
  - add    $0x2d0,%r
  - test   %al,%al
  - jne    <T>
  - sete   %bl
  - jmp    <T>
  - jmp    <T>
  - test   %bl,%bl
OURS leftover (canon):
  + je     <T>
  + mov    SLOT(%r),%r
  + mov    %al,SLOT(%r)
  + cmpb   $0x0,SLOT(%r)

## monitor `_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader` [DIFF] pm=121 canonΔ=33 size 0x2d2→0x2ce
flags: FRAME,IMM
- frame ORIG ['sub    $0x5c,%esp', 'add    $0x5c,%esp'] OURS ['sub    $0x6c,%esp', 'add    $0x6c,%esp']
- imm ORIG-only ['$0x2', '$0x2', '$0x2', '$0x5c', '$0x5c'] OURS-only ['$0x6c', '$0x6c', '$0xe']
ORIG leftover (canon):
  - sub    $0x5c,%r
  - lea    0xe(%r),%r
  - mov    %r,%r
  - mov    %r,%r
  - mov    %r,%r
  - add    %r,%r
  - add    %r,%r
  - add    %r,%r
OURS leftover (canon):
  + sub    $0x6c,%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r

## monitor `_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader` [DIFF] pm=125 canonΔ=37 size 0x2b9→0x2c7
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0x0', '$0x16', '$0x16', '$0x16']
- jcc ORIG {'jne': 2, 'je': 4, 'jge': 1, 'jmp': 9} OURS {'je': 5, 'jae': 1, 'jmp': 7, 'jne': 1}
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - jne    <T>
  - mov    0x8(%r),%r
  - cmp    SLOT(%r),%r
  - jge    <T>
  - jmp    <T>
  - jmp    <T>
  - mov    %r,0xa(%r)
OURS leftover (canon):
  + mov    SLOT(%r),%r
  + je     <T>
  + cmp    %r,%r
  + jae    <T>
  + mov    %al,SLOT(%r)
  + cmpb   $0x0,SLOT(%r)
  + lea    0xa(%r),%r
  + lea    0xa(%r),%r

## monitor `_ZN17CUdpNetworkThread8dispatchEPv` [DIFF] pm=515 canonΔ=41 size 0x6fe→0x744
flags: CALL_DIFF,FRAME,IMM,JCC_MNEM
- calls ORIG ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T']
- calls OURS ['T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T']
- frame ORIG ['sub    $0x9c,%esp', 'add    $0x9c,%esp'] OURS ['sub    $0xac,%esp', 'add    $0xac,%esp']
- imm ORIG-only ['$0x9c', '$0x9c'] OURS-only ['$0xac', '$0xac']
- jcc ORIG {'jne': 7, 'jmp': 30, 'je': 2, 'jbe': 2} OURS {'jne': 9, 'jmp': 28, 'ja': 1, 'jg': 1}
ORIG leftover (canon):
  - sub    $0x9c,%r
  - jmp    <T>
  - jmp    <T>
  - mov    %r,%r
  - xor    $0x1,%r
  - test   %al,%al
  - je     <T>
  - je     <T>
OURS leftover (canon):
  + sub    $0xac,%r
  + jne    <T>
  + jne    <T>
  + mov    %r,(%r)
  + call   <T>
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r
  + mov    %al,SLOT(%r)

## monitor `_ZN18CFrameCountHandler17GetFrameCountInfoEv` [DIFF] pm=247 canonΔ=37 size 0x37c→0x36c
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x6c,%esp', 'sub    %eax,%ecx', 'sub    -0x28(%ebp),%eax', 'add    $0x6c,%esp'] OURS ['sub    $0x4c,%esp', 'sub    %eax,%ebx', 'sub    %eax,%ebx', 'add    $0x4c,%esp']
- imm ORIG-only ['$0x6c', '$0x6c'] OURS-only ['$0x4c', '$0x4c']
- jcc ORIG {'jne': 5, 'je': 4, 'jmp': 8, 'jbe': 2, 'jae': 1} OURS {'jne': 7, 'jmp': 8, 'jae': 2, 'jbe': 3}
ORIG leftover (canon):
  - sub    $0x6c,%r
  - sete   %al
  - sete   %al
  - test   %al,%al
  - test   %al,%al
  - test   %al,%al
  - test   %al,%al
  - je     <T>
OURS leftover (canon):
  + sub    $0x4c,%r
  + jne    <T>
  + jne    <T>
  + mov    0x8(%r),%r
  + mov    0x8(%r),%r
  + mov    0xc(%r),%r
  + mov    %r,%r
  + mov    %r,%r

## monitor `_ZN18CMemoryCashManager18ProcessLifeTimeOutEv` [DIFF] pm=14 canonΔ=4 size 0x103→0x105
flags: JCC_MNEM
- jcc ORIG {'je': 3, 'jmp': 3} OURS {'je': 3, 'jmp': 2}
ORIG leftover (canon):
  - jmp    <T>
  - nop
OURS leftover (canon):
  + setne  %al
  + test   %al,%al

## monitor `_ZN18CMemoryCashManager20ProcessCashDataPrintEv` [NEAR] pm=44 canonΔ=4 size 0xc4→0xc4
flags: FRAME,IMM
- frame ORIG ['sub    $0x5c,%esp', 'add    $0x5c,%esp'] OURS ['sub    $0x4c,%esp', 'add    $0x4c,%esp']
- imm ORIG-only ['$0x5c', '$0x5c'] OURS-only ['$0x4c', '$0x4c']
ORIG leftover (canon):
  - sub    $0x5c,%r
  - add    $0x5c,%r
OURS leftover (canon):
  + sub    $0x4c,%r
  + add    $0x4c,%r

## monitor `_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser` [DIFF] pm=90 canonΔ=4 size 0x293→0x296
flags: JCC_MNEM
- jcc ORIG {'jmp': 6, 'je': 5, 'jne': 1} OURS {'jmp': 5, 'je': 5, 'jne': 1}
ORIG leftover (canon):
  - jmp    <T>
  - nop
OURS leftover (canon):
  + mov    %r,SLOT(%r)
  + mov    SLOT(%r),%r

## monitor `_ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start` [NEAR] pm=2 canonΔ=0 size 0x47→0x47
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## monitor `_ZN19COnTimeEventManager10StartEventEjj` [DIFF] pm=8 canonΔ=0 size 0xa4→0xa4
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## monitor `_ZN19COnTimeEventManager11OnRewardEndEv` [DIFF] pm=18 canonΔ=2 size 0x112→0x10f
flags: JCC_MNEM
- jcc ORIG {'jmp': 2, 'jne': 1} OURS {'jmp': 1, 'jne': 1}
ORIG leftover (canon):
  - jmp    <T>
  - nop
OURS leftover (canon):

## monitor `_ZN19COnTimeEventManager13OnRewardStartEv` [DIFF] pm=40 canonΔ=22 size 0x181→0x197
flags: CALL_DIFF,FRAME,IMM
- calls ORIG []
- calls OURS ['T', 'T']
- frame ORIG ['sub    $0x34,%esp', 'add    $0x34,%esp'] OURS ['sub    $0x2c,%esp', 'add    $0x2c,%esp']
- imm ORIG-only ['$0x34', '$0x34'] OURS-only ['$0x2c', '$0x2c']
ORIG leftover (canon):
  - sub    $0x34,%r
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - nop
  - add    $0x34,%r
OURS leftover (canon):
  + push   %r
  + push   %r
  + sub    $0x2c,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r

## monitor `_ZN20CTask_ChristmasEvent10_DoExecuteEv` [DIFF] pm=55 canonΔ=17 size 0x125→0x142
flags: CALL_DIFF,FRAME,IMM,JCC_MNEM
- calls ORIG []
- calls OURS ['T', 'T']
- frame ORIG ['sub    $0x44,%esp', 'add    $0x44,%esp'] OURS ['sub    $0x4c,%esp', 'add    $0x4c,%esp']
- imm ORIG-only ['$0x44', '$0x44'] OURS-only ['$0x4c', '$0x4c']
- jcc ORIG {'je': 1, 'jmp': 1} OURS {'je': 1, 'jmp': 2}
ORIG leftover (canon):
  - sub    $0x44,%r
  - setl   %al
  - add    $0x44,%r
OURS leftover (canon):
  + push   %r
  + push   %r
  + sub    $0x4c,%r
  + setb   %al
  + jmp    <T>
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,(%r)

## monitor `_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo` [DIFF] pm=22 canonΔ=12 size 0x85→0x8f
flags: FRAME,IMM
- frame ORIG ['sub    $0x24,%esp', 'sub    %eax,%edx'] OURS ['sub    $0x20,%esp', 'sub    %ebx,%edx', 'add    $0x0,%esp']
- imm ORIG-only ['$0x24'] OURS-only ['$0x0', '$0x20']
ORIG leftover (canon):
  - sub    $0x24,%r
  - mov    SLOT(%r),%r
  - leave
OURS leftover (canon):
  + push   %r
  + sub    $0x20,%r
  + mov    %r,%r
  + mov    %r,%r
  + lea    SLOT(%r),%r
  + add    $0x0,%r
  + pop    %r
  + pop    %r

## monitor `_ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv` [DIFF] pm=5 canonΔ=3 size 0xac→0xaa
flags: IMM
- imm ORIG-only ['$0x3c'] OURS-only []
ORIG leftover (canon):
  - add    $0x3c,%r
  - mov    %r,%r
OURS leftover (canon):
  + lea    0x3c(%r),%r

## monitor `_ZN5CPeer11send_packetEPci` [NEAR] pm=6 canonΔ=4 size 0x21b→0x21b
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    0x10(%r),%r
  - add    %r,%r
OURS leftover (canon):
  + mov    %r,%r
  + add    0x10(%r),%r

## monitor `_ZN5CPeer11send_packetEv` [DIFF] pm=82 canonΔ=18 size 0x24d→0x24e
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x30,%esp', 'sub    %eax,%edx', 'add    $0x30,%esp'] OURS ['sub    $0x20,%esp', 'sub    -0xc(%ebp),%edx', 'add    $0x20,%esp']
- imm ORIG-only ['$0x30', '$0x30'] OURS-only ['$0x20', '$0x20']
- jcc ORIG {'jmp': 6, 'je': 4, 'jne': 1, 'jle': 2, 'jbe': 1, 'jge': 1} OURS {'jmp': 6, 'jg': 1, 'je': 3, 'jne': 1, 'jle': 2, 'ja': 1, 'jge': 1}
ORIG leftover (canon):
  - sub    $0x30,%r
  - setle  %al
  - test   %al,%al
  - je     <T>
  - mov    SLOT(%r),%r
  - sub    %r,%r
  - jbe    <T>
  - mov    $0xffffffff,%r
OURS leftover (canon):
  + sub    $0x20,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + jg     <T>
  + sub    SLOT(%r),%r
  + ja     <T>
  + movl   $0xffffffff,SLOT(%r)

## monitor `_ZN5CUser18MemberEnterProcessEv` [DIFF] pm=10 canonΔ=6 size 0x43→0x41
flags: JCC_MNEM
- jcc ORIG {'je': 2, 'jmp': 1} OURS {'je': 1, 'jg': 1, 'jmp': 2}
ORIG leftover (canon):
  - je     <T>
  - setle  %al
  - test   %al,%al
OURS leftover (canon):
  + jg     <T>
  + jmp    <T>
  + nop

## monitor `_ZN7CMember10LoadMemberER14STMemberDBInfosjj` [DIFF] pm=13 canonΔ=5 size 0xcb→0xcd
flags: IMM
- imm ORIG-only ['$0x6'] OURS-only []
ORIG leftover (canon):
  - cmp    SLOT(%r),%r
  - add    $0x6,%r
OURS leftover (canon):
  + mov    SLOT(%r),%r
  + cmp    %r,%r
  + lea    0x6(%r),%r

## monitor `_ZN7CMember21GetConnLowerMemberCntEv` [DIFF] pm=10 canonΔ=4 size 0x82→0x7d
flags: JCC_MNEM
- jcc ORIG {'jmp': 3, 'jne': 1} OURS {'jmp': 3, 'je': 1}
ORIG leftover (canon):
  - sete   %al
  - test   %al,%al
  - jne    <T>
OURS leftover (canon):
  + je     <T>

## monitor `_ZN7CMember21NoticeLevelUpToLowersEj` [DIFF] pm=36 canonΔ=8 size 0xbf→0xb0
flags: JCC_MNEM
- jcc ORIG {'je': 1, 'jmp': 3, 'jne': 1} OURS {'je': 2, 'jmp': 1}
ORIG leftover (canon):
  - jmp    <T>
  - jmp    <T>
  - sete   %al
  - test   %al,%al
  - jne    <T>
  - nop
  - nop
OURS leftover (canon):
  + je     <T>

## monitor `_ZN7CMember21NoticeMemberLogin_OutEP5CUserc` [DIFF] pm=306 canonΔ=20 size 0x325→0x325
flags: IMM,JCC_MNEM
- imm ORIG-only [] OURS-only ['$0x1']
- jcc ORIG {'jne': 4, 'je': 6, 'jmp': 5} OURS {'je': 8, 'jne': 2, 'jmp': 3}
ORIG leftover (canon):
  - test   %al,%al
  - test   %al,%al
  - jne    <T>
  - jne    <T>
  - xor    $0x1,%r
  - xor    $0x1,%r
  - jmp    <T>
  - jmp    <T>
OURS leftover (canon):
  + mov    %al,SLOT(%r)
  + movzbl SLOT(%r),%r
  + je     <T>
  + je     <T>
  + cmp    $0x1,%al
  + cmp    $0x1,%al
  + cmp    $0x1,%al
  + setne  %al

## monitor `_ZNK11CUdpHandler12SendToClientEPcitPKcj` [DIFF] pm=82 canonΔ=16 size 0x309→0x303
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x6f,%eax'] OURS ['sub    $0x6f,%eax']
- imm ORIG-only ['$0x61'] OURS-only ['$0x60']
- jcc ORIG {'jmp': 7, 'jne': 2, 'je': 2, 'jl': 1, 'ja': 1} OURS {'jmp': 7, 'jne': 4, 'jle': 1, 'jbe': 1}
ORIG leftover (canon):
  - cmp    $0x61,%r
  - cmp    $0x61,%r
  - je     <T>
  - je     <T>
  - jl     <T>
  - ja     <T>
  - mov    0x10(%r),%r
  - cmp    SLOT(%r),%r
OURS leftover (canon):
  + jne    <T>
  + jne    <T>
  + cmpl   $0x61,SLOT(%r)
  + cmpl   $0x60,SLOT(%r)
  + jle    <T>
  + jbe    <T>
  + mov    SLOT(%r),%r
  + cmp    0x10(%r),%r

## monitor `_ZNK11CUdpHandler12SendToServerEPcitPKc` [DIFF] pm=2 canonΔ=0 size 0x27b→0x27b
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## monitor `_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt` [DIFF] pm=66 canonΔ=20 size 0x273→0x267
flags: JCC_MNEM
- jcc ORIG {'jmp': 6, 'jne': 2, 'je': 5, 'jg': 1} OURS {'jmp': 5, 'jne': 4, 'jg': 1, 'je': 3}
ORIG leftover (canon):
  - jmp    <T>
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - cmp    $0x58,%r
OURS leftover (canon):
  + jne    <T>
  + jne    <T>
  + cmpl   $0x58,SLOT(%r)
  + cmpl   $0x68,SLOT(%r)
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r

## monitor `_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt` [DIFF] pm=58 canonΔ=16 size 0x25d→0x251
flags: JCC_MNEM
- jcc ORIG {'jmp': 6, 'jne': 2, 'je': 3, 'jg': 1} OURS {'jmp': 5, 'jne': 4, 'jg': 1, 'je': 1}
ORIG leftover (canon):
  - jmp    <T>
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - cmp    $0x58,%r
  - je     <T>
  - je     <T>
OURS leftover (canon):
  + jne    <T>
  + jne    <T>
  + cmpl   $0x58,SLOT(%r)
  + cmpl   $0x68,SLOT(%r)
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r

## monitor `_ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t` [NEAR] pm=2 canonΔ=0 size 0x37→0x37
flags: SHAPE_ONLY
canon multisets equal (reg/slot/target stripped)

## statics `_ZN14CNetworkThread8dispatchEPv` [DIFF] pm=180 canonΔ=2 size 0x752→0x757
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + setne  %al
  + test   %al,%al

## statics `_ZN16StatisticManager16AddLagStatisticsEP26Packet_Stat_Lag_Statistics` [DIFF] pm=437 canonΔ=93 size 0x6c5→0x69e
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x4,%esp'] OURS ['sub    $0x4,%esp']
- imm ORIG-only ['$0x1', '$0x13', '$0x1a', '$0x3', '$0x37', '$0x37', '$0x37', '$0x37', '$0x4', '$0x4'] OURS-only ['$0x0', '$0x0', '$0x374', '$0x374', '$0x378', '$0x378', '$0x37c', '$0x37c']
- jcc ORIG {'jmp': 6, 'je': 4, 'ja': 1, 'jne': 2} OURS {'jmp': 8, 'je': 4, 'ja': 1, 'jne': 2}
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - add    0xc(%r),%r
  - add    0xc(%r),%r
OURS leftover (canon):
  + jmp    <T>
  + jmp    <T>
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + mov    0xc(%r),%r
  + mov    0xb(%r,%r,1),%r

## statics `_ZN16StatisticManager19SendDBLagStatisticsEP14CServerHandlerPc` [DIFF] pm=211 canonΔ=27 size 0x499→0x49e
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1', '$0x37', '$0x37', '$0x37', '$0x37', '$0x37', '$0x37', '$0x4', '$0x8', '$0xc'] OURS-only ['$0x374', '$0x378', '$0x37c', '$0x37c', '$0x37c', '$0x37c']
- jcc ORIG {'jmp': 2, 'jle': 1, 'je': 1, 'jne': 1} OURS {'jmp': 3, 'jle': 1, 'jne': 2}
ORIG leftover (canon):
  - add    $0xc,%r
  - add    $0xc,%r
  - add    $0xc,%r
  - add    $0xc,%r
  - add    $0x37,%r
  - add    $0x37,%r
  - add    $0x37,%r
  - add    $0x37,%r
OURS leftover (canon):
  + jmp    <T>
  + add    $0x37c,%r
  + add    $0x37c,%r
  + add    $0x37c,%r
  + add    $0x37c,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r

## statics `_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler` [DIFF] pm=203 canonΔ=49 size 0x4ba→0x4b3
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    %eax,%edx', 'sub    $0x178a,%eax', 'sub    %eax,%edx', 'sub    $0x178a,%eax', 'sub    %eax,%edx', 'sub    $0x178a,%eax', 'sub    %eax,%edx', 'sub    $0x177a,%eax', 'sub    %eax,%edx', 'sub    $0x177a,%eax', 'sub    %eax,%edx', 'sub    $0x177a,%eax', 'sub    $0x176a,%eax', 'sub    $0x176a,%eax', 'sub    $0x176a,%eax'] OURS ['sub    %ebx,%eax', 'sub    %eax,%edx', 'sub    $0x1792,%eax', 'sub    %eax,%edx', 'sub    $0x178e,%eax', 'sub    $0x1786,%eax', 'sub    %eax,%edx', 'sub    $0x1782,%eax', 'sub    %eax,%edx', 'sub    $0x177e,%eax', 'sub    %eax,%edx', 'sub    $0x1776,%eax', 'sub    $0x1772,%eax', 'sub    $0x176e,%eax']
- imm ORIG-only ['$0x176a', '$0x176a', '$0x176a', '$0x177a', '$0x177a', '$0x177a', '$0x178a', '$0x178a', '$0x178a', '$0x2'] OURS-only ['$0x1', '$0x176e', '$0x1772', '$0x1776', '$0x177e', '$0x1782', '$0x1786', '$0x178e', '$0x1792']
- jcc ORIG {'je': 3, 'jmp': 1} OURS {'je': 2, 'jmp': 1, 'jbe': 1}
ORIG leftover (canon):
  - je     <T>
  - mov    %r,0xe(%r)
  - mov    %r,0xe(%r)
  - mov    %r,0xe(%r)
  - mov    SLOT(%r),%r
  - lea    SLOT(%r),%r
  - shl    $0x2,%r
  - add    %r,%r
OURS leftover (canon):
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + add    $0x1,%r
  + mov    %r,-0x1788(%r,%r,4)
  + sub    $0x1792,%r
  + mov    %r,0x1a(%r)
  + mov    %r,0x1a(%r)

## statics `_ZN16StatisticManager22AddSecretShopStatisticEP28Packet_Secret_Shop_Statistic` [DIFF] pm=33 canonΔ=13 size 0x22a→0x228
flags: IMM
- imm ORIG-only ['$0x10', '$0x10', '$0x10'] OURS-only ['$0x18', '$0x1c']
ORIG leftover (canon):
  - add    $0x10,%r
  - add    $0x10,%r
  - add    $0x10,%r
  - mov    0xe(%r),%r
  - mov    0x6(%r),%r
  - lea    (%r,%r,1),%r
  - mov    0xa(%r),%r
OURS leftover (canon):
  + add    $0x1c,%r
  + mov    0x2(%r),%r
  + mov    0x2(%r),%r
  + lea    0x1(%r),%r
  + mov    0x2(%r,%r,1),%r
  + add    $0x18,%r

## statics `_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler` [DIFF] pm=32 canonΔ=16 size 0x3a3→0x3a7
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x17d5,%eax'] OURS ['sub    $0x17d1,%eax']
- imm ORIG-only ['$0x17d5'] OURS-only ['$0x17d1']
- jcc ORIG {'je': 3, 'jmp': 1} OURS {'je': 2, 'jmp': 1, 'jbe': 1}
ORIG leftover (canon):
  - je     <T>
  - sub    $0x17d5,%r
  - mov    %r,0x13(%r)
  - mov    SLOT(%r),%r
  - cmp    $0xf2,%r
  - seta   %al
  - test   %al,%al
OURS leftover (canon):
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + sub    $0x17d1,%r
  + mov    %r,0xf(%r)
  + cmpl   $0xf2,SLOT(%r)

## statics `_ZN16StatisticManager23SendDBTingUserTimeCheckEP14CServerHandler` [DIFF] pm=13 canonΔ=7 size 0x1a5→0x19f
flags: JCC_MNEM
- jcc ORIG {'je': 3, 'jmp': 1} OURS {'je': 2, 'jmp': 1, 'jbe': 1}
ORIG leftover (canon):
  - je     <T>
  - mov    SLOT(%r),%r
  - cmp    $0x2fd,%r
  - seta   %al
  - test   %al,%al
OURS leftover (canon):
  + cmpl   $0x2fd,SLOT(%r)
  + jbe    <T>

## statics `_ZN16StatisticManager26AddTowerOfDespairStatisticEP35Packet_TowerOfDespair_Statistic_GTS` [DIFF] pm=14 canonΔ=2 size 0x9d→0xa4
flags: JCC_MNEM
- jcc ORIG {'jle': 1, 'jg': 1, 'je': 1, 'jmp': 3} OURS {'jle': 1, 'jg': 1, 'je': 1, 'jmp': 4}
ORIG leftover (canon):
OURS leftover (canon):
  + jmp    <T>
  + nop

## statics `_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler` [DIFF] pm=193 canonΔ=43 size 0x44c→0x445
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x1765,%edx', 'sub    $0x1765,%edx', 'sub    $0x1765,%edx', 'sub    $0x1755,%edx', 'sub    $0x1755,%edx', 'sub    $0x1755,%edx', 'sub    $0x1745,%edx', 'sub    $0x1745,%edx', 'sub    $0x1745,%edx'] OURS ['sub    $0x1771,%edx', 'sub    $0x176d,%edx', 'sub    $0x1769,%edx', 'sub    $0x1761,%edx', 'sub    $0x175d,%edx', 'sub    $0x1759,%edx', 'sub    $0x1751,%edx', 'sub    $0x174d,%edx', 'sub    $0x1749,%edx']
- imm ORIG-only ['$0x1745', '$0x1745', '$0x1745', '$0x1755', '$0x1755', '$0x1755', '$0x1765', '$0x1765', '$0x1765'] OURS-only ['$0x1749', '$0x174d', '$0x1751', '$0x1759', '$0x175d', '$0x1761', '$0x1769', '$0x176d', '$0x1771']
- jcc ORIG {'je': 3, 'jmp': 1} OURS {'je': 2, 'jmp': 1, 'jbe': 1}
ORIG leftover (canon):
  - je     <T>
  - mov    %r,0x11(%r)
  - mov    %r,0x11(%r)
  - mov    %r,0x11(%r)
  - mov    SLOT(%r),%r
  - sub    $0x1765,%r
  - sub    $0x1765,%r
  - sub    $0x1765,%r
OURS leftover (canon):
  + sub    $0x1771,%r
  + mov    %r,0x1d(%r)
  + mov    %r,0x1d(%r)
  + mov    %r,0x1d(%r)
  + mov    %r,0x1d(%r)
  + mov    %r,0x1d(%r)
  + mov    %r,0x1d(%r)
  + mov    %r,0x1d(%r)

## statics `_ZN16StatisticManager26WriteDungeonPartyStatisticEP30Packet_Dungeon_Statistic_Party` [DIFF] pm=129 canonΔ=17 size 0x2be→0x2cf
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0xf0,%esp'] OURS ['sub    $0xe0,%esp']
- imm ORIG-only ['$0x10', '$0xf0'] OURS-only ['$0xe0']
- jcc ORIG {'jne': 1, 'je': 2, 'jmp': 5} OURS {'jne': 1, 'je': 2, 'jmp': 8}
ORIG leftover (canon):
  - sub    $0xf0,%r
  - mov    %r,SLOT(%r)
  - add    $0x10,%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + sub    $0xe0,%r
  + test   %al,%al
  + test   %al,%al
  + test   %al,%al
  + test   %al,%al
  + setne  %al
  + setne  %al
  + setne  %al

## statics `_ZN16StatisticManager27WriteAssertManagerStatisticEP26Packet_Assert_Manager_Info` [DIFF] pm=93 canonΔ=11 size 0x333→0x32f
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x204'] OURS-only ['$0x1']
- jcc ORIG {'je': 2, 'jmp': 6} OURS {'je': 2, 'jmp': 7}
ORIG leftover (canon):
  - mov    %r,(%r)
  - add    $0x204,%r
  - mov    %r,SLOT(%r)
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    (%r),%r
  - lea    0x1(%r),%r
OURS leftover (canon):
  + jmp    <T>
  + mov    0x204(%r),%r
  + add    $0x1,%r
  + mov    %r,0x204(%r)

## statics `_ZN16StatisticManager27WriteHellPartyStatisticItemEP31Packet_HellParty_Statistic_Item` [DIFF] pm=95 canonΔ=9 size 0x210→0x212
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0xc'] OURS-only []
- jcc ORIG {'jne': 1, 'je': 2, 'jmp': 5} OURS {'jne': 1, 'je': 2, 'jmp': 8}
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - add    $0xc,%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + test   %al,%al
  + setne  %al
  + jmp    <T>
  + jmp    <T>
  + jmp    <T>
  + lea    0xc(%r),%r

## statics `_ZN16StatisticManager28SendDBAssertManagerStatisticEP14CServerHandler` [DIFF] pm=52 canonΔ=20 size 0x239→0x231
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x1160,%edx', 'sub    $0x1150,%edx'] OURS []
- imm ORIG-only ['$0x100', '$0x1150', '$0x1160', '$0x14'] OURS-only ['$0x10e', '$0x110', '$0x114']
- jcc ORIG {'je': 3, 'jmp': 1} OURS {'je': 2, 'jmp': 1, 'jbe': 1}
ORIG leftover (canon):
  - je     <T>
  - mov    SLOT(%r),%r
  - lea    (%r,%r,1),%r
  - lea    (%r,%r,1),%r
  - sub    $0x1160,%r
  - mov    %ax,0xe(%r)
  - sub    $0x1150,%r
  - add    $0x100,%r
OURS leftover (canon):
  + add    %r,%r
  + add    %r,%r
  + add    $0x10e,%r
  + mov    %ax,(%r)
  + add    $0x110,%r
  + add    $0x114,%r
  + cmpl   $0x8,SLOT(%r)
  + jbe    <T>

## statics `_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler` [DIFF] pm=121 canonΔ=31 size 0x2aa→0x2a4
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0x17ca,%eax', 'sub    $0x17ca,%eax', 'sub    $0x17ca,%eax', 'sub    $0x17ca,%eax', 'sub    $0x17ca,%eax', 'sub    $0x17ca,%eax'] OURS []
- imm ORIG-only ['$0x17ca', '$0x17ca', '$0x17ca', '$0x17ca', '$0x17ca', '$0x17ca'] OURS-only ['$0x13', '$0x14', '$0x15', '$0x16', '$0xe', '$0xf']
- jcc ORIG {'je': 3, 'jmp': 1} OURS {'je': 2, 'jmp': 1, 'jbe': 1}
ORIG leftover (canon):
  - je     <T>
  - mov    SLOT(%r),%r
  - sub    $0x17ca,%r
  - sub    $0x17ca,%r
  - sub    $0x17ca,%r
  - sub    $0x17ca,%r
  - sub    $0x17ca,%r
  - sub    $0x17ca,%r
OURS leftover (canon):
  + add    $0xe,%r
  + mov    %al,(%r)
  + mov    %al,(%r)
  + mov    %al,(%r)
  + mov    %al,(%r)
  + add    $0xf,%r
  + mov    %r,(%r)
  + mov    %r,(%r)

## statics `_ZN16StatisticManager30AddLoadingTimeReportStatisticsEP37Packet_Loading_Time_Report_Statistics` [DIFF] pm=355 canonΔ=13 size 0x592→0x5a6
flags: FRAME,IMM,JCC_MNEM
- frame ORIG ['sub    $0xb0,%esp'] OURS ['sub    $0xc0,%esp']
- imm ORIG-only ['$0xb0'] OURS-only ['$0x0', '$0x0', '$0x58', '$0xc0']
- jcc ORIG {'jmp': 15, 'je': 9, 'jne': 6} OURS {'jmp': 17, 'je': 9, 'jne': 6}
ORIG leftover (canon):
  - sub    $0xb0,%r
  - lea    0x58(%r),%r
  - test   %al,%al
  - test   %al,%al
OURS leftover (canon):
  + sub    $0xc0,%r
  + jmp    <T>
  + jmp    <T>
  + mov    SLOT(%r),%r
  + add    $0x58,%r
  + mov    %al,SLOT(%r)
  + mov    %al,SLOT(%r)
  + cmpb   $0x0,SLOT(%r)

## statics `_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler` [DIFF] pm=86 canonΔ=16 size 0x20d→0x215
flags: FRAME,IMM
- frame ORIG ['sub    $0x17f5,%eax', 'sub    $0x1803,%eax', 'sub    $0x1803,%eax', 'sub    $0x1803,%eax'] OURS ['sub    $0x17f9,%eax', 'sub    $0x1807,%eax', 'sub    $0x1807,%eax', 'sub    $0x1807,%eax']
- imm ORIG-only ['$0x17f5', '$0x1803', '$0x1803', '$0x1803'] OURS-only ['$0x0', '$0x17f9', '$0x1807', '$0x1807', '$0x1807']
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - sub    $0x17f5,%r
  - sub    $0x1803,%r
  - sub    $0x1803,%r
  - sub    $0x1803,%r
  - cmp    $0x196,%r
  - test   %al,%al
OURS leftover (canon):
  + mov    %r,%r
  + mov    %r,%r
  + sub    $0x17f9,%r
  + sub    $0x1807,%r
  + sub    $0x1807,%r
  + sub    $0x1807,%r
  + cmpl   $0x196,SLOT(%r)
  + mov    %al,SLOT(%r)

## statics `_ZN16StatisticManager32SendDBUserTingTimeCheckStatisticEP14CServerHandler` [DIFF] pm=13 canonΔ=7 size 0x1a5→0x19f
flags: JCC_MNEM
- jcc ORIG {'je': 3, 'jmp': 1} OURS {'je': 2, 'jmp': 1, 'jbe': 1}
ORIG leftover (canon):
  - je     <T>
  - mov    SLOT(%r),%r
  - cmp    $0x2fd,%r
  - seta   %al
  - test   %al,%al
OURS leftover (canon):
  + cmpl   $0x2fd,SLOT(%r)
  + jbe    <T>

## statics `_ZN16StatisticManager32WriteDungeonPartyCharacStatisticEP37Packet_Dungeon_Statistic_Party_Charac` [DIFF] pm=125 canonΔ=11 size 0x2c9→0x2d0
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x14'] OURS-only []
- jcc ORIG {'jne': 1, 'je': 2, 'jmp': 5} OURS {'jne': 1, 'je': 2, 'jmp': 8}
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - add    $0x14,%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + test   %al,%al
  + test   %al,%al
  + setne  %al
  + setne  %al
  + jmp    <T>
  + jmp    <T>
  + jmp    <T>
  + lea    0x14(%r),%r

## statics `_ZN16StatisticManager35WriteDeathTowerPlayDataJobStatisticEP40Packet_DeathTower_Statistic_Playdata_Job` [DIFF] pm=85 canonΔ=7 size 0x1cf→0x1cf
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0xc'] OURS-only []
- jcc ORIG {'je': 1, 'jmp': 4} OURS {'je': 1, 'jmp': 7}
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - add    $0xc,%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + jmp    <T>
  + jmp    <T>
  + jmp    <T>
  + lea    0xc(%r),%r

## statics `_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler` [DIFF] pm=15 canonΔ=7 size 0x3c0→0x3ba
flags: JCC_MNEM
- jcc ORIG {'je': 3, 'jmp': 2} OURS {'je': 2, 'jmp': 2, 'jbe': 1}
ORIG leftover (canon):
  - je     <T>
  - mov    SLOT(%r),%r
  - cmp    $0x17d,%r
  - seta   %al
  - test   %al,%al
OURS leftover (canon):
  + cmpl   $0x17d,SLOT(%r)
  + jbe    <T>

## statics `_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party` [DIFF] pm=81 canonΔ=7 size 0x1bb→0x1bb
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x4'] OURS-only []
- jcc ORIG {'je': 1, 'jmp': 4} OURS {'je': 1, 'jmp': 7}
ORIG leftover (canon):
  - mov    %r,SLOT(%r)
  - add    $0x4,%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + jmp    <T>
  + jmp    <T>
  + jmp    <T>
  + lea    0x4(%r),%r

## statics `_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler` [DIFF] pm=13 canonΔ=7 size 0x269→0x263
flags: JCC_MNEM
- jcc ORIG {'je': 3, 'jmp': 1} OURS {'je': 2, 'jmp': 1, 'jbe': 1}
ORIG leftover (canon):
  - je     <T>
  - mov    SLOT(%r),%r
  - cmp    $0x263,%r
  - seta   %al
  - test   %al,%al
OURS leftover (canon):
  + cmpl   $0x263,SLOT(%r)
  + jbe    <T>

## statics `_ZN17CHWSpecResearcher14SendDBMWHWSpecEP14CServerHandlerh` [DIFF] pm=12 canonΔ=2 size 0x1a1→0x1a1
flags: IMM
- imm ORIG-only ['$0x11'] OURS-only []
ORIG leftover (canon):
  - add    $0x11,%r
OURS leftover (canon):
  + lea    0x11(%r),%r

## statics `_ZN17CHWSpecResearcher17SendDBMWErrorLineEP14CServerHandler` [DIFF] pm=11 canonΔ=1 size 0x186→0x184
flags: SHAPE_ONLY
ORIG leftover (canon):
  - mov    %r,%r
OURS leftover (canon):

## statics `_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader` [DIFF] pm=51 canonΔ=13 size 0x9b2→0x9b1
flags: IMM
- imm ORIG-only ['$0x4', '$0x4'] OURS-only []
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - add    %r,%r
  - add    %r,%r
  - add    $0x4,%r
  - add    $0x4,%r
OURS leftover (canon):
  + add    SLOT(%r),%r
  + add    SLOT(%r),%r
  + lea    0x4(%r),%r
  + lea    0x4(%r),%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r

## statics `_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler` [DIFF] pm=11 canonΔ=1 size 0x17b→0x17d
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + mov    %r,%r

## statics `_ZN17FrameLagCollector17accFrameLagStructERNS_18FrameLagDataStructEP14FrameLagStruct` [DIFF] pm=519 canonΔ=125 size 0x420→0x42f
flags: FRAME,IMM
- frame ORIG ['sub    $0x24,%esp', 'sub    %eax,%ecx', 'sub    %eax,%esi', 'sub    %eax,%edi', 'sub    %eax,%esi', 'sub    %eax,%edi', 'sub    %eax,%esi', 'sub    %eax,%edi', 'sub    %eax,%esi', 'sub    %ecx,%eax', 'sub    %edx,%eax', 'sub    %edx,%eax', 'sub    %ecx,%eax', 'sub    %ecx,%eax', 'sub    %eax,%edi', 'sub    %edx,%eax', 'sub    %ecx,%eax', 'sub    %eax,%ebx', 'sub    %edx,%eax', 'sub    %edx,%eax', 'sub    %ecx,%eax', 'sub    %edx,%eax', 'sub    %ecx,%eax', 'add    $0x24,%esp'] OURS ['sub    $0x2c,%esp', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %eax,%ebx', 'sub    %eax,%edi', 'sub    %edx,%eax', 'sub    %edx,%eax', 'sub    %edx,%eax', 'sub    %edx,%eax', 'sub    %edx,%eax', 'sub    %edx,%eax', 'sub    %eax,%edi', 'sub    %edx,%eax', 'sub    %edx,%eax', 'sub    %eax,%esi', 'sub    %edx,%eax', 'sub    %edx,%eax', 'sub    %edx,%eax', 'sub    %edx,%eax', 'add    $0x2c,%esp']
- imm ORIG-only ['$0x0', '$0x1', '$0x1', '$0x1', '$0x1', '$0x1e', '$0x1e', '$0x1e', '$0x1e', '$0x1e'] OURS-only ['$0x20', '$0x20', '$0x20', '$0x20', '$0x20', '$0x20', '$0x20', '$0x2c', '$0x2c', '$0x9']
ORIG leftover (canon):
  - sub    $0x24,%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
OURS leftover (canon):
  + sub    $0x2c,%r
  + mov    0x10(%r),%r
  + mov    0x10(%r),%r
  + mov    0x10(%r),%r
  + mov    0x10(%r),%r
  + mov    0x10(%r),%r
  + mov    0x10(%r),%r
  + mov    0x10(%r),%r

## statics `_ZN17FrameLagCollector18FrameLagDataStruct4initEv` [DIFF] pm=81 canonΔ=23 size 0x177→0x170
flags: FRAME,IMM
- frame ORIG ['add    $0x10,%esp'] OURS []
- imm ORIG-only ['$0x10', '$0x1e', '$0x8'] OURS-only ['$0x20']
ORIG leftover (canon):
  - push   %r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - add    $0x8,%r
  - add    %r,%r
  - add    %r,%r
  - add    $0x1e,%r
  - movl   $0x0,0x10(%r,%r,8)
OURS leftover (canon):
  + lea    0x8(%r),%r
  + mov    %r,%r
  + mov    %r,%r
  + add    SLOT(%r),%r
  + add    SLOT(%r),%r
  + add    $0x20,%r
  + movl   $0x0,(%r,%r,8)
  + movl   $0x0,0x104(%r,%r,8)

## statics `_ZN17FrameLagCollector22PushMonitoringSpecDataEP43Packet_Frame_Lag_Statistic_Result_Load_Spec` [DIFF] pm=168 canonΔ=30 size 0x274→0x279
flags: IMM,JCC_MNEM
- imm ORIG-only ['$0x1c', '$0x2', '$0x4', '$0x54', '$0x8'] OURS-only ['$0x0', '$0x0']
- jcc ORIG {'jmp': 3, 'jne': 2, 'je': 3, 'jge': 1} OURS {'jmp': 5, 'je': 4, 'jge': 1, 'jne': 1}
ORIG leftover (canon):
  - jne    <T>
  - mov    0xc(%r),%r
  - mov    0xc(%r),%r
  - lea    0xb(%r),%r
  - lea    0xb(%r),%r
  - add    $0x1c,%r
  - add    $0x8,%r
  - mov    0xb(%r,%r,4),%r
OURS leftover (canon):
  + jmp    <T>
  + jmp    <T>
  + je     <T>
  + mov    $0x0,%r
  + mov    $0x0,%r
  + mov    0xb(%r),%r
  + mov    %r,SLOT(%r)
  + mov    %r,SLOT(%r)

## statics `_ZN17FrameLagCollector25is_valid_statistic_packetEP30Packet_Frame_Lag_Statistic_Add` [DIFF] pm=96 canonΔ=22 size 0x186→0x18f
flags: FRAME
- frame ORIG ['sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx', 'sub    %eax,%edx'] OURS ['sub    %eax,%ebx', 'sub    %eax,%ebx', 'sub    %eax,%ebx', 'sub    %eax,%ebx']
ORIG leftover (canon):
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - mov    SLOT(%r),%r
  - add    %r,%r
  - add    %r,%r
  - add    %r,%r
  - fucompp
  - fnstsw %ax
OURS leftover (canon):
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r

## statics `_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler` [DIFF] pm=35 canonΔ=3 size 0x179→0x17f
flags: SHAPE_ONLY
ORIG leftover (canon):
OURS leftover (canon):
  + mov    %r,%r
  + mov    %r,%r
  + mov    %r,%r
