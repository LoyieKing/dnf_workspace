# DBUpdatePcroomDailyReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815d024 DBUpdatePcroomDailyReward::dispatch  [0x0815d024-0x815d2c7] ===
 815d024:	55                   	push   %ebp
 815d025:	89 e5                	mov    %esp,%ebp
 815d027:	56                   	push   %esi
 815d028:	53                   	push   %ebx
 815d029:	83 ec 30             	sub    $0x30,%esp
 815d02c:	8b 45 14             	mov    0x14(%ebp),%eax
 815d02f:	89 04 24             	mov    %eax,(%esp)
 815d032:	e8 7d 1c 00 00       	call   815ecb4 <_ZN6Stream12GetOutBufferIN25DBUpdatePcroomDailyReward3MSGEEEPT_v>
 815d037:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815d03a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 815d03e:	75 2c                	jne    815d06c <_ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream+0x48>
 815d040:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d047:	e8 b4 87 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d04c:	89 c2                	mov    %eax,%edx
 815d04e:	c7 02 06 73 b7 08    	movl   $0x8b77306,(%edx)
 815d054:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d05b:	00 
 815d05c:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d063:	09 
 815d064:	89 04 24             	mov    %eax,(%esp)
 815d067:	e8 e4 7b 5c 00       	call   8724c50 <__cxa_throw>
 815d06c:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815d071:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d078:	00 
 815d079:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815d080:	00 
 815d081:	89 04 24             	mov    %eax,(%esp)
 815d084:	e8 b5 81 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815d089:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815d08c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815d090:	75 2c                	jne    815d0be <_ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream+0x9a>
 815d092:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d099:	e8 62 87 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d09e:	89 c2                	mov    %eax,%edx
 815d0a0:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815d0a6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d0ad:	00 
 815d0ae:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d0b5:	09 
 815d0b6:	89 04 24             	mov    %eax,(%esp)
 815d0b9:	e8 92 7b 5c 00       	call   8724c50 <__cxa_throw>
 815d0be:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d0c1:	8b 00                	mov    (%eax),%eax
 815d0c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815d0ca:	00 
 815d0cb:	89 04 24             	mov    %eax,(%esp)
 815d0ce:	e8 78 bf fa ff       	call   810904b <_Z14NumberToStringji>
 815d0d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 815d0d7:	c7 44 24 04 98 7c b7 	movl   $0x8b77c98,0x4(%esp)
 815d0de:	08 
 815d0df:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815d0e2:	89 04 24             	mov    %eax,(%esp)
 815d0e5:	e8 d6 70 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815d0ea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815d0f1:	00 
 815d0f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815d0f5:	89 04 24             	mov    %eax,(%esp)
 815d0f8:	e8 29 72 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815d0fd:	83 f0 01             	xor    $0x1,%eax
 815d100:	84 c0                	test   %al,%al
 815d102:	74 2c                	je     815d130 <_ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream+0x10c>
 815d104:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d10b:	e8 f0 86 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d110:	89 c2                	mov    %eax,%edx
 815d112:	c7 02 f9 74 b7 08    	movl   $0x8b774f9,(%edx)
 815d118:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d11f:	00 
 815d120:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d127:	09 
 815d128:	89 04 24             	mov    %eax,(%esp)
 815d12b:	e8 20 7b 5c 00       	call   8724c50 <__cxa_throw>
 815d130:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815d133:	89 04 24             	mov    %eax,(%esp)
 815d136:	e8 31 52 f8 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 815d13b:	85 c0                	test   %eax,%eax
 815d13d:	0f 94 c0             	sete   %al
 815d140:	84 c0                	test   %al,%al
 815d142:	0f 84 84 00 00 00    	je     815d1cc <_ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream+0x1a8>
 815d148:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d14b:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 815d14f:	0f be d8             	movsbl %al,%ebx
 815d152:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d155:	8b 00                	mov    (%eax),%eax
 815d157:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815d15e:	00 
 815d15f:	89 04 24             	mov    %eax,(%esp)
 815d162:	e8 e4 be fa ff       	call   810904b <_Z14NumberToStringji>
 815d167:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 815d16b:	89 44 24 08          	mov    %eax,0x8(%esp)
 815d16f:	c7 44 24 04 d0 7c b7 	movl   $0x8b77cd0,0x4(%esp)
 815d176:	08 
 815d177:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815d17a:	89 04 24             	mov    %eax,(%esp)
 815d17d:	e8 3e 70 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815d182:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815d189:	00 
 815d18a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815d18d:	89 04 24             	mov    %eax,(%esp)
 815d190:	e8 91 71 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815d195:	83 f0 01             	xor    $0x1,%eax
 815d198:	84 c0                	test   %al,%al
 815d19a:	0f 84 ac 00 00 00    	je     815d24c <_ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream+0x228>
 815d1a0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d1a7:	e8 54 86 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d1ac:	89 c2                	mov    %eax,%edx
 815d1ae:	c7 02 b2 73 b7 08    	movl   $0x8b773b2,(%edx)
 815d1b4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d1bb:	00 
 815d1bc:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d1c3:	09 
 815d1c4:	89 04 24             	mov    %eax,(%esp)
 815d1c7:	e8 84 7a 5c 00       	call   8724c50 <__cxa_throw>
 815d1cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d1cf:	8b 00                	mov    (%eax),%eax
 815d1d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815d1d8:	00 
 815d1d9:	89 04 24             	mov    %eax,(%esp)
 815d1dc:	e8 6a be fa ff       	call   810904b <_Z14NumberToStringji>
 815d1e1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 815d1e4:	0f b6 52 04          	movzbl 0x4(%edx),%edx
 815d1e8:	0f be d2             	movsbl %dl,%edx
 815d1eb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 815d1ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 815d1f3:	c7 44 24 04 30 7d b7 	movl   $0x8b77d30,0x4(%esp)
 815d1fa:	08 
 815d1fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815d1fe:	89 04 24             	mov    %eax,(%esp)
 815d201:	e8 ba 6f 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815d206:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815d20d:	00 
 815d20e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815d211:	89 04 24             	mov    %eax,(%esp)
 815d214:	e8 0d 71 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815d219:	83 f0 01             	xor    $0x1,%eax
 815d21c:	84 c0                	test   %al,%al
 815d21e:	74 2c                	je     815d24c <_ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream+0x228>
 815d220:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d227:	e8 d4 85 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d22c:	89 c2                	mov    %eax,%edx
 815d22e:	c7 02 c1 75 b7 08    	movl   $0x8b775c1,(%edx)
 815d234:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d23b:	00 
 815d23c:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d243:	09 
 815d244:	89 04 24             	mov    %eax,(%esp)
 815d247:	e8 04 7a 5c 00       	call   8724c50 <__cxa_throw>
 815d24c:	bb 01 00 00 00       	mov    $0x1,%ebx
 815d251:	eb 6c                	jmp    815d2bf <_ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream+0x29b>
 815d253:	83 fa 01             	cmp    $0x1,%edx
 815d256:	74 08                	je     815d260 <_ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream+0x23c>
 815d258:	89 04 24             	mov    %eax,(%esp)
 815d25b:	e8 f0 64 98 00       	call   8ae3750 <_Unwind_Resume>
 815d260:	89 04 24             	mov    %eax,(%esp)
 815d263:	e8 78 8a 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815d268:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815d26b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815d26e:	89 44 24 14          	mov    %eax,0x14(%esp)
 815d272:	c7 44 24 10 8c 7d b7 	movl   $0x8b77d8c,0x10(%esp)
 815d279:	08 
 815d27a:	c7 44 24 0c 5d 03 00 	movl   $0x35d,0xc(%esp)
 815d281:	00 
 815d282:	c7 44 24 08 a0 8d b7 	movl   $0x8b78da0,0x8(%esp)
 815d289:	08 
 815d28a:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815d291:	08 
 815d292:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815d299:	e8 6c 69 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815d29e:	bb 00 00 00 00       	mov    $0x0,%ebx
 815d2a3:	e8 88 89 5c 00       	call   8725c30 <__cxa_end_catch>
 815d2a8:	eb 15                	jmp    815d2bf <_ZN25DBUpdatePcroomDailyReward8dispatchEiiP6Stream+0x29b>
 815d2aa:	89 d3                	mov    %edx,%ebx
 815d2ac:	89 c6                	mov    %eax,%esi
 815d2ae:	e8 7d 89 5c 00       	call   8725c30 <__cxa_end_catch>
 815d2b3:	89 f0                	mov    %esi,%eax
 815d2b5:	89 da                	mov    %ebx,%edx
 815d2b7:	89 04 24             	mov    %eax,(%esp)
 815d2ba:	e8 91 64 98 00       	call   8ae3750 <_Unwind_Resume>
 815d2bf:	89 d8                	mov    %ebx,%eax
 815d2c1:	83 c4 30             	add    $0x30,%esp
 815d2c4:	5b                   	pop    %ebx
 815d2c5:	5e                   	pop    %esi
 815d2c6:	5d                   	pop    %ebp
 815d2c7:	c3                   	ret

```

```c
// DBUpdatePcroomDailyReward::dispatch @ 0x815d024

/* DBUpdatePcroomDailyReward::dispatch(int, int, Stream*) */

undefined4 DBUpdatePcroomDailyReward::dispatch(int param_1,int param_2,Stream *param_3)

{
  MSG MVar1;
  char cVar2;
  MSG *pMVar3;
  undefined4 *puVar4;
  MySQL *this;
  undefined4 uVar5;
  int iVar6;
  Stream *in_stack_00000010;
  
                    /* try { // try from 0815d032 to 0815d24b has its CatchHandler @ 0815d253 */
  pMVar3 = Stream::GetOutBuffer<DBUpdatePcroomDailyReward::MSG>(in_stack_00000010);
  if (pMVar3 == (MSG *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "context null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this == (MySQL *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  uVar5 = NumberToString(*(uint *)pMVar3,0);
  MySQL::set_query(this,"seLect m_id from pcroom_daily_reward_tw where m_id=%s",uVar5);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  iVar6 = MySQL::get_n_rows(this);
  if (iVar6 == 0) {
    MVar1 = pMVar3[4];
    uVar5 = NumberToString(*(uint *)pMVar3,0);
    MySQL::set_query(this,
                     "inSert into pcroom_daily_reward_tw(m_id, occ_date, remain_reward_count) values(\'%s\', now(), %d)"
                     ,uVar5,(int)(char)MVar1);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      puVar4 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar4 = "insert_exec";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&char_const*::typeinfo,0);
    }
  }
  else {
    uVar5 = NumberToString(*(uint *)pMVar3,0);
    MySQL::set_query(this,
                     "upDate pcroom_daily_reward_tw set occ_date=now(), remain_reward_count=%d where m_id = %s"
                     ,(int)(char)pMVar3[4],uVar5);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      puVar4 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar4 = "update_exec";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&char_const*::typeinfo,0);
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0815cf06 DBUpdatePcroomDailyReward::makeRequest  [0x0815cf06-0x815d023] ===
 815cf06:	55                   	push   %ebp
 815cf07:	89 e5                	mov    %esp,%ebp
 815cf09:	56                   	push   %esi
 815cf0a:	53                   	push   %ebx
 815cf0b:	83 ec 30             	sub    $0x30,%esp
 815cf0e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815cf13:	c7 44 24 08 25 03 00 	movl   $0x325,0x8(%esp)
 815cf1a:	00 
 815cf1b:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815cf22:	08 
 815cf23:	89 04 24             	mov    %eax,(%esp)
 815cf26:	e8 5b 2b 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815cf2b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815cf32:	00 
 815cf33:	89 44 24 04          	mov    %eax,0x4(%esp)
 815cf37:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815cf3a:	89 04 24             	mov    %eax,(%esp)
 815cf3d:	e8 e4 bc f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815cf42:	8b 45 08             	mov    0x8(%ebp),%eax
 815cf45:	89 04 24             	mov    %eax,(%esp)
 815cf48:	e8 49 bd f6 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 815cf4d:	89 44 24 08          	mov    %eax,0x8(%esp)
 815cf51:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 815cf58:	00 
 815cf59:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815cf5c:	89 04 24             	mov    %eax,(%esp)
 815cf5f:	e8 ec 69 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815cf64:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815cf67:	89 04 24             	mov    %eax,(%esp)
 815cf6a:	e8 df bc f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815cf6f:	89 04 24             	mov    %eax,(%esp)
 815cf72:	e8 27 1d 00 00       	call   815ec9e <_ZN12CStreamGuard11GetInBufferIN25DBUpdatePcroomDailyReward3MSGEEEPT_v>
 815cf77:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815cf7a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815cf7e:	75 38                	jne    815cfb8 <_ZN25DBUpdatePcroomDailyReward11makeRequestEP5CUser+0xb2>
 815cf80:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815cf87:	00 
 815cf88:	c7 44 24 08 2b 03 00 	movl   $0x32b,0x8(%esp)
 815cf8f:	00 
 815cf90:	c7 44 24 04 00 8e b7 	movl   $0x8b78e00,0x4(%esp)
 815cf97:	08 
 815cf98:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 815cf9b:	89 04 24             	mov    %eax,(%esp)
 815cf9e:	e8 75 27 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815cfa3:	c7 44 24 04 13 7b b7 	movl   $0x8b77b13,0x4(%esp)
 815cfaa:	08 
 815cfab:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 815cfae:	89 04 24             	mov    %eax,(%esp)
 815cfb1:	e8 d2 27 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815cfb6:	eb 59                	jmp    815d011 <_ZN25DBUpdatePcroomDailyReward11makeRequestEP5CUser+0x10b>
 815cfb8:	8b 45 08             	mov    0x8(%ebp),%eax
 815cfbb:	89 04 24             	mov    %eax,(%esp)
 815cfbe:	e8 ab d3 f7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 815cfc3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815cfc6:	89 02                	mov    %eax,(%edx)
 815cfc8:	8b 45 08             	mov    0x8(%ebp),%eax
 815cfcb:	0f b6 90 32 ec 08 00 	movzbl 0x8ec32(%eax),%edx
 815cfd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815cfd5:	88 50 04             	mov    %dl,0x4(%eax)
 815cfd8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815cfdd:	8d 55 dc             	lea    -0x24(%ebp),%edx
 815cfe0:	89 54 24 08          	mov    %edx,0x8(%esp)
 815cfe4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 815cfeb:	00 
 815cfec:	89 04 24             	mov    %eax,(%esp)
 815cfef:	e8 ea 3f 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815cff4:	eb 1b                	jmp    815d011 <_ZN25DBUpdatePcroomDailyReward11makeRequestEP5CUser+0x10b>
 815cff6:	89 d3                	mov    %edx,%ebx
 815cff8:	89 c6                	mov    %eax,%esi
 815cffa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815cffd:	89 04 24             	mov    %eax,(%esp)
 815d000:	e8 cd f8 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815d005:	89 f0                	mov    %esi,%eax
 815d007:	89 da                	mov    %ebx,%edx
 815d009:	89 04 24             	mov    %eax,(%esp)
 815d00c:	e8 3f 67 98 00       	call   8ae3750 <_Unwind_Resume>
 815d011:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815d014:	89 04 24             	mov    %eax,(%esp)
 815d017:	e8 b6 f8 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815d01c:	83 c4 30             	add    $0x30,%esp
 815d01f:	5b                   	pop    %ebx
 815d020:	5e                   	pop    %esi
 815d021:	5d                   	pop    %ebp
 815d022:	c3                   	ret
 815d023:	90                   	nop

```

```c
// DBUpdatePcroomDailyReward::makeRequest @ 0x815cf06

/* DBUpdatePcroomDailyReward::makeRequest(CUser*) */

void DBUpdatePcroomDailyReward::makeRequest(CUser *param_1)

{
  Stream *pSVar1;
  undefined4 uVar2;
  CStreamGuard *this;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  MSG *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x325);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  uVar2 = CUser::GetUID(param_1);
                    /* try { // try from 0815cf5f to 0815cff3 has its CatchHandler @ 0815cff6 */
  Taiwan::internal_stream(local_28,0xe,uVar2);
  this = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<DBUpdatePcroomDailyReward::MSG>(this);
  if (local_10 == (MSG *)0x0) {
    cMyTrace::cMyTrace(local_20,"static void DBUpdatePcroomDailyReward::makeRequest(CUser*)",0x32b,0
                      );
    cMyTrace::operator()(local_20,"[Taiwan, Pcroom] msg is null");
  }
  else {
    uVar2 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_10 = uVar2;
    local_10[4] = *(MSG *)(param_1 + 0x8ec32);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  }
  CStreamGuard::~CStreamGuard(local_28);
  return;
}

```

