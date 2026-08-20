# get_random

`_ZNK5yaSSL6Crypto10get_randomEv`

`yaSSL::Crypto::get_random() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e780  _ZNK5yaSSL6Crypto10get_randomEv
#           yaSSL::Crypto::get_random() const
# range [0x0874e780, 0x0874e78c]
0874e780 +0x00:  push   %ebp
0874e781 +0x01:  mov    %esp,%ebp
0874e783 +0x03:  mov    0x8(%ebp),%eax
0874e786 +0x06:  pop    %ebp
0874e787 +0x07:  add    $0xc,%eax
0874e78a +0x0a:  ret
0874e78b +0x0b:  nop
0874e78c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Crypto::get_random @ 0x874e780

/* yaSSL::Crypto::get_random() const */

Crypto * __thiscall yaSSL::Crypto::get_random(Crypto *this)

{
  return this + 0xc;
}
```
