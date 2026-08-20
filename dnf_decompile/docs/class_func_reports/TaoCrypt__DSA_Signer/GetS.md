# GetS

`_ZNK8TaoCrypt10DSA_Signer4GetSEv`

`TaoCrypt::DSA_Signer::GetS() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Signer` | `0x08757430` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757430  _ZNK8TaoCrypt10DSA_Signer4GetSEv
#           TaoCrypt::DSA_Signer::GetS() const
# range [0x08757430, 0x0875743c]
08757430 +0x00:  push   %ebp
08757431 +0x01:  mov    %esp,%ebp
08757433 +0x03:  mov    0x8(%ebp),%eax
08757436 +0x06:  pop    %ebp
08757437 +0x07:  add    $0x14,%eax
0875743a +0x0a:  ret
0875743b +0x0b:  nop
0875743c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_Signer::GetS @ 0x8757430

/* TaoCrypt::DSA_Signer::GetS() const */

DSA_Signer * __thiscall TaoCrypt::DSA_Signer::GetS(DSA_Signer *this)

{
  return this + 0x14;
}
```
