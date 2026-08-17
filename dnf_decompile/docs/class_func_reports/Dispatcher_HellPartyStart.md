# Dispatcher_HellPartyStart

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821d9a6 Dispatcher_HellPartyStart::dispatch_sig  [0x0821d9a6-0x821d9ed] ===
 821d9a6:	55                   	push   %ebp
 821d9a7:	89 e5                	mov    %esp,%ebp
 821d9a9:	83 ec 18             	sub    $0x18,%esp
 821d9ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d9af:	89 04 24             	mov    %eax,(%esp)
 821d9b2:	e8 d5 c9 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821d9b7:	83 f8 05             	cmp    $0x5,%eax
 821d9ba:	0f 95 c0             	setne  %al
 821d9bd:	84 c0                	test   %al,%al
 821d9bf:	74 26                	je     821d9e7 <_ZN25Dispatcher_HellPartyStart12dispatch_sigEP5CUserR9PacketBuf+0x41>
 821d9c1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821d9c8:	00 
 821d9c9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821d9d0:	00 
 821d9d1:	c7 44 24 04 00 d4 bc 	movl   $0x8bcd400,0x4(%esp)
 821d9d8:	08 
 821d9d9:	c7 04 24 bd d1 00 00 	movl   $0xd1bd,(%esp)
 821d9e0:	e8 f2 2e 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821d9e5:	eb 05                	jmp    821d9ec <_ZN25Dispatcher_HellPartyStart12dispatch_sigEP5CUserR9PacketBuf+0x46>
 821d9e7:	b8 00 00 00 00       	mov    $0x0,%eax
 821d9ec:	c9                   	leave
 821d9ed:	c3                   	ret

```

```c
// Dispatcher_HellPartyStart::dispatch_sig @ 0x821d9a6

/* Dispatcher_HellPartyStart::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_HellPartyStart::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 5) {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0xd1bd,
                     "virtual int Dispatcher_HellPartyStart::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
  return uVar2;
}

```

