# FindItemLock

`_ZNK16CExpandEquipslot12FindItemLockEhR14ENUM_ITEMSPACERi`

`CExpandEquipslot::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x08499f0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08499f0a  _ZNK16CExpandEquipslot12FindItemLockEhR14ENUM_ITEMSPACERi
#           CExpandEquipslot::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const
# range [0x08499f0a, 0x08499f83]
08499f0a +0x00:  push   %ebp
08499f0b +0x01:  mov    %esp,%ebp
08499f0d +0x03:  sub    $0x28,%esp
08499f10 +0x06:  mov    0xc(%ebp),%eax
08499f13 +0x09:  mov    %al,-0xc(%ebp)
08499f16 +0x0c:  mov    0x14(%ebp),%eax
08499f19 +0x0f:  movl   $0x0,(%eax)
08499f1f +0x15:  jmp    08499f6e <+0x64>
08499f21 +0x17:  mov    0x14(%ebp),%eax
08499f24 +0x1a:  mov    (%eax),%eax
08499f26 +0x1c:  imul   $0x3d,%eax,%eax
08499f29 +0x1f:  add    $0x10,%eax
08499f2c +0x22:  add    0x8(%ebp),%eax
08499f2f +0x25:  add    $0x6,%eax
08499f32 +0x28:  mov    %eax,(%esp)
08499f35 +0x2b:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08499f3a +0x30:  cmp    -0xc(%ebp),%al
08499f3d +0x33:  sete   %al
08499f40 +0x36:  test   %al,%al
08499f42 +0x38:  je     08499f61 <+0x57>
08499f44 +0x3a:  mov    0x14(%ebp),%eax
08499f47 +0x3d:  mov    (%eax),%eax
08499f49 +0x3f:  lea    0xa(%eax),%edx
08499f4c +0x42:  mov    0x14(%ebp),%eax
08499f4f +0x45:  mov    %edx,(%eax)
08499f51 +0x47:  mov    0x10(%ebp),%eax
08499f54 +0x4a:  movl   $0x12,(%eax)
08499f5a +0x50:  mov    $0x1,%eax
08499f5f +0x55:  jmp    08499f82 <+0x78>
08499f61 +0x57:  mov    0x14(%ebp),%eax
08499f64 +0x5a:  mov    (%eax),%eax
08499f66 +0x5c:  lea    0x1(%eax),%edx
08499f69 +0x5f:  mov    0x14(%ebp),%eax
08499f6c +0x62:  mov    %edx,(%eax)
08499f6e +0x64:  mov    0x14(%ebp),%eax
08499f71 +0x67:  mov    (%eax),%eax
08499f73 +0x69:  cmp    $0xb,%eax
08499f76 +0x6c:  setle  %al
08499f79 +0x6f:  test   %al,%al
08499f7b +0x71:  jne    08499f21 <+0x17>
08499f7d +0x73:  mov    $0x0,%eax
08499f82 +0x78:  leave
08499f83 +0x79:  ret
```

## 反编译 C

```c
// CExpandEquipslot::FindItemLock @ 0x8499f0a

/* CExpandEquipslot::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const */

undefined4 __thiscall
CExpandEquipslot::FindItemLock
          (CExpandEquipslot *this,uchar param_1,ENUM_ITEMSPACE *param_2,int *param_3)

{
  uchar uVar1;
  
  *param_3 = 0;
  while( true ) {
    if (0xb < *param_3) {
      return 0;
    }
    uVar1 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(this + *param_3 * 0x3d + 0x16));
    if (uVar1 == param_1) break;
    *param_3 = *param_3 + 1;
  }
  *param_3 = *param_3 + 10;
  *(undefined4 *)param_2 = 0x12;
  return 1;
}
```
