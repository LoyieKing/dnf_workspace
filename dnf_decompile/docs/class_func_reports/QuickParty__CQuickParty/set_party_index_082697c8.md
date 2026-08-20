# set_party_index

`_ZN10QuickParty11CQuickParty15set_party_indexEii`

`QuickParty::CQuickParty::set_party_index(int, int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x082697c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082697c8  _ZN10QuickParty11CQuickParty15set_party_indexEii
#           QuickParty::CQuickParty::set_party_index(int, int)
# range [0x082697c8, 0x082697eb]
082697c8 +0x00:  push   %ebp
082697c9 +0x01:  mov    %esp,%ebp
082697cb +0x03:  cmpl   $0x3,0xc(%ebp)
082697cf +0x07:  jg     082697e5 <+0x1d>
082697d1 +0x09:  cmpl   $0x0,0xc(%ebp)
082697d5 +0x0d:  js     082697e8 <+0x20>
082697d7 +0x0f:  mov    0xc(%ebp),%edx
082697da +0x12:  mov    0x8(%ebp),%eax
082697dd +0x15:  mov    0x10(%ebp),%ecx
082697e0 +0x18:  mov    %ecx,(%eax,%edx,4)
082697e3 +0x1b:  jmp    082697e9 <+0x21>
082697e5 +0x1d:  nop
082697e6 +0x1e:  jmp    082697e9 <+0x21>
082697e8 +0x20:  nop
082697e9 +0x21:  pop    %ebp
082697ea +0x22:  ret
082697eb +0x23:  nop
```

## 反编译 C

```c
// QuickParty::CQuickParty::set_party_index @ 0x82697c8

/* QuickParty::CQuickParty::set_party_index(int, int) */

void __thiscall QuickParty::CQuickParty::set_party_index(CQuickParty *this,int param_1,int param_2)

{
  if ((param_1 < 4) && (-1 < param_1)) {
    *(int *)(this + param_1 * 4) = param_2;
  }
  return;
}
```
