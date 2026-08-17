# stFavorableRelationShip_t__._140

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## ~._140

```asm
// === 089fb8fc stFavorableRelationShip_t::._140::~._140  [0x089fb8fc-0x89fb941] ===
 89fb8fc:	55                   	push   %ebp
 89fb8fd:	89 e5                	mov    %esp,%ebp
 89fb8ff:	56                   	push   %esi
 89fb900:	53                   	push   %ebx
 89fb901:	83 ec 10             	sub    $0x10,%esp
 89fb904:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb907:	83 c0 0c             	add    $0xc,%eax
 89fb90a:	89 04 24             	mov    %eax,(%esp)
 89fb90d:	e8 52 6d b8 ff       	call   8582664 <_ZNSt6vectorISt4pairImjESaIS1_EED1Ev>
 89fb912:	eb 1b                	jmp    89fb92f <_ZN25stFavorableRelationShip_t5._140D1Ev+0x33>
 89fb914:	89 d3                	mov    %edx,%ebx
 89fb916:	89 c6                	mov    %eax,%esi
 89fb918:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb91b:	89 04 24             	mov    %eax,(%esp)
 89fb91e:	e8 e3 6c b8 ff       	call   8582606 <_ZNSt6vectorISt4pairI13ENUM_NPC_MOODjESaIS2_EED1Ev>
 89fb923:	89 f0                	mov    %esi,%eax
 89fb925:	89 da                	mov    %ebx,%edx
 89fb927:	89 04 24             	mov    %eax,(%esp)
 89fb92a:	e8 21 7e 0e 00       	call   8ae3750 <_Unwind_Resume>
 89fb92f:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb932:	89 04 24             	mov    %eax,(%esp)
 89fb935:	e8 cc 6c b8 ff       	call   8582606 <_ZNSt6vectorISt4pairI13ENUM_NPC_MOODjESaIS2_EED1Ev>
 89fb93a:	83 c4 10             	add    $0x10,%esp
 89fb93d:	5b                   	pop    %ebx
 89fb93e:	5e                   	pop    %esi
 89fb93f:	5d                   	pop    %ebp
 89fb940:	c3                   	ret
 89fb941:	90                   	nop

```

```c
// stFavorableRelationShip_t::._140::~._140 @ 0x89fb8fc

/* stFavorableRelationShip_t::._140::~._140() */

void __thiscall stFavorableRelationShip_t::._140::~__140(__140 *this)

{
                    /* try { // try from 089fb90d to 089fb911 has its CatchHandler @ 089fb914 */
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

