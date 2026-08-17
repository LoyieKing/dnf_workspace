# Dispatcher_BloodRoundUiPrepareFinish

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08222270 Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig  [0x08222270-0x82223a5] ===
 8222270:	55                   	push   %ebp
 8222271:	89 e5                	mov    %esp,%ebp
 8222273:	83 ec 28             	sub    $0x28,%esp
 8222276:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 822227a:	75 29                	jne    82222a5 <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x35>
 822227c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8222283:	00 
 8222284:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822228b:	00 
 822228c:	c7 44 24 04 a0 cd bc 	movl   $0x8bccda0,0x4(%esp)
 8222293:	08 
 8222294:	c7 04 24 bf db 00 00 	movl   $0xdbbf,(%esp)
 822229b:	e8 37 e6 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82222a0:	e9 ff 00 00 00       	jmp    82223a4 <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x134>
 82222a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82222a8:	89 04 24             	mov    %eax,(%esp)
 82222ab:	e8 82 e1 ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82222b0:	85 c0                	test   %eax,%eax
 82222b2:	0f 94 c0             	sete   %al
 82222b5:	84 c0                	test   %al,%al
 82222b7:	74 29                	je     82222e2 <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x72>
 82222b9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82222c0:	00 
 82222c1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82222c8:	00 
 82222c9:	c7 44 24 04 a0 cd bc 	movl   $0x8bccda0,0x4(%esp)
 82222d0:	08 
 82222d1:	c7 04 24 c0 db 00 00 	movl   $0xdbc0,(%esp)
 82222d8:	e8 fa e5 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82222dd:	e9 c2 00 00 00       	jmp    82223a4 <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x134>
 82222e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82222e5:	89 04 24             	mov    %eax,(%esp)
 82222e8:	e8 9f 80 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82222ed:	83 f8 05             	cmp    $0x5,%eax
 82222f0:	0f 95 c0             	setne  %al
 82222f3:	84 c0                	test   %al,%al
 82222f5:	74 29                	je     8222320 <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0xb0>
 82222f7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82222fe:	00 
 82222ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8222306:	00 
 8222307:	c7 44 24 04 a0 cd bc 	movl   $0x8bccda0,0x4(%esp)
 822230e:	08 
 822230f:	c7 04 24 c2 db 00 00 	movl   $0xdbc2,(%esp)
 8222316:	e8 bc e5 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822231b:	e9 84 00 00 00       	jmp    82223a4 <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x134>
 8222320:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222323:	89 04 24             	mov    %eax,(%esp)
 8222326:	e8 21 2e 43 00       	call   865514c <_ZN5CUser8GetPartyEv>
 822232b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 822232e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8222332:	74 6b                	je     822239f <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x12f>
 8222334:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8222337:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 822233d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8222340:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8222344:	74 59                	je     822239f <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x12f>
 8222346:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8222349:	0f b6 80 9f 08 00 00 	movzbl 0x89f(%eax),%eax
 8222350:	84 c0                	test   %al,%al
 8222352:	7e 22                	jle    8222376 <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x106>
 8222354:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8222357:	05 24 0b 00 00       	add    $0xb24,%eax
 822235c:	89 04 24             	mov    %eax,(%esp)
 822235f:	e8 da ac 00 00       	call   822d03e <_ZN13CBattle_Field10GetMapInfoEv>
 8222364:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8222368:	83 f0 01             	xor    $0x1,%eax
 822236b:	84 c0                	test   %al,%al
 822236d:	74 07                	je     8222376 <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x106>
 822236f:	b8 01 00 00 00       	mov    $0x1,%eax
 8222374:	eb 05                	jmp    822237b <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x10b>
 8222376:	b8 00 00 00 00       	mov    $0x0,%eax
 822237b:	84 c0                	test   %al,%al
 822237d:	74 20                	je     822239f <_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf+0x12f>
 822237f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8222382:	05 24 0b 00 00       	add    $0xb24,%eax
 8222387:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822238e:	00 
 822238f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8222396:	00 
 8222397:	89 04 24             	mov    %eax,(%esp)
 822239a:	e8 33 2a 0e 00       	call   8304dd2 <_ZN13CBattle_Field22BloodSpawnTimerManagerEbb>
 822239f:	b8 00 00 00 00       	mov    $0x0,%eax
 82223a4:	c9                   	leave
 82223a5:	c3                   	ret

```

```c
// Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig @ 0x8222270

/* Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == (PacketBuf *)0x0) {
    uVar2 = LineFunc(0xdbbf,
                     "virtual int Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar2;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar3 != 0) {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 5) {
      iVar3 = CUser::GetParty((CUser *)param_2);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0xcac) != 0)) {
        if ((*(char *)(*(int *)(iVar3 + 0xcac) + 0x89f) < '\x01') ||
           (iVar4 = CBattle_Field::GetMapInfo((CBattle_Field *)(iVar3 + 0xb24)),
           *(char *)(iVar4 + 1) == '\x01')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CBattle_Field::BloodSpawnTimerManager((CBattle_Field *)(iVar3 + 0xb24),false,false);
        }
      }
      return 0;
    }
    uVar2 = LineFunc(0xdbc2,
                     "virtual int Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar2;
  }
  uVar2 = LineFunc(0xdbc0,
                   "virtual int Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser*, PacketBuf&)"
                   ,0,0);
  return uVar2;
}

```

