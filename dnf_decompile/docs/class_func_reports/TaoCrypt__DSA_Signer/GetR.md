# GetR

`_ZNK8TaoCrypt10DSA_Signer4GetREv`

`TaoCrypt::DSA_Signer::GetR() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Signer` | `0x08757420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757420  _ZNK8TaoCrypt10DSA_Signer4GetREv
#           TaoCrypt::DSA_Signer::GetR() const
# range [0x08757420, 0x0875742c]
08757420 +0x00:  push   %ebp
08757421 +0x01:  mov    %esp,%ebp
08757423 +0x03:  mov    0x8(%ebp),%eax
08757426 +0x06:  pop    %ebp
08757427 +0x07:  add    $0x4,%eax
0875742a +0x0a:  ret
0875742b +0x0b:  nop
0875742c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_Signer::GetR @ 0x8757420

/* TaoCrypt::DSA_Signer::GetR() const */

DSA_Signer * __thiscall TaoCrypt::DSA_Signer::GetR(DSA_Signer *this)

{
  return this + 4;
}
```
