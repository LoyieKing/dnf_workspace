# Inter_LoadTicket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c515c Inter_LoadTicket::dispatch_sig  [0x084c515c-0x84c5211] ===
 84c515c:	55                   	push   %ebp
 84c515d:	89 e5                	mov    %esp,%ebp
 84c515f:	83 ec 28             	sub    $0x28,%esp
 84c5162:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84c5166:	75 0a                	jne    84c5172 <_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci+0x16>
 84c5168:	b8 70 1a 00 00       	mov    $0x1a70,%eax
 84c516d:	e9 9e 00 00 00       	jmp    84c5210 <_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci+0xb4>
 84c5172:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5175:	89 04 24             	mov    %eax,(%esp)
 84c5178:	e8 0f 52 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c517d:	85 c0                	test   %eax,%eax
 84c517f:	0f 94 c0             	sete   %al
 84c5182:	84 c0                	test   %al,%al
 84c5184:	74 0a                	je     84c5190 <_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci+0x34>
 84c5186:	b8 72 1a 00 00       	mov    $0x1a72,%eax
 84c518b:	e9 80 00 00 00       	jmp    84c5210 <_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci+0xb4>
 84c5190:	8b 45 10             	mov    0x10(%ebp),%eax
 84c5193:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c5196:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c5199:	8b 40 04             	mov    0x4(%eax),%eax
 84c519c:	83 f8 01             	cmp    $0x1,%eax
 84c519f:	75 07                	jne    84c51a8 <_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci+0x4c>
 84c51a1:	b8 79 1a 00 00       	mov    $0x1a79,%eax
 84c51a6:	eb 68                	jmp    84c5210 <_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci+0xb4>
 84c51a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c51ab:	8b 40 08             	mov    0x8(%eax),%eax
 84c51ae:	83 f8 63             	cmp    $0x63,%eax
 84c51b1:	7e 07                	jle    84c51ba <_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci+0x5e>
 84c51b3:	b8 7e 1a 00 00       	mov    $0x1a7e,%eax
 84c51b8:	eb 56                	jmp    84c5210 <_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci+0xb4>
 84c51ba:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84c51c1:	eb 25                	jmp    84c51e8 <_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci+0x8c>
 84c51c3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84c51c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c51c9:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 84c51cd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c51d4:	00 
 84c51d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c51d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c51dc:	89 04 24             	mov    %eax,(%esp)
 84c51df:	e8 9e 30 1b 00       	call   8678282 <_ZN5CUser9AddTicketEib>
 84c51e4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84c51e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c51eb:	8b 40 08             	mov    0x8(%eax),%eax
 84c51ee:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84c51f1:	0f 9f c0             	setg   %al
 84c51f4:	84 c0                	test   %al,%al
 84c51f6:	75 cb                	jne    84c51c3 <_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci+0x67>
 84c51f8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84c51ff:	00 
 84c5200:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5203:	89 04 24             	mov    %eax,(%esp)
 84c5206:	e8 e9 01 c6 ff       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 84c520b:	b8 00 00 00 00       	mov    $0x0,%eax
 84c5210:	c9                   	leave
 84c5211:	c3                   	ret

```

```c
// Inter_LoadTicket::dispatch_sig @ 0x84c515c

/* Inter_LoadTicket::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadTicket::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0x1a70;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 0) {
      uVar1 = 0x1a72;
    }
    else if (*(int *)(param_3 + 4) == 1) {
      uVar1 = 0x1a79;
    }
    else if (*(int *)(param_3 + 8) < 100) {
      for (local_10 = 0; local_10 < *(int *)(param_3 + 8); local_10 = local_10 + 1) {
        CUser::AddTicket((CUser *)param_2,*(int *)(param_3 + 0xc + local_10 * 4),false);
      }
      CUser::EnableCharacInfo((CUser *)param_2,4);
      uVar1 = 0;
    }
    else {
      uVar1 = 0x1a7e;
    }
  }
  return uVar1;
}

```

