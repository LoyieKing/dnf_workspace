# CCeraShopGoods

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## SetItem

```asm
// === 08510c1a CCeraShopGoods::SetItem  [0x08510c1a-0x8510d11] ===
 8510c1a:	55                   	push   %ebp
 8510c1b:	89 e5                	mov    %esp,%ebp
 8510c1d:	53                   	push   %ebx
 8510c1e:	83 ec 14             	sub    $0x14,%esp
 8510c21:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510c24:	8b 40 14             	mov    0x14(%eax),%eax
 8510c27:	89 c2                	mov    %eax,%edx
 8510c29:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c2c:	89 10                	mov    %edx,(%eax)
 8510c2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510c31:	8b 50 1c             	mov    0x1c(%eax),%edx
 8510c34:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c37:	89 50 04             	mov    %edx,0x4(%eax)
 8510c3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510c3d:	8b 50 2c             	mov    0x2c(%eax),%edx
 8510c40:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c43:	89 50 08             	mov    %edx,0x8(%eax)
 8510c46:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510c49:	8b 50 30             	mov    0x30(%eax),%edx
 8510c4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c4f:	89 50 0c             	mov    %edx,0xc(%eax)
 8510c52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510c55:	8b 50 38             	mov    0x38(%eax),%edx
 8510c58:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c5b:	89 50 10             	mov    %edx,0x10(%eax)
 8510c5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510c61:	8b 50 0c             	mov    0xc(%eax),%edx
 8510c64:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c67:	89 50 1c             	mov    %edx,0x1c(%eax)
 8510c6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510c6d:	8b 50 10             	mov    0x10(%eax),%edx
 8510c70:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c73:	89 50 20             	mov    %edx,0x20(%eax)
 8510c76:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510c79:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 8510c7d:	0f be d0             	movsbl %al,%edx
 8510c80:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c83:	89 50 24             	mov    %edx,0x24(%eax)
 8510c86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510c89:	0f b7 40 22          	movzwl 0x22(%eax),%eax
 8510c8d:	0f bf d0             	movswl %ax,%edx
 8510c90:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c93:	89 50 28             	mov    %edx,0x28(%eax)
 8510c96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510c99:	8b 50 44             	mov    0x44(%eax),%edx
 8510c9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8510c9f:	89 50 2c             	mov    %edx,0x2c(%eax)
 8510ca2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510ca5:	8b 50 4c             	mov    0x4c(%eax),%edx
 8510ca8:	8b 45 08             	mov    0x8(%ebp),%eax
 8510cab:	89 50 30             	mov    %edx,0x30(%eax)
 8510cae:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510cb1:	0f b6 50 50          	movzbl 0x50(%eax),%edx
 8510cb5:	8b 45 08             	mov    0x8(%ebp),%eax
 8510cb8:	88 50 34             	mov    %dl,0x34(%eax)
 8510cbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510cbe:	0f b6 50 51          	movzbl 0x51(%eax),%edx
 8510cc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8510cc5:	88 50 35             	mov    %dl,0x35(%eax)
 8510cc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510ccb:	0f b6 50 53          	movzbl 0x53(%eax),%edx
 8510ccf:	8b 45 08             	mov    0x8(%ebp),%eax
 8510cd2:	88 50 36             	mov    %dl,0x36(%eax)
 8510cd5:	8b 45 08             	mov    0x8(%ebp),%eax
 8510cd8:	8b 18                	mov    (%eax),%ebx
 8510cda:	e8 bc b4 bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8510cdf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8510ce3:	89 04 24             	mov    %eax,(%esp)
 8510ce6:	e8 47 ed e4 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8510ceb:	8b 55 08             	mov    0x8(%ebp),%edx
 8510cee:	89 42 38             	mov    %eax,0x38(%edx)
 8510cf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510cf4:	8b 50 34             	mov    0x34(%eax),%edx
 8510cf7:	8b 45 08             	mov    0x8(%ebp),%eax
 8510cfa:	89 50 14             	mov    %edx,0x14(%eax)
 8510cfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8510d00:	0f b6 00             	movzbl (%eax),%eax
 8510d03:	0f be d0             	movsbl %al,%edx
 8510d06:	8b 45 08             	mov    0x8(%ebp),%eax
 8510d09:	89 50 18             	mov    %edx,0x18(%eax)
 8510d0c:	83 c4 14             	add    $0x14,%esp
 8510d0f:	5b                   	pop    %ebx
 8510d10:	5d                   	pop    %ebp
 8510d11:	c3                   	ret

```

```c
// CCeraShopGoods::SetItem @ 0x8510c1a

/* CCeraShopGoods::SetItem(STCeraShopItem const&) */

void __thiscall CCeraShopGoods::SetItem(CCeraShopGoods *this,STCeraShopItem *param_1)

{
  int iVar1;
  CDataManager *this_00;
  undefined4 uVar2;
  
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(this + 0x24) = (int)(char)param_1[0x20];
  *(int *)(this + 0x28) = (int)*(short *)(param_1 + 0x22);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x4c);
  this[0x34] = *(CCeraShopGoods *)(param_1 + 0x50);
  this[0x35] = *(CCeraShopGoods *)(param_1 + 0x51);
  this[0x36] = *(CCeraShopGoods *)(param_1 + 0x53);
  iVar1 = *(int *)this;
  this_00 = (CDataManager *)G_CDataManager();
  uVar2 = CDataManager::find_item(this_00,iVar1);
  *(undefined4 *)(this + 0x38) = uVar2;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x34);
  *(int *)(this + 0x18) = (int)(char)*param_1;
  return;
}

```

