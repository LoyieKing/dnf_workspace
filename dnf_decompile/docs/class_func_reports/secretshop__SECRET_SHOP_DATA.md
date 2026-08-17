# secretshop__SECRET_SHOP_DATA

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## IsCompleteBuy

```asm
// === 08ab155a secretshop::SECRET_SHOP_DATA::IsCompleteBuy  [0x08ab155a-0x8ab1594] ===
 8ab155a:	55                   	push   %ebp
 8ab155b:	89 e5                	mov    %esp,%ebp
 8ab155d:	83 ec 10             	sub    $0x10,%esp
 8ab1560:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8ab1567:	eb 1a                	jmp    8ab1583 <_ZN10secretshop16SECRET_SHOP_DATA13IsCompleteBuyEv+0x29>
 8ab1569:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ab156c:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab156f:	0f b6 44 02 74       	movzbl 0x74(%edx,%eax,1),%eax
 8ab1574:	84 c0                	test   %al,%al
 8ab1576:	74 07                	je     8ab157f <_ZN10secretshop16SECRET_SHOP_DATA13IsCompleteBuyEv+0x25>
 8ab1578:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab157d:	eb 14                	jmp    8ab1593 <_ZN10secretshop16SECRET_SHOP_DATA13IsCompleteBuyEv+0x39>
 8ab157f:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8ab1583:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 8ab1587:	0f 9e c0             	setle  %al
 8ab158a:	84 c0                	test   %al,%al
 8ab158c:	75 db                	jne    8ab1569 <_ZN10secretshop16SECRET_SHOP_DATA13IsCompleteBuyEv+0xf>
 8ab158e:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab1593:	c9                   	leave
 8ab1594:	c3                   	ret

```

```c
// secretshop::SECRET_SHOP_DATA::IsCompleteBuy @ 0x8ab155a

/* secretshop::SECRET_SHOP_DATA::IsCompleteBuy() */

undefined4 __thiscall secretshop::SECRET_SHOP_DATA::IsCompleteBuy(SECRET_SHOP_DATA *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 1;
    }
    if (this[local_8 + 0x74] != (SECRET_SHOP_DATA)0x0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

```

---

## IsOpen

```asm
// === 08ab150c secretshop::SECRET_SHOP_DATA::IsOpen  [0x08ab150c-0x8ab1531] ===
 8ab150c:	55                   	push   %ebp
 8ab150d:	89 e5                	mov    %esp,%ebp
 8ab150f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab1512:	8b 00                	mov    (%eax),%eax
 8ab1514:	85 c0                	test   %eax,%eax
 8ab1516:	74 13                	je     8ab152b <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv+0x1f>
 8ab1518:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab151b:	8b 00                	mov    (%eax),%eax
 8ab151d:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 8ab1522:	74 07                	je     8ab152b <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv+0x1f>
 8ab1524:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab1529:	eb 05                	jmp    8ab1530 <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv+0x24>
 8ab152b:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab1530:	5d                   	pop    %ebp
 8ab1531:	c3                   	ret

```

```c
// secretshop::SECRET_SHOP_DATA::IsOpen @ 0x8ab150c

/* secretshop::SECRET_SHOP_DATA::IsOpen() */

undefined4 __thiscall secretshop::SECRET_SHOP_DATA::IsOpen(SECRET_SHOP_DATA *this)

{
  undefined4 uVar1;
  
  if ((*(int *)this == 0) || (*(int *)this == 1000)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## SetBuying

```asm
// === 08ab1532 secretshop::SECRET_SHOP_DATA::SetBuying  [0x08ab1532-0x8ab1559] ===
 8ab1532:	55                   	push   %ebp
 8ab1533:	89 e5                	mov    %esp,%ebp
 8ab1535:	83 ec 04             	sub    $0x4,%esp
 8ab1538:	8b 45 10             	mov    0x10(%ebp),%eax
 8ab153b:	88 45 fc             	mov    %al,-0x4(%ebp)
 8ab153e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ab1542:	78 14                	js     8ab1558 <_ZN10secretshop16SECRET_SHOP_DATA9SetBuyingEib+0x26>
 8ab1544:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8ab1548:	7f 0e                	jg     8ab1558 <_ZN10secretshop16SECRET_SHOP_DATA9SetBuyingEib+0x26>
 8ab154a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab154d:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab1550:	0f b6 4d fc          	movzbl -0x4(%ebp),%ecx
 8ab1554:	88 4c 02 74          	mov    %cl,0x74(%edx,%eax,1)
 8ab1558:	c9                   	leave
 8ab1559:	c3                   	ret

```

```c
// secretshop::SECRET_SHOP_DATA::SetBuying @ 0x8ab1532

/* secretshop::SECRET_SHOP_DATA::SetBuying(int, bool) */

void __thiscall
secretshop::SECRET_SHOP_DATA::SetBuying(SECRET_SHOP_DATA *this,int param_1,bool param_2)

{
  if ((-1 < param_1) && (param_1 < 4)) {
    this[param_1 + 0x74] = (SECRET_SHOP_DATA)param_2;
  }
  return;
}

```

---

## clear

```asm
// === 08ab14b8 secretshop::SECRET_SHOP_DATA::clear  [0x08ab14b8-0x8ab150b] ===
 8ab14b8:	55                   	push   %ebp
 8ab14b9:	89 e5                	mov    %esp,%ebp
 8ab14bb:	83 ec 28             	sub    $0x28,%esp
 8ab14be:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab14c1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ab14c7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8ab14ce:	eb 2e                	jmp    8ab14fe <_ZN10secretshop16SECRET_SHOP_DATA5clearEv+0x46>
 8ab14d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ab14d3:	c1 e0 02             	shl    $0x2,%eax
 8ab14d6:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 8ab14dd:	29 c2                	sub    %eax,%edx
 8ab14df:	89 d0                	mov    %edx,%eax
 8ab14e1:	03 45 08             	add    0x8(%ebp),%eax
 8ab14e4:	83 c0 04             	add    $0x4,%eax
 8ab14e7:	89 04 24             	mov    %eax,(%esp)
 8ab14ea:	e8 53 01 00 00       	call   8ab1642 <_ZN10secretshop16SECRET_SHOP_INFO5clearEv>
 8ab14ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ab14f2:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab14f5:	c6 44 02 74 00       	movb   $0x0,0x74(%edx,%eax,1)
 8ab14fa:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ab14fe:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8ab1502:	0f 9e c0             	setle  %al
 8ab1505:	84 c0                	test   %al,%al
 8ab1507:	75 c7                	jne    8ab14d0 <_ZN10secretshop16SECRET_SHOP_DATA5clearEv+0x18>
 8ab1509:	c9                   	leave
 8ab150a:	c3                   	ret
 8ab150b:	90                   	nop

```

```c
// secretshop::SECRET_SHOP_DATA::clear @ 0x8ab14b8

/* secretshop::SECRET_SHOP_DATA::clear() */

void __thiscall secretshop::SECRET_SHOP_DATA::clear(SECRET_SHOP_DATA *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    SECRET_SHOP_INFO::clear((SECRET_SHOP_INFO *)(this + local_10 * 0x1c + 4));
    this[local_10 + 0x74] = (SECRET_SHOP_DATA)0x0;
  }
  return;
}

```

