# stFavorableRelationShip_t__stRewardItem_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## clear

```asm
// === 089fb508 stFavorableRelationShip_t::stRewardItem_t::clear  [0x089fb508-0x89fb56b] ===
 89fb508:	55                   	push   %ebp
 89fb509:	89 e5                	mov    %esp,%ebp
 89fb50b:	83 ec 28             	sub    $0x28,%esp
 89fb50e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 89fb515:	eb 47                	jmp    89fb55e <_ZN25stFavorableRelationShip_t14stRewardItem_t5clearEv+0x56>
 89fb517:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 89fb51e:	eb 2f                	jmp    89fb54f <_ZN25stFavorableRelationShip_t14stRewardItem_t5clearEv+0x47>
 89fb520:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 89fb523:	8b 45 f4             	mov    -0xc(%ebp),%eax
 89fb526:	89 c2                	mov    %eax,%edx
 89fb528:	01 d2                	add    %edx,%edx
 89fb52a:	01 c2                	add    %eax,%edx
 89fb52c:	89 d0                	mov    %edx,%eax
 89fb52e:	c1 e0 04             	shl    $0x4,%eax
 89fb531:	89 c2                	mov    %eax,%edx
 89fb533:	89 c8                	mov    %ecx,%eax
 89fb535:	c1 e0 03             	shl    $0x3,%eax
 89fb538:	01 c8                	add    %ecx,%eax
 89fb53a:	c1 e0 04             	shl    $0x4,%eax
 89fb53d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 89fb540:	03 45 08             	add    0x8(%ebp),%eax
 89fb543:	89 04 24             	mov    %eax,(%esp)
 89fb546:	e8 75 ff ff ff       	call   89fb4c0 <_ZN25stFavorableRelationShip_t18stRewardItemInfo_t5clearEv>
 89fb54b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 89fb54f:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 89fb553:	0f 9e c0             	setle  %al
 89fb556:	84 c0                	test   %al,%al
 89fb558:	75 c6                	jne    89fb520 <_ZN25stFavorableRelationShip_t14stRewardItem_t5clearEv+0x18>
 89fb55a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 89fb55e:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 89fb562:	0f 9e c0             	setle  %al
 89fb565:	84 c0                	test   %al,%al
 89fb567:	75 ae                	jne    89fb517 <_ZN25stFavorableRelationShip_t14stRewardItem_t5clearEv+0xf>
 89fb569:	c9                   	leave
 89fb56a:	c3                   	ret
 89fb56b:	90                   	nop

```

```c
// stFavorableRelationShip_t::stRewardItem_t::clear @ 0x89fb508

/* stFavorableRelationShip_t::stRewardItem_t::clear() */

void __thiscall stFavorableRelationShip_t::stRewardItem_t::clear(stRewardItem_t *this)

{
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      stRewardItemInfo_t::clear((stRewardItemInfo_t *)(this + local_10 * 0x30 + local_14 * 0x90));
    }
  }
  return;
}

```

