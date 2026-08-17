# CItemGloballyUniqueIdentifierGenerator

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## generate

```asm
// === 0889246c CItemGloballyUniqueIdentifierGenerator::generate  [0x0889246c-0x88924c0] ===
 889246c:	55                   	push   %ebp
 889246d:	89 e5                	mov    %esp,%ebp
 889246f:	83 ec 18             	sub    $0x18,%esp
 8892472:	8b 45 10             	mov    0x10(%ebp),%eax
 8892475:	89 44 24 04          	mov    %eax,0x4(%esp)
 8892479:	8b 45 0c             	mov    0xc(%ebp),%eax
 889247c:	89 04 24             	mov    %eax,(%esp)
 889247f:	e8 fe 22 00 00       	call   8894782 <_ZN30itemGloballyUniqueIdentifier_t11SetServerIdEi>
 8892484:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 889248b:	e8 c0 b2 7e ff       	call   807d750 <time@plt>
 8892490:	89 44 24 04          	mov    %eax,0x4(%esp)
 8892494:	8b 45 0c             	mov    0xc(%ebp),%eax
 8892497:	89 04 24             	mov    %eax,(%esp)
 889249a:	e8 f9 22 00 00       	call   8894798 <_ZN30itemGloballyUniqueIdentifier_t11SetDatetimeEi>
 889249f:	8b 45 08             	mov    0x8(%ebp),%eax
 88924a2:	89 04 24             	mov    %eax,(%esp)
 88924a5:	e8 38 23 00 00       	call   88947e2 <_ZN38CItemGloballyUniqueIdentifierGenerator6getSeqEv>
 88924aa:	0f b7 c0             	movzwl %ax,%eax
 88924ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 88924b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 88924b4:	89 04 24             	mov    %eax,(%esp)
 88924b7:	e8 f6 22 00 00       	call   88947b2 <_ZN30itemGloballyUniqueIdentifier_t13SetSequenceNoEt>
 88924bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 88924bf:	c9                   	leave
 88924c0:	c3                   	ret

```

```c
// CItemGloballyUniqueIdentifierGenerator::generate @ 0x889246c

/* CItemGloballyUniqueIdentifierGenerator::generate(itemGloballyUniqueIdentifier_t*, int) */

itemGloballyUniqueIdentifier_t * __thiscall
CItemGloballyUniqueIdentifierGenerator::generate
          (CItemGloballyUniqueIdentifierGenerator *this,itemGloballyUniqueIdentifier_t *param_1,
          int param_2)

{
  ushort uVar1;
  time_t tVar2;
  
  itemGloballyUniqueIdentifier_t::SetServerId(param_1,param_2);
  tVar2 = time((time_t *)0x0);
  itemGloballyUniqueIdentifier_t::SetDatetime(param_1,tVar2);
  uVar1 = getSeq(this);
  itemGloballyUniqueIdentifier_t::SetSequenceNo(param_1,uVar1);
  return param_1;
}

```

