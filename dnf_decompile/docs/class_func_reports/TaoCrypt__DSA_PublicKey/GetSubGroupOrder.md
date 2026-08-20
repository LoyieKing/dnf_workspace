# GetSubGroupOrder

`_ZNK8TaoCrypt13DSA_PublicKey16GetSubGroupOrderEv`

`TaoCrypt::DSA_PublicKey::GetSubGroupOrder() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x087573e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087573e0  _ZNK8TaoCrypt13DSA_PublicKey16GetSubGroupOrderEv
#           TaoCrypt::DSA_PublicKey::GetSubGroupOrder() const
# range [0x087573e0, 0x087573ec]
087573e0 +0x00:  push   %ebp
087573e1 +0x01:  mov    %esp,%ebp
087573e3 +0x03:  mov    0x8(%ebp),%eax
087573e6 +0x06:  pop    %ebp
087573e7 +0x07:  add    $0x10,%eax
087573ea +0x0a:  ret
087573eb +0x0b:  nop
087573ec +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::GetSubGroupOrder @ 0x87573e0

/* TaoCrypt::DSA_PublicKey::GetSubGroupOrder() const */

DSA_PublicKey * __thiscall TaoCrypt::DSA_PublicKey::GetSubGroupOrder(DSA_PublicKey *this)

{
  return this + 0x10;
}
```
