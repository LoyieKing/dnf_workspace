# DB_SaveKillMonsterInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08441200 DB_SaveKillMonsterInfo::dispatch  [0x08441200-0x84414df] ===
 8441200:	55                   	push   %ebp
 8441201:	89 e5                	mov    %esp,%ebp
 8441203:	53                   	push   %ebx
 8441204:	83 ec 74             	sub    $0x74,%esp
 8441207:	8b 45 14             	mov    0x14(%ebp),%eax
 844120a:	89 04 24             	mov    %eax,(%esp)
 844120d:	e8 64 2b 01 00       	call   8453d76 <_ZN6Stream12GetOutBufferI26SIG_LOAD_KILL_MONSTER_INFOEEPT_v>
 8441212:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8441215:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8441219:	75 0a                	jne    8441225 <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x25>
 844121b:	b8 00 00 00 00       	mov    $0x0,%eax
 8441220:	e9 b5 02 00 00       	jmp    84414da <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x2da>
 8441225:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844122a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8441231:	00 
 8441232:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8441239:	00 
 844123a:	89 04 24             	mov    %eax,(%esp)
 844123d:	e8 fc 3f fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8441242:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8441245:	c7 45 f0 05 00 00 00 	movl   $0x5,-0x10(%ebp)
 844124c:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8441250:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8441257:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 844125e:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8441265:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8441268:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 844126b:	89 54 24 10          	mov    %edx,0x10(%esp)
 844126f:	c7 44 24 0c 4c 1d 00 	movl   $0x1d4c,0xc(%esp)
 8441276:	00 
 8441277:	89 44 24 08          	mov    %eax,0x8(%esp)
 844127b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8441282:	00 
 8441283:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8441286:	89 04 24             	mov    %eax,(%esp)
 8441289:	e8 78 aa fb ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 844128e:	88 45 f7             	mov    %al,-0x9(%ebp)
 8441291:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8441295:	83 f0 01             	xor    $0x1,%eax
 8441298:	84 c0                	test   %al,%al
 844129a:	74 55                	je     84412f1 <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0xf1>
 844129c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844129f:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 84412a5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84412ac:	00 
 84412ad:	c7 44 24 08 10 a0 00 	movl   $0xa010,0x8(%esp)
 84412b4:	00 
 84412b5:	c7 44 24 04 a0 b8 c5 	movl   $0x8c5b8a0,0x4(%esp)
 84412bc:	08 
 84412bd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84412c0:	89 04 24             	mov    %eax,(%esp)
 84412c3:	e8 50 e4 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84412c8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84412cc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84412d3:	00 
 84412d4:	c7 44 24 04 9c 63 c5 	movl   $0x8c5639c,0x4(%esp)
 84412db:	08 
 84412dc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84412df:	89 04 24             	mov    %eax,(%esp)
 84412e2:	e8 a1 e4 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84412e7:	b8 00 00 00 00       	mov    $0x0,%eax
 84412ec:	e9 e9 01 00 00       	jmp    84414da <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x2da>
 84412f1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84412f4:	05 4c 1d 00 00       	add    $0x1d4c,%eax
 84412f9:	8d 55 b0             	lea    -0x50(%ebp),%edx
 84412fc:	89 54 24 10          	mov    %edx,0x10(%esp)
 8441300:	c7 44 24 0c 30 75 00 	movl   $0x7530,0xc(%esp)
 8441307:	00 
 8441308:	89 44 24 08          	mov    %eax,0x8(%esp)
 844130c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8441313:	00 
 8441314:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8441317:	89 04 24             	mov    %eax,(%esp)
 844131a:	e8 e7 a9 fb ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 844131f:	88 45 f7             	mov    %al,-0x9(%ebp)
 8441322:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8441326:	83 f0 01             	xor    $0x1,%eax
 8441329:	84 c0                	test   %al,%al
 844132b:	74 55                	je     8441382 <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x182>
 844132d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8441330:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 8441336:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844133d:	00 
 844133e:	c7 44 24 08 1a a0 00 	movl   $0xa01a,0x8(%esp)
 8441345:	00 
 8441346:	c7 44 24 04 a0 b8 c5 	movl   $0x8c5b8a0,0x4(%esp)
 844134d:	08 
 844134e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8441351:	89 04 24             	mov    %eax,(%esp)
 8441354:	e8 bf e3 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8441359:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 844135d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8441364:	00 
 8441365:	c7 44 24 04 ec 63 c5 	movl   $0x8c563ec,0x4(%esp)
 844136c:	08 
 844136d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8441370:	89 04 24             	mov    %eax,(%esp)
 8441373:	e8 10 e4 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8441378:	b8 00 00 00 00       	mov    $0x0,%eax
 844137d:	e9 58 01 00 00       	jmp    84414da <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x2da>
 8441382:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8441385:	05 7c 92 00 00       	add    $0x927c,%eax
 844138a:	8d 55 ac             	lea    -0x54(%ebp),%edx
 844138d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8441391:	c7 44 24 0c 4c 1d 00 	movl   $0x1d4c,0xc(%esp)
 8441398:	00 
 8441399:	89 44 24 08          	mov    %eax,0x8(%esp)
 844139d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84413a4:	00 
 84413a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84413a8:	89 04 24             	mov    %eax,(%esp)
 84413ab:	e8 56 a9 fb ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 84413b0:	88 45 f7             	mov    %al,-0x9(%ebp)
 84413b3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 84413b7:	83 f0 01             	xor    $0x1,%eax
 84413ba:	84 c0                	test   %al,%al
 84413bc:	74 55                	je     8441413 <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x213>
 84413be:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84413c1:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 84413c7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84413ce:	00 
 84413cf:	c7 44 24 08 24 a0 00 	movl   $0xa024,0x8(%esp)
 84413d6:	00 
 84413d7:	c7 44 24 04 a0 b8 c5 	movl   $0x8c5b8a0,0x4(%esp)
 84413de:	08 
 84413df:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84413e2:	89 04 24             	mov    %eax,(%esp)
 84413e5:	e8 2e e3 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84413ea:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84413ee:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84413f5:	00 
 84413f6:	c7 44 24 04 3c 64 c5 	movl   $0x8c5643c,0x4(%esp)
 84413fd:	08 
 84413fe:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8441401:	89 04 24             	mov    %eax,(%esp)
 8441404:	e8 7f e3 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8441409:	b8 00 00 00 00       	mov    $0x0,%eax
 844140e:	e9 c7 00 00 00       	jmp    84414da <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x2da>
 8441413:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8441416:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 844141c:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 844141f:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8441422:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8441425:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8441429:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844142d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8441431:	89 44 24 08          	mov    %eax,0x8(%esp)
 8441435:	c7 44 24 04 90 64 c5 	movl   $0x8c56490,0x4(%esp)
 844143c:	08 
 844143d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8441440:	89 04 24             	mov    %eax,(%esp)
 8441443:	e8 78 2d fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8441448:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844144f:	00 
 8441450:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8441453:	89 04 24             	mov    %eax,(%esp)
 8441456:	e8 cb 2e fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 844145b:	83 f0 01             	xor    $0x1,%eax
 844145e:	84 c0                	test   %al,%al
 8441460:	74 07                	je     8441469 <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x269>
 8441462:	b8 00 00 00 00       	mov    $0x0,%eax
 8441467:	eb 71                	jmp    84414da <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x2da>
 8441469:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844146c:	89 04 24             	mov    %eax,(%esp)
 844146f:	e8 9c 2e fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8441474:	09 d0                	or     %edx,%eax
 8441476:	85 c0                	test   %eax,%eax
 8441478:	0f 94 c0             	sete   %al
 844147b:	84 c0                	test   %al,%al
 844147d:	74 56                	je     84414d5 <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x2d5>
 844147f:	8b 5d ac             	mov    -0x54(%ebp),%ebx
 8441482:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 8441485:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8441488:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844148b:	8b 80 c8 af 00 00    	mov    0xafc8(%eax),%eax
 8441491:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8441495:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8441499:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844149d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84414a1:	c7 44 24 04 fc 64 c5 	movl   $0x8c564fc,0x4(%esp)
 84414a8:	08 
 84414a9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84414ac:	89 04 24             	mov    %eax,(%esp)
 84414af:	e8 0c 2d fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84414b4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84414bb:	00 
 84414bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84414bf:	89 04 24             	mov    %eax,(%esp)
 84414c2:	e8 5f 2e fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84414c7:	83 f0 01             	xor    $0x1,%eax
 84414ca:	84 c0                	test   %al,%al
 84414cc:	74 07                	je     84414d5 <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x2d5>
 84414ce:	b8 00 00 00 00       	mov    $0x0,%eax
 84414d3:	eb 05                	jmp    84414da <_ZN22DB_SaveKillMonsterInfo8dispatchEiiP6Stream+0x2da>
 84414d5:	b8 01 00 00 00       	mov    $0x1,%eax
 84414da:	83 c4 74             	add    $0x74,%esp
 84414dd:	5b                   	pop    %ebx
 84414de:	5d                   	pop    %ebp
 84414df:	c3                   	ret

```

```c
// DB_SaveKillMonsterInfo::dispatch @ 0x8441200

/* DB_SaveKillMonsterInfo::dispatch(int, int, Stream*) */

undefined4 DB_SaveKillMonsterInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  char *local_58;
  char *local_54;
  char *local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  SIG_LOAD_KILL_MONSTER_INFO *local_1c;
  MySQL *local_18;
  undefined4 local_14;
  char local_d;
  
  local_1c = Stream::GetOutBuffer<SIG_LOAD_KILL_MONSTER_INFO>(in_stack_00000010);
  if (local_1c == (SIG_LOAD_KILL_MONSTER_INFO *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    local_14 = 5;
    local_d = 0;
    local_50 = (char *)0x0;
    local_54 = (char *)0x0;
    local_58 = (char *)0x0;
    local_d = put_compressed_blob_data(local_18,0,(char *)local_1c,0x1d4c,&local_50);
    if (local_d == '\x01') {
      local_d = put_compressed_blob_data(local_18,1,(char *)(local_1c + 0x1d4c),30000,&local_54);
      if (local_d == '\x01') {
        local_d = put_compressed_blob_data(local_18,2,(char *)(local_1c + 0x927c),0x1d4c,&local_58);
        if (local_d == '\x01') {
          MySQL::set_query(local_18,
                           "upDate charac_kill_monster_info set boss_info=\'%s\', named_info=\'%s\', apc_boss_info=\'%s\' where charac_no=%u"
                           ,local_50,local_54,local_58,*(undefined4 *)(local_1c + 45000));
          cVar1 = MySQL::exec(local_18,true);
          if (cVar1 == '\x01') {
            lVar3 = MySQL::getAffectedRowCount(local_18);
            if (lVar3 == 0) {
              MySQL::set_query(local_18,
                               "inSert into charac_kill_monster_info(charac_no, boss_info, named_info, apc_boss_info) values(%u, \'%s\', \'%s\', \'%s\')"
                               ,*(undefined4 *)(local_1c + 45000),local_50,local_54,local_58);
              cVar1 = MySQL::exec(local_18,true);
              if (cVar1 != '\x01') {
                return 0;
              }
            }
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = *(undefined4 *)(local_1c + 45000);
          cMyTrace::cMyTrace(local_2c,
                             "virtual bool DB_SaveKillMonsterInfo::dispatch(int, int, Stream*)",
                             0xa024,5);
          cMyTrace::operator()
                    (local_2c,
                     "DB_SaveKillMonsterInfo::dispatch apc_boss_info compress_zip(%u) ERROR charac_no=%u"
                     ,2,uVar2);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = *(undefined4 *)(local_1c + 45000);
        cMyTrace::cMyTrace(local_3c,
                           "virtual bool DB_SaveKillMonsterInfo::dispatch(int, int, Stream*)",0xa01a
                           ,5);
        cMyTrace::operator()
                  (local_3c,
                   "DB_SaveKillMonsterInfo::dispatch named_info compress_zip(%u) ERROR charac_no=%u"
                   ,1,uVar2);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = *(undefined4 *)(local_1c + 45000);
      cMyTrace::cMyTrace(local_4c,"virtual bool DB_SaveKillMonsterInfo::dispatch(int, int, Stream*)"
                         ,0xa010,5);
      cMyTrace::operator()
                (local_4c,
                 "DB_SaveKillMonsterInfo::dispatch boss_info compress_zip(%u) ERROR charac_no=%u",0,
                 uVar2);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

