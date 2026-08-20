# _IsTradable

`_ZN11CTradeSpace11_IsTradableERK10Inven_Item`

`CTradeSpace::_IsTradable(Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x08529dce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08529dce  _ZN11CTradeSpace11_IsTradableERK10Inven_Item
#           CTradeSpace::_IsTradable(Inven_Item const&)
# range [0x08529dce, 0x08529e7d]
08529dce +0x00:  push   %ebp
08529dcf +0x01:  mov    %esp,%ebp
08529dd1 +0x03:  push   %ebx
08529dd2 +0x04:  sub    $0x24,%esp
08529dd5 +0x07:  mov    0xc(%ebp),%eax
08529dd8 +0x0a:  mov    0x2(%eax),%eax
08529ddb +0x0d:  mov    %eax,%ebx
08529ddd +0x0f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08529de2 +0x14:  mov    %ebx,0x4(%esp)
08529de6 +0x18:  mov    %eax,(%esp)
08529de9 +0x1b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08529dee +0x20:  mov    %eax,-0x10(%ebp)
08529df1 +0x23:  cmpl   $0x0,-0x10(%ebp)
08529df5 +0x27:  jne    08529dfe <+0x30>
08529df7 +0x29:  mov    $0x0,%eax
08529dfc +0x2e:  jmp    08529e78 <+0xaa>
08529dfe +0x30:  mov    0xc(%ebp),%eax
08529e01 +0x33:  add    $0x33,%eax
08529e04 +0x36:  mov    %eax,(%esp)
08529e07 +0x39:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
08529e0c +0x3e:  test   %al,%al
08529e0e +0x40:  setne  %al
08529e11 +0x43:  test   %al,%al
08529e13 +0x45:  je     08529e1c <+0x4e>
08529e15 +0x47:  mov    $0x0,%eax
08529e1a +0x4c:  jmp    08529e78 <+0xaa>
08529e1c +0x4e:  mov    -0x10(%ebp),%eax
08529e1f +0x51:  mov    %eax,(%esp)
08529e22 +0x54:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08529e27 +0x59:  mov    %eax,-0xc(%ebp)
08529e2a +0x5c:  mov    -0xc(%ebp),%eax
08529e2d +0x5f:  cmp    $0x5,%eax
08529e30 +0x62:  ja     08529e73 <+0xa5>
08529e32 +0x64:  mov    $0x1,%edx
08529e37 +0x69:  mov    %edx,%ebx
08529e39 +0x6b:  mov    %eax,%ecx
08529e3b +0x6d:  shl    %cl,%ebx
08529e3d +0x6f:  mov    %ebx,%eax
08529e3f +0x71:  mov    %eax,%edx
08529e41 +0x73:  and    $0x36,%edx
08529e44 +0x76:  test   %edx,%edx
08529e46 +0x78:  jne    08529e58 <+0x8a>
08529e48 +0x7a:  mov    %eax,%edx
08529e4a +0x7c:  and    $0x8,%edx
08529e4d +0x7f:  test   %edx,%edx
08529e4f +0x81:  jne    08529e5f <+0x91>
08529e51 +0x83:  and    $0x1,%eax
08529e54 +0x86:  test   %eax,%eax
08529e56 +0x88:  jmp    08529e73 <+0xa5>
08529e58 +0x8a:  mov    $0x0,%eax
08529e5d +0x8f:  jmp    08529e78 <+0xaa>
08529e5f +0x91:  mov    0xc(%ebp),%eax
08529e62 +0x94:  movzbl (%eax),%eax
08529e65 +0x97:  xor    $0x1,%eax
08529e68 +0x9a:  test   %al,%al
08529e6a +0x9c:  je     08529e73 <+0xa5>
08529e6c +0x9e:  mov    $0x0,%eax
08529e71 +0xa3:  jmp    08529e78 <+0xaa>
08529e73 +0xa5:  mov    $0x1,%eax
08529e78 +0xaa:  add    $0x24,%esp
08529e7b +0xad:  pop    %ebx
08529e7c +0xae:  pop    %ebp
08529e7d +0xaf:  ret
```

## 反编译 C

```c
// CTradeSpace::_IsTradable @ 0x8529dce

/* CTradeSpace::_IsTradable(Inven_Item const&) */

undefined4 __thiscall CTradeSpace::_IsTradable(CTradeSpace *this,Inven_Item *param_1)

{
  int iVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar1);
  if (this_01 == (CItem *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)(param_1 + 0x33));
    if (cVar2 == '\0') {
      uVar4 = CItem::GetAttachType(this_01);
      if (uVar4 < 6) {
        uVar4 = 1 << ((byte)uVar4 & 0x1f);
        if ((uVar4 & 0x36) != 0) {
          return 0;
        }
        if (((uVar4 & 8) != 0) && (*param_1 != (Inven_Item)0x1)) {
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
