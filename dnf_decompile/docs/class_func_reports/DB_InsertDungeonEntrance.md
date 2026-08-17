# DB_InsertDungeonEntrance

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08429696 DB_InsertDungeonEntrance::dispatch  [0x08429696-0x84298a1] ===
 8429696:	55                   	push   %ebp
 8429697:	89 e5                	mov    %esp,%ebp
 8429699:	57                   	push   %edi
 842969a:	56                   	push   %esi
 842969b:	53                   	push   %ebx
 842969c:	81 ec 5c 04 00 00    	sub    $0x45c,%esp
 84296a2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84296a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84296ae:	00 
 84296af:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84296b6:	00 
 84296b7:	89 04 24             	mov    %eax,(%esp)
 84296ba:	e8 7f bb fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84296bf:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84296c2:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84296c9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84296cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84296d0:	8b 45 14             	mov    0x14(%ebp),%eax
 84296d3:	89 04 24             	mov    %eax,(%esp)
 84296d6:	e8 e9 2e 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 84296db:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84296e2:	e8 b7 25 ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84296e7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84296ea:	e8 92 2a ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84296ef:	89 04 24             	mov    %eax,(%esp)
 84296f2:	e8 d3 13 d2 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84296f7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84296fa:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8429701:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8429708:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 842970f:	8d 9d c4 fb ff ff    	lea    -0x43c(%ebp),%ebx
 8429715:	b8 00 00 00 00       	mov    $0x0,%eax
 842971a:	ba 00 01 00 00       	mov    $0x100,%edx
 842971f:	89 df                	mov    %ebx,%edi
 8429721:	89 d1                	mov    %edx,%ecx
 8429723:	f3 ab                	rep stos %eax,%es:(%edi)
 8429725:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429728:	89 04 24             	mov    %eax,(%esp)
 842972b:	e8 a0 ce 2d 00       	call   87065d0 <_ZNSsC1Ev>
 8429730:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8429737:	e9 d7 00 00 00       	jmp    8429813 <_ZN24DB_InsertDungeonEntrance8dispatchEiiP6Stream+0x17d>
 842973c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842973f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8429743:	8b 45 14             	mov    0x14(%ebp),%eax
 8429746:	89 04 24             	mov    %eax,(%esp)
 8429749:	e8 76 2e 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 842974e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8429751:	89 44 24 04          	mov    %eax,0x4(%esp)
 8429755:	8b 45 14             	mov    0x14(%ebp),%eax
 8429758:	89 04 24             	mov    %eax,(%esp)
 842975b:	e8 64 2e 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8429760:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8429763:	89 44 24 04          	mov    %eax,0x4(%esp)
 8429767:	8b 45 14             	mov    0x14(%ebp),%eax
 842976a:	89 04 24             	mov    %eax,(%esp)
 842976d:	e8 52 2e 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8429772:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429775:	89 04 24             	mov    %eax,(%esp)
 8429778:	e8 e3 ce 2d 00       	call   8706660 <_ZNKSs4sizeEv>
 842977d:	85 c0                	test   %eax,%eax
 842977f:	0f 95 c0             	setne  %al
 8429782:	84 c0                	test   %al,%al
 8429784:	74 3b                	je     84297c1 <_ZN24DB_InsertDungeonEntrance8dispatchEiiP6Stream+0x12b>
 8429786:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 8429789:	8b 55 cc             	mov    -0x34(%ebp),%edx
 842978c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842978f:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8429793:	89 54 24 14          	mov    %edx,0x14(%esp)
 8429797:	89 44 24 10          	mov    %eax,0x10(%esp)
 842979b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842979e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84297a2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84297a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84297a9:	c7 44 24 04 24 f6 c4 	movl   $0x8c4f624,0x4(%esp)
 84297b0:	08 
 84297b1:	8d 85 c4 fb ff ff    	lea    -0x43c(%ebp),%eax
 84297b7:	89 04 24             	mov    %eax,(%esp)
 84297ba:	e8 81 4c c5 ff       	call   807e440 <sprintf@plt>
 84297bf:	eb 39                	jmp    84297fa <_ZN24DB_InsertDungeonEntrance8dispatchEiiP6Stream+0x164>
 84297c1:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 84297c4:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84297c7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84297ca:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84297ce:	89 54 24 14          	mov    %edx,0x14(%esp)
 84297d2:	89 44 24 10          	mov    %eax,0x10(%esp)
 84297d6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84297d9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84297dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84297e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84297e4:	c7 44 24 04 48 f6 c4 	movl   $0x8c4f648,0x4(%esp)
 84297eb:	08 
 84297ec:	8d 85 c4 fb ff ff    	lea    -0x43c(%ebp),%eax
 84297f2:	89 04 24             	mov    %eax,(%esp)
 84297f5:	e8 46 4c c5 ff       	call   807e440 <sprintf@plt>
 84297fa:	8d 85 c4 fb ff ff    	lea    -0x43c(%ebp),%eax
 8429800:	89 44 24 04          	mov    %eax,0x4(%esp)
 8429804:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429807:	89 04 24             	mov    %eax,(%esp)
 842980a:	e8 21 e8 2d 00       	call   8708030 <_ZNSspLEPKc>
 842980f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8429813:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8429816:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 8429819:	0f 9c c0             	setl   %al
 842981c:	84 c0                	test   %al,%al
 842981e:	0f 85 18 ff ff ff    	jne    842973c <_ZN24DB_InsertDungeonEntrance8dispatchEiiP6Stream+0xa6>
 8429824:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429827:	89 04 24             	mov    %eax,(%esp)
 842982a:	e8 c1 cc 2d 00       	call   87064f0 <_ZNKSs5c_strEv>
 842982f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429833:	c7 44 24 04 68 f6 c4 	movl   $0x8c4f668,0x4(%esp)
 842983a:	08 
 842983b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842983e:	89 04 24             	mov    %eax,(%esp)
 8429841:	e8 7a a9 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8429846:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842984d:	00 
 842984e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8429851:	89 04 24             	mov    %eax,(%esp)
 8429854:	e8 cd aa fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8429859:	83 f0 01             	xor    $0x1,%eax
 842985c:	84 c0                	test   %al,%al
 842985e:	74 07                	je     8429867 <_ZN24DB_InsertDungeonEntrance8dispatchEiiP6Stream+0x1d1>
 8429860:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429865:	eb 22                	jmp    8429889 <_ZN24DB_InsertDungeonEntrance8dispatchEiiP6Stream+0x1f3>
 8429867:	bb 01 00 00 00       	mov    $0x1,%ebx
 842986c:	eb 1b                	jmp    8429889 <_ZN24DB_InsertDungeonEntrance8dispatchEiiP6Stream+0x1f3>
 842986e:	89 d3                	mov    %edx,%ebx
 8429870:	89 c6                	mov    %eax,%esi
 8429872:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429875:	89 04 24             	mov    %eax,(%esp)
 8429878:	e8 63 e3 2d 00       	call   8707be0 <_ZNSsD1Ev>
 842987d:	89 f0                	mov    %esi,%eax
 842987f:	89 da                	mov    %ebx,%edx
 8429881:	89 04 24             	mov    %eax,(%esp)
 8429884:	e8 c7 9e 6b 00       	call   8ae3750 <_Unwind_Resume>
 8429889:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 842988c:	89 04 24             	mov    %eax,(%esp)
 842988f:	e8 4c e3 2d 00       	call   8707be0 <_ZNSsD1Ev>
 8429894:	89 d8                	mov    %ebx,%eax
 8429896:	81 c4 5c 04 00 00    	add    $0x45c,%esp
 842989c:	5b                   	pop    %ebx
 842989d:	5e                   	pop    %esi
 842989e:	5f                   	pop    %edi
 842989f:	5d                   	pop    %ebp
 84298a0:	c3                   	ret
 84298a1:	90                   	nop

```

```c
// DB_InsertDungeonEntrance::dispatch @ 0x8429696

/* DB_InsertDungeonEntrance::dispatch(int, int, Stream*) */

bool DB_InsertDungeonEntrance::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  CEnvironment *this;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  Stream *in_stack_00000010;
  char local_440 [1024];
  string local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  MySQL *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  bVar5 = 0;
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_30 = 0;
  Stream::operator>>(in_stack_00000010,&local_30);
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  this = (CEnvironment *)G_CEnvironment();
  local_24 = CEnvironment::get_channel_no(this);
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  pcVar4 = local_440;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  std::string::string(local_40);
  for (local_20 = 0; local_20 < local_30; local_20 = local_20 + 1) {
                    /* try { // try from 08429749 to 08429858 has its CatchHandler @ 0842986e */
    Stream::operator>>(in_stack_00000010,&local_34);
    Stream::operator>>(in_stack_00000010,&local_38);
    Stream::operator>>(in_stack_00000010,&local_3c);
    iVar3 = std::string::size(local_40);
    if (iVar3 == 0) {
      sprintf(local_440,"(%d,from_unixtime(%d),%d,%d,%d)",local_24,local_28,local_34,local_38,
              local_3c);
    }
    else {
      sprintf(local_440,",(%d,from_unixtime(%d),%d,%d,%d)",local_24,local_28,local_34,local_38,
              local_3c);
    }
    std::string::operator+=(local_40,local_440);
  }
  uVar2 = std::string::c_str(local_40);
  MySQL::set_query(local_2c,
                   "inSert into log_dungeon_entrance(channel_no,occ_date,dungeon_index,enter_count, exercise_count) values%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_2c,true);
  std::string::~string(local_40);
  return cVar1 == '\x01';
}

```

