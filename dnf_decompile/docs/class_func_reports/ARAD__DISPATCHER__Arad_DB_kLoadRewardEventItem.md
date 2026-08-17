# ARAD__DISPATCHER__Arad_DB_kLoadRewardEventItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08185574 ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch  [0x08185574-0x81858dd] ===
 8185574:	55                   	push   %ebp
 8185575:	89 e5                	mov    %esp,%ebp
 8185577:	56                   	push   %esi
 8185578:	53                   	push   %ebx
 8185579:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 818557f:	8b 45 14             	mov    0x14(%ebp),%eax
 8185582:	89 04 24             	mov    %eax,(%esp)
 8185585:	e8 f2 19 00 00       	call   8186f7c <_ZN6Stream12GetOutBufferIN4arad22SigLoadRewardEventItemEEEPT_v>
 818558a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 818558d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8185591:	75 36                	jne    81855c9 <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x55>
 8185593:	c7 44 24 10 70 f9 b8 	movl   $0x8b8f970,0x10(%esp)
 818559a:	08 
 818559b:	c7 44 24 0c 96 07 00 	movl   $0x796,0xc(%esp)
 81855a2:	00 
 81855a3:	c7 44 24 08 a0 0b b9 	movl   $0x8b90ba0,0x8(%esp)
 81855aa:	08 
 81855ab:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 81855b2:	08 
 81855b3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81855ba:	e8 4b e6 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81855bf:	bb 00 00 00 00       	mov    $0x0,%ebx
 81855c4:	e9 08 03 00 00       	jmp    81858d1 <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x35d>
 81855c9:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 81855ce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81855d5:	00 
 81855d6:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 81855dd:	00 
 81855de:	89 04 24             	mov    %eax,(%esp)
 81855e1:	e8 58 fc 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81855e6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81855e9:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81855ed:	75 2c                	jne    818561b <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0xa7>
 81855ef:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81855f6:	e8 05 02 5a 00       	call   8725800 <__cxa_allocate_exception>
 81855fb:	89 c2                	mov    %eax,%edx
 81855fd:	c7 02 f7 f7 b8 08    	movl   $0x8b8f7f7,(%edx)
 8185603:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818560a:	00 
 818560b:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185612:	09 
 8185613:	89 04 24             	mov    %eax,(%esp)
 8185616:	e8 35 f6 59 00       	call   8724c50 <__cxa_throw>
 818561b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8185622:	e8 77 66 f4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8185627:	89 45 ec             	mov    %eax,-0x14(%ebp)
 818562a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 818562d:	8b 00                	mov    (%eax),%eax
 818562f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8185632:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8185636:	89 44 24 08          	mov    %eax,0x8(%esp)
 818563a:	c7 44 24 04 8c f9 b8 	movl   $0x8b8f98c,0x4(%esp)
 8185641:	08 
 8185642:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8185645:	89 04 24             	mov    %eax,(%esp)
 8185648:	e8 73 eb 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 818564d:	83 f0 01             	xor    $0x1,%eax
 8185650:	84 c0                	test   %al,%al
 8185652:	74 2c                	je     8185680 <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x10c>
 8185654:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 818565b:	e8 a0 01 5a 00       	call   8725800 <__cxa_allocate_exception>
 8185660:	89 c2                	mov    %eax,%edx
 8185662:	c7 02 79 f8 b8 08    	movl   $0x8b8f879,(%edx)
 8185668:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818566f:	00 
 8185670:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185677:	09 
 8185678:	89 04 24             	mov    %eax,(%esp)
 818567b:	e8 d0 f5 59 00       	call   8724c50 <__cxa_throw>
 8185680:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8185687:	00 
 8185688:	8b 45 e8             	mov    -0x18(%ebp),%eax
 818568b:	89 04 24             	mov    %eax,(%esp)
 818568e:	e8 93 ec 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 8185693:	83 f0 01             	xor    $0x1,%eax
 8185696:	84 c0                	test   %al,%al
 8185698:	74 2c                	je     81856c6 <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x152>
 818569a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81856a1:	e8 5a 01 5a 00       	call   8725800 <__cxa_allocate_exception>
 81856a6:	89 c2                	mov    %eax,%edx
 81856a8:	c7 02 83 f8 b8 08    	movl   $0x8b8f883,(%edx)
 81856ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81856b5:	00 
 81856b6:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 81856bd:	09 
 81856be:	89 04 24             	mov    %eax,(%esp)
 81856c1:	e8 8a f5 59 00       	call   8724c50 <__cxa_throw>
 81856c6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81856cd:	8d 45 86             	lea    -0x7a(%ebp),%eax
 81856d0:	89 04 24             	mov    %eax,(%esp)
 81856d3:	e8 ae 0f 00 00       	call   8186686 <_ZN4arad22SigLoadRewardEventItemC1Ev>
 81856d8:	e9 c2 00 00 00       	jmp    818579f <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x22b>
 81856dd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81856e0:	8d 45 86             	lea    -0x7a(%ebp),%eax
 81856e3:	c1 e2 02             	shl    $0x2,%edx
 81856e6:	01 d0                	add    %edx,%eax
 81856e8:	83 c0 06             	add    $0x6,%eax
 81856eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81856ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81856f6:	00 
 81856f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81856fa:	89 04 24             	mov    %eax,(%esp)
 81856fd:	e8 2a 12 f9 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8185702:	83 f0 01             	xor    $0x1,%eax
 8185705:	84 c0                	test   %al,%al
 8185707:	74 2c                	je     8185735 <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x1c1>
 8185709:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185710:	e8 eb 00 5a 00       	call   8725800 <__cxa_allocate_exception>
 8185715:	89 c2                	mov    %eax,%edx
 8185717:	c7 02 1a fa b8 08    	movl   $0x8b8fa1a,(%edx)
 818571d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185724:	00 
 8185725:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 818572c:	09 
 818572d:	89 04 24             	mov    %eax,(%esp)
 8185730:	e8 1b f5 59 00       	call   8724c50 <__cxa_throw>
 8185735:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8185738:	8d 45 86             	lea    -0x7a(%ebp),%eax
 818573b:	83 c2 08             	add    $0x8,%edx
 818573e:	c1 e2 02             	shl    $0x2,%edx
 8185741:	01 d0                	add    %edx,%eax
 8185743:	83 c0 0e             	add    $0xe,%eax
 8185746:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 818574a:	89 44 24 08          	mov    %eax,0x8(%esp)
 818574e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8185755:	00 
 8185756:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8185759:	89 04 24             	mov    %eax,(%esp)
 818575c:	e8 91 cb f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8185761:	83 f0 01             	xor    $0x1,%eax
 8185764:	84 c0                	test   %al,%al
 8185766:	74 2c                	je     8185794 <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x220>
 8185768:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 818576f:	e8 8c 00 5a 00       	call   8725800 <__cxa_allocate_exception>
 8185774:	89 c2                	mov    %eax,%edx
 8185776:	c7 02 24 fa b8 08    	movl   $0x8b8fa24,(%edx)
 818577c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185783:	00 
 8185784:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 818578b:	09 
 818578c:	89 04 24             	mov    %eax,(%esp)
 818578f:	e8 bc f4 59 00       	call   8724c50 <__cxa_throw>
 8185794:	0f b7 45 8a          	movzwl -0x76(%ebp),%eax
 8185798:	83 c0 01             	add    $0x1,%eax
 818579b:	66 89 45 8a          	mov    %ax,-0x76(%ebp)
 818579f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81857a2:	89 04 24             	mov    %eax,(%esp)
 81857a5:	e8 12 ed 26 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 81857aa:	84 c0                	test   %al,%al
 81857ac:	0f 85 2b ff ff ff    	jne    81856dd <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x169>
 81857b2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81857b7:	c7 44 24 08 b8 07 00 	movl   $0x7b8,0x8(%esp)
 81857be:	00 
 81857bf:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 81857c6:	08 
 81857c7:	89 04 24             	mov    %eax,(%esp)
 81857ca:	e8 b7 a2 10 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81857cf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81857d6:	00 
 81857d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81857db:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81857de:	89 04 24             	mov    %eax,(%esp)
 81857e1:	e8 40 34 f4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81857e6:	8b 45 10             	mov    0x10(%ebp),%eax
 81857e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81857ed:	c7 44 24 04 26 00 00 	movl   $0x26,0x4(%esp)
 81857f4:	00 
 81857f5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81857f8:	89 04 24             	mov    %eax,(%esp)
 81857fb:	e8 b6 1f 01 00       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 8185800:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8185803:	89 04 24             	mov    %eax,(%esp)
 8185806:	e8 43 34 f4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 818580b:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 8185812:	00 
 8185813:	8d 55 86             	lea    -0x7a(%ebp),%edx
 8185816:	89 54 24 04          	mov    %edx,0x4(%esp)
 818581a:	89 04 24             	mov    %eax,(%esp)
 818581d:	e8 30 8e f5 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8185822:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8185827:	8d 55 dc             	lea    -0x24(%ebp),%edx
 818582a:	89 54 24 08          	mov    %edx,0x8(%esp)
 818582e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8185835:	00 
 8185836:	89 04 24             	mov    %eax,(%esp)
 8185839:	e8 a0 b7 3e 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 818583e:	89 c3                	mov    %eax,%ebx
 8185840:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8185843:	89 04 24             	mov    %eax,(%esp)
 8185846:	e8 87 70 49 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 818584b:	e9 81 00 00 00       	jmp    81858d1 <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x35d>
 8185850:	89 d3                	mov    %edx,%ebx
 8185852:	89 c6                	mov    %eax,%esi
 8185854:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8185857:	89 04 24             	mov    %eax,(%esp)
 818585a:	e8 73 70 49 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 818585f:	89 f0                	mov    %esi,%eax
 8185861:	89 da                	mov    %ebx,%edx
 8185863:	eb 00                	jmp    8185865 <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x2f1>
 8185865:	83 fa 01             	cmp    $0x1,%edx
 8185868:	74 08                	je     8185872 <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x2fe>
 818586a:	89 04 24             	mov    %eax,(%esp)
 818586d:	e8 de de 95 00       	call   8ae3750 <_Unwind_Resume>
 8185872:	89 04 24             	mov    %eax,(%esp)
 8185875:	e8 66 04 5a 00       	call   8725ce0 <__cxa_begin_catch>
 818587a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818587d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8185880:	89 44 24 14          	mov    %eax,0x14(%esp)
 8185884:	c7 44 24 10 30 fa b8 	movl   $0x8b8fa30,0x10(%esp)
 818588b:	08 
 818588c:	c7 44 24 0c c0 07 00 	movl   $0x7c0,0xc(%esp)
 8185893:	00 
 8185894:	c7 44 24 08 a0 0b b9 	movl   $0x8b90ba0,0x8(%esp)
 818589b:	08 
 818589c:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 81858a3:	08 
 81858a4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81858ab:	e8 5a e3 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81858b0:	bb 00 00 00 00       	mov    $0x0,%ebx
 81858b5:	e8 76 03 5a 00       	call   8725c30 <__cxa_end_catch>
 81858ba:	eb 15                	jmp    81858d1 <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItem8dispatchEiiP6Stream+0x35d>
 81858bc:	89 d3                	mov    %edx,%ebx
 81858be:	89 c6                	mov    %eax,%esi
 81858c0:	e8 6b 03 5a 00       	call   8725c30 <__cxa_end_catch>
 81858c5:	89 f0                	mov    %esi,%eax
 81858c7:	89 da                	mov    %ebx,%edx
 81858c9:	89 04 24             	mov    %eax,(%esp)
 81858cc:	e8 7f de 95 00       	call   8ae3750 <_Unwind_Resume>
 81858d1:	89 d8                	mov    %ebx,%eax
 81858d3:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 81858d9:	5b                   	pop    %ebx
 81858da:	5e                   	pop    %esi
 81858db:	5d                   	pop    %ebp
 81858dc:	c3                   	ret
 81858dd:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch @ 0x8185574

/* ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch(int, int, Stream*) */

undefined4 __thiscall
ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch
          (Arad_DB_kLoadRewardEventItem *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  Stream *pSVar4;
  CStreamGuard *this_00;
  undefined4 uVar5;
  SigLoadRewardEventItem local_7e [4];
  short local_7a;
  uint auStack_78 [20];
  CStreamGuard local_28 [8];
  SigLoadRewardEventItem *local_20;
  MySQL *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_20 = Stream::GetOutBuffer<arad::SigLoadRewardEventItem>(param_3);
  if (local_20 == (SigLoadRewardEventItem *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kLoadRewardEventItem::dispatch(int, int, Stream*)"
               ,0x796,"SigRewardEventItem is null.");
    uVar5 = 0;
  }
  else {
                    /* try { // try from 081855e1 to 081857ce has its CatchHandler @ 08185865 */
    local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    if (local_1c == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    cVar2 = MySQL::set_query(local_1c,
                             " seLect event_id, charac_no from event_reward_item_arad  where (m_id = %u and end_date > from_unixtime(%u))  order by occ_date desc limit 10 "
                             ,*(undefined4 *)local_20,local_18);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar2 = MySQL::exec(local_1c,true);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    local_14 = 0;
    arad::SigLoadRewardEventItem::SigLoadRewardEventItem(local_7e);
    while( true ) {
      cVar2 = MySQL::fetch(local_1c);
      if (cVar2 == '\0') break;
      cVar2 = MySQL::get_int(local_1c,0,(int *)(auStack_78 + local_14));
      if (cVar2 != '\x01') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = "EventCode";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&char_const*::typeinfo,0);
      }
      iVar1 = local_14 + 10;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_uint(local_1c,1,auStack_78 + iVar1);
      if (cVar2 != '\x01') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = "Character";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&char_const*::typeinfo,0);
      }
      local_7a = local_7a + 1;
    }
    pSVar4 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_DatabaseDispatcher.cpp",
                                 0x7b8);
    CStreamGuard::CStreamGuard(local_28,pSVar4,true);
                    /* try { // try from 081857fb to 0818583d has its CatchHandler @ 08185850 */
    make_internal_stream_jpn(local_28,0x26,param_2);
    this_00 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    CStreamGuard::put_binary(this_00,local_7e,0x56);
    uVar5 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
                    /* try { // try from 08185846 to 0818584a has its CatchHandler @ 08185865 */
    CStreamGuard::~CStreamGuard(local_28);
  }
  return uVar5;
}

```

