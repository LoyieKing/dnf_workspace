# GetInvenStart

`_ZNK10CInventory13GetInvenStartEi`

`CInventory::GetInvenStart(int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb0a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb0a0  _ZNK10CInventory13GetInvenStartEi
#           CInventory::GetInvenStart(int) const
# range [0x084fb0a0, 0x084fb119]
084fb0a0 +0x00:  push   %ebp
084fb0a1 +0x01:  mov    %esp,%ebp
084fb0a3 +0x03:  sub    $0x28,%esp
084fb0a6 +0x06:  cmpl   $0x5,0xc(%ebp)
084fb0aa +0x0a:  ja     084fb112 <+0x72>
084fb0ac +0x0c:  mov    0xc(%ebp),%eax
084fb0af +0x0f:  shl    $0x2,%eax
084fb0b2 +0x12:  mov    &data#ecd565f3(.rodata)(%eax),%eax
084fb0b8 +0x18:  jmp    *%eax
084fb0ba +0x1a:  mov    0x8(%ebp),%eax
084fb0bd +0x1d:  add    $0x27e,%eax
084fb0c2 +0x22:  jmp    084fb117 <+0x77>
084fb0c4 +0x24:  mov    0x8(%ebp),%eax
084fb0c7 +0x27:  mov    0x650(%eax),%eax
084fb0cd +0x2d:  jmp    084fb117 <+0x77>
084fb0cf +0x2f:  mov    0x8(%ebp),%eax
084fb0d2 +0x32:  mov    0x654(%eax),%eax
084fb0d8 +0x38:  jmp    084fb117 <+0x77>
084fb0da +0x3a:  mov    0x8(%ebp),%eax
084fb0dd +0x3d:  mov    0x6e4(%eax),%eax
084fb0e3 +0x43:  jmp    084fb117 <+0x77>
084fb0e5 +0x45:  mov    0x8(%ebp),%eax
084fb0e8 +0x48:  mov    (%eax),%eax
084fb0ea +0x4a:  movl   $0x9,0x4(%esp)
084fb0f2 +0x52:  mov    %eax,(%esp)
084fb0f5 +0x55:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084fb0fa +0x5a:  mov    %eax,-0xc(%ebp)
084fb0fd +0x5d:  movl   $0x1,0x4(%esp)
084fb105 +0x65:  mov    -0xc(%ebp),%eax
084fb108 +0x68:  mov    %eax,(%esp)
084fb10b +0x6b:  call   084993e2 <_ZN16CExpandEquipslot19getExpandEquipslotWE14ENUM_EQUIPSLOT>  ; CExpandEquipslot::getExpandEquipslotW(ENUM_EQUIPSLOT)
084fb110 +0x70:  jmp    084fb117 <+0x77>
084fb112 +0x72:  mov    $0x0,%eax
084fb117 +0x77:  leave
084fb118 +0x78:  ret
084fb119 +0x79:  nop
```

## 反编译 C

```c
// CInventory::GetInvenStart @ 0x84fb0a0

/* CInventory::GetInvenStart(int) const */

CInventory * __thiscall CInventory::GetInvenStart(CInventory *this,int param_1)

{
  CExpandEquipslot *pCVar1;
  CInventory *pCVar2;
  
  switch(param_1) {
  case 0:
    pCVar2 = this + 0x27e;
    break;
  case 1:
    pCVar2 = *(CInventory **)(this + 0x650);
    break;
  case 2:
    pCVar2 = *(CInventory **)(this + 0x654);
    break;
  case 3:
    pCVar2 = *(CInventory **)(this + 0x6e4);
    break;
  default:
    pCVar2 = (CInventory *)0x0;
    break;
  case 5:
    pCVar1 = (CExpandEquipslot *)CUser::GetCharacExpandData(*(CUser **)this,9);
    pCVar2 = (CInventory *)CExpandEquipslot::getExpandEquipslotW(pCVar1,1);
  }
  return pCVar2;
}
```
