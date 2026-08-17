# stFavorableRelationShip_t__._199

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## ~._199

```asm
// === 0858046c stFavorableRelationShip_t::._199::~._199  [0x0858046c-0x85804b1] ===
 858046c:	55                   	push   %ebp
 858046d:	89 e5                	mov    %esp,%ebp
 858046f:	56                   	push   %esi
 8580470:	53                   	push   %ebx
 8580471:	83 ec 10             	sub    $0x10,%esp
 8580474:	8b 45 08             	mov    0x8(%ebp),%eax
 8580477:	83 c0 0c             	add    $0xc,%eax
 858047a:	89 04 24             	mov    %eax,(%esp)
 858047d:	e8 e2 21 00 00       	call   8582664 <_ZNSt6vectorISt4pairImjESaIS1_EED1Ev>
 8580482:	eb 1b                	jmp    858049f <_ZN25stFavorableRelationShip_t5._199D1Ev+0x33>
 8580484:	89 d3                	mov    %edx,%ebx
 8580486:	89 c6                	mov    %eax,%esi
 8580488:	8b 45 08             	mov    0x8(%ebp),%eax
 858048b:	89 04 24             	mov    %eax,(%esp)
 858048e:	e8 73 21 00 00       	call   8582606 <_ZNSt6vectorISt4pairI13ENUM_NPC_MOODjESaIS2_EED1Ev>
 8580493:	89 f0                	mov    %esi,%eax
 8580495:	89 da                	mov    %ebx,%edx
 8580497:	89 04 24             	mov    %eax,(%esp)
 858049a:	e8 b1 32 56 00       	call   8ae3750 <_Unwind_Resume>
 858049f:	8b 45 08             	mov    0x8(%ebp),%eax
 85804a2:	89 04 24             	mov    %eax,(%esp)
 85804a5:	e8 5c 21 00 00       	call   8582606 <_ZNSt6vectorISt4pairI13ENUM_NPC_MOODjESaIS2_EED1Ev>
 85804aa:	83 c4 10             	add    $0x10,%esp
 85804ad:	5b                   	pop    %ebx
 85804ae:	5e                   	pop    %esi
 85804af:	5d                   	pop    %ebp
 85804b0:	c3                   	ret
 85804b1:	90                   	nop

```

```c
// stFavorableRelationShip_t::._199::~._199 @ 0x858046c

/* stFavorableRelationShip_t::._199::~._199() */

void __thiscall stFavorableRelationShip_t::._199::~__199(__199 *this)

{
                    /* try { // try from 0858047d to 08580481 has its CatchHandler @ 08580484 */
  std::
  vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
  ::~vector((vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
             *)(this + 0xc));
  std::
  vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
  ::~vector((vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
             *)this);
  return;
}

```

