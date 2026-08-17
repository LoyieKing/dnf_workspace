# DB_InsertDungeonEntrance_hour

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084298a2 DB_InsertDungeonEntrance_hour::dispatch  [0x084298a2-0x8429acf] ===
 84298a2:	55                   	push   %ebp
 84298a3:	89 e5                	mov    %esp,%ebp
 84298a5:	57                   	push   %edi
 84298a6:	56                   	push   %esi
 84298a7:	53                   	push   %ebx
 84298a8:	81 ec 5c 04 00 00    	sub    $0x45c,%esp
 84298ae:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84298b3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84298ba:	00 
 84298bb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84298c2:	00 
 84298c3:	89 04 24             	mov    %eax,(%esp)
 84298c6:	e8 73 b9 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84298cb:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84298ce:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84298d5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84298d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84298dc:	8b 45 14             	mov    0x14(%ebp),%eax
 84298df:	89 04 24             	mov    %eax,(%esp)
 84298e2:	e8 dd 2c 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 84298e7:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84298ee:	e8 ab 23 ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84298f3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84298f6:	e8 86 28 ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84298fb:	89 04 24             	mov    %eax,(%esp)
 84298fe:	e8 c7 11 d2 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8429903:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8429906:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 842990d:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8429914:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 842991b:	8d 9d c4 fb ff ff    	lea    -0x43c(%ebp),%ebx
 8429921:	b8 00 00 00 00       	mov    $0x0,%eax
 8429926:	ba 00 01 00 00       	mov    $0x100,%edx
 842992b:	89 df                	mov    %ebx,%edi
 842992d:	89 d1                	mov    %edx,%ecx
 842992f:	f3 ab                	rep stos %eax,%es:(%edi)
 8429931:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429934:	89 04 24             	mov    %eax,(%esp)
 8429937:	e8 94 cc 2d 00       	call   87065d0 <_ZNSsC1Ev>
 842993c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8429943:	e9 e5 00 00 00       	jmp    8429a2d <_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream+0x18b>
 8429948:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842994b:	89 44 24 04          	mov    %eax,0x4(%esp)
 842994f:	8b 45 14             	mov    0x14(%ebp),%eax
 8429952:	89 04 24             	mov    %eax,(%esp)
 8429955:	e8 6a 2c 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 842995a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842995d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8429961:	8b 45 14             	mov    0x14(%ebp),%eax
 8429964:	89 04 24             	mov    %eax,(%esp)
 8429967:	e8 58 2c 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 842996c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842996f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8429973:	8b 45 14             	mov    0x14(%ebp),%eax
 8429976:	89 04 24             	mov    %eax,(%esp)
 8429979:	e8 46 2c 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 842997e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8429981:	85 c0                	test   %eax,%eax
 8429983:	0f 84 9f 00 00 00    	je     8429a28 <_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream+0x186>
 8429989:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 842998c:	89 04 24             	mov    %eax,(%esp)
 842998f:	e8 cc cc 2d 00       	call   8706660 <_ZNKSs4sizeEv>
 8429994:	85 c0                	test   %eax,%eax
 8429996:	0f 95 c0             	setne  %al
 8429999:	84 c0                	test   %al,%al
 842999b:	74 3b                	je     84299d8 <_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream+0x136>
 842999d:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 84299a0:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84299a3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84299a6:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84299aa:	89 54 24 14          	mov    %edx,0x14(%esp)
 84299ae:	89 44 24 10          	mov    %eax,0x10(%esp)
 84299b2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84299b5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84299b9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84299bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84299c0:	c7 44 24 04 24 f6 c4 	movl   $0x8c4f624,0x4(%esp)
 84299c7:	08 
 84299c8:	8d 85 c4 fb ff ff    	lea    -0x43c(%ebp),%eax
 84299ce:	89 04 24             	mov    %eax,(%esp)
 84299d1:	e8 6a 4a c5 ff       	call   807e440 <sprintf@plt>
 84299d6:	eb 39                	jmp    8429a11 <_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream+0x16f>
 84299d8:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 84299db:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84299de:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84299e1:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84299e5:	89 54 24 14          	mov    %edx,0x14(%esp)
 84299e9:	89 44 24 10          	mov    %eax,0x10(%esp)
 84299ed:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84299f0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84299f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84299f7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84299fb:	c7 44 24 04 48 f6 c4 	movl   $0x8c4f648,0x4(%esp)
 8429a02:	08 
 8429a03:	8d 85 c4 fb ff ff    	lea    -0x43c(%ebp),%eax
 8429a09:	89 04 24             	mov    %eax,(%esp)
 8429a0c:	e8 2f 4a c5 ff       	call   807e440 <sprintf@plt>
 8429a11:	8d 85 c4 fb ff ff    	lea    -0x43c(%ebp),%eax
 8429a17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8429a1b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429a1e:	89 04 24             	mov    %eax,(%esp)
 8429a21:	e8 0a e6 2d 00       	call   8708030 <_ZNSspLEPKc>
 8429a26:	eb 01                	jmp    8429a29 <_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream+0x187>
 8429a28:	90                   	nop
 8429a29:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8429a2d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8429a30:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 8429a33:	0f 9c c0             	setl   %al
 8429a36:	84 c0                	test   %al,%al
 8429a38:	0f 85 0a ff ff ff    	jne    8429948 <_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream+0xa6>
 8429a3e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429a41:	89 04 24             	mov    %eax,(%esp)
 8429a44:	e8 17 cc 2d 00       	call   8706660 <_ZNKSs4sizeEv>
 8429a49:	85 c0                	test   %eax,%eax
 8429a4b:	0f 95 c0             	setne  %al
 8429a4e:	84 c0                	test   %al,%al
 8429a50:	74 43                	je     8429a95 <_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream+0x1f3>
 8429a52:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429a55:	89 04 24             	mov    %eax,(%esp)
 8429a58:	e8 93 ca 2d 00       	call   87064f0 <_ZNKSs5c_strEv>
 8429a5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429a61:	c7 44 24 04 d4 f6 c4 	movl   $0x8c4f6d4,0x4(%esp)
 8429a68:	08 
 8429a69:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8429a6c:	89 04 24             	mov    %eax,(%esp)
 8429a6f:	e8 4c a7 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8429a74:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8429a7b:	00 
 8429a7c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8429a7f:	89 04 24             	mov    %eax,(%esp)
 8429a82:	e8 9f a8 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8429a87:	83 f0 01             	xor    $0x1,%eax
 8429a8a:	84 c0                	test   %al,%al
 8429a8c:	74 07                	je     8429a95 <_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream+0x1f3>
 8429a8e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429a93:	eb 22                	jmp    8429ab7 <_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream+0x215>
 8429a95:	bb 01 00 00 00       	mov    $0x1,%ebx
 8429a9a:	eb 1b                	jmp    8429ab7 <_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream+0x215>
 8429a9c:	89 d3                	mov    %edx,%ebx
 8429a9e:	89 c6                	mov    %eax,%esi
 8429aa0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429aa3:	89 04 24             	mov    %eax,(%esp)
 8429aa6:	e8 35 e1 2d 00       	call   8707be0 <_ZNSsD1Ev>
 8429aab:	89 f0                	mov    %esi,%eax
 8429aad:	89 da                	mov    %ebx,%edx
 8429aaf:	89 04 24             	mov    %eax,(%esp)
 8429ab2:	e8 99 9c 6b 00       	call   8ae3750 <_Unwind_Resume>
 8429ab7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8429aba:	89 04 24             	mov    %eax,(%esp)
 8429abd:	e8 1e e1 2d 00       	call   8707be0 <_ZNSsD1Ev>
 8429ac2:	89 d8                	mov    %ebx,%eax
 8429ac4:	81 c4 5c 04 00 00    	add    $0x45c,%esp
 8429aca:	5b                   	pop    %ebx
 8429acb:	5e                   	pop    %esi
 8429acc:	5f                   	pop    %edi
 8429acd:	5d                   	pop    %ebp
 8429ace:	c3                   	ret
 8429acf:	90                   	nop

```

```c
// DB_InsertDungeonEntrance_hour::dispatch @ 0x84298a2

/* DB_InsertDungeonEntrance_hour::dispatch(int, int, Stream*) */

undefined4 DB_InsertDungeonEntrance_hour::dispatch(int param_1,int param_2,Stream *param_3)

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
                    /* try { // try from 08429955 to 08429a86 has its CatchHandler @ 08429a9c */
    Stream::operator>>(in_stack_00000010,&local_34);
    Stream::operator>>(in_stack_00000010,&local_38);
    Stream::operator>>(in_stack_00000010,&local_3c);
    if (local_38 != 0) {
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
  }
  iVar3 = std::string::size(local_40);
  if (iVar3 != 0) {
    uVar2 = std::string::c_str(local_40);
    MySQL::set_query(local_2c,
                     "inSert into log_dungeon_entrance_hour(channel_no,occ_date,dungeon_index,hour_enter_count, cnt_enter_count) values %s"
                     ,uVar2);
    cVar1 = MySQL::exec(local_2c,true);
    if (cVar1 != '\x01') {
      uVar2 = 0;
      goto LAB_08429ab7;
    }
  }
  uVar2 = 1;
LAB_08429ab7:
  std::string::~string(local_40);
  return uVar2;
}

```

