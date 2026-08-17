# Dispatcher_CreateAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08224f7c Dispatcher_CreateAccountCargo::dispatch_sig  [0x08224f7c-0x8224faf] ===
 8224f7c:	55                   	push   %ebp
 8224f7d:	89 e5                	mov    %esp,%ebp
 8224f7f:	83 ec 18             	sub    $0x18,%esp
 8224f82:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224f85:	89 04 24             	mov    %eax,(%esp)
 8224f88:	e8 ff 53 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8224f8d:	83 f8 02             	cmp    $0x2,%eax
 8224f90:	0f 9e c0             	setle  %al
 8224f93:	84 c0                	test   %al,%al
 8224f95:	74 07                	je     8224f9e <_ZN29Dispatcher_CreateAccountCargo12dispatch_sigEP5CUserR9PacketBuf+0x22>
 8224f97:	b8 00 00 00 00       	mov    $0x0,%eax
 8224f9c:	eb 10                	jmp    8224fae <_ZN29Dispatcher_CreateAccountCargo12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8224f9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224fa1:	89 04 24             	mov    %eax,(%esp)
 8224fa4:	e8 c9 5d 06 00       	call   828ad72 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser>
 8224fa9:	b8 00 00 00 00       	mov    $0x0,%eax
 8224fae:	c9                   	leave
 8224faf:	c3                   	ret

```

```c
// Dispatcher_CreateAccountCargo::dispatch_sig @ 0x8224f7c

/* Dispatcher_CreateAccountCargo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CreateAccountCargo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    CAccountCargo::CreateAccountCargo((CUser *)param_2);
  }
  return 0;
}

```

