# Dispatcher_RedeemList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0822621c Dispatcher_RedeemList::dispatch_sig  [0x0822621c-0x822624f] ===
 822621c:	55                   	push   %ebp
 822621d:	89 e5                	mov    %esp,%ebp
 822621f:	83 ec 18             	sub    $0x18,%esp
 8226222:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226225:	89 04 24             	mov    %eax,(%esp)
 8226228:	e8 5f 41 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 822622d:	83 f8 02             	cmp    $0x2,%eax
 8226230:	0f 9e c0             	setle  %al
 8226233:	84 c0                	test   %al,%al
 8226235:	74 07                	je     822623e <_ZN21Dispatcher_RedeemList12dispatch_sigEP5CUserR9PacketBuf+0x22>
 8226237:	b8 00 00 00 00       	mov    $0x0,%eax
 822623c:	eb 10                	jmp    822624e <_ZN21Dispatcher_RedeemList12dispatch_sigEP5CUserR9PacketBuf+0x32>
 822623e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226241:	89 04 24             	mov    %eax,(%esp)
 8226244:	e8 af c2 43 00       	call   86624f8 <_ZN5CUser15send_RedeemInfoEv>
 8226249:	b8 00 00 00 00       	mov    $0x0,%eax
 822624e:	c9                   	leave
 822624f:	c3                   	ret

```

```c
// Dispatcher_RedeemList::dispatch_sig @ 0x822621c

/* Dispatcher_RedeemList::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_RedeemList::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    CUser::send_RedeemInfo((CUser *)param_2);
  }
  return 0;
}

```

