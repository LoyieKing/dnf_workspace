# Dispatcher_DieAssaultPlayer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08207208 Dispatcher_DieAssaultPlayer::dispatch_sig  [0x08207208-0x8207489] ===
 8207208:	55                   	push   %ebp
 8207209:	89 e5                	mov    %esp,%ebp
 820720b:	53                   	push   %ebx
 820720c:	83 ec 34             	sub    $0x34,%esp
 820720f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207212:	89 04 24             	mov    %eax,(%esp)
 8207215:	e8 72 31 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820721a:	83 f8 01             	cmp    $0x1,%eax
 820721d:	0f 9e c0             	setle  %al
 8207220:	84 c0                	test   %al,%al
 8207222:	74 29                	je     820724d <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x45>
 8207224:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820722b:	00 
 820722c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207233:	00 
 8207234:	c7 44 24 04 00 ea bc 	movl   $0x8bcea00,0x4(%esp)
 820723b:	08 
 820723c:	c7 04 24 d2 a1 00 00 	movl   $0xa1d2,(%esp)
 8207243:	e8 8f 96 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207248:	e9 36 02 00 00       	jmp    8207483 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 820724d:	c6 45 f7 ff          	movb   $0xff,-0x9(%ebp)
 8207251:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8207254:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207258:	8b 45 10             	mov    0x10(%ebp),%eax
 820725b:	89 04 24             	mov    %eax,(%esp)
 820725e:	e8 bf 5c 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8207263:	83 f0 01             	xor    $0x1,%eax
 8207266:	84 c0                	test   %al,%al
 8207268:	74 29                	je     8207293 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x8b>
 820726a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207271:	00 
 8207272:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207279:	00 
 820727a:	c7 44 24 04 00 ea bc 	movl   $0x8bcea00,0x4(%esp)
 8207281:	08 
 8207282:	c7 04 24 d6 a1 00 00 	movl   $0xa1d6,(%esp)
 8207289:	e8 49 96 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820728e:	e9 f0 01 00 00       	jmp    8207483 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 8207293:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8207296:	89 44 24 04          	mov    %eax,0x4(%esp)
 820729a:	8b 45 10             	mov    0x10(%ebp),%eax
 820729d:	89 04 24             	mov    %eax,(%esp)
 82072a0:	e8 9b 5f 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 82072a5:	83 f0 01             	xor    $0x1,%eax
 82072a8:	84 c0                	test   %al,%al
 82072aa:	74 29                	je     82072d5 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0xcd>
 82072ac:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82072b3:	00 
 82072b4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82072bb:	00 
 82072bc:	c7 44 24 04 00 ea bc 	movl   $0x8bcea00,0x4(%esp)
 82072c3:	08 
 82072c4:	c7 04 24 dc a1 00 00 	movl   $0xa1dc,(%esp)
 82072cb:	e8 07 96 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82072d0:	e9 ae 01 00 00       	jmp    8207483 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 82072d5:	8d 45 e7             	lea    -0x19(%ebp),%eax
 82072d8:	83 c0 04             	add    $0x4,%eax
 82072db:	89 44 24 04          	mov    %eax,0x4(%esp)
 82072df:	8b 45 10             	mov    0x10(%ebp),%eax
 82072e2:	89 04 24             	mov    %eax,(%esp)
 82072e5:	e8 56 5f 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 82072ea:	83 f0 01             	xor    $0x1,%eax
 82072ed:	84 c0                	test   %al,%al
 82072ef:	74 29                	je     820731a <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x112>
 82072f1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82072f8:	00 
 82072f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207300:	00 
 8207301:	c7 44 24 04 00 ea bc 	movl   $0x8bcea00,0x4(%esp)
 8207308:	08 
 8207309:	c7 04 24 df a1 00 00 	movl   $0xa1df,(%esp)
 8207310:	e8 c2 95 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207315:	e9 69 01 00 00       	jmp    8207483 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 820731a:	8d 45 e7             	lea    -0x19(%ebp),%eax
 820731d:	83 c0 08             	add    $0x8,%eax
 8207320:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207324:	8b 45 10             	mov    0x10(%ebp),%eax
 8207327:	89 04 24             	mov    %eax,(%esp)
 820732a:	e8 91 5c 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 820732f:	83 f0 01             	xor    $0x1,%eax
 8207332:	84 c0                	test   %al,%al
 8207334:	74 29                	je     820735f <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x157>
 8207336:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820733d:	00 
 820733e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207345:	00 
 8207346:	c7 44 24 04 00 ea bc 	movl   $0x8bcea00,0x4(%esp)
 820734d:	08 
 820734e:	c7 04 24 e2 a1 00 00 	movl   $0xa1e2,(%esp)
 8207355:	e8 7d 95 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820735a:	e9 24 01 00 00       	jmp    8207483 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 820735f:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8207362:	83 c0 0a             	add    $0xa,%eax
 8207365:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207369:	8b 45 10             	mov    0x10(%ebp),%eax
 820736c:	89 04 24             	mov    %eax,(%esp)
 820736f:	e8 4c 5c 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8207374:	83 f0 01             	xor    $0x1,%eax
 8207377:	84 c0                	test   %al,%al
 8207379:	74 29                	je     82073a4 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x19c>
 820737b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207382:	00 
 8207383:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820738a:	00 
 820738b:	c7 44 24 04 00 ea bc 	movl   $0x8bcea00,0x4(%esp)
 8207392:	08 
 8207393:	c7 04 24 e5 a1 00 00 	movl   $0xa1e5,(%esp)
 820739a:	e8 38 95 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820739f:	e9 df 00 00 00       	jmp    8207483 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 82073a4:	8d 45 e7             	lea    -0x19(%ebp),%eax
 82073a7:	83 c0 0c             	add    $0xc,%eax
 82073aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82073ae:	8b 45 10             	mov    0x10(%ebp),%eax
 82073b1:	89 04 24             	mov    %eax,(%esp)
 82073b4:	e8 07 5c 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82073b9:	83 f0 01             	xor    $0x1,%eax
 82073bc:	84 c0                	test   %al,%al
 82073be:	74 29                	je     82073e9 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x1e1>
 82073c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82073c7:	00 
 82073c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82073cf:	00 
 82073d0:	c7 44 24 04 00 ea bc 	movl   $0x8bcea00,0x4(%esp)
 82073d7:	08 
 82073d8:	c7 04 24 e8 a1 00 00 	movl   $0xa1e8,(%esp)
 82073df:	e8 f3 94 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82073e4:	e9 9a 00 00 00       	jmp    8207483 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 82073e9:	8d 45 e7             	lea    -0x19(%ebp),%eax
 82073ec:	83 c0 0e             	add    $0xe,%eax
 82073ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 82073f3:	8b 45 10             	mov    0x10(%ebp),%eax
 82073f6:	89 04 24             	mov    %eax,(%esp)
 82073f9:	e8 c2 5b 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82073fe:	83 f0 01             	xor    $0x1,%eax
 8207401:	84 c0                	test   %al,%al
 8207403:	74 26                	je     820742b <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x223>
 8207405:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820740c:	00 
 820740d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207414:	00 
 8207415:	c7 44 24 04 00 ea bc 	movl   $0x8bcea00,0x4(%esp)
 820741c:	08 
 820741d:	c7 04 24 eb a1 00 00 	movl   $0xa1eb,(%esp)
 8207424:	e8 ae 94 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207429:	eb 58                	jmp    8207483 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 820742b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 820742f:	0f be d8             	movsbl %al,%ebx
 8207432:	e8 69 dc 02 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 8207437:	8d 55 e7             	lea    -0x19(%ebp),%edx
 820743a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 820743e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8207442:	8b 55 0c             	mov    0xc(%ebp),%edx
 8207445:	89 54 24 04          	mov    %edx,0x4(%esp)
 8207449:	89 04 24             	mov    %eax,(%esp)
 820744c:	e8 6d 7f 0e 00       	call   82ef3be <_ZN11pvp_assault11CAssaultMgr9OnDieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER>
 8207451:	83 f0 01             	xor    $0x1,%eax
 8207454:	84 c0                	test   %al,%al
 8207456:	74 26                	je     820747e <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x276>
 8207458:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820745f:	00 
 8207460:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207467:	00 
 8207468:	c7 44 24 04 00 ea bc 	movl   $0x8bcea00,0x4(%esp)
 820746f:	08 
 8207470:	c7 04 24 f1 a1 00 00 	movl   $0xa1f1,(%esp)
 8207477:	e8 5b 94 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820747c:	eb 05                	jmp    8207483 <_ZN27Dispatcher_DieAssaultPlayer12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 820747e:	b8 00 00 00 00       	mov    $0x0,%eax
 8207483:	83 c4 34             	add    $0x34,%esp
 8207486:	5b                   	pop    %ebx
 8207487:	5d                   	pop    %ebp
 8207488:	c3                   	ret
 8207489:	90                   	nop

```

```c
// Dispatcher_DieAssaultPlayer::dispatch_sig @ 0x8207208

/* Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DieAssaultPlayer::dispatch_sig
          (Dispatcher_DieAssaultPlayer *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CAssaultMgr *this_00;
  MSG_DIE_ASSAULT_PLAYER local_1d [4];
  uint uStack_19;
  short sStack_15;
  short sStack_13;
  short sStack_11;
  short sStack_f;
  char local_d [5];
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa1d2,
                     "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  else {
    local_d[0] = -1;
    cVar1 = PacketBuf::get_byte(param_2,local_d);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,(uint *)local_1d);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&uStack_19);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,&sStack_15);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_2,&sStack_13);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_2,&sStack_11);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_short(param_2,&sStack_f);
                if (cVar1 == '\x01') {
                  iVar2 = (int)local_d[0];
                  this_00 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
                  cVar1 = pvp_assault::CAssaultMgr::OnDieUser(this_00,param_1,iVar2,local_1d);
                  if (cVar1 == '\x01') {
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = LineFunc(0xa1f1,
                                     "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar3 = LineFunc(0xa1eb,
                                   "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar3 = LineFunc(0xa1e8,
                                 "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0xa1e5,
                               "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0xa1e2,
                             "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar3 = LineFunc(0xa1df,
                           "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xa1dc,
                         "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa1d6,
                       "virtual int Dispatcher_DieAssaultPlayer::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
    }
  }
  return uVar3;
}

```

