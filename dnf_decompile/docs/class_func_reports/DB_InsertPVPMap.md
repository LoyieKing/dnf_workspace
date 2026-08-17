# DB_InsertPVPMap

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842cb12 DB_InsertPVPMap::dispatch  [0x0842cb12-0x842cc97] ===
 842cb12:	55                   	push   %ebp
 842cb13:	89 e5                	mov    %esp,%ebp
 842cb15:	56                   	push   %esi
 842cb16:	53                   	push   %ebx
 842cb17:	81 ec 40 04 00 00    	sub    $0x440,%esp
 842cb1d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842cb22:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842cb29:	00 
 842cb2a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842cb31:	00 
 842cb32:	89 04 24             	mov    %eax,(%esp)
 842cb35:	e8 04 87 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842cb3a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842cb3d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 842cb44:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 842cb4b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 842cb52:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842cb55:	89 04 24             	mov    %eax,(%esp)
 842cb58:	e8 73 9a 2d 00       	call   87065d0 <_ZNSsC1Ev>
 842cb5d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842cb60:	89 44 24 04          	mov    %eax,0x4(%esp)
 842cb64:	8b 45 14             	mov    0x14(%ebp),%eax
 842cb67:	89 04 24             	mov    %eax,(%esp)
 842cb6a:	e8 55 fa 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842cb6f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 842cb76:	e9 90 00 00 00       	jmp    842cc0b <_ZN15DB_InsertPVPMap8dispatchEiiP6Stream+0xf9>
 842cb7b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842cb7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 842cb82:	8b 45 14             	mov    0x14(%ebp),%eax
 842cb85:	89 04 24             	mov    %eax,(%esp)
 842cb88:	e8 37 fa 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842cb8d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842cb90:	89 44 24 04          	mov    %eax,0x4(%esp)
 842cb94:	8b 45 14             	mov    0x14(%ebp),%eax
 842cb97:	89 04 24             	mov    %eax,(%esp)
 842cb9a:	e8 25 fa 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842cb9f:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 842cba2:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 842cba5:	e8 d7 f5 c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 842cbaa:	89 04 24             	mov    %eax,(%esp)
 842cbad:	e8 18 df d1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 842cbb2:	89 74 24 10          	mov    %esi,0x10(%esp)
 842cbb6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842cbba:	89 44 24 08          	mov    %eax,0x8(%esp)
 842cbbe:	c7 44 24 04 14 05 c5 	movl   $0x8c50514,0x4(%esp)
 842cbc5:	08 
 842cbc6:	8d 85 e0 fb ff ff    	lea    -0x420(%ebp),%eax
 842cbcc:	89 04 24             	mov    %eax,(%esp)
 842cbcf:	e8 6c 18 c5 ff       	call   807e440 <sprintf@plt>
 842cbd4:	8d 85 e0 fb ff ff    	lea    -0x420(%ebp),%eax
 842cbda:	89 44 24 04          	mov    %eax,0x4(%esp)
 842cbde:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842cbe1:	89 04 24             	mov    %eax,(%esp)
 842cbe4:	e8 47 b4 2d 00       	call   8708030 <_ZNSspLEPKc>
 842cbe9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842cbec:	83 e8 01             	sub    $0x1,%eax
 842cbef:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 842cbf2:	7e 13                	jle    842cc07 <_ZN15DB_InsertPVPMap8dispatchEiiP6Stream+0xf5>
 842cbf4:	c7 44 24 04 3d c6 c4 	movl   $0x8c4c63d,0x4(%esp)
 842cbfb:	08 
 842cbfc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842cbff:	89 04 24             	mov    %eax,(%esp)
 842cc02:	e8 29 b4 2d 00       	call   8708030 <_ZNSspLEPKc>
 842cc07:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 842cc0b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842cc0e:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 842cc11:	0f 9c c0             	setl   %al
 842cc14:	84 c0                	test   %al,%al
 842cc16:	0f 85 5f ff ff ff    	jne    842cb7b <_ZN15DB_InsertPVPMap8dispatchEiiP6Stream+0x69>
 842cc1c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842cc1f:	89 04 24             	mov    %eax,(%esp)
 842cc22:	e8 c9 98 2d 00       	call   87064f0 <_ZNKSs5c_strEv>
 842cc27:	89 44 24 08          	mov    %eax,0x8(%esp)
 842cc2b:	c7 44 24 04 28 05 c5 	movl   $0x8c50528,0x4(%esp)
 842cc32:	08 
 842cc33:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842cc36:	89 04 24             	mov    %eax,(%esp)
 842cc39:	e8 82 75 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842cc3e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842cc45:	00 
 842cc46:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842cc49:	89 04 24             	mov    %eax,(%esp)
 842cc4c:	e8 d5 76 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842cc51:	83 f0 01             	xor    $0x1,%eax
 842cc54:	84 c0                	test   %al,%al
 842cc56:	74 07                	je     842cc5f <_ZN15DB_InsertPVPMap8dispatchEiiP6Stream+0x14d>
 842cc58:	bb 00 00 00 00       	mov    $0x0,%ebx
 842cc5d:	eb 22                	jmp    842cc81 <_ZN15DB_InsertPVPMap8dispatchEiiP6Stream+0x16f>
 842cc5f:	bb 01 00 00 00       	mov    $0x1,%ebx
 842cc64:	eb 1b                	jmp    842cc81 <_ZN15DB_InsertPVPMap8dispatchEiiP6Stream+0x16f>
 842cc66:	89 d3                	mov    %edx,%ebx
 842cc68:	89 c6                	mov    %eax,%esi
 842cc6a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842cc6d:	89 04 24             	mov    %eax,(%esp)
 842cc70:	e8 6b af 2d 00       	call   8707be0 <_ZNSsD1Ev>
 842cc75:	89 f0                	mov    %esi,%eax
 842cc77:	89 da                	mov    %ebx,%edx
 842cc79:	89 04 24             	mov    %eax,(%esp)
 842cc7c:	e8 cf 6a 6b 00       	call   8ae3750 <_Unwind_Resume>
 842cc81:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842cc84:	89 04 24             	mov    %eax,(%esp)
 842cc87:	e8 54 af 2d 00       	call   8707be0 <_ZNSsD1Ev>
 842cc8c:	89 d8                	mov    %ebx,%eax
 842cc8e:	81 c4 40 04 00 00    	add    $0x440,%esp
 842cc94:	5b                   	pop    %ebx
 842cc95:	5e                   	pop    %esi
 842cc96:	5d                   	pop    %ebp
 842cc97:	c3                   	ret

```

```c
// DB_InsertPVPMap::dispatch @ 0x842cb12

/* DB_InsertPVPMap::dispatch(int, int, Stream*) */

bool DB_InsertPVPMap::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  CEnvironment *this;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  char local_424 [1024];
  string local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  std::string::string(local_24);
                    /* try { // try from 0842cb6a to 0842cc50 has its CatchHandler @ 0842cc66 */
  Stream::operator>>(in_stack_00000010,&local_18);
  for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
    Stream::operator>>(in_stack_00000010,&local_1c);
    Stream::operator>>(in_stack_00000010,&local_20);
    iVar2 = local_1c;
    iVar1 = local_20;
    this = (CEnvironment *)G_CEnvironment();
    uVar4 = CEnvironment::get_channel_no(this);
    sprintf(local_424,"(%d,now(),%d,%d)",uVar4,iVar2,iVar1);
    std::string::operator+=(local_24,local_424);
    if (local_10 < local_18 + -1) {
      std::string::operator+=(local_24,",");
    }
  }
  uVar4 = std::string::c_str(local_24);
  MySQL::set_query(local_14,
                   "inSert into log_pvp_map(channel_no,occ_date,map_id,play_count) values%s",uVar4);
  cVar3 = MySQL::exec(local_14,true);
  std::string::~string(local_24);
  return cVar3 == '\x01';
}

```

