# DB_UpdateVendingMachineStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08434718 DB_UpdateVendingMachineStatistic::dispatch  [0x08434718-0x8434877] ===
 8434718:	55                   	push   %ebp
 8434719:	89 e5                	mov    %esp,%ebp
 843471b:	56                   	push   %esi
 843471c:	53                   	push   %ebx
 843471d:	83 ec 40             	sub    $0x40,%esp
 8434720:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8434725:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843472c:	00 
 843472d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8434734:	00 
 8434735:	89 04 24             	mov    %eax,(%esp)
 8434738:	e8 01 0b fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843473d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8434740:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8434747:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 843474e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8434751:	89 44 24 04          	mov    %eax,0x4(%esp)
 8434755:	8b 45 14             	mov    0x14(%ebp),%eax
 8434758:	89 04 24             	mov    %eax,(%esp)
 843475b:	e8 36 80 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8434760:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8434763:	89 44 24 04          	mov    %eax,0x4(%esp)
 8434767:	8b 45 14             	mov    0x14(%ebp),%eax
 843476a:	89 04 24             	mov    %eax,(%esp)
 843476d:	e8 24 80 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8434772:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8434775:	85 c0                	test   %eax,%eax
 8434777:	75 0a                	jne    8434783 <_ZN32DB_UpdateVendingMachineStatistic8dispatchEiiP6Stream+0x6b>
 8434779:	b8 01 00 00 00       	mov    $0x1,%eax
 843477e:	e9 ed 00 00 00       	jmp    8434870 <_ZN32DB_UpdateVendingMachineStatistic8dispatchEiiP6Stream+0x158>
 8434783:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8434786:	e8 f6 79 c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 843478b:	89 04 24             	mov    %eax,(%esp)
 843478e:	e8 37 63 d1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8434793:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8434797:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 843479e:	00 
 843479f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84347a3:	c7 44 24 04 f4 2c c5 	movl   $0x8c52cf4,0x4(%esp)
 84347aa:	08 
 84347ab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84347ae:	89 04 24             	mov    %eax,(%esp)
 84347b1:	e8 0a fa fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84347b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84347bd:	00 
 84347be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84347c1:	89 04 24             	mov    %eax,(%esp)
 84347c4:	e8 5d fb fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84347c9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84347d0:	e9 82 00 00 00       	jmp    8434857 <_ZN32DB_UpdateVendingMachineStatistic8dispatchEiiP6Stream+0x13f>
 84347d5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84347dc:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84347e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84347e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84347ea:	8b 45 14             	mov    0x14(%ebp),%eax
 84347ed:	89 04 24             	mov    %eax,(%esp)
 84347f0:	e8 d3 7f 1e 00       	call   861c7c8 <_ZN6StreamrsERm>
 84347f5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84347f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84347fc:	8b 45 14             	mov    0x14(%ebp),%eax
 84347ff:	89 04 24             	mov    %eax,(%esp)
 8434802:	e8 8f 7f 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8434807:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843480a:	85 c0                	test   %eax,%eax
 843480c:	74 5c                	je     843486a <_ZN32DB_UpdateVendingMachineStatistic8dispatchEiiP6Stream+0x152>
 843480e:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8434811:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8434814:	e8 68 79 c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8434819:	89 04 24             	mov    %eax,(%esp)
 843481c:	e8 a9 62 d1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8434821:	89 74 24 10          	mov    %esi,0x10(%esp)
 8434825:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8434829:	89 44 24 08          	mov    %eax,0x8(%esp)
 843482d:	c7 44 24 04 f4 2c c5 	movl   $0x8c52cf4,0x4(%esp)
 8434834:	08 
 8434835:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8434838:	89 04 24             	mov    %eax,(%esp)
 843483b:	e8 80 f9 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8434840:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8434847:	00 
 8434848:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843484b:	89 04 24             	mov    %eax,(%esp)
 843484e:	e8 d3 fa fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8434853:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8434857:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843485a:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 843485d:	0f 92 c0             	setb   %al
 8434860:	84 c0                	test   %al,%al
 8434862:	0f 85 6d ff ff ff    	jne    84347d5 <_ZN32DB_UpdateVendingMachineStatistic8dispatchEiiP6Stream+0xbd>
 8434868:	eb 01                	jmp    843486b <_ZN32DB_UpdateVendingMachineStatistic8dispatchEiiP6Stream+0x153>
 843486a:	90                   	nop
 843486b:	b8 01 00 00 00       	mov    $0x1,%eax
 8434870:	83 c4 40             	add    $0x40,%esp
 8434873:	5b                   	pop    %ebx
 8434874:	5e                   	pop    %esi
 8434875:	5d                   	pop    %ebp
 8434876:	c3                   	ret
 8434877:	90                   	nop

```

```c
// DB_UpdateVendingMachineStatistic::dispatch @ 0x8434718

/* DB_UpdateVendingMachineStatistic::dispatch(int, int, Stream*) */

undefined4 DB_UpdateVendingMachineStatistic::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  ulong uVar2;
  CEnvironment *pCVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  uint local_24;
  ulong local_20;
  uint local_1c;
  uint local_18;
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  uVar1 = local_18;
  if (local_18 != 0) {
    pCVar3 = (CEnvironment *)G_CEnvironment();
    uVar4 = CEnvironment::get_channel_no(pCVar3);
    MySQL::set_query(local_14,
                     "inSert into log_vending_stat(occ_date,channel_no,item_id,cnt) values(cast(now() as date),%d,%d,%d)"
                     ,uVar4,0,uVar1);
    MySQL::exec(local_14,true);
    for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
      local_20 = 0;
      local_24 = 0;
      Stream::operator>>(in_stack_00000010,&local_20);
      Stream::operator>>(in_stack_00000010,&local_24);
      uVar2 = local_20;
      uVar1 = local_24;
      if (local_20 == 0) {
        return 1;
      }
      pCVar3 = (CEnvironment *)G_CEnvironment();
      uVar4 = CEnvironment::get_channel_no(pCVar3);
      MySQL::set_query(local_14,
                       "inSert into log_vending_stat(occ_date,channel_no,item_id,cnt) values(cast(now() as date),%d,%d,%d)"
                       ,uVar4,uVar2,uVar1);
      MySQL::exec(local_14,true);
    }
  }
  return 1;
}

```

