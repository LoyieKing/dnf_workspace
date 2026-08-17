# WongWork__CDeathTower__CPlayData__stRewardItem_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## reset

```asm
// === 08461cb4 WongWork::CDeathTower::CPlayData::stRewardItem_t::reset  [0x08461cb4-0x8461d01] ===
 8461cb4:	55                   	push   %ebp
 8461cb5:	89 e5                	mov    %esp,%ebp
 8461cb7:	83 ec 28             	sub    $0x28,%esp
 8461cba:	8b 45 08             	mov    0x8(%ebp),%eax
 8461cbd:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8461cc3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8461cca:	eb 29                	jmp    8461cf5 <_ZN8WongWork11CDeathTower9CPlayData14stRewardItem_t5resetEv+0x41>
 8461ccc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8461ccf:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8461cd2:	03 45 08             	add    0x8(%ebp),%eax
 8461cd5:	83 c0 04             	add    $0x4,%eax
 8461cd8:	89 04 24             	mov    %eax,(%esp)
 8461cdb:	e8 f8 9a c6 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8461ce0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8461ce3:	8b 45 08             	mov    0x8(%ebp),%eax
 8461ce6:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8461ce9:	c7 44 02 06 ff ff ff 	movl   $0xffffffff,0x6(%edx,%eax,1)
 8461cf0:	ff 
 8461cf1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8461cf5:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 8461cf9:	0f 9e c0             	setle  %al
 8461cfc:	84 c0                	test   %al,%al
 8461cfe:	75 cc                	jne    8461ccc <_ZN8WongWork11CDeathTower9CPlayData14stRewardItem_t5resetEv+0x18>
 8461d00:	c9                   	leave
 8461d01:	c3                   	ret

```

```c
// WongWork::CDeathTower::CPlayData::stRewardItem_t::reset @ 0x8461cb4

/* WongWork::CDeathTower::CPlayData::stRewardItem_t::reset() */

void __thiscall WongWork::CDeathTower::CPlayData::stRewardItem_t::reset(stRewardItem_t *this)

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

