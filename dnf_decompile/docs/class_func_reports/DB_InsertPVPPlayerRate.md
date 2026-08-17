# DB_InsertPVPPlayerRate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842ca06 DB_InsertPVPPlayerRate::dispatch  [0x0842ca06-0x842cb11] ===
 842ca06:	55                   	push   %ebp
 842ca07:	89 e5                	mov    %esp,%ebp
 842ca09:	57                   	push   %edi
 842ca0a:	56                   	push   %esi
 842ca0b:	53                   	push   %ebx
 842ca0c:	83 ec 6c             	sub    $0x6c,%esp
 842ca0f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842ca14:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842ca1b:	00 
 842ca1c:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842ca23:	00 
 842ca24:	89 04 24             	mov    %eax,(%esp)
 842ca27:	e8 12 88 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842ca2c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842ca2f:	8d 55 c8             	lea    -0x38(%ebp),%edx
 842ca32:	b9 00 00 00 00       	mov    $0x0,%ecx
 842ca37:	b8 18 00 00 00       	mov    $0x18,%eax
 842ca3c:	89 c3                	mov    %eax,%ebx
 842ca3e:	83 e3 fc             	and    $0xfffffffc,%ebx
 842ca41:	b8 00 00 00 00       	mov    $0x0,%eax
 842ca46:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 842ca49:	83 c0 04             	add    $0x4,%eax
 842ca4c:	39 d8                	cmp    %ebx,%eax
 842ca4e:	72 f6                	jb     842ca46 <_ZN22DB_InsertPVPPlayerRate8dispatchEiiP6Stream+0x40>
 842ca50:	01 c2                	add    %eax,%edx
 842ca52:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 842ca59:	eb 1e                	jmp    842ca79 <_ZN22DB_InsertPVPPlayerRate8dispatchEiiP6Stream+0x73>
 842ca5b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842ca5e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842ca61:	c1 e2 02             	shl    $0x2,%edx
 842ca64:	01 d0                	add    %edx,%eax
 842ca66:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ca6a:	8b 45 14             	mov    0x14(%ebp),%eax
 842ca6d:	89 04 24             	mov    %eax,(%esp)
 842ca70:	e8 4f fb 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842ca75:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 842ca79:	83 7d e4 05          	cmpl   $0x5,-0x1c(%ebp)
 842ca7d:	0f 9e c0             	setle  %al
 842ca80:	84 c0                	test   %al,%al
 842ca82:	75 d7                	jne    842ca5b <_ZN22DB_InsertPVPPlayerRate8dispatchEiiP6Stream+0x55>
 842ca84:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842ca87:	89 45 bc             	mov    %eax,-0x44(%ebp)
 842ca8a:	8b 55 d8             	mov    -0x28(%ebp),%edx
 842ca8d:	89 55 c0             	mov    %edx,-0x40(%ebp)
 842ca90:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842ca93:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 842ca96:	8b 7d d0             	mov    -0x30(%ebp),%edi
 842ca99:	8b 75 cc             	mov    -0x34(%ebp),%esi
 842ca9c:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 842ca9f:	e8 dd f6 c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 842caa4:	89 04 24             	mov    %eax,(%esp)
 842caa7:	e8 1e e0 d1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 842caac:	8b 55 bc             	mov    -0x44(%ebp),%edx
 842caaf:	89 54 24 20          	mov    %edx,0x20(%esp)
 842cab3:	8b 55 c0             	mov    -0x40(%ebp),%edx
 842cab6:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 842caba:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 842cabd:	89 54 24 18          	mov    %edx,0x18(%esp)
 842cac1:	89 7c 24 14          	mov    %edi,0x14(%esp)
 842cac5:	89 74 24 10          	mov    %esi,0x10(%esp)
 842cac9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842cacd:	89 44 24 08          	mov    %eax,0x8(%esp)
 842cad1:	c7 44 24 04 44 04 c5 	movl   $0x8c50444,0x4(%esp)
 842cad8:	08 
 842cad9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842cadc:	89 04 24             	mov    %eax,(%esp)
 842cadf:	e8 dc 76 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842cae4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842caeb:	00 
 842caec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842caef:	89 04 24             	mov    %eax,(%esp)
 842caf2:	e8 2f 78 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842caf7:	83 f0 01             	xor    $0x1,%eax
 842cafa:	84 c0                	test   %al,%al
 842cafc:	74 07                	je     842cb05 <_ZN22DB_InsertPVPPlayerRate8dispatchEiiP6Stream+0xff>
 842cafe:	b8 00 00 00 00       	mov    $0x0,%eax
 842cb03:	eb 05                	jmp    842cb0a <_ZN22DB_InsertPVPPlayerRate8dispatchEiiP6Stream+0x104>
 842cb05:	b8 01 00 00 00       	mov    $0x1,%eax
 842cb0a:	83 c4 6c             	add    $0x6c,%esp
 842cb0d:	5b                   	pop    %ebx
 842cb0e:	5e                   	pop    %esi
 842cb0f:	5f                   	pop    %edi
 842cb10:	5d                   	pop    %ebp
 842cb11:	c3                   	ret

```

```c
// DB_InsertPVPPlayerRate::dispatch @ 0x842ca06

/* DB_InsertPVPPlayerRate::dispatch(int, int, Stream*) */

bool DB_InsertPVPPlayerRate::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  uint uVar2;
  CEnvironment *this;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  int local_3c [6];
  MySQL *local_24;
  int local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  uVar2 = 0;
  do {
    *(undefined4 *)((int)local_3c + uVar2) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x18);
  for (local_20 = 0; local_20 < 6; local_20 = local_20 + 1) {
    Stream::operator>>(in_stack_00000010,local_3c + local_20);
  }
  this = (CEnvironment *)G_CEnvironment();
  uVar3 = CEnvironment::get_channel_no(this);
  MySQL::set_query(local_24,
                   "inSert into log_pvp_player_rate(channel_no,occ_date,single_one_to_one,single_one_to_one_other,team_one_to_one,team_one_to_one_other,relay_one_to_one,relay_one_to_one_other) values(%d,now(),%d,%d,%d,%d,%d,%d)"
                   ,uVar3,local_3c[0],local_3c[1],local_3c[2],local_3c[3],local_3c[4],local_3c[5]);
  cVar1 = MySQL::exec(local_24,true);
  return cVar1 == '\x01';
}

```

