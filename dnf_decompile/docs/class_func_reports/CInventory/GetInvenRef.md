# GetInvenRef

`_ZNK10CInventory11GetInvenRefEii`

`CInventory::GetInvenRef(int, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fc1de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fc1de  _ZNK10CInventory11GetInvenRefEii
#           CInventory::GetInvenRef(int, int) const
# range [0x084fc1de, 0x084fc2ad]
084fc1de +0x00:  push   %ebp
084fc1df +0x01:  mov    %esp,%ebp
084fc1e1 +0x03:  sub    $0x28,%esp
084fc1e4 +0x06:  mov    0x10(%ebp),%eax
084fc1e7 +0x09:  mov    %eax,0x8(%esp)
084fc1eb +0x0d:  mov    0xc(%ebp),%eax
084fc1ee +0x10:  mov    %eax,0x4(%esp)
084fc1f2 +0x14:  mov    0x8(%ebp),%eax
084fc1f5 +0x17:  mov    %eax,(%esp)
084fc1f8 +0x1a:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
084fc1fd +0x1f:  xor    $0x1,%eax
084fc200 +0x22:  test   %al,%al
084fc202 +0x24:  je     084fc20e <+0x30>
084fc204 +0x26:  mov    $0x0,%eax
084fc209 +0x2b:  jmp    084fc2ac <+0xce>
084fc20e +0x30:  cmpl   $0x5,0xc(%ebp)
084fc212 +0x34:  ja     084fc2a7 <+0xc9>
084fc218 +0x3a:  mov    0xc(%ebp),%eax
084fc21b +0x3d:  shl    $0x2,%eax
084fc21e +0x40:  mov    &data#21b241c6(.rodata)(%eax),%eax
084fc224 +0x46:  jmp    *%eax
084fc226 +0x48:  mov    0x10(%ebp),%eax
084fc229 +0x4b:  imul   $0x3d,%eax,%eax
084fc22c +0x4e:  add    $0x10,%eax
084fc22f +0x51:  add    0x8(%ebp),%eax
084fc232 +0x54:  add    $0xc,%eax
084fc235 +0x57:  jmp    084fc2ac <+0xce>
084fc237 +0x59:  mov    0x8(%ebp),%eax
084fc23a +0x5c:  mov    0x650(%eax),%edx
084fc240 +0x62:  mov    0x10(%ebp),%eax
084fc243 +0x65:  imul   $0x3d,%eax,%eax
084fc246 +0x68:  lea    (%edx,%eax,1),%eax
084fc249 +0x6b:  jmp    084fc2ac <+0xce>
084fc24b +0x6d:  mov    0x8(%ebp),%eax
084fc24e +0x70:  mov    0x654(%eax),%edx
084fc254 +0x76:  mov    0x10(%ebp),%eax
084fc257 +0x79:  imul   $0x3d,%eax,%eax
084fc25a +0x7c:  lea    (%edx,%eax,1),%eax
084fc25d +0x7f:  jmp    084fc2ac <+0xce>
084fc25f +0x81:  mov    0x8(%ebp),%eax
084fc262 +0x84:  mov    0x6e4(%eax),%edx
084fc268 +0x8a:  mov    0x10(%ebp),%eax
084fc26b +0x8d:  imul   $0x3d,%eax,%eax
084fc26e +0x90:  lea    (%edx,%eax,1),%eax
084fc271 +0x93:  jmp    084fc2ac <+0xce>
084fc273 +0x95:  mov    0x8(%ebp),%eax
084fc276 +0x98:  mov    (%eax),%eax
084fc278 +0x9a:  movl   $0x9,0x4(%esp)
084fc280 +0xa2:  mov    %eax,(%esp)
084fc283 +0xa5:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
084fc288 +0xaa:  mov    %eax,-0xc(%ebp)
084fc28b +0xad:  mov    0x10(%ebp),%eax
084fc28e +0xb0:  mov    %eax,0x8(%esp)
084fc292 +0xb4:  movl   $0x5,0x4(%esp)
084fc29a +0xbc:  mov    -0xc(%ebp),%eax
084fc29d +0xbf:  mov    %eax,(%esp)
084fc2a0 +0xc2:  call   08499e90 <_ZNK16CExpandEquipslot12GetInvenRefRE10INVEN_TYPEi>  ; CExpandEquipslot::GetInvenRefR(INVEN_TYPE, int) const
084fc2a5 +0xc7:  jmp    084fc2ac <+0xce>
084fc2a7 +0xc9:  mov    $0x0,%eax
084fc2ac +0xce:  leave
084fc2ad +0xcf:  ret
```

## 反编译 C

```c
// CInventory::GetInvenRef @ 0x84fc1de

/* CInventory::GetInvenRef(int, int) const */

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
      pCVar3 = (CExpandEquipslot *)CUser::GetCharacExpandDataR(*(CUser **)this,9);
      pCVar2 = (CInventory *)CExpandEquipslot::GetInvenRefR(pCVar3,5,param_2);
    }
  }
  else {
    pCVar2 = (CInventory *)0x0;
  }
  return pCVar2;
}
```
