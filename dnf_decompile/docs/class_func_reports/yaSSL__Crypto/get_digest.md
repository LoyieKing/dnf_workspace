# get_digest

`_ZNK5yaSSL6Crypto10get_digestEv`

`yaSSL::Crypto::get_digest() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e750  _ZNK5yaSSL6Crypto10get_digestEv
#           yaSSL::Crypto::get_digest() const
# range [0x0874e750, 0x0874e75a]
0874e750 +0x00:  push   %ebp
0874e751 +0x01:  mov    %esp,%ebp
0874e753 +0x03:  mov    0x8(%ebp),%eax
0874e756 +0x06:  pop    %ebp
0874e757 +0x07:  mov    (%eax),%eax
0874e759 +0x09:  ret
0874e75a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Crypto::get_digest @ 0x874e750

/* yaSSL::Crypto::get_digest() const */

undefined4 __thiscall yaSSL::Crypto::get_digest(Crypto *this)

{
  return *(undefined4 *)this;
}
```
