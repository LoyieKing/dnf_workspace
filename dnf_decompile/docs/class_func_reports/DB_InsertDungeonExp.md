# DB_InsertDungeonExp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842e944 DB_InsertDungeonExp::dispatch  [0x0842e944-0x842eb2d] ===
 842e944:	55                   	push   %ebp
 842e945:	89 e5                	mov    %esp,%ebp
 842e947:	57                   	push   %edi
 842e948:	56                   	push   %esi
 842e949:	53                   	push   %ebx
 842e94a:	81 ec 6c 04 00 00    	sub    $0x46c,%esp
 842e950:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842e955:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842e95c:	00 
 842e95d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842e964:	00 
 842e965:	89 04 24             	mov    %eax,(%esp)
 842e968:	e8 d1 68 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842e96d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 842e970:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 842e977:	e8 22 d3 c9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 842e97c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842e97f:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 842e986:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 842e98d:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 842e994:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 842e99b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842e99e:	89 04 24             	mov    %eax,(%esp)
 842e9a1:	e8 2a 7c 2d 00       	call   87065d0 <_ZNSsC1Ev>
 842e9a6:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 842e9ad:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 842e9b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 842e9b4:	8b 45 14             	mov    0x14(%ebp),%eax
 842e9b7:	89 04 24             	mov    %eax,(%esp)
 842e9ba:	e8 05 dc 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842e9bf:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 842e9c6:	e9 d5 00 00 00       	jmp    842eaa0 <_ZN19DB_InsertDungeonExp8dispatchEiiP6Stream+0x15c>
 842e9cb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 842e9ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 842e9d2:	8b 45 14             	mov    0x14(%ebp),%eax
 842e9d5:	89 04 24             	mov    %eax,(%esp)
 842e9d8:	e8 e7 db 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842e9dd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 842e9e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 842e9e4:	8b 45 14             	mov    0x14(%ebp),%eax
 842e9e7:	89 04 24             	mov    %eax,(%esp)
 842e9ea:	e8 d5 db 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842e9ef:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842e9f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 842e9f6:	8b 45 14             	mov    0x14(%ebp),%eax
 842e9f9:	89 04 24             	mov    %eax,(%esp)
 842e9fc:	e8 c3 db 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842ea01:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842ea04:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ea08:	8b 45 14             	mov    0x14(%ebp),%eax
 842ea0b:	89 04 24             	mov    %eax,(%esp)
 842ea0e:	e8 b1 db 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842ea13:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842ea16:	89 85 b4 fb ff ff    	mov    %eax,-0x44c(%ebp)
 842ea1c:	8b 7d d0             	mov    -0x30(%ebp),%edi
 842ea1f:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 842ea22:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 842ea25:	e8 57 d7 c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 842ea2a:	89 04 24             	mov    %eax,(%esp)
 842ea2d:	e8 98 c0 d1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 842ea32:	8b 95 b4 fb ff ff    	mov    -0x44c(%ebp),%edx
 842ea38:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 842ea3c:	89 7c 24 18          	mov    %edi,0x18(%esp)
 842ea40:	89 74 24 14          	mov    %esi,0x14(%esp)
 842ea44:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842ea48:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842ea4c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842ea4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 842ea53:	c7 44 24 04 08 13 c5 	movl   $0x8c51308,0x4(%esp)
 842ea5a:	08 
 842ea5b:	8d 85 c4 fb ff ff    	lea    -0x43c(%ebp),%eax
 842ea61:	89 04 24             	mov    %eax,(%esp)
 842ea64:	e8 d7 f9 c4 ff       	call   807e440 <sprintf@plt>
 842ea69:	8d 85 c4 fb ff ff    	lea    -0x43c(%ebp),%eax
 842ea6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ea73:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842ea76:	89 04 24             	mov    %eax,(%esp)
 842ea79:	e8 b2 95 2d 00       	call   8708030 <_ZNSspLEPKc>
 842ea7e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 842ea81:	83 e8 01             	sub    $0x1,%eax
 842ea84:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 842ea87:	7e 13                	jle    842ea9c <_ZN19DB_InsertDungeonExp8dispatchEiiP6Stream+0x158>
 842ea89:	c7 44 24 04 3d c6 c4 	movl   $0x8c4c63d,0x4(%esp)
 842ea90:	08 
 842ea91:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842ea94:	89 04 24             	mov    %eax,(%esp)
 842ea97:	e8 94 95 2d 00       	call   8708030 <_ZNSspLEPKc>
 842ea9c:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 842eaa0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 842eaa3:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 842eaa6:	0f 9c c0             	setl   %al
 842eaa9:	84 c0                	test   %al,%al
 842eaab:	0f 85 1a ff ff ff    	jne    842e9cb <_ZN19DB_InsertDungeonExp8dispatchEiiP6Stream+0x87>
 842eab1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842eab4:	89 04 24             	mov    %eax,(%esp)
 842eab7:	e8 34 7a 2d 00       	call   87064f0 <_ZNKSs5c_strEv>
 842eabc:	89 44 24 08          	mov    %eax,0x8(%esp)
 842eac0:	c7 44 24 04 2c 13 c5 	movl   $0x8c5132c,0x4(%esp)
 842eac7:	08 
 842eac8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842eacb:	89 04 24             	mov    %eax,(%esp)
 842eace:	e8 ed 56 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842ead3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842eada:	00 
 842eadb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842eade:	89 04 24             	mov    %eax,(%esp)
 842eae1:	e8 40 58 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842eae6:	83 f0 01             	xor    $0x1,%eax
 842eae9:	84 c0                	test   %al,%al
 842eaeb:	74 07                	je     842eaf4 <_ZN19DB_InsertDungeonExp8dispatchEiiP6Stream+0x1b0>
 842eaed:	bb 00 00 00 00       	mov    $0x0,%ebx
 842eaf2:	eb 22                	jmp    842eb16 <_ZN19DB_InsertDungeonExp8dispatchEiiP6Stream+0x1d2>
 842eaf4:	bb 01 00 00 00       	mov    $0x1,%ebx
 842eaf9:	eb 1b                	jmp    842eb16 <_ZN19DB_InsertDungeonExp8dispatchEiiP6Stream+0x1d2>
 842eafb:	89 d3                	mov    %edx,%ebx
 842eafd:	89 c6                	mov    %eax,%esi
 842eaff:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842eb02:	89 04 24             	mov    %eax,(%esp)
 842eb05:	e8 d6 90 2d 00       	call   8707be0 <_ZNSsD1Ev>
 842eb0a:	89 f0                	mov    %esi,%eax
 842eb0c:	89 da                	mov    %ebx,%edx
 842eb0e:	89 04 24             	mov    %eax,(%esp)
 842eb11:	e8 3a 4c 6b 00       	call   8ae3750 <_Unwind_Resume>
 842eb16:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842eb19:	89 04 24             	mov    %eax,(%esp)
 842eb1c:	e8 bf 90 2d 00       	call   8707be0 <_ZNSsD1Ev>
 842eb21:	89 d8                	mov    %ebx,%eax
 842eb23:	81 c4 6c 04 00 00    	add    $0x46c,%esp
 842eb29:	5b                   	pop    %ebx
 842eb2a:	5e                   	pop    %esi
 842eb2b:	5f                   	pop    %edi
 842eb2c:	5d                   	pop    %ebp
 842eb2d:	c3                   	ret

```

```c
// DB_InsertDungeonExp::dispatch @ 0x842e944

/* DB_InsertDungeonExp::dispatch(int, int, Stream*) */

bool DB_InsertDungeonExp::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  CEnvironment *this;
  undefined4 uVar6;
  Stream *in_stack_00000010;
  char local_440 [1024];
  int local_40;
  string local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  MySQL *local_28;
  undefined4 local_24;
  int local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  std::string::string(local_3c);
  local_40 = 0;
                    /* try { // try from 0842e9ba to 0842eae5 has its CatchHandler @ 0842eafb */
  Stream::operator>>(in_stack_00000010,&local_40);
  for (local_20 = 0; local_20 < local_40; local_20 = local_20 + 1) {
    Stream::operator>>(in_stack_00000010,&local_2c);
    Stream::operator>>(in_stack_00000010,&local_30);
    Stream::operator>>(in_stack_00000010,&local_34);
    Stream::operator>>(in_stack_00000010,&local_38);
    iVar4 = local_2c;
    iVar3 = local_30;
    iVar2 = local_34;
    iVar1 = local_38;
    this = (CEnvironment *)G_CEnvironment();
    uVar6 = CEnvironment::get_channel_no(this);
    sprintf(local_440,"(from_unixtime(%d),%d,%d,%d,%d,%d)",local_24,uVar6,iVar4,iVar3,iVar2,iVar1);
    std::string::operator+=(local_3c,local_440);
    if (local_20 < local_40 + -1) {
      std::string::operator+=(local_3c,",");
    }
  }
  uVar6 = std::string::c_str(local_3c);
  MySQL::set_query(local_28,
                   "inSert into log_dungeon_exp(occ_time,channel_no,lev,exp,fatigue,user_count) values%s"
                   ,uVar6);
  cVar5 = MySQL::exec(local_28,true);
  std::string::~string(local_3c);
  return cVar5 == '\x01';
}

```

