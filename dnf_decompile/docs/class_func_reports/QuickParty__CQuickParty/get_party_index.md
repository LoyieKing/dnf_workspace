# get_party_index

`_ZN10QuickParty11CQuickParty15get_party_indexEi`

`QuickParty::CQuickParty::get_party_index(int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x082697ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082697ec  _ZN10QuickParty11CQuickParty15get_party_indexEi
#           QuickParty::CQuickParty::get_party_index(int)
# range [0x082697ec, 0x0826980d]
082697ec +0x00:  push   %ebp
082697ed +0x01:  mov    %esp,%ebp
082697ef +0x03:  cmpl   $0x3,0xc(%ebp)
082697f3 +0x07:  jg     082697fb <+0xf>
082697f5 +0x09:  cmpl   $0x0,0xc(%ebp)
082697f9 +0x0d:  jns    08269802 <+0x16>
082697fb +0x0f:  mov    $0xffffffff,%eax
08269800 +0x14:  jmp    0826980b <+0x1f>
08269802 +0x16:  mov    0xc(%ebp),%edx
08269805 +0x19:  mov    0x8(%ebp),%eax
08269808 +0x1c:  mov    (%eax,%edx,4),%eax
0826980b +0x1f:  pop    %ebp
0826980c +0x20:  ret
0826980d +0x21:  nop
```

## 反编译 C

```c
// QuickParty::CQuickParty::get_party_index @ 0x82697ec

/* QuickParty::CQuickParty::get_party_index(int) */

undefined4 __thiscall QuickParty::CQuickParty::get_party_index(CQuickParty *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 4) && (-1 < param_1)) {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
```
