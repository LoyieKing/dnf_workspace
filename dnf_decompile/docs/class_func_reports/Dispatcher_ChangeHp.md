# Dispatcher_ChangeHp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820748a Dispatcher_ChangeHp::dispatch_sig  [0x0820748a-0x8207567] ===
 820748a:	55                   	push   %ebp
 820748b:	89 e5                	mov    %esp,%ebp
 820748d:	53                   	push   %ebx
 820748e:	83 ec 24             	sub    $0x24,%esp
 8207491:	8b 45 0c             	mov    0xc(%ebp),%eax
 8207494:	89 04 24             	mov    %eax,(%esp)
 8207497:	e8 f0 2e ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820749c:	83 f8 01             	cmp    $0x1,%eax
 820749f:	0f 9e c0             	setle  %al
 82074a2:	84 c0                	test   %al,%al
 82074a4:	74 29                	je     82074cf <_ZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBuf+0x45>
 82074a6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82074ad:	00 
 82074ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82074b5:	00 
 82074b6:	c7 44 24 04 a0 e9 bc 	movl   $0x8bce9a0,0x4(%esp)
 82074bd:	08 
 82074be:	c7 04 24 06 a2 00 00 	movl   $0xa206,(%esp)
 82074c5:	e8 0d 94 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82074ca:	e9 93 00 00 00       	jmp    8207562 <_ZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBuf+0xd8>
 82074cf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82074d6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82074d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82074dd:	8b 45 10             	mov    0x10(%ebp),%eax
 82074e0:	89 04 24             	mov    %eax,(%esp)
 82074e3:	e8 08 5c 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82074e8:	83 f0 01             	xor    $0x1,%eax
 82074eb:	84 c0                	test   %al,%al
 82074ed:	74 26                	je     8207515 <_ZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBuf+0x8b>
 82074ef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82074f6:	00 
 82074f7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82074fe:	00 
 82074ff:	c7 44 24 04 a0 e9 bc 	movl   $0x8bce9a0,0x4(%esp)
 8207506:	08 
 8207507:	c7 04 24 0a a2 00 00 	movl   $0xa20a,(%esp)
 820750e:	e8 c4 93 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207513:	eb 4d                	jmp    8207562 <_ZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBuf+0xd8>
 8207515:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8207518:	e8 83 db 02 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 820751d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8207521:	8b 55 0c             	mov    0xc(%ebp),%edx
 8207524:	89 54 24 04          	mov    %edx,0x4(%esp)
 8207528:	89 04 24             	mov    %eax,(%esp)
 820752b:	e8 40 80 0e 00       	call   82ef570 <_ZN11pvp_assault11CAssaultMgr10OnChangeHpEP5CUseri>
 8207530:	83 f0 01             	xor    $0x1,%eax
 8207533:	84 c0                	test   %al,%al
 8207535:	74 26                	je     820755d <_ZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBuf+0xd3>
 8207537:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820753e:	00 
 820753f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207546:	00 
 8207547:	c7 44 24 04 a0 e9 bc 	movl   $0x8bce9a0,0x4(%esp)
 820754e:	08 
 820754f:	c7 04 24 0d a2 00 00 	movl   $0xa20d,(%esp)
 8207556:	e8 7c 93 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820755b:	eb 05                	jmp    8207562 <_ZN19Dispatcher_ChangeHp12dispatch_sigEP5CUserR9PacketBuf+0xd8>
 820755d:	b8 00 00 00 00       	mov    $0x0,%eax
 8207562:	83 c4 24             	add    $0x24,%esp
 8207565:	5b                   	pop    %ebx
 8207566:	5d                   	pop    %ebp
 8207567:	c3                   	ret

```

```c
// Dispatcher_ChangeHp::dispatch_sig @ 0x820748a

/* Dispatcher_ChangeHp::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ChangeHp::dispatch_sig(Dispatcher_ChangeHp *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CAssaultMgr *this_00;
  int local_10 [2];
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa206,"virtual int Dispatcher_ChangeHp::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    local_10[0] = 0;
    cVar1 = PacketBuf::get_int(param_2,local_10);
    iVar2 = local_10[0];
    if (cVar1 == '\x01') {
      this_00 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      cVar1 = pvp_assault::CAssaultMgr::OnChangeHp(this_00,param_1,iVar2);
      if (cVar1 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xa20d,"virtual int Dispatcher_ChangeHp::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa20a,"virtual int Dispatcher_ChangeHp::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar3;
}

```

