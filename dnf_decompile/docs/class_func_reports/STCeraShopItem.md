# STCeraShopItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## STCeraShopItem

```asm
// === 088fd974 STCeraShopItem::STCeraShopItem  [0x088fd974-0x88fd9c3] ===
 88fd974:	55                   	push   %ebp
 88fd975:	89 e5                	mov    %esp,%ebp
 88fd977:	56                   	push   %esi
 88fd978:	53                   	push   %ebx
 88fd979:	83 ec 10             	sub    $0x10,%esp
 88fd97c:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd97f:	83 c0 40             	add    $0x40,%eax
 88fd982:	89 04 24             	mov    %eax,(%esp)
 88fd985:	e8 46 8c e0 ff       	call   87065d0 <_ZNSsC1Ev>
 88fd98a:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd98d:	89 04 24             	mov    %eax,(%esp)
 88fd990:	e8 2f 00 00 00       	call   88fd9c4 <_ZN14STCeraShopItem5clearEv>
 88fd995:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd998:	c6 80 84 00 00 00 00 	movb   $0x0,0x84(%eax)
 88fd99f:	83 c4 10             	add    $0x10,%esp
 88fd9a2:	5b                   	pop    %ebx
 88fd9a3:	5e                   	pop    %esi
 88fd9a4:	5d                   	pop    %ebp
 88fd9a5:	c3                   	ret
 88fd9a6:	89 d3                	mov    %edx,%ebx
 88fd9a8:	89 c6                	mov    %eax,%esi
 88fd9aa:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd9ad:	83 c0 40             	add    $0x40,%eax
 88fd9b0:	89 04 24             	mov    %eax,(%esp)
 88fd9b3:	e8 28 a2 e0 ff       	call   8707be0 <_ZNSsD1Ev>
 88fd9b8:	89 f0                	mov    %esi,%eax
 88fd9ba:	89 da                	mov    %ebx,%edx
 88fd9bc:	89 04 24             	mov    %eax,(%esp)
 88fd9bf:	e8 8c 5d 1e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// STCeraShopItem::STCeraShopItem @ 0x88fd974

/* STCeraShopItem::STCeraShopItem() */

void __thiscall STCeraShopItem::STCeraShopItem(STCeraShopItem *this)

{
  std::string::string((string *)(this + 0x40));
                    /* try { // try from 088fd990 to 088fd994 has its CatchHandler @ 088fd9a6 */
  clear(this);
  this[0x84] = (STCeraShopItem)0x0;
  return;
}

```

---

## clear

```asm
// === 088fd9c4 STCeraShopItem::clear  [0x088fd9c4-0x88fdb35] ===
 88fd9c4:	55                   	push   %ebp
 88fd9c5:	89 e5                	mov    %esp,%ebp
 88fd9c7:	83 ec 18             	sub    $0x18,%esp
 88fd9ca:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd9cd:	c6 00 ff             	movb   $0xff,(%eax)
 88fd9d0:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd9d3:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 88fd9da:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd9dd:	c7 40 08 fe ff ff ff 	movl   $0xfffffffe,0x8(%eax)
 88fd9e4:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd9e7:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
 88fd9ee:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd9f1:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 88fd9f8:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd9fb:	c7 40 14 ff ff ff ff 	movl   $0xffffffff,0x14(%eax)
 88fda02:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda05:	c6 40 18 ff          	movb   $0xff,0x18(%eax)
 88fda09:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda0c:	c7 40 1c 01 00 00 00 	movl   $0x1,0x1c(%eax)
 88fda13:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda16:	c6 40 20 00          	movb   $0x0,0x20(%eax)
 88fda1a:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda1d:	66 c7 40 22 00 00    	movw   $0x0,0x22(%eax)
 88fda23:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda26:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 88fda2d:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda30:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 88fda37:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda3a:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 88fda41:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda44:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 88fda4b:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda4e:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 88fda55:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda58:	c6 40 3c ff          	movb   $0xff,0x3c(%eax)
 88fda5c:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda5f:	83 c0 40             	add    $0x40,%eax
 88fda62:	c7 44 24 04 c0 f3 e0 	movl   $0x8e0f3c0,0x4(%esp)
 88fda69:	08 
 88fda6a:	89 04 24             	mov    %eax,(%esp)
 88fda6d:	e8 ae ac e0 ff       	call   8708720 <_ZNSsaSEPKc>
 88fda72:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda75:	c7 80 80 00 00 00 00 	movl   $0x0,0x80(%eax)
 88fda7c:	00 00 00 
 88fda7f:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda82:	ba 00 00 00 00       	mov    $0x0,%edx
 88fda87:	89 50 44             	mov    %edx,0x44(%eax)
 88fda8a:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda8d:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 88fda94:	8b 45 08             	mov    0x8(%ebp),%eax
 88fda97:	c7 40 4c 00 00 00 00 	movl   $0x0,0x4c(%eax)
 88fda9e:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdaa1:	c6 40 50 00          	movb   $0x0,0x50(%eax)
 88fdaa5:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdaa8:	c6 40 51 00          	movb   $0x0,0x51(%eax)
 88fdaac:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdaaf:	c6 40 52 00          	movb   $0x0,0x52(%eax)
 88fdab3:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdab6:	c6 40 53 01          	movb   $0x1,0x53(%eax)
 88fdaba:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdabd:	c7 40 54 fe ff ff ff 	movl   $0xfffffffe,0x54(%eax)
 88fdac4:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdac7:	c7 40 58 ff ff ff ff 	movl   $0xffffffff,0x58(%eax)
 88fdace:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdad1:	c7 40 5c 00 00 00 00 	movl   $0x0,0x5c(%eax)
 88fdad8:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdadb:	c6 40 60 0c          	movb   $0xc,0x60(%eax)
 88fdadf:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdae2:	66 c7 40 62 00 00    	movw   $0x0,0x62(%eax)
 88fdae8:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdaeb:	66 c7 40 64 00 00    	movw   $0x0,0x64(%eax)
 88fdaf1:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdaf4:	c7 40 68 00 00 00 00 	movl   $0x0,0x68(%eax)
 88fdafb:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdafe:	c7 40 6c 00 00 00 00 	movl   $0x0,0x6c(%eax)
 88fdb05:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdb08:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 88fdb0f:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdb12:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
 88fdb19:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdb1c:	c6 40 78 00          	movb   $0x0,0x78(%eax)
 88fdb20:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdb23:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 88fdb2a:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdb2d:	c7 40 7c ff ff ff ff 	movl   $0xffffffff,0x7c(%eax)
 88fdb34:	c9                   	leave
 88fdb35:	c3                   	ret

```

```c
// STCeraShopItem::clear @ 0x88fd9c4

/* STCeraShopItem::clear() */

void __thiscall STCeraShopItem::clear(STCeraShopItem *this)

{
  *this = (STCeraShopItem)0xff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xfffffffe;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  this[0x18] = (STCeraShopItem)0xff;
  *(undefined4 *)(this + 0x1c) = 1;
  this[0x20] = (STCeraShopItem)0x0;
  *(undefined2 *)(this + 0x22) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x3c] = (STCeraShopItem)0xff;
  std::string::operator=((string *)(this + 0x40),"");
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x50] = (STCeraShopItem)0x0;
  this[0x51] = (STCeraShopItem)0x0;
  this[0x52] = (STCeraShopItem)0x0;
  this[0x53] = (STCeraShopItem)0x1;
  *(undefined4 *)(this + 0x54) = 0xfffffffe;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 0x5c) = 0;
  this[0x60] = (STCeraShopItem)0xc;
  *(undefined2 *)(this + 0x62) = 0;
  *(undefined2 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x78] = (STCeraShopItem)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x7c) = 0xffffffff;
  return;
}

```

---

## getCeraPrice

```asm
// === 088fdb52 STCeraShopItem::getCeraPrice  [0x088fdb52-0x88fdb5d] ===
 88fdb52:	55                   	push   %ebp
 88fdb53:	89 e5                	mov    %esp,%ebp
 88fdb55:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdb58:	8b 40 38             	mov    0x38(%eax),%eax
 88fdb5b:	5d                   	pop    %ebp
 88fdb5c:	c3                   	ret
 88fdb5d:	90                   	nop

```

```c
// STCeraShopItem::getCeraPrice @ 0x88fdb52

/* STCeraShopItem::getCeraPrice() */

undefined4 __thiscall STCeraShopItem::getCeraPrice(STCeraShopItem *this)

{
  return *(undefined4 *)(this + 0x38);
}

```

---

## getGoldPrice

```asm
// === 088fdb5e STCeraShopItem::getGoldPrice  [0x088fdb5e-0x88fdb68] ===
 88fdb5e:	55                   	push   %ebp
 88fdb5f:	89 e5                	mov    %esp,%ebp
 88fdb61:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdb64:	8b 40 2c             	mov    0x2c(%eax),%eax
 88fdb67:	5d                   	pop    %ebp
 88fdb68:	c3                   	ret

```

```c
// STCeraShopItem::getGoldPrice @ 0x88fdb5e

/* STCeraShopItem::getGoldPrice() */

undefined4 __thiscall STCeraShopItem::getGoldPrice(STCeraShopItem *this)

{
  return *(undefined4 *)(this + 0x2c);
}

```

---

## isLimitSaleItem

```asm
// === 088fdb36 STCeraShopItem::isLimitSaleItem  [0x088fdb36-0x88fdb51] ===
 88fdb36:	55                   	push   %ebp
 88fdb37:	89 e5                	mov    %esp,%ebp
 88fdb39:	8b 45 08             	mov    0x8(%ebp),%eax
 88fdb3c:	8b 40 54             	mov    0x54(%eax),%eax
 88fdb3f:	83 f8 fe             	cmp    $0xfffffffe,%eax
 88fdb42:	75 07                	jne    88fdb4b <_ZN14STCeraShopItem15isLimitSaleItemEv+0x15>
 88fdb44:	b8 00 00 00 00       	mov    $0x0,%eax
 88fdb49:	eb 05                	jmp    88fdb50 <_ZN14STCeraShopItem15isLimitSaleItemEv+0x1a>
 88fdb4b:	b8 01 00 00 00       	mov    $0x1,%eax
 88fdb50:	5d                   	pop    %ebp
 88fdb51:	c3                   	ret

```

```c
// STCeraShopItem::isLimitSaleItem @ 0x88fdb36

/* STCeraShopItem::isLimitSaleItem() */

bool __thiscall STCeraShopItem::isLimitSaleItem(STCeraShopItem *this)

{
  return *(int *)(this + 0x54) != -2;
}

```

