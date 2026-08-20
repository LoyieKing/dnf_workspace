# _DoProcUpgrade

`_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE`

`WongWork::CItemUpgrade_Separate::_DoProcUpgrade(CUser*, Inven_Item*, WongWork::STUpgradeInfo const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade_Separate` | `0x0811e468` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811e468  _ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE
#           WongWork::CItemUpgrade_Separate::_DoProcUpgrade(CUser*, Inven_Item*, WongWork::STUpgradeInfo const*)
# range [0x0811e468, 0x0811e539]
0811e468 +0x00:  push   %ebp
0811e469 +0x01:  mov    %esp,%ebp
0811e46b +0x03:  push   %ebx
0811e46c +0x04:  sub    $0x24,%esp
0811e46f +0x07:  mov    0xc(%ebp),%eax
0811e472 +0x0a:  mov    %eax,(%esp)
0811e475 +0x0d:  call   0811edee <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xe9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xe9
0811e47a +0x12:  test   %al,%al
0811e47c +0x14:  je     0811e4c5 <+0x5d>
0811e47e +0x16:  mov    0xc(%ebp),%eax
0811e481 +0x19:  mov    %eax,(%esp)
0811e484 +0x1c:  call   0811eda6 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xa1>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xa1
0811e489 +0x21:  cmp    $0x1,%al
0811e48b +0x23:  sete   %al
0811e48e +0x26:  test   %al,%al
0811e490 +0x28:  je     0811e4aa <+0x42>
0811e492 +0x2a:  mov    0x10(%ebp),%eax
0811e495 +0x2d:  add    $0x33,%eax
0811e498 +0x30:  mov    %eax,(%esp)
0811e49b +0x33:  call   0811ed32 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x2d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x2d
0811e4a0 +0x38:  mov    $0x1,%eax
0811e4a5 +0x3d:  jmp    0811e534 <+0xcc>
0811e4aa +0x42:  mov    0xc(%ebp),%eax
0811e4ad +0x45:  mov    %eax,(%esp)
0811e4b0 +0x48:  call   0811edca <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xc5>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xc5
0811e4b5 +0x4d:  cmp    $0x1,%al
0811e4b7 +0x4f:  sete   %al
0811e4ba +0x52:  test   %al,%al
0811e4bc +0x54:  je     0811e4c5 <+0x5d>
0811e4be +0x56:  mov    $0x0,%eax
0811e4c3 +0x5b:  jmp    0811e534 <+0xcc>
0811e4c5 +0x5d:  mov    0x14(%ebp),%eax
0811e4c8 +0x60:  mov    0x4(%eax),%eax
0811e4cb +0x63:  mov    %eax,-0xc(%ebp)
0811e4ce +0x66:  cmpl   $0x0,-0xc(%ebp)
0811e4d2 +0x6a:  je     0811e511 <+0xa9>
0811e4d4 +0x6c:  mov    -0xc(%ebp),%edx
0811e4d7 +0x6f:  mov    %edx,%eax
0811e4d9 +0x71:  shl    $0x2,%eax
0811e4dc +0x74:  add    %edx,%eax
0811e4de +0x76:  add    %eax,%eax
0811e4e0 +0x78:  mov    %eax,%ebx
0811e4e2 +0x7a:  mov    0x8(%ebp),%eax
0811e4e5 +0x7d:  mov    0x190(%eax),%eax
0811e4eb +0x83:  mov    %eax,-0x10(%ebp)
0811e4ee +0x86:  mov    0x8(%ebp),%eax
0811e4f1 +0x89:  mov    0x18c(%eax),%eax
0811e4f7 +0x8f:  lea    -0x10(%ebp),%edx
0811e4fa +0x92:  mov    %edx,0x4(%esp)
0811e4fe +0x96:  mov    %eax,(%esp)
0811e501 +0x99:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0811e506 +0x9e:  cmp    %eax,%ebx
0811e508 +0xa0:  jae    0811e511 <+0xa9>
0811e50a +0xa2:  mov    $0x1,%eax
0811e50f +0xa7:  jmp    0811e516 <+0xae>
0811e511 +0xa9:  mov    $0x0,%eax
0811e516 +0xae:  test   %al,%al
0811e518 +0xb0:  je     0811e521 <+0xb9>
0811e51a +0xb2:  mov    $0x0,%eax
0811e51f +0xb7:  jmp    0811e534 <+0xcc>
0811e521 +0xb9:  mov    0x10(%ebp),%eax
0811e524 +0xbc:  add    $0x33,%eax
0811e527 +0xbf:  mov    %eax,(%esp)
0811e52a +0xc2:  call   0811ed32 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x2d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x2d
0811e52f +0xc7:  mov    $0x1,%eax
0811e534 +0xcc:  add    $0x24,%esp
0811e537 +0xcf:  pop    %ebx
0811e538 +0xd0:  pop    %ebp
0811e539 +0xd1:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade_Separate::_DoProcUpgrade @ 0x811e468

/* WongWork::CItemUpgrade_Separate::_DoProcUpgrade(CUser*, Inven_Item*, WongWork::STUpgradeInfo
   const*) */

bool __thiscall
WongWork::CItemUpgrade_Separate::_DoProcUpgrade
          (CItemUpgrade_Separate *this,CUser *param_1,Inven_Item *param_2,STUpgradeInfo *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulong local_14;
  int local_10;
  
  cVar3 = CUser::IsGameMasterMode(param_1);
  if (cVar3 != '\0') {
    cVar3 = CUserCharacInfo::getUpgradeSeparateTrueFlag((CUserCharacInfo *)param_1);
    if (cVar3 == '\x01') {
      UpgradeSeparateInfo::IncUpgradeSeparate((UpgradeSeparateInfo *)(param_2 + 0x33));
      return true;
    }
    cVar3 = CUserCharacInfo::getUpgradeSeparateFlaseFlag((CUserCharacInfo *)param_1);
    if (cVar3 == '\x01') {
      return false;
    }
  }
  local_10 = *(int *)(param_3 + 4);
  if (local_10 != 0) {
    uVar1 = local_10 * 10;
    local_14 = *(ulong *)(this + 400);
    uVar4 = CMTRand::randInt(*(CMTRand **)(this + 0x18c),&local_14);
    if (uVar1 < uVar4) {
      bVar2 = true;
      goto LAB_0811e516;
    }
  }
  bVar2 = false;
LAB_0811e516:
  if (!bVar2) {
    UpgradeSeparateInfo::IncUpgradeSeparate((UpgradeSeparateInfo *)(param_2 + 0x33));
  }
  return !bVar2;
}
```
