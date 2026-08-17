# DB_UpdateFatigueAttendance

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084444ec DB_UpdateFatigueAttendance::dispatch  [0x084444ec-0x84447d5] ===
 84444ec:	55                   	push   %ebp
 84444ed:	89 e5                	mov    %esp,%ebp
 84444ef:	57                   	push   %edi
 84444f0:	56                   	push   %esi
 84444f1:	53                   	push   %ebx
 84444f2:	83 ec 7c             	sub    $0x7c,%esp
 84444f5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84444fa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8444501:	00 
 8444502:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8444509:	00 
 844450a:	89 04 24             	mov    %eax,(%esp)
 844450d:	e8 2c 0d fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8444512:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8444515:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 844451c:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8444523:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8444526:	89 04 24             	mov    %eax,(%esp)
 8444529:	e8 9a 10 f4 ff       	call   83855c8 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEEC1Ev>
 844452e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8444531:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444535:	8b 45 14             	mov    0x14(%ebp),%eax
 8444538:	89 04 24             	mov    %eax,(%esp)
 844453b:	e8 56 82 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8444540:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8444543:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444547:	8b 45 14             	mov    0x14(%ebp),%eax
 844454a:	89 04 24             	mov    %eax,(%esp)
 844454d:	e8 72 80 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8444552:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8444559:	eb 5d                	jmp    84445b8 <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0xcc>
 844455b:	8d 45 a7             	lea    -0x59(%ebp),%eax
 844455e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444562:	8b 45 14             	mov    0x14(%ebp),%eax
 8444565:	89 04 24             	mov    %eax,(%esp)
 8444568:	e8 c5 81 1d 00       	call   861c732 <_ZN6StreamrsERh>
 844456d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8444570:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444574:	8b 45 14             	mov    0x14(%ebp),%eax
 8444577:	89 04 24             	mov    %eax,(%esp)
 844457a:	e8 d3 7f 1d 00       	call   861c552 <_ZN6StreamrsERs>
 844457f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8444582:	89 44 24 08          	mov    %eax,0x8(%esp)
 8444586:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8444589:	89 44 24 04          	mov    %eax,0x4(%esp)
 844458d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8444590:	89 04 24             	mov    %eax,(%esp)
 8444593:	e8 ec fa 00 00       	call   8454084 <_ZNSt4pairIKhsEC1IRhRsEEOT_OT0_>
 8444598:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844459b:	8d 55 dc             	lea    -0x24(%ebp),%edx
 844459e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84445a2:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84445a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84445a9:	89 04 24             	mov    %eax,(%esp)
 84445ac:	e8 03 fb 00 00       	call   84540b4 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE6insertERKS4_>
 84445b1:	83 ec 04             	sub    $0x4,%esp
 84445b4:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84445b8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84445bb:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 84445be:	0f 9c c0             	setl   %al
 84445c1:	84 c0                	test   %al,%al
 84445c3:	75 96                	jne    844455b <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0x6f>
 84445c5:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84445c8:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84445cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84445cf:	89 04 24             	mov    %eax,(%esp)
 84445d2:	e8 83 bb 00 00       	call   845015a <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE5beginEv>
 84445d7:	83 ec 04             	sub    $0x4,%esp
 84445da:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84445dd:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84445e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84445e4:	89 04 24             	mov    %eax,(%esp)
 84445e7:	e8 94 bb 00 00       	call   8450180 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 84445ec:	83 ec 04             	sub    $0x4,%esp
 84445ef:	e8 a7 7b c8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84445f4:	89 04 24             	mov    %eax,(%esp)
 84445f7:	e8 66 c5 cc ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84445fc:	c7 44 24 04 56 00 00 	movl   $0x56,0x4(%esp)
 8444603:	00 
 8444604:	89 04 24             	mov    %eax,(%esp)
 8444607:	e8 04 6b cc ff       	call   810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>
 844460c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444610:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8444613:	89 04 24             	mov    %eax,(%esp)
 8444616:	e8 95 33 2c 00       	call   87079b0 <_ZNSsC1ERKSs>
 844461b:	e9 42 01 00 00       	jmp    8444762 <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0x276>
 8444620:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8444623:	89 04 24             	mov    %eax,(%esp)
 8444626:	e8 8f bb 00 00       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 844462b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 844462f:	66 85 c0             	test   %ax,%ax
 8444632:	0f 9f c0             	setg   %al
 8444635:	84 c0                	test   %al,%al
 8444637:	0f 84 1a 01 00 00    	je     8444757 <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0x26b>
 844463d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8444640:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8444647:	00 
 8444648:	89 04 24             	mov    %eax,(%esp)
 844464b:	e8 fb 49 cc ff       	call   810904b <_Z14NumberToStringji>
 8444650:	89 c3                	mov    %eax,%ebx
 8444652:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8444655:	89 04 24             	mov    %eax,(%esp)
 8444658:	e8 5d bb 00 00       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 844465d:	0f b6 00             	movzbl (%eax),%eax
 8444660:	0f b6 f8             	movzbl %al,%edi
 8444663:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8444666:	89 04 24             	mov    %eax,(%esp)
 8444669:	e8 4c bb 00 00       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 844466e:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8444672:	0f bf f0             	movswl %ax,%esi
 8444675:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8444678:	89 04 24             	mov    %eax,(%esp)
 844467b:	e8 30 a4 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8444680:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8444684:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8444688:	89 74 24 0c          	mov    %esi,0xc(%esp)
 844468c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8444690:	c7 44 24 04 6c 71 c5 	movl   $0x8c5716c,0x4(%esp)
 8444697:	08 
 8444698:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844469b:	89 04 24             	mov    %eax,(%esp)
 844469e:	e8 1d fb fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84446a3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84446aa:	00 
 84446ab:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84446ae:	89 04 24             	mov    %eax,(%esp)
 84446b1:	e8 70 fc fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84446b6:	83 f0 01             	xor    $0x1,%eax
 84446b9:	84 c0                	test   %al,%al
 84446bb:	75 11                	jne    84446ce <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0x1e2>
 84446bd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84446c0:	89 04 24             	mov    %eax,(%esp)
 84446c3:	e8 48 fc fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84446c8:	09 d0                	or     %edx,%eax
 84446ca:	85 c0                	test   %eax,%eax
 84446cc:	75 07                	jne    84446d5 <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0x1e9>
 84446ce:	b8 01 00 00 00       	mov    $0x1,%eax
 84446d3:	eb 05                	jmp    84446da <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0x1ee>
 84446d5:	b8 00 00 00 00       	mov    $0x0,%eax
 84446da:	84 c0                	test   %al,%al
 84446dc:	74 79                	je     8444757 <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0x26b>
 84446de:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84446e1:	89 04 24             	mov    %eax,(%esp)
 84446e4:	e8 d1 ba 00 00       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 84446e9:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84446ed:	0f bf f8             	movswl %ax,%edi
 84446f0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84446f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84446fa:	00 
 84446fb:	89 04 24             	mov    %eax,(%esp)
 84446fe:	e8 48 49 cc ff       	call   810904b <_Z14NumberToStringji>
 8444703:	89 c3                	mov    %eax,%ebx
 8444705:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8444708:	89 04 24             	mov    %eax,(%esp)
 844470b:	e8 aa ba 00 00       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 8444710:	0f b6 00             	movzbl (%eax),%eax
 8444713:	0f b6 f0             	movzbl %al,%esi
 8444716:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8444719:	89 04 24             	mov    %eax,(%esp)
 844471c:	e8 8f a3 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8444721:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8444725:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8444729:	89 74 24 0c          	mov    %esi,0xc(%esp)
 844472d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8444731:	c7 44 24 04 b4 71 c5 	movl   $0x8c571b4,0x4(%esp)
 8444738:	08 
 8444739:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844473c:	89 04 24             	mov    %eax,(%esp)
 844473f:	e8 7c fa fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8444744:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844474b:	00 
 844474c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844474f:	89 04 24             	mov    %eax,(%esp)
 8444752:	e8 cf fb fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8444757:	8d 45 b0             	lea    -0x50(%ebp),%eax
 844475a:	89 04 24             	mov    %eax,(%esp)
 844475d:	e8 7e f9 00 00       	call   84540e0 <_ZNSt17_Rb_tree_iteratorISt4pairIKhsEEppEv>
 8444762:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8444765:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444769:	8d 45 b0             	lea    -0x50(%ebp),%eax
 844476c:	89 04 24             	mov    %eax,(%esp)
 844476f:	e8 32 ba 00 00       	call   84501a6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEneERKS3_>
 8444774:	84 c0                	test   %al,%al
 8444776:	0f 85 a4 fe ff ff    	jne    8444620 <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0x134>
 844477c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8444781:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8444784:	89 04 24             	mov    %eax,(%esp)
 8444787:	e8 54 34 2c 00       	call   8707be0 <_ZNSsD1Ev>
 844478c:	eb 30                	jmp    84447be <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0x2d2>
 844478e:	89 d3                	mov    %edx,%ebx
 8444790:	89 c6                	mov    %eax,%esi
 8444792:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8444795:	89 04 24             	mov    %eax,(%esp)
 8444798:	e8 43 34 2c 00       	call   8707be0 <_ZNSsD1Ev>
 844479d:	89 f0                	mov    %esi,%eax
 844479f:	89 da                	mov    %ebx,%edx
 84447a1:	eb 00                	jmp    84447a3 <_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream+0x2b7>
 84447a3:	89 d3                	mov    %edx,%ebx
 84447a5:	89 c6                	mov    %eax,%esi
 84447a7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84447aa:	89 04 24             	mov    %eax,(%esp)
 84447ad:	e8 bc cf f2 ff       	call   837176e <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEED1Ev>
 84447b2:	89 f0                	mov    %esi,%eax
 84447b4:	89 da                	mov    %ebx,%edx
 84447b6:	89 04 24             	mov    %eax,(%esp)
 84447b9:	e8 92 ef 69 00       	call   8ae3750 <_Unwind_Resume>
 84447be:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84447c1:	89 04 24             	mov    %eax,(%esp)
 84447c4:	e8 a5 cf f2 ff       	call   837176e <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEED1Ev>
 84447c9:	89 d8                	mov    %ebx,%eax
 84447cb:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84447ce:	83 c4 00             	add    $0x0,%esp
 84447d1:	5b                   	pop    %ebx
 84447d2:	5e                   	pop    %esi
 84447d3:	5f                   	pop    %edi
 84447d4:	5d                   	pop    %ebp
 84447d5:	c3                   	ret

```

```c
// DB_UpdateFatigueAttendance::dispatch @ 0x84444ec

/* DB_UpdateFatigueAttendance::dispatch(int, int, Stream*) */

undefined4 DB_UpdateFatigueAttendance::dispatch(int param_1,int param_2,Stream *param_3)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  CDataManager *this;
  CEventScriptMng *this_00;
  string *psVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  TCHAR *pTVar9;
  longlong lVar10;
  Stream *in_stack_00000010;
  short local_60;
  uchar local_5d;
  string local_5c;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_58 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_54 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_50 [24];
  int local_38;
  uint local_34;
  pair local_30 [8];
  pair<unsigned_char_const,short> local_28 [4];
  MySQL *local_24;
  int local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_34 = 0;
  local_38 = 0;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::map(local_50);
                    /* try { // try from 0844453b to 0844461a has its CatchHandler @ 084447a3 */
  Stream::operator>>(in_stack_00000010,&local_34);
  Stream::operator>>(in_stack_00000010,&local_38);
  for (local_20 = 0; local_20 < local_38; local_20 = local_20 + 1) {
    Stream::operator>>(in_stack_00000010,&local_5d);
    Stream::operator>>(in_stack_00000010,&local_60);
    std::pair<unsigned_char_const,short>::pair<unsigned_char&,short&>(local_28,&local_5d,&local_60);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::insert(local_30);
  }
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin(local_54);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end(local_58);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  psVar5 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_00,0x56);
  std::string::string((string *)&local_5c,psVar5);
  do {
    cVar4 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_54,
                       (_Rb_tree_iterator *)local_58);
    if (cVar4 == '\0') {
                    /* try { // try from 08444787 to 0844478b has its CatchHandler @ 084447a3 */
      std::string::~string((string *)&local_5c);
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::~map(local_50);
      return 1;
    }
    iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_54);
    if (0 < *(short *)(iVar6 + 2)) {
                    /* try { // try from 0844464b to 08444761 has its CatchHandler @ 0844478e */
      uVar7 = NumberToString(local_34,0);
      pbVar8 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                                 ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)
                                  local_54);
      bVar1 = *pbVar8;
      iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_54);
      sVar2 = *(short *)(iVar6 + 2);
      pTVar9 = toTString(&local_5c);
      MySQL::set_query(local_24,
                       "upDate %s set fatigue = fatigue + %d where occ_day = %d and m_id = %s",
                       pTVar9,(int)sVar2,(uint)bVar1,uVar7);
      cVar4 = MySQL::exec(local_24,true);
      if (cVar4 == '\x01') {
        lVar10 = MySQL::getAffectedRowCount(local_24);
        if (lVar10 == 0) goto LAB_084446ce;
        bVar3 = false;
      }
      else {
LAB_084446ce:
        bVar3 = true;
      }
      if (bVar3) {
        iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_54);
        sVar2 = *(short *)(iVar6 + 2);
        uVar7 = NumberToString(local_34,0);
        pbVar8 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                                   ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)
                                    local_54);
        bVar1 = *pbVar8;
        pTVar9 = toTString(&local_5c);
        MySQL::set_query(local_24,"inSert into %s(occ_day,m_id,fatigue) values(%d,%s,%d)",pTVar9,
                         (uint)bVar1,uVar7,(int)sVar2);
        MySQL::exec(local_24,true);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_54);
  } while( true );
}

```

---

## makeRequest

```asm
// === 084447d6 DB_UpdateFatigueAttendance::makeRequest  [0x084447d6-0x8444971] ===
 84447d6:	55                   	push   %ebp
 84447d7:	89 e5                	mov    %esp,%ebp
 84447d9:	56                   	push   %esi
 84447da:	53                   	push   %ebx
 84447db:	83 ec 20             	sub    $0x20,%esp
 84447de:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84447e3:	c7 44 24 08 72 ab 00 	movl   $0xab72,0x8(%esp)
 84447ea:	00 
 84447eb:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84447f2:	08 
 84447f3:	89 04 24             	mov    %eax,(%esp)
 84447f6:	e8 8b b2 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84447fb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8444802:	00 
 8444803:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444807:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844480a:	89 04 24             	mov    %eax,(%esp)
 844480d:	e8 14 44 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8444812:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444815:	89 04 24             	mov    %eax,(%esp)
 8444818:	e8 29 44 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844481d:	c7 44 24 04 ac 02 00 	movl   $0x2ac,0x4(%esp)
 8444824:	00 
 8444825:	89 04 24             	mov    %eax,(%esp)
 8444828:	e8 29 44 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844482d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444830:	89 04 24             	mov    %eax,(%esp)
 8444833:	e8 0e 44 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444838:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 844483f:	ff 
 8444840:	89 04 24             	mov    %eax,(%esp)
 8444843:	e8 0e 44 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444848:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844484b:	89 04 24             	mov    %eax,(%esp)
 844484e:	e8 f3 43 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444853:	8b 55 08             	mov    0x8(%ebp),%edx
 8444856:	89 54 24 04          	mov    %edx,0x4(%esp)
 844485a:	89 04 24             	mov    %eax,(%esp)
 844485d:	e8 30 da c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8444862:	8b 45 0c             	mov    0xc(%ebp),%eax
 8444865:	89 04 24             	mov    %eax,(%esp)
 8444868:	e8 d5 b9 00 00       	call   8450242 <_ZNKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE4sizeEv>
 844486d:	89 c3                	mov    %eax,%ebx
 844486f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444872:	89 04 24             	mov    %eax,(%esp)
 8444875:	e8 cc 43 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844487a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844487e:	89 04 24             	mov    %eax,(%esp)
 8444881:	e8 d0 43 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444886:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8444889:	8b 55 0c             	mov    0xc(%ebp),%edx
 844488c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444890:	89 04 24             	mov    %eax,(%esp)
 8444893:	e8 66 f8 00 00       	call   84540fe <_ZNKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE5beginEv>
 8444898:	83 ec 04             	sub    $0x4,%esp
 844489b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 844489e:	8b 55 0c             	mov    0xc(%ebp),%edx
 84448a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84448a5:	89 04 24             	mov    %eax,(%esp)
 84448a8:	e8 77 f8 00 00       	call   8454124 <_ZNKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 84448ad:	83 ec 04             	sub    $0x4,%esp
 84448b0:	eb 5c                	jmp    844490e <_ZN26DB_UpdateFatigueAttendance11makeRequestEjRKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE+0x138>
 84448b2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84448b5:	89 04 24             	mov    %eax,(%esp)
 84448b8:	e8 a1 f8 00 00       	call   845415e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEptEv>
 84448bd:	0f b6 00             	movzbl (%eax),%eax
 84448c0:	0f b6 d8             	movzbl %al,%ebx
 84448c3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84448c6:	89 04 24             	mov    %eax,(%esp)
 84448c9:	e8 78 43 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84448ce:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84448d2:	89 04 24             	mov    %eax,(%esp)
 84448d5:	e8 7a 8b 00 00       	call   844d454 <_ZN12CStreamGuardlsEh>
 84448da:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84448dd:	89 04 24             	mov    %eax,(%esp)
 84448e0:	e8 79 f8 00 00       	call   845415e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEptEv>
 84448e5:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84448e9:	0f bf d8             	movswl %ax,%ebx
 84448ec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84448ef:	89 04 24             	mov    %eax,(%esp)
 84448f2:	e8 4f 43 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84448f7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84448fb:	89 04 24             	mov    %eax,(%esp)
 84448fe:	e8 63 64 de ff       	call   822ad66 <_ZN12CStreamGuardlsEs>
 8444903:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8444906:	89 04 24             	mov    %eax,(%esp)
 8444909:	e8 5e f8 00 00       	call   845416c <_ZNSt23_Rb_tree_const_iteratorISt4pairIKhsEEppEv>
 844490e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8444911:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444915:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8444918:	89 04 24             	mov    %eax,(%esp)
 844491b:	e8 2a f8 00 00       	call   845414a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEneERKS3_>
 8444920:	84 c0                	test   %al,%al
 8444922:	75 8e                	jne    84448b2 <_ZN26DB_UpdateFatigueAttendance11makeRequestEjRKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE+0xdc>
 8444924:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8444929:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844492c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8444930:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8444937:	00 
 8444938:	89 04 24             	mov    %eax,(%esp)
 844493b:	e8 9e c6 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8444940:	eb 1b                	jmp    844495d <_ZN26DB_UpdateFatigueAttendance11makeRequestEjRKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE+0x187>
 8444942:	89 d3                	mov    %edx,%ebx
 8444944:	89 c6                	mov    %eax,%esi
 8444946:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444949:	89 04 24             	mov    %eax,(%esp)
 844494c:	e8 81 7f 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8444951:	89 f0                	mov    %esi,%eax
 8444953:	89 da                	mov    %ebx,%edx
 8444955:	89 04 24             	mov    %eax,(%esp)
 8444958:	e8 f3 ed 69 00       	call   8ae3750 <_Unwind_Resume>
 844495d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444960:	89 04 24             	mov    %eax,(%esp)
 8444963:	e8 6a 7f 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8444968:	8d 65 f8             	lea    -0x8(%ebp),%esp
 844496b:	83 c4 00             	add    $0x0,%esp
 844496e:	5b                   	pop    %ebx
 844496f:	5e                   	pop    %esi
 8444970:	5d                   	pop    %ebp
 8444971:	c3                   	ret

```

```c
// DB_UpdateFatigueAttendance::makeRequest @ 0x84447d6

/* DB_UpdateFatigueAttendance::makeRequest(unsigned int, std::map<unsigned char, short,
   std::less<unsigned char>, std::allocator<std::pair<unsigned char const, short> > > const&) */

void DB_UpdateFatigueAttendance::makeRequest(uint param_1,map *param_2)

{
  uchar uVar1;
  short sVar2;
  char cVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  uchar *puVar7;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_1c [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_18 [4];
  CStreamGuard local_14 [8];
  
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xab72);
  CStreamGuard::CStreamGuard(local_14,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08444828 to 0844493f has its CatchHandler @ 08444942 */
  CStreamGuard::operator<<(pCVar5,0x2ac);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar5,-1);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar5,param_1);
  iVar6 = std::
          map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
          ::size((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
                  *)param_2);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar5,iVar6);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin(local_18);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end(local_1c);
  while( true ) {
    cVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)local_18,
                       (_Rb_tree_const_iterator *)local_1c);
    if (cVar3 == '\0') break;
    puVar7 = (uchar *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                                ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)
                                 local_18);
    uVar1 = *puVar7;
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar5,uVar1);
    iVar6 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)local_18);
    sVar2 = *(short *)(iVar6 + 2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar5,sVar2);
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)local_18);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

