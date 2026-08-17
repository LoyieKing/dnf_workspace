# stFavorableRelationShip_t__stRewardItemInfo_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## clear

```asm
// === 089fb4c0 stFavorableRelationShip_t::stRewardItemInfo_t::clear  [0x089fb4c0-0x89fb507] ===
 89fb4c0:	55                   	push   %ebp
 89fb4c1:	89 e5                	mov    %esp,%ebp
 89fb4c3:	83 ec 28             	sub    $0x28,%esp
 89fb4c6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 89fb4cd:	eb 2c                	jmp    89fb4fb <_ZN25stFavorableRelationShip_t18stRewardItemInfo_t5clearEv+0x3b>
 89fb4cf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 89fb4d2:	89 d0                	mov    %edx,%eax
 89fb4d4:	01 c0                	add    %eax,%eax
 89fb4d6:	01 d0                	add    %edx,%eax
 89fb4d8:	c1 e0 02             	shl    $0x2,%eax
 89fb4db:	03 45 08             	add    0x8(%ebp),%eax
 89fb4de:	89 04 24             	mov    %eax,(%esp)
 89fb4e1:	e8 20 5f 00 00       	call   8a01406 <_ZNSt6vectorIN25stFavorableRelationShip_t21stRewardItemElement_tESaIS1_EE5clearEv>
 89fb4e6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 89fb4e9:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb4ec:	83 c2 08             	add    $0x8,%edx
 89fb4ef:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 89fb4f6:	00 
 89fb4f7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 89fb4fb:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 89fb4ff:	0f 9e c0             	setle  %al
 89fb502:	84 c0                	test   %al,%al
 89fb504:	75 c9                	jne    89fb4cf <_ZN25stFavorableRelationShip_t18stRewardItemInfo_t5clearEv+0xf>
 89fb506:	c9                   	leave
 89fb507:	c3                   	ret

```

```c
// stFavorableRelationShip_t::stRewardItemInfo_t::clear @ 0x89fb4c0

/* stFavorableRelationShip_t::stRewardItemInfo_t::clear() */

void __thiscall stFavorableRelationShip_t::stRewardItemInfo_t::clear(stRewardItemInfo_t *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    std::
    vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
    ::clear((vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
             *)(this + local_10 * 0xc));
    *(undefined4 *)(this + (local_10 + 8) * 4 + 4) = 0;
  }
  return;
}

```

