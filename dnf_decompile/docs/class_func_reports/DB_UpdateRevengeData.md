# DB_UpdateRevengeData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843f34c DB_UpdateRevengeData::dispatch  [0x0843f34c-0x843f5d1] ===
 843f34c:	55                   	push   %ebp
 843f34d:	89 e5                	mov    %esp,%ebp
 843f34f:	83 ec 78             	sub    $0x78,%esp
 843f352:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 843f359:	c6 45 c3 00          	movb   $0x0,-0x3d(%ebp)
 843f35d:	c6 45 c2 00          	movb   $0x0,-0x3e(%ebp)
 843f361:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 843f364:	89 44 24 04          	mov    %eax,0x4(%esp)
 843f368:	8b 45 14             	mov    0x14(%ebp),%eax
 843f36b:	89 04 24             	mov    %eax,(%esp)
 843f36e:	e8 23 d4 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843f373:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 843f376:	89 44 24 04          	mov    %eax,0x4(%esp)
 843f37a:	8b 45 14             	mov    0x14(%ebp),%eax
 843f37d:	89 04 24             	mov    %eax,(%esp)
 843f380:	e8 ad d3 1d 00       	call   861c732 <_ZN6StreamrsERh>
 843f385:	8d 45 c2             	lea    -0x3e(%ebp),%eax
 843f388:	89 44 24 04          	mov    %eax,0x4(%esp)
 843f38c:	8b 45 14             	mov    0x14(%ebp),%eax
 843f38f:	89 04 24             	mov    %eax,(%esp)
 843f392:	e8 9b d3 1d 00       	call   861c732 <_ZN6StreamrsERh>
 843f397:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 843f39a:	85 c0                	test   %eax,%eax
 843f39c:	75 0a                	jne    843f3a8 <_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream+0x5c>
 843f39e:	b8 00 00 00 00       	mov    $0x0,%eax
 843f3a3:	e9 27 02 00 00       	jmp    843f5cf <_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream+0x283>
 843f3a8:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 843f3af:	e8 ea c8 c8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 843f3b4:	89 45 bc             	mov    %eax,-0x44(%ebp)
 843f3b7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 843f3ba:	89 04 24             	mov    %eax,(%esp)
 843f3bd:	e8 6e ef c3 ff       	call   807e330 <localtime@plt>
 843f3c2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 843f3c5:	e8 b7 cd c8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 843f3ca:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 843f3d0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843f3d3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843f3d6:	8b 40 08             	mov    0x8(%eax),%eax
 843f3d9:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 843f3dc:	7d 20                	jge    843f3fe <_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream+0xb2>
 843f3de:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 843f3e5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 843f3e8:	2d 80 51 01 00       	sub    $0x15180,%eax
 843f3ed:	89 45 bc             	mov    %eax,-0x44(%ebp)
 843f3f0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 843f3f3:	89 04 24             	mov    %eax,(%esp)
 843f3f6:	e8 35 ef c3 ff       	call   807e330 <localtime@plt>
 843f3fb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 843f3fe:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843f401:	89 04 24             	mov    %eax,(%esp)
 843f404:	e8 17 f4 c3 ff       	call   807e820 <mktime@plt>
 843f409:	89 45 ec             	mov    %eax,-0x14(%ebp)
 843f40c:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 843f413:	00 
 843f414:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843f41b:	00 
 843f41c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 843f41f:	89 04 24             	mov    %eax,(%esp)
 843f422:	e8 99 e8 c3 ff       	call   807dcc0 <memset@plt>
 843f427:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843f42a:	8b 40 0c             	mov    0xc(%eax),%eax
 843f42d:	8b 55 e8             	mov    -0x18(%ebp),%edx
 843f430:	8b 52 10             	mov    0x10(%edx),%edx
 843f433:	8d 4a 01             	lea    0x1(%edx),%ecx
 843f436:	8b 55 e8             	mov    -0x18(%ebp),%edx
 843f439:	8b 52 14             	mov    0x14(%edx),%edx
 843f43c:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 843f442:	89 44 24 10          	mov    %eax,0x10(%esp)
 843f446:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 843f44a:	89 54 24 08          	mov    %edx,0x8(%esp)
 843f44e:	c7 44 24 04 1a 58 c5 	movl   $0x8c5581a,0x4(%esp)
 843f455:	08 
 843f456:	8d 45 b0             	lea    -0x50(%ebp),%eax
 843f459:	89 04 24             	mov    %eax,(%esp)
 843f45c:	e8 df ef c3 ff       	call   807e440 <sprintf@plt>
 843f461:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843f466:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843f46d:	00 
 843f46e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843f475:	00 
 843f476:	89 04 24             	mov    %eax,(%esp)
 843f479:	e8 c0 5d fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843f47e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843f481:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 843f485:	75 0a                	jne    843f491 <_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream+0x145>
 843f487:	b8 00 00 00 00       	mov    $0x0,%eax
 843f48c:	e9 3e 01 00 00       	jmp    843f5cf <_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream+0x283>
 843f491:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 843f494:	0f b6 45 c2          	movzbl -0x3e(%ebp),%eax
 843f498:	0f b6 d0             	movzbl %al,%edx
 843f49b:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 843f49f:	0f b6 c0             	movzbl %al,%eax
 843f4a2:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 843f4a6:	8d 4d b0             	lea    -0x50(%ebp),%ecx
 843f4a9:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 843f4ad:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843f4b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 843f4b5:	c7 44 24 04 a0 58 c5 	movl   $0x8c558a0,0x4(%esp)
 843f4bc:	08 
 843f4bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f4c0:	89 04 24             	mov    %eax,(%esp)
 843f4c3:	e8 f8 4c fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843f4c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843f4cf:	00 
 843f4d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f4d3:	89 04 24             	mov    %eax,(%esp)
 843f4d6:	e8 4b 4e fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843f4db:	83 f0 01             	xor    $0x1,%eax
 843f4de:	84 c0                	test   %al,%al
 843f4e0:	74 40                	je     843f522 <_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream+0x1d6>
 843f4e2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 843f4e9:	00 
 843f4ea:	c7 44 24 08 fc 98 00 	movl   $0x98fc,0x8(%esp)
 843f4f1:	00 
 843f4f2:	c7 44 24 04 60 ba c5 	movl   $0x8c5ba60,0x4(%esp)
 843f4f9:	08 
 843f4fa:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843f4fd:	89 04 24             	mov    %eax,(%esp)
 843f500:	e8 13 02 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 843f505:	c7 44 24 04 14 59 c5 	movl   $0x8c55914,0x4(%esp)
 843f50c:	08 
 843f50d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843f510:	89 04 24             	mov    %eax,(%esp)
 843f513:	e8 70 02 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 843f518:	b8 00 00 00 00       	mov    $0x0,%eax
 843f51d:	e9 ad 00 00 00       	jmp    843f5cf <_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream+0x283>
 843f522:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f525:	89 04 24             	mov    %eax,(%esp)
 843f528:	e8 e3 4d fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843f52d:	09 d0                	or     %edx,%eax
 843f52f:	85 c0                	test   %eax,%eax
 843f531:	0f 94 c0             	sete   %al
 843f534:	84 c0                	test   %al,%al
 843f536:	0f 84 8e 00 00 00    	je     843f5ca <_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream+0x27e>
 843f53c:	0f b6 45 c2          	movzbl -0x3e(%ebp),%eax
 843f540:	0f b6 c8             	movzbl %al,%ecx
 843f543:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 843f547:	0f b6 d0             	movzbl %al,%edx
 843f54a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 843f54d:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 843f551:	89 54 24 10          	mov    %edx,0x10(%esp)
 843f555:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843f559:	8d 45 b0             	lea    -0x50(%ebp),%eax
 843f55c:	89 44 24 08          	mov    %eax,0x8(%esp)
 843f560:	c7 44 24 04 3c 59 c5 	movl   $0x8c5593c,0x4(%esp)
 843f567:	08 
 843f568:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f56b:	89 04 24             	mov    %eax,(%esp)
 843f56e:	e8 4d 4c fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843f573:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843f57a:	00 
 843f57b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843f57e:	89 04 24             	mov    %eax,(%esp)
 843f581:	e8 a0 4d fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843f586:	83 f0 01             	xor    $0x1,%eax
 843f589:	84 c0                	test   %al,%al
 843f58b:	74 3d                	je     843f5ca <_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream+0x27e>
 843f58d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 843f594:	00 
 843f595:	c7 44 24 08 07 99 00 	movl   $0x9907,0x8(%esp)
 843f59c:	00 
 843f59d:	c7 44 24 04 60 ba c5 	movl   $0x8c5ba60,0x4(%esp)
 843f5a4:	08 
 843f5a5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843f5a8:	89 04 24             	mov    %eax,(%esp)
 843f5ab:	e8 68 01 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 843f5b0:	c7 44 24 04 ac 59 c5 	movl   $0x8c559ac,0x4(%esp)
 843f5b7:	08 
 843f5b8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843f5bb:	89 04 24             	mov    %eax,(%esp)
 843f5be:	e8 c5 01 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 843f5c3:	b8 00 00 00 00       	mov    $0x0,%eax
 843f5c8:	eb 05                	jmp    843f5cf <_ZN20DB_UpdateRevengeData8dispatchEiiP6Stream+0x283>
 843f5ca:	b8 01 00 00 00       	mov    $0x1,%eax
 843f5cf:	c9                   	leave
 843f5d0:	c3                   	ret
 843f5d1:	90                   	nop

```

```c
// DB_UpdateRevengeData::dispatch @ 0x843f34c

/* DB_UpdateRevengeData::dispatch(int, int, Stream*) */

undefined4 DB_UpdateRevengeData::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  char local_54 [12];
  int local_48;
  byte local_42;
  byte local_41;
  uint local_40;
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  tm *local_1c;
  time_t local_18;
  int local_14;
  MySQL *local_10;
  
  local_40 = 0;
  local_41 = 0;
  local_42 = 0;
  Stream::operator>>(in_stack_00000010,&local_40);
  Stream::operator>>(in_stack_00000010,&local_41);
  Stream::operator>>(in_stack_00000010,&local_42);
  if (local_40 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_1c = localtime(&local_48);
    iVar3 = G_CEnvironment();
    local_14 = *(int *)(iVar3 + 0x37c);
    if (local_1c->tm_hour < local_14) {
      local_1c = (tm *)0x0;
      local_48 = local_48 + -0x15180;
      local_1c = localtime(&local_48);
    }
    local_18 = mktime(local_1c);
    memset(local_54,0,0xc);
    sprintf(local_54,"%04d-%02d-%02d",local_1c->tm_year + 0x76c,local_1c->tm_mon + 1,
            local_1c->tm_mday);
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    if (local_10 == (MySQL *)0x0) {
      uVar2 = 0;
    }
    else {
      MySQL::set_query(local_10,
                       "upDate village_attack_dungeon set attack_count = %u, revenge_dungeon = %u where occ_date = \'%s\' and charac_no = %u"
                       ,(uint)local_41,(uint)local_42,local_54,local_40);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 == '\x01') {
        lVar4 = MySQL::getAffectedRowCount(local_10);
        if (lVar4 == 0) {
          MySQL::set_query(local_10,
                           "inSert into village_attack_dungeon(occ_date, charac_no, attack_count, revenge_dungeon) values(\'%s\', %u, %u, %u)"
                           ,local_54,local_40,(uint)local_41,(uint)local_42);
          cVar1 = MySQL::exec(local_10,true);
          if (cVar1 != '\x01') {
            cMyTrace::cMyTrace(local_2c,
                               "virtual bool DB_UpdateRevengeData::dispatch(int, int, Stream*)",
                               0x9907,5);
            cMyTrace::operator()(local_2c,"event_integration_charac inSert exec fail");
            return 0;
          }
        }
        uVar2 = 1;
      }
      else {
        cMyTrace::cMyTrace(local_3c,"virtual bool DB_UpdateRevengeData::dispatch(int, int, Stream*)"
                           ,0x98fc,5);
        cMyTrace::operator()(local_3c,"village_attack_dungeon upDate exec fail");
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## makeRequest

```asm
// === 0843f232 DB_UpdateRevengeData::makeRequest  [0x0843f232-0x843f34b] ===
 843f232:	55                   	push   %ebp
 843f233:	89 e5                	mov    %esp,%ebp
 843f235:	56                   	push   %esi
 843f236:	53                   	push   %ebx
 843f237:	83 ec 30             	sub    $0x30,%esp
 843f23a:	8b 55 0c             	mov    0xc(%ebp),%edx
 843f23d:	8b 45 10             	mov    0x10(%ebp),%eax
 843f240:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 843f243:	88 45 e0             	mov    %al,-0x20(%ebp)
 843f246:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843f24b:	c7 44 24 08 bd 98 00 	movl   $0x98bd,0x8(%esp)
 843f252:	00 
 843f253:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843f25a:	08 
 843f25b:	89 04 24             	mov    %eax,(%esp)
 843f25e:	e8 23 08 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843f263:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843f26a:	00 
 843f26b:	89 44 24 04          	mov    %eax,0x4(%esp)
 843f26f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f272:	89 04 24             	mov    %eax,(%esp)
 843f275:	e8 ac 99 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843f27a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f27d:	89 04 24             	mov    %eax,(%esp)
 843f280:	e8 c1 99 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f285:	c7 44 24 04 44 02 00 	movl   $0x244,0x4(%esp)
 843f28c:	00 
 843f28d:	89 04 24             	mov    %eax,(%esp)
 843f290:	e8 c1 99 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843f295:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f298:	89 04 24             	mov    %eax,(%esp)
 843f29b:	e8 a6 99 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f2a0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843f2a7:	ff 
 843f2a8:	89 04 24             	mov    %eax,(%esp)
 843f2ab:	e8 a6 99 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843f2b0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f2b3:	89 04 24             	mov    %eax,(%esp)
 843f2b6:	e8 8b 99 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f2bb:	8b 55 08             	mov    0x8(%ebp),%edx
 843f2be:	89 54 24 04          	mov    %edx,0x4(%esp)
 843f2c2:	89 04 24             	mov    %eax,(%esp)
 843f2c5:	e8 c8 2f ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843f2ca:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 843f2ce:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f2d1:	89 04 24             	mov    %eax,(%esp)
 843f2d4:	e8 6d 99 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f2d9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843f2dd:	89 04 24             	mov    %eax,(%esp)
 843f2e0:	e8 6f e1 00 00       	call   844d454 <_ZN12CStreamGuardlsEh>
 843f2e5:	0f b6 5d e0          	movzbl -0x20(%ebp),%ebx
 843f2e9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f2ec:	89 04 24             	mov    %eax,(%esp)
 843f2ef:	e8 52 99 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843f2f4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843f2f8:	89 04 24             	mov    %eax,(%esp)
 843f2fb:	e8 54 e1 00 00       	call   844d454 <_ZN12CStreamGuardlsEh>
 843f300:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843f305:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843f308:	89 54 24 08          	mov    %edx,0x8(%esp)
 843f30c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843f313:	00 
 843f314:	89 04 24             	mov    %eax,(%esp)
 843f317:	e8 c2 1c 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843f31c:	eb 1b                	jmp    843f339 <_ZN20DB_UpdateRevengeData11makeRequestEjhh+0x107>
 843f31e:	89 d3                	mov    %edx,%ebx
 843f320:	89 c6                	mov    %eax,%esi
 843f322:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f325:	89 04 24             	mov    %eax,(%esp)
 843f328:	e8 a5 d5 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843f32d:	89 f0                	mov    %esi,%eax
 843f32f:	89 da                	mov    %ebx,%edx
 843f331:	89 04 24             	mov    %eax,(%esp)
 843f334:	e8 17 44 6a 00       	call   8ae3750 <_Unwind_Resume>
 843f339:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843f33c:	89 04 24             	mov    %eax,(%esp)
 843f33f:	e8 8e d5 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843f344:	83 c4 30             	add    $0x30,%esp
 843f347:	5b                   	pop    %ebx
 843f348:	5e                   	pop    %esi
 843f349:	5d                   	pop    %ebp
 843f34a:	c3                   	ret
 843f34b:	90                   	nop

```

```c
// DB_UpdateRevengeData::makeRequest @ 0x843f232

/* DB_UpdateRevengeData::makeRequest(unsigned int, unsigned char, unsigned char) */

void DB_UpdateRevengeData::makeRequest(uint param_1,uchar param_2,uchar param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x98bd);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843f290 to 0843f31b has its CatchHandler @ 0843f31e */
  CStreamGuard::operator<<(pCVar2,0x244);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

