# GetModulus

`_ZNK8TaoCrypt13DSA_PublicKey10GetModulusEv`

`TaoCrypt::DSA_PublicKey::GetModulus() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x087573d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087573d0  _ZNK8TaoCrypt13DSA_PublicKey10GetModulusEv
#           TaoCrypt::DSA_PublicKey::GetModulus() const
# range [0x087573d0, 0x087573d9]
087573d0 +0x00:  push   %ebp
087573d1 +0x01:  mov    %esp,%ebp
087573d3 +0x03:  mov    0x8(%ebp),%eax
087573d6 +0x06:  pop    %ebp
087573d7 +0x07:  ret
087573d8 +0x08:  nop
087573d9 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::GetModulus @ 0x87573d0

/* TaoCrypt::DSA_PublicKey::GetModulus() const */

DSA_PublicKey * __thiscall TaoCrypt::DSA_PublicKey::GetModulus(DSA_PublicKey *this)

{
  return this;
}
```
