# GetInvenRef

`_ZN10CInventory11GetInvenRefEii`

`CInventory::GetInvenRef(int, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fc2ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fc2ae  _ZN10CInventory11GetInvenRefEii
#           CInventory::GetInvenRef(int, int)
# range [0x084fc2ae, 0x084fc37d]
084fc2ae +0x00:  push   %ebp
084fc2af +0x01:  mov    %esp,%ebp
084fc2b1 +0x03:  sub    $0x28,%esp
084fc2b4 +0x06:  mov    0x10(%ebp),%eax
084fc2b7 +0x09:  mov    %eax,0x8(%esp)
084fc2bb +0x0d:  mov    0xc(%ebp),%eax
084fc2be +0x10:  mov    %eax,0x4(%esp)
084fc2c2 +0x14:  mov    0x8(%ebp),%eax
084fc2c5 +0x17:  mov    %eax,(%esp)
084fc2c8 +0x1a:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
084fc2cd +0x1f:  xor    $0x1,%eax
084fc2d0 +0x22:  test   %al,%al
084fc2d2 +0x24:  je     084fc2de <+0x30>
084fc2d4 +0x26:  mov    $0x0,%eax
084fc2d9 +0x2b:  jmp    084fc37c <+0xce>
084fc2de +0x30:  cmpl   $0x5,0xc(%ebp)
084fc2e2 +0x34:  ja     084fc377 <+0xc9>
084fc2e8 +0x3a:  mov    0xc(%ebp),%eax
084fc2eb +0x3d:  shl    $0x2,%eax
084fc2ee +0x40:  mov    &data#01f33549(.rodata)(%eax),%eax
084fc2f4 +0x46:  jmp    *%eax
084fc2f6 +0x48:  mov    0x10(%ebp),%eax
084fc2f9 +0x4b:  imul   $0x3d,%eax,%eax
084fc2fc +0x4e:  add    $0x10,%eax
084fc2ff +0x51:  add    0x8(%ebp),%eax
084fc302 +0x54:  add    $0xc,%eax
084fc305 +0x57:  jmp    084fc37c <+0xce>
084fc307 +0x59:  mov    0x8(%ebp),%eax
084fc30a +0x5c:  mov    0x650(%eax),%edx
084fc310 +0x62:  mov    0x10(%ebp),%eax
084fc313 +0x65:  imul   $0x3d,%eax,%eax
084fc316 +0x68:  lea    (%edx,%eax,1),%eax
084fc319 +0x6b:  jmp    084fc37c <+0xce>
084fc31b +0x6d:  mov    0x8(%ebp),%eax
084fc31e +0x70:  mov    0x654(%eax),%edx
084fc324 +0x76:  mov    0x10(%ebp),%eax
084fc327 +0x79:  imul   $0x3d,%eax,%eax
084fc32a +0x7c:  lea    (%edx,%eax,1),%eax
084fc32d +0x7f:  jmp    084fc37c <+0xce>
084fc32f +0x81:  mov    0x8(%ebp),%eax
084fc332 +0x84:  mov    0x6e4(%eax),%edx
084fc338 +0x8a:  mov    0x10(%ebp),%eax
084fc33b +0x8d:  imul   $0x3d,%eax,%eax
084fc33e +0x90:  lea    (%edx,%eax,1),%eax
084fc341 +0x93:  jmp    084fc37c <+0xce>
084fc343 +0x95:  mov    0x8(%ebp),%eax
084fc346 +0x98:  mov    (%eax),%eax
084fc348 +0x9a:  movl   $0x9,0x4(%esp)
084fc350 +0xa2:  mov    %eax,(%esp)
084fc353 +0xa5:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084fc358 +0xaa:  mov    %eax,-0xc(%ebp)
084fc35b +0xad:  mov    0x10(%ebp),%eax
084fc35e +0xb0:  mov    %eax,0x8(%esp)
084fc362 +0xb4:  movl   $0x5,0x4(%esp)
084fc36a +0xbc:  mov    -0xc(%ebp),%eax
084fc36d +0xbf:  mov    %eax,(%esp)
084fc370 +0xc2:  call   08499ec6 <_ZN16CExpandEquipslot12GetInvenRefWE10INVEN_TYPEi>  ; CExpandEquipslot::GetInvenRefW(INVEN_TYPE, int)
084fc375 +0xc7:  jmp    084fc37c <+0xce>
084fc377 +0xc9:  mov    $0x0,%eax
084fc37c +0xce:  leave
084fc37d +0xcf:  ret
```

## 反编译 C

```c
// CInventory::GetInvenRef @ 0x84fc2ae

/* CInventory::GetInvenRef(int, int) */

CInventory * __thiscall CInventory::GetInvenRef(CInventory *this,int param_1,int param_2)

{
  char cVar1;
  CInventory *pCVar2;
  CExpandEquipslot *pCVar3;
  
  cVar1 = CheckValidSlot(this,param_1,param_2);
  if (cVar1 == '\x01') {
    switch(param_1) {
    case 0:
      pCVar2 = this + param_2 * 0x3d + 0x1c;
      break;
    case 1:
      pCVar2 = (CInventory *)(*(int *)(this + 0x650) + param_2 * 0x3d);
      break;
    case 2:
      pCVar2 = (CInventory *)(*(int *)(this + 0x654) + param_2 * 0x3d);
      break;
    case 3:
      pCVar2 = (CInventory *)(*(int *)(this + 0x6e4) + param_2 * 0x3d);
      break;
    default:
      pCVar2 = (CInventory *)0x0;
      break;
    case 5:
      pCVar3 = (CExpandEquipslot *)CUser::GetCharacExpandData(*(CUser **)this,9);
      pCVar2 = (CInventory *)CExpandEquipslot::GetInvenRefW(pCVar3,5,param_2);
    }
  }
  else {
    pCVar2 = (CInventory *)0x0;
  }
  return pCVar2;
}
```
