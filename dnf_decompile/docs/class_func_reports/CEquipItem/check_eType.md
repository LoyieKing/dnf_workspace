# check_eType

`_ZNK10CEquipItem11check_eTypeEc`

`CEquipItem::check_eType(char) const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x085108c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085108c6  _ZNK10CEquipItem11check_eTypeEc
#           CEquipItem::check_eType(char) const
# range [0x085108c6, 0x085108fb]
085108c6 +0x00:  push   %ebp
085108c7 +0x01:  mov    %esp,%ebp
085108c9 +0x03:  sub    $0x4,%esp
085108cc +0x06:  mov    0xc(%ebp),%eax
085108cf +0x09:  mov    %al,-0x4(%ebp)
085108d2 +0x0c:  cmpb   $0x15,-0x4(%ebp)
085108d6 +0x10:  jle    085108df <+0x19>
085108d8 +0x12:  mov    $0x0,%eax
085108dd +0x17:  jmp    085108f9 <+0x33>
085108df +0x19:  mov    0x8(%ebp),%eax
085108e2 +0x1c:  mov    0x234(%eax),%eax
085108e8 +0x22:  cmp    -0x4(%ebp),%al
085108eb +0x25:  jne    085108f4 <+0x2e>
085108ed +0x27:  mov    $0x1,%eax
085108f2 +0x2c:  jmp    085108f9 <+0x33>
085108f4 +0x2e:  mov    $0x0,%eax
085108f9 +0x33:  leave
085108fa +0x34:  ret
085108fb +0x35:  nop
```

## 反编译 C

```c
// CEquipItem::check_eType @ 0x85108c6

/* CEquipItem::check_eType(char) const */

undefined4 __thiscall CEquipItem::check_eType(CEquipItem *this,char param_1)

{
  undefined4 uVar1;
  
  if (param_1 < '\x16') {
    if ((char)*(undefined4 *)(this + 0x234) == param_1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
