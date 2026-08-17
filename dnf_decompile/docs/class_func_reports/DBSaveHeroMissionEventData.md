# DBSaveHeroMissionEventData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0815db98 DBSaveHeroMissionEventData::dispatch  [0x0815db98-0x815dd4b] ===
 815db98:	55                   	push   %ebp
 815db99:	89 e5                	mov    %esp,%ebp
 815db9b:	56                   	push   %esi
 815db9c:	53                   	push   %ebx
 815db9d:	83 ec 30             	sub    $0x30,%esp
 815dba0:	8b 45 14             	mov    0x14(%ebp),%eax
 815dba3:	89 04 24             	mov    %eax,(%esp)
 815dba6:	e8 31 12 00 00       	call   815eddc <_ZN6Stream12GetOutBufferIN6Taiwan22SigSaveHeroMissionDataEEEPT_v>
 815dbab:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815dbae:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 815dbb2:	75 2c                	jne    815dbe0 <_ZN26DBSaveHeroMissionEventData8dispatchEiiP6Stream+0x48>
 815dbb4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815dbbb:	e8 40 7c 5c 00       	call   8725800 <__cxa_allocate_exception>
 815dbc0:	89 c2                	mov    %eax,%edx
 815dbc2:	c7 02 b6 7e b7 08    	movl   $0x8b77eb6,(%edx)
 815dbc8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815dbcf:	00 
 815dbd0:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815dbd7:	09 
 815dbd8:	89 04 24             	mov    %eax,(%esp)
 815dbdb:	e8 70 70 5c 00       	call   8724c50 <__cxa_throw>
 815dbe0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815dbe5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815dbec:	00 
 815dbed:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815dbf4:	00 
 815dbf5:	89 04 24             	mov    %eax,(%esp)
 815dbf8:	e8 41 76 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815dbfd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815dc00:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815dc04:	75 2c                	jne    815dc32 <_ZN26DBSaveHeroMissionEventData8dispatchEiiP6Stream+0x9a>
 815dc06:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815dc0d:	e8 ee 7b 5c 00       	call   8725800 <__cxa_allocate_exception>
 815dc12:	89 c2                	mov    %eax,%edx
 815dc14:	c7 02 c3 7e b7 08    	movl   $0x8b77ec3,(%edx)
 815dc1a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815dc21:	00 
 815dc22:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815dc29:	09 
 815dc2a:	89 04 24             	mov    %eax,(%esp)
 815dc2d:	e8 1e 70 5c 00       	call   8724c50 <__cxa_throw>
 815dc32:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815dc35:	8b 30                	mov    (%eax),%esi
 815dc37:	e8 45 e5 f6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 815dc3c:	89 04 24             	mov    %eax,(%esp)
 815dc3f:	e8 9c 90 fa ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 815dc44:	89 c3                	mov    %eax,%ebx
 815dc46:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815dc49:	83 c0 04             	add    $0x4,%eax
 815dc4c:	c7 44 24 0c 00 01 00 	movl   $0x100,0xc(%esp)
 815dc53:	00 
 815dc54:	89 44 24 08          	mov    %eax,0x8(%esp)
 815dc58:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815dc5f:	00 
 815dc60:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815dc63:	89 04 24             	mov    %eax,(%esp)
 815dc66:	e8 bf 68 29 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 815dc6b:	89 74 24 10          	mov    %esi,0x10(%esp)
 815dc6f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 815dc73:	89 44 24 08          	mov    %eax,0x8(%esp)
 815dc77:	c7 44 24 04 c0 7f b7 	movl   $0x8b77fc0,0x4(%esp)
 815dc7e:	08 
 815dc7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815dc82:	89 04 24             	mov    %eax,(%esp)
 815dc85:	e8 36 65 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815dc8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815dc91:	00 
 815dc92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815dc95:	89 04 24             	mov    %eax,(%esp)
 815dc98:	e8 89 66 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815dc9d:	83 f0 01             	xor    $0x1,%eax
 815dca0:	84 c0                	test   %al,%al
 815dca2:	74 2c                	je     815dcd0 <_ZN26DBSaveHeroMissionEventData8dispatchEiiP6Stream+0x138>
 815dca4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815dcab:	e8 50 7b 5c 00       	call   8725800 <__cxa_allocate_exception>
 815dcb0:	89 c2                	mov    %eax,%edx
 815dcb2:	c7 02 17 80 b7 08    	movl   $0x8b78017,(%edx)
 815dcb8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815dcbf:	00 
 815dcc0:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815dcc7:	09 
 815dcc8:	89 04 24             	mov    %eax,(%esp)
 815dccb:	e8 80 6f 5c 00       	call   8724c50 <__cxa_throw>
 815dcd0:	bb 01 00 00 00       	mov    $0x1,%ebx
 815dcd5:	eb 6c                	jmp    815dd43 <_ZN26DBSaveHeroMissionEventData8dispatchEiiP6Stream+0x1ab>
 815dcd7:	83 fa 01             	cmp    $0x1,%edx
 815dcda:	74 08                	je     815dce4 <_ZN26DBSaveHeroMissionEventData8dispatchEiiP6Stream+0x14c>
 815dcdc:	89 04 24             	mov    %eax,(%esp)
 815dcdf:	e8 6c 5a 98 00       	call   8ae3750 <_Unwind_Resume>
 815dce4:	89 04 24             	mov    %eax,(%esp)
 815dce7:	e8 f4 7f 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815dcec:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815dcef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815dcf2:	89 44 24 14          	mov    %eax,0x14(%esp)
 815dcf6:	c7 44 24 10 90 7f b7 	movl   $0x8b77f90,0x10(%esp)
 815dcfd:	08 
 815dcfe:	c7 44 24 0c 13 04 00 	movl   $0x413,0xc(%esp)
 815dd05:	00 
 815dd06:	c7 44 24 08 40 8c b7 	movl   $0x8b78c40,0x8(%esp)
 815dd0d:	08 
 815dd0e:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815dd15:	08 
 815dd16:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815dd1d:	e8 e8 5e 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815dd22:	bb 00 00 00 00       	mov    $0x0,%ebx
 815dd27:	e8 04 7f 5c 00       	call   8725c30 <__cxa_end_catch>
 815dd2c:	eb 15                	jmp    815dd43 <_ZN26DBSaveHeroMissionEventData8dispatchEiiP6Stream+0x1ab>
 815dd2e:	89 d3                	mov    %edx,%ebx
 815dd30:	89 c6                	mov    %eax,%esi
 815dd32:	e8 f9 7e 5c 00       	call   8725c30 <__cxa_end_catch>
 815dd37:	89 f0                	mov    %esi,%eax
 815dd39:	89 da                	mov    %ebx,%edx
 815dd3b:	89 04 24             	mov    %eax,(%esp)
 815dd3e:	e8 0d 5a 98 00       	call   8ae3750 <_Unwind_Resume>
 815dd43:	89 d8                	mov    %ebx,%eax
 815dd45:	83 c4 30             	add    $0x30,%esp
 815dd48:	5b                   	pop    %ebx
 815dd49:	5e                   	pop    %esi
 815dd4a:	5d                   	pop    %ebp
 815dd4b:	c3                   	ret

```

```c
// DBSaveHeroMissionEventData::dispatch @ 0x815db98

/* DBSaveHeroMissionEventData::dispatch(int, int, Stream*) */

undefined4 DBSaveHeroMissionEventData::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  char cVar2;
  SigSaveHeroMissionData *pSVar3;
  undefined4 *puVar4;
  MySQL *this;
  CEnvironment *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  Stream *in_stack_00000010;
  
                    /* try { // try from 0815dba6 to 0815dccf has its CatchHandler @ 0815dcd7 */
  pSVar3 = Stream::GetOutBuffer<Taiwan::SigSaveHeroMissionData>(in_stack_00000010);
  if (pSVar3 == (SigSaveHeroMissionData *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "context_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this == (MySQL *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "handle_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  uVar1 = *(undefined4 *)pSVar3;
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar5 = CEnvironment::get_server_group(this_00);
  uVar6 = MySQL::blob_to_str(this,0,pSVar3 + 4,0x100);
  MySQL::set_query(this,
                   "upDate event_hero_mission_data set mission=\'%s\' where server_group=%d and charac_no=%u"
                   ,uVar6,uVar5,uVar1);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "exec_update";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  return 1;
}

```

