# Secu_HackLogCheck

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## DieMob

```asm
// === 0827a81c Secu_HackLogCheck::DieMob  [0x0827a81c-0x827a896] ===
 827a81c:	55                   	push   %ebp
 827a81d:	89 e5                	mov    %esp,%ebp
 827a81f:	83 ec 18             	sub    $0x18,%esp
 827a822:	8b 45 0c             	mov    0xc(%ebp),%eax
 827a825:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 827a829:	66 83 f8 ff          	cmp    $0xffff,%ax
 827a82d:	74 66                	je     827a895 <_ZN17Secu_HackLogCheck6DieMobEPK15MSG_MONSTER_DIE+0x79>
 827a82f:	8b 45 08             	mov    0x8(%ebp),%eax
 827a832:	8b 55 0c             	mov    0xc(%ebp),%edx
 827a835:	89 54 24 04          	mov    %edx,0x4(%esp)
 827a839:	89 04 24             	mov    %eax,(%esp)
 827a83c:	e8 b9 03 00 00       	call   827abfa <_ZN17Secu_MonsterCheck14SetMonsterInfoEPK15MSG_MONSTER_DIE>
 827a841:	8b 45 08             	mov    0x8(%ebp),%eax
 827a844:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 827a848:	84 c0                	test   %al,%al
 827a84a:	74 11                	je     827a85d <_ZN17Secu_HackLogCheck6DieMobEPK15MSG_MONSTER_DIE+0x41>
 827a84c:	8b 45 08             	mov    0x8(%ebp),%eax
 827a84f:	89 04 24             	mov    %eax,(%esp)
 827a852:	e8 41 05 00 00       	call   827ad98 <_ZN17Secu_MonsterCheck8Check223Ev>
 827a857:	8b 55 08             	mov    0x8(%ebp),%edx
 827a85a:	88 42 38             	mov    %al,0x38(%edx)
 827a85d:	8b 45 08             	mov    0x8(%ebp),%eax
 827a860:	0f b6 40 39          	movzbl 0x39(%eax),%eax
 827a864:	84 c0                	test   %al,%al
 827a866:	74 11                	je     827a879 <_ZN17Secu_HackLogCheck6DieMobEPK15MSG_MONSTER_DIE+0x5d>
 827a868:	8b 45 08             	mov    0x8(%ebp),%eax
 827a86b:	89 04 24             	mov    %eax,(%esp)
 827a86e:	e8 05 07 00 00       	call   827af78 <_ZN17Secu_MonsterCheck8Check224Ev>
 827a873:	8b 55 08             	mov    0x8(%ebp),%edx
 827a876:	88 42 39             	mov    %al,0x39(%edx)
 827a879:	8b 45 08             	mov    0x8(%ebp),%eax
 827a87c:	0f b6 40 3a          	movzbl 0x3a(%eax),%eax
 827a880:	84 c0                	test   %al,%al
 827a882:	74 11                	je     827a895 <_ZN17Secu_HackLogCheck6DieMobEPK15MSG_MONSTER_DIE+0x79>
 827a884:	8b 45 08             	mov    0x8(%ebp),%eax
 827a887:	89 04 24             	mov    %eax,(%esp)
 827a88a:	e8 71 08 00 00       	call   827b100 <_ZN17Secu_MonsterCheck8Check225Ev>
 827a88f:	8b 55 08             	mov    0x8(%ebp),%edx
 827a892:	88 42 3a             	mov    %al,0x3a(%edx)
 827a895:	c9                   	leave
 827a896:	c3                   	ret

```

```c
// Secu_HackLogCheck::DieMob @ 0x827a81c

/* Secu_HackLogCheck::DieMob(MSG_MONSTER_DIE const*) */

void __thiscall Secu_HackLogCheck::DieMob(Secu_HackLogCheck *this,MSG_MONSTER_DIE *param_1)

{
  Secu_HackLogCheck SVar1;
  
  if (*(short *)(param_1 + 0xf) != -1) {
    Secu_MonsterCheck::SetMonsterInfo((Secu_MonsterCheck *)this,param_1);
    if (this[0x38] != (Secu_HackLogCheck)0x0) {
      SVar1 = (Secu_HackLogCheck)Secu_MonsterCheck::Check223((Secu_MonsterCheck *)this);
      this[0x38] = SVar1;
    }
    if (this[0x39] != (Secu_HackLogCheck)0x0) {
      SVar1 = (Secu_HackLogCheck)Secu_MonsterCheck::Check224((Secu_MonsterCheck *)this);
      this[0x39] = SVar1;
    }
    if (this[0x3a] != (Secu_HackLogCheck)0x0) {
      SVar1 = (Secu_HackLogCheck)Secu_MonsterCheck::Check225((Secu_MonsterCheck *)this);
      this[0x3a] = SVar1;
    }
  }
  return;
}

```

---

## Init

```asm
// === 0827a7d0 Secu_HackLogCheck::Init  [0x0827a7d0-0x827a7f3] ===
 827a7d0:	55                   	push   %ebp
 827a7d1:	89 e5                	mov    %esp,%ebp
 827a7d3:	83 ec 18             	sub    $0x18,%esp
 827a7d6:	8b 45 08             	mov    0x8(%ebp),%eax
 827a7d9:	8b 55 0c             	mov    0xc(%ebp),%edx
 827a7dc:	89 50 34             	mov    %edx,0x34(%eax)
 827a7df:	8b 45 08             	mov    0x8(%ebp),%eax
 827a7e2:	8b 55 0c             	mov    0xc(%ebp),%edx
 827a7e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 827a7e9:	89 04 24             	mov    %eax,(%esp)
 827a7ec:	e8 fb 03 00 00       	call   827abec <_ZN17Secu_MonsterCheck10SetUserPtrEP5CUser>
 827a7f1:	c9                   	leave
 827a7f2:	c3                   	ret
 827a7f3:	90                   	nop

```

```c
// Secu_HackLogCheck::Init @ 0x827a7d0

/* Secu_HackLogCheck::Init(CUser*) */

void __thiscall Secu_HackLogCheck::Init(Secu_HackLogCheck *this,CUser *param_1)

{
  *(CUser **)(this + 0x34) = param_1;
  Secu_MonsterCheck::SetUserPtr((Secu_MonsterCheck *)this,param_1);
  return;
}

```

---

## MoveMap

```asm
// === 0827a7f4 Secu_HackLogCheck::MoveMap  [0x0827a7f4-0x827a81b] ===
 827a7f4:	55                   	push   %ebp
 827a7f5:	89 e5                	mov    %esp,%ebp
 827a7f7:	83 ec 18             	sub    $0x18,%esp
 827a7fa:	8b 45 08             	mov    0x8(%ebp),%eax
 827a7fd:	c6 40 38 01          	movb   $0x1,0x38(%eax)
 827a801:	8b 45 08             	mov    0x8(%ebp),%eax
 827a804:	c6 40 39 01          	movb   $0x1,0x39(%eax)
 827a808:	8b 45 08             	mov    0x8(%ebp),%eax
 827a80b:	c6 40 3a 01          	movb   $0x1,0x3a(%eax)
 827a80f:	8b 45 08             	mov    0x8(%ebp),%eax
 827a812:	89 04 24             	mov    %eax,(%esp)
 827a815:	e8 60 04 00 00       	call   827ac7a <_ZN17Secu_MonsterCheck5ResetEv>
 827a81a:	c9                   	leave
 827a81b:	c3                   	ret

```

```c
// Secu_HackLogCheck::MoveMap @ 0x827a7f4

/* Secu_HackLogCheck::MoveMap() */

void __thiscall Secu_HackLogCheck::MoveMap(Secu_HackLogCheck *this)

{
  this[0x38] = (Secu_HackLogCheck)0x1;
  this[0x39] = (Secu_HackLogCheck)0x1;
  this[0x3a] = (Secu_HackLogCheck)0x1;
  Secu_MonsterCheck::Reset((Secu_MonsterCheck *)this);
  return;
}

```

