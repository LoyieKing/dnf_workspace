# Inter_GoldControlMoneyActionCancel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4fe8 Inter_GoldControlMoneyActionCancel::dispatch_sig  [0x084e4fe8-0x84e503b] ===
 84e4fe8:	55                   	push   %ebp
 84e4fe9:	89 e5                	mov    %esp,%ebp
 84e4feb:	83 ec 28             	sub    $0x28,%esp
 84e4fee:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4ff1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4ff4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e4ff8:	74 3b                	je     84e5035 <_ZN34Inter_GoldControlMoneyActionCancel12dispatch_sigEP5CUserPci+0x4d>
 84e4ffa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4ffd:	0f b6 00             	movzbl (%eax),%eax
 84e5000:	84 c0                	test   %al,%al
 84e5002:	74 12                	je     84e5016 <_ZN34Inter_GoldControlMoneyActionCancel12dispatch_sigEP5CUserPci+0x2e>
 84e5004:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5007:	05 80 e9 08 00       	add    $0x8e980,%eax
 84e500c:	89 04 24             	mov    %eax,(%esp)
 84e500f:	e8 42 2e da ff       	call   8287e56 <_ZN16Secu_GoldControl11MailSameMidEv>
 84e5014:	eb 1f                	jmp    84e5035 <_ZN34Inter_GoldControlMoneyActionCancel12dispatch_sigEP5CUserPci+0x4d>
 84e5016:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e5019:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84e501d:	0f b6 c0             	movzbl %al,%eax
 84e5020:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e5023:	81 c2 80 e9 08 00    	add    $0x8e980,%edx
 84e5029:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e502d:	89 14 24             	mov    %edx,(%esp)
 84e5030:	e8 33 2e da ff       	call   8287e68 <_ZN16Secu_GoldControl12MailCompleteEb>
 84e5035:	b8 00 00 00 00       	mov    $0x0,%eax
 84e503a:	c9                   	leave
 84e503b:	c3                   	ret

```

```c
// Inter_GoldControlMoneyActionCancel::dispatch_sig @ 0x84e4fe8

/* Inter_GoldControlMoneyActionCancel::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_GoldControlMoneyActionCancel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (param_2 != (char *)0x0) {
    if (*(char *)param_3 == '\0') {
      Secu_GoldControl::MailComplete((Secu_GoldControl *)(param_2 + 0x8e980),*(bool *)(param_3 + 1))
      ;
    }
    else {
      Secu_GoldControl::MailSameMid((Secu_GoldControl *)(param_2 + 0x8e980));
    }
  }
  return 0;
}

```

