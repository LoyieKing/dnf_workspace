# SetItem

`_ZN14CCeraShopGoods7SetItemERK14STCeraShopItem`

`CCeraShopGoods::SetItem(STCeraShopItem const&)`

| 类 | 地址 |
|---|---|
| `CCeraShopGoods` | `0x08510c1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08510c1a  _ZN14CCeraShopGoods7SetItemERK14STCeraShopItem
#           CCeraShopGoods::SetItem(STCeraShopItem const&)
# range [0x08510c1a, 0x08510d11]
08510c1a +0x00:  push   %ebp
08510c1b +0x01:  mov    %esp,%ebp
08510c1d +0x03:  push   %ebx
08510c1e +0x04:  sub    $0x14,%esp
08510c21 +0x07:  mov    0xc(%ebp),%eax
08510c24 +0x0a:  mov    0x14(%eax),%eax
08510c27 +0x0d:  mov    %eax,%edx
08510c29 +0x0f:  mov    0x8(%ebp),%eax
08510c2c +0x12:  mov    %edx,(%eax)
08510c2e +0x14:  mov    0xc(%ebp),%eax
08510c31 +0x17:  mov    0x1c(%eax),%edx
08510c34 +0x1a:  mov    0x8(%ebp),%eax
08510c37 +0x1d:  mov    %edx,0x4(%eax)
08510c3a +0x20:  mov    0xc(%ebp),%eax
08510c3d +0x23:  mov    0x2c(%eax),%edx
08510c40 +0x26:  mov    0x8(%ebp),%eax
08510c43 +0x29:  mov    %edx,0x8(%eax)
08510c46 +0x2c:  mov    0xc(%ebp),%eax
08510c49 +0x2f:  mov    0x30(%eax),%edx
08510c4c +0x32:  mov    0x8(%ebp),%eax
08510c4f +0x35:  mov    %edx,0xc(%eax)
08510c52 +0x38:  mov    0xc(%ebp),%eax
08510c55 +0x3b:  mov    0x38(%eax),%edx
08510c58 +0x3e:  mov    0x8(%ebp),%eax
08510c5b +0x41:  mov    %edx,0x10(%eax)
08510c5e +0x44:  mov    0xc(%ebp),%eax
08510c61 +0x47:  mov    0xc(%eax),%edx
08510c64 +0x4a:  mov    0x8(%ebp),%eax
08510c67 +0x4d:  mov    %edx,0x1c(%eax)
08510c6a +0x50:  mov    0xc(%ebp),%eax
08510c6d +0x53:  mov    0x10(%eax),%edx
08510c70 +0x56:  mov    0x8(%ebp),%eax
08510c73 +0x59:  mov    %edx,0x20(%eax)
08510c76 +0x5c:  mov    0xc(%ebp),%eax
08510c79 +0x5f:  movzbl 0x20(%eax),%eax
08510c7d +0x63:  movsbl %al,%edx
08510c80 +0x66:  mov    0x8(%ebp),%eax
08510c83 +0x69:  mov    %edx,0x24(%eax)
08510c86 +0x6c:  mov    0xc(%ebp),%eax
08510c89 +0x6f:  movzwl 0x22(%eax),%eax
08510c8d +0x73:  movswl %ax,%edx
08510c90 +0x76:  mov    0x8(%ebp),%eax
08510c93 +0x79:  mov    %edx,0x28(%eax)
08510c96 +0x7c:  mov    0xc(%ebp),%eax
08510c99 +0x7f:  mov    0x44(%eax),%edx
08510c9c +0x82:  mov    0x8(%ebp),%eax
08510c9f +0x85:  mov    %edx,0x2c(%eax)
08510ca2 +0x88:  mov    0xc(%ebp),%eax
08510ca5 +0x8b:  mov    0x4c(%eax),%edx
08510ca8 +0x8e:  mov    0x8(%ebp),%eax
08510cab +0x91:  mov    %edx,0x30(%eax)
08510cae +0x94:  mov    0xc(%ebp),%eax
08510cb1 +0x97:  movzbl 0x50(%eax),%edx
08510cb5 +0x9b:  mov    0x8(%ebp),%eax
08510cb8 +0x9e:  mov    %dl,0x34(%eax)
08510cbb +0xa1:  mov    0xc(%ebp),%eax
08510cbe +0xa4:  movzbl 0x51(%eax),%edx
08510cc2 +0xa8:  mov    0x8(%ebp),%eax
08510cc5 +0xab:  mov    %dl,0x35(%eax)
08510cc8 +0xae:  mov    0xc(%ebp),%eax
08510ccb +0xb1:  movzbl 0x53(%eax),%edx
08510ccf +0xb5:  mov    0x8(%ebp),%eax
08510cd2 +0xb8:  mov    %dl,0x36(%eax)
08510cd5 +0xbb:  mov    0x8(%ebp),%eax
08510cd8 +0xbe:  mov    (%eax),%ebx
08510cda +0xc0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08510cdf +0xc5:  mov    %ebx,0x4(%esp)
08510ce3 +0xc9:  mov    %eax,(%esp)
08510ce6 +0xcc:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08510ceb +0xd1:  mov    0x8(%ebp),%edx
08510cee +0xd4:  mov    %eax,0x38(%edx)
08510cf1 +0xd7:  mov    0xc(%ebp),%eax
08510cf4 +0xda:  mov    0x34(%eax),%edx
08510cf7 +0xdd:  mov    0x8(%ebp),%eax
08510cfa +0xe0:  mov    %edx,0x14(%eax)
08510cfd +0xe3:  mov    0xc(%ebp),%eax
08510d00 +0xe6:  movzbl (%eax),%eax
08510d03 +0xe9:  movsbl %al,%edx
08510d06 +0xec:  mov    0x8(%ebp),%eax
08510d09 +0xef:  mov    %edx,0x18(%eax)
08510d0c +0xf2:  add    $0x14,%esp
08510d0f +0xf5:  pop    %ebx
08510d10 +0xf6:  pop    %ebp
08510d11 +0xf7:  ret
```

## 反编译 C

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
