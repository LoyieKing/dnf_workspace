# Inter_DeleteChannel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084bf7ea Inter_DeleteChannel::dispatch_sig  [0x084bf7ea-0x84bf80f] ===
 84bf7ea:	55                   	push   %ebp
 84bf7eb:	89 e5                	mov    %esp,%ebp
 84bf7ed:	83 ec 10             	sub    $0x10,%esp
 84bf7f0:	8b 45 10             	mov    0x10(%ebp),%eax
 84bf7f3:	89 45 fc             	mov    %eax,-0x4(%ebp)
 84bf7f6:	8b 45 fc             	mov    -0x4(%ebp),%eax
 84bf7f9:	8b 40 08             	mov    0x8(%eax),%eax
 84bf7fc:	83 f8 01             	cmp    $0x1,%eax
 84bf7ff:	75 07                	jne    84bf808 <_ZN19Inter_DeleteChannel12dispatch_sigEP5CUserPci+0x1e>
 84bf801:	b8 06 08 00 00       	mov    $0x806,%eax
 84bf806:	eb 05                	jmp    84bf80d <_ZN19Inter_DeleteChannel12dispatch_sigEP5CUserPci+0x23>
 84bf808:	b8 00 00 00 00       	mov    $0x0,%eax
 84bf80d:	c9                   	leave
 84bf80e:	c3                   	ret
 84bf80f:	90                   	nop

```

```c
// Inter_DeleteChannel::dispatch_sig @ 0x84bf7ea

/* Inter_DeleteChannel::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DeleteChannel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 8) == 1) {
    uVar1 = 0x806;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

