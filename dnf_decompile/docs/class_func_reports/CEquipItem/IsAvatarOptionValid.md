# IsAvatarOptionValid

`_ZNK10CEquipItem19IsAvatarOptionValidEc`

`CEquipItem::IsAvatarOptionValid(char) const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x0851353e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0851353e  _ZNK10CEquipItem19IsAvatarOptionValidEc
#           CEquipItem::IsAvatarOptionValid(char) const
# range [0x0851353e, 0x0851357f]
0851353e +0x00:  push   %ebp
0851353f +0x01:  mov    %esp,%ebp
08513541 +0x03:  sub    $0x28,%esp
08513544 +0x06:  mov    0xc(%ebp),%eax
08513547 +0x09:  mov    %al,-0xc(%ebp)
0851354a +0x0c:  cmpb   $0x0,-0xc(%ebp)
0851354e +0x10:  jns    08513557 <+0x19>
08513550 +0x12:  mov    $0x0,%eax
08513555 +0x17:  jmp    0851357d <+0x3f>
08513557 +0x19:  mov    0x8(%ebp),%eax
0851355a +0x1c:  add    $0x1f0,%eax
0851355f +0x21:  mov    %eax,(%esp)
08513562 +0x24:  call   08180828 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x4bf>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x4bf
08513567 +0x29:  cmp    -0xc(%ebp),%al
0851356a +0x2c:  setle  %al
0851356d +0x2f:  test   %al,%al
0851356f +0x31:  je     08513578 <+0x3a>
08513571 +0x33:  mov    $0x0,%eax
08513576 +0x38:  jmp    0851357d <+0x3f>
08513578 +0x3a:  mov    $0x1,%eax
0851357d +0x3f:  leave
0851357e +0x40:  ret
0851357f +0x41:  nop
```

## 反编译 C

```c
// CEquipItem::IsAvatarOptionValid @ 0x851353e

/* CEquipItem::IsAvatarOptionValid(char) const */

undefined4 __thiscall CEquipItem::IsAvatarOptionValid(CEquipItem *this,char param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 < '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::size
                      ((vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>> *)
                       (this + 0x1f0));
    if (param_1 < cVar1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
