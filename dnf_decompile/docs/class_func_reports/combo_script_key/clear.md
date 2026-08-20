# clear

`_ZN16combo_script_key5clearEv`

`combo_script_key::clear()`

| 类 | 地址 |
|---|---|
| `combo_script_key` | `0x08a5a858` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5a858  _ZN16combo_script_key5clearEv
#           combo_script_key::clear()
# range [0x08a5a858, 0x08a5a86b]
08a5a858 +0x00:  push   %ebp
08a5a859 +0x01:  mov    %esp,%ebp
08a5a85b +0x03:  mov    0x8(%ebp),%eax
08a5a85e +0x06:  movb   $0xb,(%eax)
08a5a861 +0x09:  mov    0x8(%ebp),%eax
08a5a864 +0x0c:  movw   $0x0,0x2(%eax)
08a5a86a +0x12:  pop    %ebp
08a5a86b +0x13:  ret
```

## 反编译 C

```c
// combo_script_key::clear @ 0x8a5a858

/* combo_script_key::clear() */

void __thiscall combo_script_key::clear(combo_script_key *this)

{
  *this = (combo_script_key)0xb;
  *(undefined2 *)(this + 2) = 0;
  return;
}
```
