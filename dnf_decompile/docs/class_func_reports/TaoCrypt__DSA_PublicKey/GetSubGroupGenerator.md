# GetSubGroupGenerator

`_ZNK8TaoCrypt13DSA_PublicKey20GetSubGroupGeneratorEv`

`TaoCrypt::DSA_PublicKey::GetSubGroupGenerator() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x087573f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087573f0  _ZNK8TaoCrypt13DSA_PublicKey20GetSubGroupGeneratorEv
#           TaoCrypt::DSA_PublicKey::GetSubGroupGenerator() const
# range [0x087573f0, 0x087573fc]
087573f0 +0x00:  push   %ebp
087573f1 +0x01:  mov    %esp,%ebp
087573f3 +0x03:  mov    0x8(%ebp),%eax
087573f6 +0x06:  pop    %ebp
087573f7 +0x07:  add    $0x20,%eax
087573fa +0x0a:  ret
087573fb +0x0b:  nop
087573fc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::GetSubGroupGenerator @ 0x87573f0

/* TaoCrypt::DSA_PublicKey::GetSubGroupGenerator() const */

DSA_PublicKey * __thiscall TaoCrypt::DSA_PublicKey::GetSubGroupGenerator(DSA_PublicKey *this)

{
  return this + 0x20;
}
```
