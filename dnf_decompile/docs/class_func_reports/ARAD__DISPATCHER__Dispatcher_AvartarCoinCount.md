# ARAD__DISPATCHER__Dispatcher_AvartarCoinCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## checkWorkState

```asm
// === 0819f1e2 ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::checkWorkState  [0x0819f1e2-0x819f1eb] ===
 819f1e2:	55                   	push   %ebp
 819f1e3:	89 e5                	mov    %esp,%ebp
 819f1e5:	b8 01 00 00 00       	mov    $0x1,%eax
 819f1ea:	5d                   	pop    %ebp
 819f1eb:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::checkWorkState @ 0x819f1e2

/* ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::checkWorkState(CUser*) */

undefined4 ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::checkWorkState(CUser *param_1)

{
  return 1;
}

```

---

## dispatch_sig

```asm
// === 0819f1bc ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::dispatch_sig  [0x0819f1bc-0x819f1e1] ===
 819f1bc:	55                   	push   %ebp
 819f1bd:	89 e5                	mov    %esp,%ebp
 819f1bf:	83 ec 18             	sub    $0x18,%esp
 819f1c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 819f1c5:	89 04 24             	mov    %eax,(%esp)
 819f1c8:	e8 17 0e fe ff       	call   817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>
 819f1cd:	83 f0 01             	xor    $0x1,%eax
 819f1d0:	84 c0                	test   %al,%al
 819f1d2:	74 07                	je     819f1db <_ZN4ARAD10DISPATCHER27Dispatcher_AvartarCoinCount12dispatch_sigEP5CUserR9PacketBuf+0x1f>
 819f1d4:	b8 53 03 00 00       	mov    $0x353,%eax
 819f1d9:	eb 05                	jmp    819f1e0 <_ZN4ARAD10DISPATCHER27Dispatcher_AvartarCoinCount12dispatch_sigEP5CUserR9PacketBuf+0x24>
 819f1db:	b8 00 00 00 00       	mov    $0x0,%eax
 819f1e0:	c9                   	leave
 819f1e1:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::dispatch_sig @ 0x819f1bc

/* ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::dispatch_sig(CUser*, PacketBuf&) */

undefined4
ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = AvatarCoin::SendSyncPacket((CUser *)param_2);
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x353;
  }
  return uVar2;
}

```

