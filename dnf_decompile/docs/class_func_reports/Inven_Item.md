# Inven_Item

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## GetInventoryType

```asm
// === 08348170 Inven_Item::GetInventoryType  [0x08348170-0x83481e1] ===
 8348170:	55                   	push   %ebp
 8348171:	89 e5                	mov    %esp,%ebp
 8348173:	53                   	push   %ebx
 8348174:	83 ec 10             	sub    $0x10,%esp
 8348177:	8b 45 08             	mov    0x8(%ebp),%eax
 834817a:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 834817e:	0f b6 c0             	movzbl %al,%eax
 8348181:	83 f8 0a             	cmp    $0xa,%eax
 8348184:	77 4b                	ja     83481d1 <_ZN10Inven_Item16GetInventoryTypeEv+0x61>
 8348186:	ba 01 00 00 00       	mov    $0x1,%edx
 834818b:	89 d3                	mov    %edx,%ebx
 834818d:	89 c1                	mov    %eax,%ecx
 834818f:	d3 e3                	shl    %cl,%ebx
 8348191:	89 d8                	mov    %ebx,%eax
 8348193:	89 c2                	mov    %eax,%edx
 8348195:	81 e2 1f 06 00 00    	and    $0x61f,%edx
 834819b:	85 d2                	test   %edx,%edx
 834819d:	75 17                	jne    83481b6 <_ZN10Inven_Item16GetInventoryTypeEv+0x46>
 834819f:	89 c2                	mov    %eax,%edx
 83481a1:	81 e2 00 01 00 00    	and    $0x100,%edx
 83481a7:	85 d2                	test   %edx,%edx
 83481a9:	75 14                	jne    83481bf <_ZN10Inven_Item16GetInventoryTypeEv+0x4f>
 83481ab:	25 e0 00 00 00       	and    $0xe0,%eax
 83481b0:	85 c0                	test   %eax,%eax
 83481b2:	75 14                	jne    83481c8 <_ZN10Inven_Item16GetInventoryTypeEv+0x58>
 83481b4:	eb 1b                	jmp    83481d1 <_ZN10Inven_Item16GetInventoryTypeEv+0x61>
 83481b6:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%ebp)
 83481bd:	eb 19                	jmp    83481d8 <_ZN10Inven_Item16GetInventoryTypeEv+0x68>
 83481bf:	c7 45 f8 02 00 00 00 	movl   $0x2,-0x8(%ebp)
 83481c6:	eb 10                	jmp    83481d8 <_ZN10Inven_Item16GetInventoryTypeEv+0x68>
 83481c8:	c7 45 f8 03 00 00 00 	movl   $0x3,-0x8(%ebp)
 83481cf:	eb 07                	jmp    83481d8 <_ZN10Inven_Item16GetInventoryTypeEv+0x68>
 83481d1:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%ebp)
 83481d8:	8b 45 f8             	mov    -0x8(%ebp),%eax
 83481db:	83 c4 10             	add    $0x10,%esp
 83481de:	5b                   	pop    %ebx
 83481df:	5d                   	pop    %ebp
 83481e0:	c3                   	ret
 83481e1:	90                   	nop

```

```c
// Inven_Item::GetInventoryType @ 0x8348170

/* Inven_Item::GetInventoryType() */

undefined4 __thiscall Inven_Item::GetInventoryType(Inven_Item *this)

{
  uint uVar1;
  
  if ((byte)this[1] < 0xb) {
    uVar1 = 1 << ((byte)this[1] & 0x1f);
    if ((uVar1 & 0x61f) != 0) {
      return 1;
    }
    if ((uVar1 & 0x100) != 0) {
      return 2;
    }
    if ((uVar1 & 0xe0) != 0) {
      return 3;
    }
  }
  return 1;
}

```

---

## GetItemSpace

```asm
// === 083481e2 Inven_Item::GetItemSpace  [0x083481e2-0x8348253] ===
 83481e2:	55                   	push   %ebp
 83481e3:	89 e5                	mov    %esp,%ebp
 83481e5:	53                   	push   %ebx
 83481e6:	83 ec 10             	sub    $0x10,%esp
 83481e9:	8b 45 08             	mov    0x8(%ebp),%eax
 83481ec:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 83481f0:	0f b6 c0             	movzbl %al,%eax
 83481f3:	83 f8 0a             	cmp    $0xa,%eax
 83481f6:	77 4b                	ja     8348243 <_ZNK10Inven_Item12GetItemSpaceEv+0x61>
 83481f8:	ba 01 00 00 00       	mov    $0x1,%edx
 83481fd:	89 d3                	mov    %edx,%ebx
 83481ff:	89 c1                	mov    %eax,%ecx
 8348201:	d3 e3                	shl    %cl,%ebx
 8348203:	89 d8                	mov    %ebx,%eax
 8348205:	89 c2                	mov    %eax,%edx
 8348207:	81 e2 1f 06 00 00    	and    $0x61f,%edx
 834820d:	85 d2                	test   %edx,%edx
 834820f:	75 17                	jne    8348228 <_ZNK10Inven_Item12GetItemSpaceEv+0x46>
 8348211:	89 c2                	mov    %eax,%edx
 8348213:	81 e2 00 01 00 00    	and    $0x100,%edx
 8348219:	85 d2                	test   %edx,%edx
 834821b:	75 1d                	jne    834823a <_ZNK10Inven_Item12GetItemSpaceEv+0x58>
 834821d:	25 e0 00 00 00       	and    $0xe0,%eax
 8348222:	85 c0                	test   %eax,%eax
 8348224:	75 0b                	jne    8348231 <_ZNK10Inven_Item12GetItemSpaceEv+0x4f>
 8348226:	eb 1b                	jmp    8348243 <_ZNK10Inven_Item12GetItemSpaceEv+0x61>
 8348228:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 834822f:	eb 19                	jmp    834824a <_ZNK10Inven_Item12GetItemSpaceEv+0x68>
 8348231:	c7 45 f8 07 00 00 00 	movl   $0x7,-0x8(%ebp)
 8348238:	eb 10                	jmp    834824a <_ZNK10Inven_Item12GetItemSpaceEv+0x68>
 834823a:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%ebp)
 8348241:	eb 07                	jmp    834824a <_ZNK10Inven_Item12GetItemSpaceEv+0x68>
 8348243:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 834824a:	8b 45 f8             	mov    -0x8(%ebp),%eax
 834824d:	83 c4 10             	add    $0x10,%esp
 8348250:	5b                   	pop    %ebx
 8348251:	5d                   	pop    %ebp
 8348252:	c3                   	ret
 8348253:	90                   	nop

```

```c
// Inven_Item::GetItemSpace @ 0x83481e2

/* Inven_Item::GetItemSpace() const */

undefined4 __thiscall Inven_Item::GetItemSpace(Inven_Item *this)

{
  uint uVar1;
  
  if ((byte)this[1] < 0xb) {
    uVar1 = 1 << ((byte)this[1] & 0x1f);
    if ((uVar1 & 0x61f) != 0) {
      return 0;
    }
    if ((uVar1 & 0x100) != 0) {
      return 1;
    }
    if ((uVar1 & 0xe0) != 0) {
      return 7;
    }
  }
  return 0;
}

```

