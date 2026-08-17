# Dispatcher_Redeem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08226250 Dispatcher_Redeem::dispatch_sig  [0x08226250-0x82262a1] ===
 8226250:	55                   	push   %ebp
 8226251:	89 e5                	mov    %esp,%ebp
 8226253:	83 ec 28             	sub    $0x28,%esp
 8226256:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226259:	89 04 24             	mov    %eax,(%esp)
 822625c:	e8 2b 41 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8226261:	83 f8 02             	cmp    $0x2,%eax
 8226264:	0f 9e c0             	setle  %al
 8226267:	84 c0                	test   %al,%al
 8226269:	74 07                	je     8226272 <_ZN17Dispatcher_Redeem12dispatch_sigEP5CUserR9PacketBuf+0x22>
 822626b:	b8 00 00 00 00       	mov    $0x0,%eax
 8226270:	eb 2d                	jmp    822629f <_ZN17Dispatcher_Redeem12dispatch_sigEP5CUserR9PacketBuf+0x4f>
 8226272:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8226275:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226279:	8b 45 10             	mov    0x10(%ebp),%eax
 822627c:	89 04 24             	mov    %eax,(%esp)
 822627f:	e8 9e 6c 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8226284:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8226288:	0f be c0             	movsbl %al,%eax
 822628b:	89 44 24 04          	mov    %eax,0x4(%esp)
 822628f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226292:	89 04 24             	mov    %eax,(%esp)
 8226295:	e8 58 0b 42 00       	call   8646df2 <_ZN5CUser11Redeem_ItemEi>
 822629a:	b8 00 00 00 00       	mov    $0x0,%eax
 822629f:	c9                   	leave
 82262a0:	c3                   	ret
 82262a1:	90                   	nop

```

```c
// Dispatcher_Redeem::dispatch_sig @ 0x8226250

/* Dispatcher_Redeem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Redeem::dispatch_sig(Dispatcher_Redeem *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  char local_d [9];
  
  iVar1 = CUser::get_state(param_1);
  if (2 < iVar1) {
    PacketBuf::get_byte(param_2,local_d);
    CUser::Redeem_Item((int)param_1);
  }
  return 0;
}

```

