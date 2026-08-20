# get_cipher

`_ZNK5yaSSL6Crypto10get_cipherEv`

`yaSSL::Crypto::get_cipher() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e760  _ZNK5yaSSL6Crypto10get_cipherEv
#           yaSSL::Crypto::get_cipher() const
# range [0x0874e760, 0x0874e76c]
0874e760 +0x00:  push   %ebp
0874e761 +0x01:  mov    %esp,%ebp
0874e763 +0x03:  mov    0x8(%ebp),%eax
0874e766 +0x06:  pop    %ebp
0874e767 +0x07:  mov    0x4(%eax),%eax
0874e76a +0x0a:  ret
0874e76b +0x0b:  nop
0874e76c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Crypto::get_cipher @ 0x874e760

/* yaSSL::Crypto::get_cipher() const */

undefined4 __thiscall yaSSL::Crypto::get_cipher(Crypto *this)

{
  return *(undefined4 *)(this + 4);
}
```
