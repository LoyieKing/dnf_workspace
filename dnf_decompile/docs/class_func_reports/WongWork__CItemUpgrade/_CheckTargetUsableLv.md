# _CheckTargetUsableLv

`_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_`

`WongWork::CItemUpgrade::_CheckTargetUsableLv(Inven_Item const&, Inven_Item const&) const`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08548c3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08548c3c  _ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_
#           WongWork::CItemUpgrade::_CheckTargetUsableLv(Inven_Item const&, Inven_Item const&) const
# range [0x08548c3c, 0x08548d3b]
08548c3c +0x00:  push   %ebp
08548c3d +0x01:  mov    %esp,%ebp
08548c3f +0x03:  push   %ebx
08548c40 +0x04:  sub    $0x34,%esp
08548c43 +0x07:  mov    0xc(%ebp),%eax
08548c46 +0x0a:  mov    0x2(%eax),%eax
08548c49 +0x0d:  mov    %eax,%ebx
08548c4b +0x0f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08548c50 +0x14:  mov    %ebx,0x4(%esp)
08548c54 +0x18:  mov    %eax,(%esp)
08548c57 +0x1b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08548c5c +0x20:  mov    %eax,-0x24(%ebp)
08548c5f +0x23:  cmpl   $0x0,-0x24(%ebp)
08548c63 +0x27:  jne    08548c6f <+0x33>
08548c65 +0x29:  mov    $0x0,%eax
08548c6a +0x2e:  jmp    08548d36 <+0xfa>
08548c6f +0x33:  mov    -0x24(%ebp),%eax
08548c72 +0x36:  mov    %eax,(%esp)
08548c75 +0x39:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08548c7a +0x3e:  xor    $0x1,%eax
08548c7d +0x41:  test   %al,%al
08548c7f +0x43:  je     08548c8b <+0x4f>
08548c81 +0x45:  mov    $0x1,%eax
08548c86 +0x4a:  jmp    08548d36 <+0xfa>
08548c8b +0x4f:  mov    -0x24(%ebp),%eax
08548c8e +0x52:  mov    %eax,-0x20(%ebp)
08548c91 +0x55:  mov    -0x20(%ebp),%eax
08548c94 +0x58:  movzbl 0x320(%eax),%eax
08548c9b +0x5f:  xor    $0x1,%eax
08548c9e +0x62:  test   %al,%al
08548ca0 +0x64:  je     08548cac <+0x70>
08548ca2 +0x66:  mov    $0x1,%eax
08548ca7 +0x6b:  jmp    08548d36 <+0xfa>
08548cac +0x70:  mov    0x10(%ebp),%eax
08548caf +0x73:  mov    0x2(%eax),%eax
08548cb2 +0x76:  mov    %eax,%ebx
08548cb4 +0x78:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08548cb9 +0x7d:  mov    %ebx,0x4(%esp)
08548cbd +0x81:  mov    %eax,(%esp)
08548cc0 +0x84:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08548cc5 +0x89:  mov    %eax,-0x1c(%ebp)
08548cc8 +0x8c:  cmpl   $0x0,-0x1c(%ebp)
08548ccc +0x90:  jne    08548cd5 <+0x99>
08548cce +0x92:  mov    $0x0,%eax
08548cd3 +0x97:  jmp    08548d36 <+0xfa>
08548cd5 +0x99:  mov    0x10(%ebp),%eax
08548cd8 +0x9c:  mov    %eax,(%esp)
08548cdb +0x9f:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
08548ce0 +0xa4:  xor    $0x1,%eax
08548ce3 +0xa7:  test   %al,%al
08548ce5 +0xa9:  je     08548cee <+0xb2>
08548ce7 +0xab:  mov    $0x0,%eax
08548cec +0xb0:  jmp    08548d36 <+0xfa>
08548cee +0xb2:  mov    -0x1c(%ebp),%eax
08548cf1 +0xb5:  mov    %eax,-0x18(%ebp)
08548cf4 +0xb8:  mov    -0x20(%ebp),%eax
08548cf7 +0xbb:  mov    0x318(%eax),%eax
08548cfd +0xc1:  mov    %eax,-0x14(%ebp)
08548d00 +0xc4:  mov    -0x20(%ebp),%eax
08548d03 +0xc7:  mov    0x31c(%eax),%eax
08548d09 +0xcd:  mov    %eax,-0x10(%ebp)
08548d0c +0xd0:  mov    -0x18(%ebp),%eax
08548d0f +0xd3:  mov    %eax,(%esp)
08548d12 +0xd6:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
08548d17 +0xdb:  mov    %eax,-0xc(%ebp)
08548d1a +0xde:  mov    -0x14(%ebp),%eax
08548d1d +0xe1:  cmp    -0xc(%ebp),%eax
08548d20 +0xe4:  jg     08548d2a <+0xee>
08548d22 +0xe6:  mov    -0xc(%ebp),%eax
08548d25 +0xe9:  cmp    -0x10(%ebp),%eax
08548d28 +0xec:  jle    08548d31 <+0xf5>
08548d2a +0xee:  mov    $0x0,%eax
08548d2f +0xf3:  jmp    08548d36 <+0xfa>
08548d31 +0xf5:  mov    $0x1,%eax
08548d36 +0xfa:  add    $0x34,%esp
08548d39 +0xfd:  pop    %ebx
08548d3a +0xfe:  pop    %ebp
08548d3b +0xff:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_CheckTargetUsableLv @ 0x8548c3c

/* WongWork::CItemUpgrade::_CheckTargetUsableLv(Inven_Item const&, Inven_Item const&) const */

undefined4 __thiscall
WongWork::CItemUpgrade::_CheckTargetUsableLv
          (CItemUpgrade *this,Inven_Item *param_1,Inven_Item *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  CDataManager *pCVar4;
  CItem *this_00;
  undefined4 uVar5;
  CItem *this_01;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 2);
  pCVar4 = (CDataManager *)G_CDataManager();
  this_00 = (CItem *)CDataManager::find_item(pCVar4,iVar1);
  if (this_00 == (CItem *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar3 = CItem::is_stackable(this_00);
    if (cVar3 == '\x01') {
      if (this_00[800] == (CItem)0x1) {
        iVar1 = *(int *)(param_2 + 2);
        pCVar4 = (CDataManager *)G_CDataManager();
        this_01 = (CItem *)CDataManager::find_item(pCVar4,iVar1);
        if (this_01 == (CItem *)0x0) {
          uVar5 = 0;
        }
        else {
          cVar3 = Inven_Item::isEquipableItemType(param_2);
          if (cVar3 == '\x01') {
            iVar1 = *(int *)(this_00 + 0x318);
            iVar2 = *(int *)(this_00 + 0x31c);
            iVar6 = CItem::getUsableLevel(this_01);
            if ((iVar6 < iVar1) || (iVar2 < iVar6)) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
          }
          else {
            uVar5 = 0;
          }
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}
```
