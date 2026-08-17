# CReliablePerson

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## IncrementTradeGold

```asm
// === 086453d8 CReliablePerson::IncrementTradeGold  [0x086453d8-0x8645467] ===
 86453d8:	55                   	push   %ebp
 86453d9:	89 e5                	mov    %esp,%ebp
 86453db:	83 ec 14             	sub    $0x14,%esp
 86453de:	8b 45 08             	mov    0x8(%ebp),%eax
 86453e1:	8b 40 08             	mov    0x8(%eax),%eax
 86453e4:	89 c2                	mov    %eax,%edx
 86453e6:	03 55 0c             	add    0xc(%ebp),%edx
 86453e9:	8b 45 08             	mov    0x8(%ebp),%eax
 86453ec:	89 50 08             	mov    %edx,0x8(%eax)
 86453ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86453f2:	8b 00                	mov    (%eax),%eax
 86453f4:	89 c2                	mov    %eax,%edx
 86453f6:	03 55 0c             	add    0xc(%ebp),%edx
 86453f9:	8b 45 08             	mov    0x8(%ebp),%eax
 86453fc:	89 10                	mov    %edx,(%eax)
 86453fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8645401:	8b 00                	mov    (%eax),%eax
 8645403:	3d ff c9 9a 3b       	cmp    $0x3b9ac9ff,%eax
 8645408:	76 5c                	jbe    8645466 <_ZN15CReliablePerson18IncrementTradeGoldEj+0x8e>
 864540a:	8b 45 08             	mov    0x8(%ebp),%eax
 864540d:	8b 00                	mov    (%eax),%eax
 864540f:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8645412:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 8645415:	89 c8                	mov    %ecx,%eax
 8645417:	c1 e8 09             	shr    $0x9,%eax
 864541a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 864541d:	ba 83 4b 04 00       	mov    $0x44b83,%edx
 8645422:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8645425:	f7 e2                	mul    %edx
 8645427:	89 d0                	mov    %edx,%eax
 8645429:	c1 e8 07             	shr    $0x7,%eax
 864542c:	69 c0 00 ca 9a 3b    	imul   $0x3b9aca00,%eax,%eax
 8645432:	89 ca                	mov    %ecx,%edx
 8645434:	29 c2                	sub    %eax,%edx
 8645436:	89 d0                	mov    %edx,%eax
 8645438:	8b 55 08             	mov    0x8(%ebp),%edx
 864543b:	89 02                	mov    %eax,(%edx)
 864543d:	8b 45 08             	mov    0x8(%ebp),%eax
 8645440:	8b 48 04             	mov    0x4(%eax),%ecx
 8645443:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8645446:	89 c2                	mov    %eax,%edx
 8645448:	c1 ea 09             	shr    $0x9,%edx
 864544b:	89 55 ec             	mov    %edx,-0x14(%ebp)
 864544e:	ba 83 4b 04 00       	mov    $0x44b83,%edx
 8645453:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8645456:	f7 e2                	mul    %edx
 8645458:	89 d0                	mov    %edx,%eax
 864545a:	c1 e8 07             	shr    $0x7,%eax
 864545d:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8645460:	8b 45 08             	mov    0x8(%ebp),%eax
 8645463:	89 50 04             	mov    %edx,0x4(%eax)
 8645466:	c9                   	leave
 8645467:	c3                   	ret

```

```c
// CReliablePerson::IncrementTradeGold @ 0x86453d8

/* CReliablePerson::IncrementTradeGold(unsigned int) */

void __thiscall CReliablePerson::IncrementTradeGold(CReliablePerson *this,uint param_1)

{
  uint uVar1;
  
  *(uint *)(this + 8) = *(int *)(this + 8) + param_1;
  *(uint *)this = *(int *)this + param_1;
  if (999999999 < *(uint *)this) {
    uVar1 = *(uint *)this;
    *(uint *)this = uVar1 + (uint)((ulonglong)(uVar1 >> 9) * 0x44b83 >> 0x27) * -1000000000;
    *(uint *)(this + 4) = *(int *)(this + 4) + (uint)((ulonglong)(uVar1 >> 9) * 0x44b83 >> 0x27);
  }
  return;
}

```

---

## InitTradeGold

```asm
// === 086453b8 CReliablePerson::InitTradeGold  [0x086453b8-0x86453d7] ===
 86453b8:	55                   	push   %ebp
 86453b9:	89 e5                	mov    %esp,%ebp
 86453bb:	8b 45 08             	mov    0x8(%ebp),%eax
 86453be:	8b 55 0c             	mov    0xc(%ebp),%edx
 86453c1:	89 10                	mov    %edx,(%eax)
 86453c3:	8b 45 08             	mov    0x8(%ebp),%eax
 86453c6:	8b 55 10             	mov    0x10(%ebp),%edx
 86453c9:	89 50 04             	mov    %edx,0x4(%eax)
 86453cc:	8b 45 08             	mov    0x8(%ebp),%eax
 86453cf:	8b 55 14             	mov    0x14(%ebp),%edx
 86453d2:	89 50 08             	mov    %edx,0x8(%eax)
 86453d5:	5d                   	pop    %ebp
 86453d6:	c3                   	ret
 86453d7:	90                   	nop

```

```c
// CReliablePerson::InitTradeGold @ 0x86453b8

/* CReliablePerson::InitTradeGold(unsigned int, unsigned int, unsigned int) */

void __thiscall
CReliablePerson::InitTradeGold(CReliablePerson *this,uint param_1,uint param_2,uint param_3)

{
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_2;
  *(uint *)(this + 8) = param_3;
  return;
}

```

