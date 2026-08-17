# DB_UpdateLogin

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841826a DB_UpdateLogin::dispatch  [0x0841826a-0x84183d7] ===
 841826a:	55                   	push   %ebp
 841826b:	89 e5                	mov    %esp,%ebp
 841826d:	56                   	push   %esi
 841826e:	53                   	push   %ebx
 841826f:	83 ec 30             	sub    $0x30,%esp
 8418272:	8b 45 14             	mov    0x14(%ebp),%eax
 8418275:	89 04 24             	mov    %eax,(%esp)
 8418278:	e8 a7 8b 03 00       	call   8450e24 <_ZN6Stream12GetOutBufferI16SIG_UPDATE_LOGINEEPT_v>
 841827d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8418280:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8418284:	75 0a                	jne    8418290 <_ZN14DB_UpdateLogin8dispatchEiiP6Stream+0x26>
 8418286:	b8 00 00 00 00       	mov    $0x0,%eax
 841828b:	e9 40 01 00 00       	jmp    84183d0 <_ZN14DB_UpdateLogin8dispatchEiiP6Stream+0x166>
 8418290:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8418297:	e8 0b 21 cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 841829c:	89 04 24             	mov    %eax,(%esp)
 841829f:	e8 7a 90 cd ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84182a4:	84 c0                	test   %al,%al
 84182a6:	74 0b                	je     84182b3 <_ZN14DB_UpdateLogin8dispatchEiiP6Stream+0x49>
 84182a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84182ab:	8b 40 08             	mov    0x8(%eax),%eax
 84182ae:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84182b1:	eb 0e                	jmp    84182c1 <_ZN14DB_UpdateLogin8dispatchEiiP6Stream+0x57>
 84182b3:	e8 c9 3e cb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84182b8:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 84182be:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84182c1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84182c6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84182cd:	00 
 84182ce:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84182d5:	00 
 84182d6:	89 04 24             	mov    %eax,(%esp)
 84182d9:	e8 60 cf fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84182de:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84182e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84182e4:	8b 00                	mov    (%eax),%eax
 84182e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84182ed:	00 
 84182ee:	89 04 24             	mov    %eax,(%esp)
 84182f1:	e8 55 0d cf ff       	call   810904b <_Z14NumberToStringji>
 84182f6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84182f9:	8d 5a 0c             	lea    0xc(%edx),%ebx
 84182fc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84182ff:	8b 4a 04             	mov    0x4(%edx),%ecx
 8418302:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8418305:	89 44 24 14          	mov    %eax,0x14(%esp)
 8418309:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 841830d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8418311:	89 54 24 08          	mov    %edx,0x8(%esp)
 8418315:	c7 44 24 04 40 9c c4 	movl   $0x8c49c40,0x4(%esp)
 841831c:	08 
 841831d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8418320:	89 04 24             	mov    %eax,(%esp)
 8418323:	e8 98 be fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8418328:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841832f:	00 
 8418330:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8418333:	89 04 24             	mov    %eax,(%esp)
 8418336:	e8 eb bf fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841833b:	83 f0 01             	xor    $0x1,%eax
 841833e:	84 c0                	test   %al,%al
 8418340:	75 11                	jne    8418353 <_ZN14DB_UpdateLogin8dispatchEiiP6Stream+0xe9>
 8418342:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8418345:	89 04 24             	mov    %eax,(%esp)
 8418348:	e8 c3 bf fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 841834d:	09 d0                	or     %edx,%eax
 841834f:	85 c0                	test   %eax,%eax
 8418351:	75 07                	jne    841835a <_ZN14DB_UpdateLogin8dispatchEiiP6Stream+0xf0>
 8418353:	b8 01 00 00 00       	mov    $0x1,%eax
 8418358:	eb 05                	jmp    841835f <_ZN14DB_UpdateLogin8dispatchEiiP6Stream+0xf5>
 841835a:	b8 00 00 00 00       	mov    $0x0,%eax
 841835f:	84 c0                	test   %al,%al
 8418361:	74 68                	je     84183cb <_ZN14DB_UpdateLogin8dispatchEiiP6Stream+0x161>
 8418363:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8418366:	8d 70 0c             	lea    0xc(%eax),%esi
 8418369:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841836c:	8b 58 04             	mov    0x4(%eax),%ebx
 841836f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8418372:	8b 00                	mov    (%eax),%eax
 8418374:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841837b:	00 
 841837c:	89 04 24             	mov    %eax,(%esp)
 841837f:	e8 c7 0c cf ff       	call   810904b <_Z14NumberToStringji>
 8418384:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8418387:	89 74 24 14          	mov    %esi,0x14(%esp)
 841838b:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 841838f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8418393:	89 54 24 08          	mov    %edx,0x8(%esp)
 8418397:	c7 44 24 04 b0 9c c4 	movl   $0x8c49cb0,0x4(%esp)
 841839e:	08 
 841839f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84183a2:	89 04 24             	mov    %eax,(%esp)
 84183a5:	e8 16 be fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84183aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84183b1:	00 
 84183b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84183b5:	89 04 24             	mov    %eax,(%esp)
 84183b8:	e8 69 bf fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84183bd:	83 f0 01             	xor    $0x1,%eax
 84183c0:	84 c0                	test   %al,%al
 84183c2:	74 07                	je     84183cb <_ZN14DB_UpdateLogin8dispatchEiiP6Stream+0x161>
 84183c4:	b8 00 00 00 00       	mov    $0x0,%eax
 84183c9:	eb 05                	jmp    84183d0 <_ZN14DB_UpdateLogin8dispatchEiiP6Stream+0x166>
 84183cb:	b8 01 00 00 00       	mov    $0x1,%eax
 84183d0:	83 c4 30             	add    $0x30,%esp
 84183d3:	5b                   	pop    %ebx
 84183d4:	5e                   	pop    %esi
 84183d5:	5d                   	pop    %ebp
 84183d6:	c3                   	ret
 84183d7:	90                   	nop

```

```c
// DB_UpdateLogin::dispatch @ 0x841826a

/* DB_UpdateLogin::dispatch(int, int, Stream*) */

undefined4 DB_UpdateLogin::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  SIG_UPDATE_LOGIN *pSVar3;
  GameWorld *this;
  int iVar4;
  MySQL *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  undefined4 local_14;
  
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_LOGIN>(in_stack_00000010);
  if (pSVar3 == (SIG_UPDATE_LOGIN *)0x0) {
    return 0;
  }
  this = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar2 == '\0') {
    iVar4 = G_CEnvironment();
    local_14 = *(undefined4 *)(iVar4 + 0x378);
  }
  else {
    local_14 = *(undefined4 *)(pSVar3 + 8);
  }
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar5 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this_00,
                   "upDate login_account_%d set m_channel_no=%d,login_status=1,last_login_date=now(),login_ip=\'%s\' where m_id=%s"
                   ,local_14,*(undefined4 *)(pSVar3 + 4),pSVar3 + 0xc,uVar5);
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (lVar7 = MySQL::getAffectedRowCount(this_00), lVar7 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar5 = *(undefined4 *)(pSVar3 + 4);
    uVar6 = NumberToString(*(uint *)pSVar3,0);
    MySQL::set_query(this_00,
                     "inSert into login_account_%d (m_id,m_channel_no,login_status,last_login_date,login_ip) values(%s,%d,1,now(),\'%s\')"
                     ,local_14,uVar6,uVar5,pSVar3 + 0xc);
    cVar2 = MySQL::exec(this_00,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

