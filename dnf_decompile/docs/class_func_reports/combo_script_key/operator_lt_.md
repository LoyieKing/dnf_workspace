# operator<

`_ZNK16combo_script_keyltERKS_`

`combo_script_key::operator<(combo_script_key const&) const`

| 类 | 地址 |
|---|---|
| `combo_script_key` | `0x08a5a81c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5a81c  _ZNK16combo_script_keyltERKS_
#           combo_script_key::operator<(combo_script_key const&) const
# range [0x08a5a81c, 0x08a5a857]
08a5a81c +0x00:  push   %ebp
08a5a81d +0x01:  mov    %esp,%ebp
08a5a81f +0x03:  mov    0x8(%ebp),%eax
08a5a822 +0x06:  movzbl (%eax),%edx
08a5a825 +0x09:  mov    0xc(%ebp),%eax
08a5a828 +0x0c:  movzbl (%eax),%eax
08a5a82b +0x0f:  cmp    %al,%dl
08a5a82d +0x11:  jne    08a5a845 <+0x29>
08a5a82f +0x13:  mov    0x8(%ebp),%eax
08a5a832 +0x16:  movzwl 0x2(%eax),%edx
08a5a836 +0x1a:  mov    0xc(%ebp),%eax
08a5a839 +0x1d:  movzwl 0x2(%eax),%eax
08a5a83d +0x21:  cmp    %ax,%dx
08a5a840 +0x24:  setl   %al
08a5a843 +0x27:  jmp    08a5a856 <+0x3a>
08a5a845 +0x29:  mov    0x8(%ebp),%eax
08a5a848 +0x2c:  movzbl (%eax),%edx
08a5a84b +0x2f:  mov    0xc(%ebp),%eax
08a5a84e +0x32:  movzbl (%eax),%eax
08a5a851 +0x35:  cmp    %al,%dl
08a5a853 +0x37:  setl   %al
08a5a856 +0x3a:  pop    %ebp
08a5a857 +0x3b:  ret
```

## 反编译 C

```c
// combo_script_key::operator< @ 0x8a5a81c

/* combo_script_key::TEMPNAMEPLACEHOLDERVALUE(combo_script_key const&) const */

ushort __thiscall combo_script_key::operator<(combo_script_key *this,combo_script_key *param_1)

{
  ushort uVar1;
  
  if (*this == *param_1) {
    uVar1 = CONCAT11((char)((ushort)*(short *)(param_1 + 2) >> 8),
                     *(short *)(this + 2) < *(short *)(param_1 + 2));
  }
  else {
    uVar1 = (ushort)((char)*this < (char)*param_1);
  }
  return uVar1;
}
```
