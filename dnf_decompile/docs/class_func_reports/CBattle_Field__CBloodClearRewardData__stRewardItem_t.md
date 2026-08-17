# CBattle_Field__CBloodClearRewardData__stRewardItem_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## reset

```asm
// === 08306f5c CBattle_Field::CBloodClearRewardData::stRewardItem_t::reset  [0x08306f5c-0x8306fa9] ===
 8306f5c:	55                   	push   %ebp
 8306f5d:	89 e5                	mov    %esp,%ebp
 8306f5f:	83 ec 28             	sub    $0x28,%esp
 8306f62:	8b 45 08             	mov    0x8(%ebp),%eax
 8306f65:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8306f6b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8306f72:	eb 29                	jmp    8306f9d <_ZN13CBattle_Field21CBloodClearRewardData14stRewardItem_t5resetEv+0x41>
 8306f74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8306f77:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8306f7a:	03 45 08             	add    0x8(%ebp),%eax
 8306f7d:	83 c0 04             	add    $0x4,%eax
 8306f80:	89 04 24             	mov    %eax,(%esp)
 8306f83:	e8 50 48 dc ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8306f88:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8306f8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8306f8e:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8306f91:	c7 44 02 06 ff ff ff 	movl   $0xffffffff,0x6(%edx,%eax,1)
 8306f98:	ff 
 8306f99:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8306f9d:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 8306fa1:	0f 9e c0             	setle  %al
 8306fa4:	84 c0                	test   %al,%al
 8306fa6:	75 cc                	jne    8306f74 <_ZN13CBattle_Field21CBloodClearRewardData14stRewardItem_t5resetEv+0x18>
 8306fa8:	c9                   	leave
 8306fa9:	c3                   	ret

```

```c
// CBattle_Field::CBloodClearRewardData::stRewardItem_t::reset @ 0x8306f5c

/* CBattle_Field::CBloodClearRewardData::stRewardItem_t::reset() */

void __thiscall CBattle_Field::CBloodClearRewardData::stRewardItem_t::reset(stRewardItem_t *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 4));
    *(undefined4 *)(this + local_10 * 0x3d + 6) = 0xffffffff;
  }
  return;
}

```

