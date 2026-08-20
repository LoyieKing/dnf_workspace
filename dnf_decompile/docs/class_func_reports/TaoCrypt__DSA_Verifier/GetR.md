# GetR

`_ZNK8TaoCrypt12DSA_Verifier4GetREv`

`TaoCrypt::DSA_Verifier::GetR() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Verifier` | `0x08757440` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757440  _ZNK8TaoCrypt12DSA_Verifier4GetREv
#           TaoCrypt::DSA_Verifier::GetR() const
# range [0x08757440, 0x0875744c]
08757440 +0x00:  push   %ebp
08757441 +0x01:  mov    %esp,%ebp
08757443 +0x03:  mov    0x8(%ebp),%eax
08757446 +0x06:  pop    %ebp
08757447 +0x07:  add    $0x4,%eax
0875744a +0x0a:  ret
0875744b +0x0b:  nop
0875744c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_Verifier::GetR @ 0x8757440

/* TaoCrypt::DSA_Verifier::GetR() const */

DSA_Verifier * __thiscall TaoCrypt::DSA_Verifier::GetR(DSA_Verifier *this)

{
  return this + 4;
}
```
