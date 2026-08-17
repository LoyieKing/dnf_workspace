# Dispatcher_UpgradeAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08224fb0 Dispatcher_UpgradeAccountCargo::dispatch_sig  [0x08224fb0-0x8224fe3] ===
 8224fb0:	55                   	push   %ebp
 8224fb1:	89 e5                	mov    %esp,%ebp
 8224fb3:	83 ec 18             	sub    $0x18,%esp
 8224fb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224fb9:	89 04 24             	mov    %eax,(%esp)
 8224fbc:	e8 cb 53 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8224fc1:	83 f8 02             	cmp    $0x2,%eax
 8224fc4:	0f 9e c0             	setle  %al
 8224fc7:	84 c0                	test   %al,%al
 8224fc9:	74 07                	je     8224fd2 <_ZN30Dispatcher_UpgradeAccountCargo12dispatch_sigEP5CUserR9PacketBuf+0x22>
 8224fcb:	b8 00 00 00 00       	mov    $0x0,%eax
 8224fd0:	eb 10                	jmp    8224fe2 <_ZN30Dispatcher_UpgradeAccountCargo12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8224fd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224fd5:	89 04 24             	mov    %eax,(%esp)
 8224fd8:	e8 d5 60 06 00       	call   828b0b2 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser>
 8224fdd:	b8 00 00 00 00       	mov    $0x0,%eax
 8224fe2:	c9                   	leave
 8224fe3:	c3                   	ret

```

```c
// Dispatcher_UpgradeAccountCargo::dispatch_sig @ 0x8224fb0

/* Dispatcher_UpgradeAccountCargo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_UpgradeAccountCargo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    CAccountCargo::UpgradeAccountCargo((CUser *)param_2);
  }
  return 0;
}

```

