# GetPrivatePart

`_ZNK8TaoCrypt14DSA_PrivateKey14GetPrivatePartEv`

`TaoCrypt::DSA_PrivateKey::GetPrivatePart() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PrivateKey` | `0x08757410` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757410  _ZNK8TaoCrypt14DSA_PrivateKey14GetPrivatePartEv
#           TaoCrypt::DSA_PrivateKey::GetPrivatePart() const
# range [0x08757410, 0x0875741c]
08757410 +0x00:  push   %ebp
08757411 +0x01:  mov    %esp,%ebp
08757413 +0x03:  mov    0x8(%ebp),%eax
08757416 +0x06:  pop    %ebp
08757417 +0x07:  add    $0x40,%eax
0875741a +0x0a:  ret
0875741b +0x0b:  nop
0875741c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PrivateKey::GetPrivatePart @ 0x8757410

/* TaoCrypt::DSA_PrivateKey::GetPrivatePart() const */

DSA_PrivateKey * __thiscall TaoCrypt::DSA_PrivateKey::GetPrivatePart(DSA_PrivateKey *this)

{
  return this + 0x40;
}
```
