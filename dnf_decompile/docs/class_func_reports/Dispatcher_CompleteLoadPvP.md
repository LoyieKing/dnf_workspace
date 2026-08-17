# Dispatcher_CompleteLoadPvP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082252fe Dispatcher_CompleteLoadPvP::dispatch_sig  [0x082252fe-0x8225393] ===
 82252fe:	55                   	push   %ebp
 82252ff:	89 e5                	mov    %esp,%ebp
 8225301:	83 ec 28             	sub    $0x28,%esp
 8225304:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225307:	89 04 24             	mov    %eax,(%esp)
 822530a:	e8 7d 50 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 822530f:	83 f8 01             	cmp    $0x1,%eax
 8225312:	0f 9e c0             	setle  %al
 8225315:	84 c0                	test   %al,%al
 8225317:	74 26                	je     822533f <_ZN26Dispatcher_CompleteLoadPvP12dispatch_sigEP5CUserR9PacketBuf+0x41>
 8225319:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8225320:	00 
 8225321:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8225328:	00 
 8225329:	c7 44 24 04 00 c5 bc 	movl   $0x8bcc500,0x4(%esp)
 8225330:	08 
 8225331:	c7 04 24 05 e0 00 00 	movl   $0xe005,(%esp)
 8225338:	e8 9a b5 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822533d:	eb 52                	jmp    8225391 <_ZN26Dispatcher_CompleteLoadPvP12dispatch_sigEP5CUserR9PacketBuf+0x93>
 822533f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225342:	89 04 24             	mov    %eax,(%esp)
 8225345:	e8 44 fe 42 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 822534a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 822534d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8225351:	74 39                	je     822538c <_ZN26Dispatcher_CompleteLoadPvP12dispatch_sigEP5CUserR9PacketBuf+0x8e>
 8225353:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8225356:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 822535c:	85 c0                	test   %eax,%eax
 822535e:	74 2c                	je     822538c <_ZN26Dispatcher_CompleteLoadPvP12dispatch_sigEP5CUserR9PacketBuf+0x8e>
 8225360:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8225363:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8225369:	8b 00                	mov    (%eax),%eax
 822536b:	83 c0 54             	add    $0x54,%eax
 822536e:	8b 08                	mov    (%eax),%ecx
 8225370:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8225373:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 8225379:	8b 55 0c             	mov    0xc(%ebp),%edx
 822537c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8225380:	89 04 24             	mov    %eax,(%esp)
 8225383:	ff d1                	call   *%ecx
 8225385:	b8 00 00 00 00       	mov    $0x0,%eax
 822538a:	eb 05                	jmp    8225391 <_ZN26Dispatcher_CompleteLoadPvP12dispatch_sigEP5CUserR9PacketBuf+0x93>
 822538c:	b8 00 00 00 00       	mov    $0x0,%eax
 8225391:	c9                   	leave
 8225392:	c3                   	ret
 8225393:	90                   	nop

```

```c
// Dispatcher_CompleteLoadPvP::dispatch_sig @ 0x82252fe

/* Dispatcher_CompleteLoadPvP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CompleteLoadPvP::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 < 2) {
    uVar2 = LineFunc(0xe005,
                     "virtual int Dispatcher_CompleteLoadPvP::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    iVar1 = CUser::GetPVPRoom((CUser *)param_2);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x6e4) == 0)) {
      uVar2 = 0;
    }
    else {
      (**(code **)(**(int **)(iVar1 + 0x6e4) + 0x54))(*(undefined4 *)(iVar1 + 0x6e4),param_2);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

