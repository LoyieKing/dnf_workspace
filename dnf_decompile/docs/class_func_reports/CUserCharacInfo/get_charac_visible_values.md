# get_charac_visible_values

`_ZN15CUserCharacInfo25get_charac_visible_valuesEv`

`CUserCharacInfo::get_charac_visible_values()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868bde4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868bde4  _ZN15CUserCharacInfo25get_charac_visible_valuesEv
#           CUserCharacInfo::get_charac_visible_values()
# range [0x0868bde4, 0x0868be07]
0868bde4 +0x00:  push   %ebp
0868bde5 +0x01:  mov    %esp,%ebp
0868bde7 +0x03:  mov    0x8(%ebp),%eax
0868bdea +0x06:  mov    0x10(%eax),%eax
0868bded +0x09:  test   %eax,%eax
0868bdef +0x0b:  je     0868be00 <+0x1c>
0868bdf1 +0x0d:  mov    0x8(%ebp),%eax
0868bdf4 +0x10:  mov    0x10(%eax),%eax
0868bdf7 +0x13:  movzbl 0xe40(%eax),%eax
0868bdfe +0x1a:  jmp    0868be05 <+0x21>
0868be00 +0x1c:  mov    $0x0,%eax
0868be05 +0x21:  pop    %ebp
0868be06 +0x22:  ret
0868be07 +0x23:  nop
```

## 反编译 C

```c
// CUserCharacInfo::get_charac_visible_values @ 0x868bde4

/* CUserCharacInfo::get_charac_visible_values() */

undefined1 __thiscall CUserCharacInfo::get_charac_visible_values(CUserCharacInfo *this)

{
  undefined1 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(int *)(this + 0x10) + 0xe40);
  }
  return uVar1;
}
```
