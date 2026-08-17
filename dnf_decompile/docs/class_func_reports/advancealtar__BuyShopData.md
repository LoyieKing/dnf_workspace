# advancealtar__BuyShopData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getBuyUpgradeDataVec

```asm
// === 088a105c advancealtar::BuyShopData::getBuyUpgradeDataVec  [0x088a105c-0x88a108f] ===
 88a105c:	55                   	push   %ebp
 88a105d:	89 e5                	mov    %esp,%ebp
 88a105f:	8b 45 0c             	mov    0xc(%ebp),%eax
 88a1062:	83 f8 01             	cmp    $0x1,%eax
 88a1065:	74 11                	je     88a1078 <_ZN12advancealtar11BuyShopData20getBuyUpgradeDataVecENS_20AdvanceAltarShopType1TE+0x1c>
 88a1067:	83 f8 02             	cmp    $0x2,%eax
 88a106a:	74 14                	je     88a1080 <_ZN12advancealtar11BuyShopData20getBuyUpgradeDataVecENS_20AdvanceAltarShopType1TE+0x24>
 88a106c:	85 c0                	test   %eax,%eax
 88a106e:	75 18                	jne    88a1088 <_ZN12advancealtar11BuyShopData20getBuyUpgradeDataVecENS_20AdvanceAltarShopType1TE+0x2c>
 88a1070:	8b 45 08             	mov    0x8(%ebp),%eax
 88a1073:	83 c0 04             	add    $0x4,%eax
 88a1076:	eb 15                	jmp    88a108d <_ZN12advancealtar11BuyShopData20getBuyUpgradeDataVecENS_20AdvanceAltarShopType1TE+0x31>
 88a1078:	8b 45 08             	mov    0x8(%ebp),%eax
 88a107b:	83 c0 10             	add    $0x10,%eax
 88a107e:	eb 0d                	jmp    88a108d <_ZN12advancealtar11BuyShopData20getBuyUpgradeDataVecENS_20AdvanceAltarShopType1TE+0x31>
 88a1080:	8b 45 08             	mov    0x8(%ebp),%eax
 88a1083:	83 c0 1c             	add    $0x1c,%eax
 88a1086:	eb 05                	jmp    88a108d <_ZN12advancealtar11BuyShopData20getBuyUpgradeDataVecENS_20AdvanceAltarShopType1TE+0x31>
 88a1088:	b8 00 00 00 00       	mov    $0x0,%eax
 88a108d:	5d                   	pop    %ebp
 88a108e:	c3                   	ret
 88a108f:	90                   	nop

```

```c
// advancealtar::BuyShopData::getBuyUpgradeDataVec @ 0x88a105c

/* advancealtar::BuyShopData::getBuyUpgradeDataVec(advancealtar::AdvanceAltarShopType::T) */

BuyShopData * __thiscall
advancealtar::BuyShopData::getBuyUpgradeDataVec(BuyShopData *this,int param_2)

{
  if (param_2 == 1) {
    this = this + 0x10;
  }
  else if (param_2 == 2) {
    this = this + 0x1c;
  }
  else if (param_2 == 0) {
    this = this + 4;
  }
  else {
    this = (BuyShopData *)0x0;
  }
  return this;
}

```

---

## reset

```asm
// === 088a1090 advancealtar::BuyShopData::reset  [0x088a1090-0x88a10cb] ===
 88a1090:	55                   	push   %ebp
 88a1091:	89 e5                	mov    %esp,%ebp
 88a1093:	83 ec 18             	sub    $0x18,%esp
 88a1096:	8b 45 08             	mov    0x8(%ebp),%eax
 88a1099:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 88a109f:	8b 45 08             	mov    0x8(%ebp),%eax
 88a10a2:	83 c0 04             	add    $0x4,%eax
 88a10a5:	89 04 24             	mov    %eax,(%esp)
 88a10a8:	e8 af 29 00 00       	call   88a3a5c <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE5clearEv>
 88a10ad:	8b 45 08             	mov    0x8(%ebp),%eax
 88a10b0:	83 c0 10             	add    $0x10,%eax
 88a10b3:	89 04 24             	mov    %eax,(%esp)
 88a10b6:	e8 a1 29 00 00       	call   88a3a5c <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE5clearEv>
 88a10bb:	8b 45 08             	mov    0x8(%ebp),%eax
 88a10be:	83 c0 1c             	add    $0x1c,%eax
 88a10c1:	89 04 24             	mov    %eax,(%esp)
 88a10c4:	e8 93 29 00 00       	call   88a3a5c <_ZNSt6vectorIN12advancealtar14BuyUpgradeDataESaIS1_EE5clearEv>
 88a10c9:	c9                   	leave
 88a10ca:	c3                   	ret
 88a10cb:	90                   	nop

```

```c
// advancealtar::BuyShopData::reset @ 0x88a1090

/* advancealtar::BuyShopData::reset() */

void __thiscall advancealtar::BuyShopData::reset(BuyShopData *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::clear
            ((vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
             (this + 4));
  std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::clear
            ((vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
             (this + 0x10));
  std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::clear
            ((vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
             (this + 0x1c));
  return;
}

```

