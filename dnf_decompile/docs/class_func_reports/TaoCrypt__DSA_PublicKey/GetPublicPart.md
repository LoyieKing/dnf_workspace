# GetPublicPart

`_ZNK8TaoCrypt13DSA_PublicKey13GetPublicPartEv`

`TaoCrypt::DSA_PublicKey::GetPublicPart() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x08757400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757400  _ZNK8TaoCrypt13DSA_PublicKey13GetPublicPartEv
#           TaoCrypt::DSA_PublicKey::GetPublicPart() const
# range [0x08757400, 0x0875740c]
08757400 +0x00:  push   %ebp
08757401 +0x01:  mov    %esp,%ebp
08757403 +0x03:  mov    0x8(%ebp),%eax
08757406 +0x06:  pop    %ebp
08757407 +0x07:  add    $0x30,%eax
0875740a +0x0a:  ret
0875740b +0x0b:  nop
0875740c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::GetPublicPart @ 0x8757400

/* TaoCrypt::DSA_PublicKey::GetPublicPart() const */

DSA_PublicKey * __thiscall TaoCrypt::DSA_PublicKey::GetPublicPart(DSA_PublicKey *this)

{
  return this + 0x30;
}
```
