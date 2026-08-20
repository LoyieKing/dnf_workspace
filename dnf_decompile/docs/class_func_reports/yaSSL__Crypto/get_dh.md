# get_dh

`_ZNK5yaSSL6Crypto6get_dhEv`

`yaSSL::Crypto::get_dh() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e770` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e770  _ZNK5yaSSL6Crypto6get_dhEv
#           yaSSL::Crypto::get_dh() const
# range [0x0874e770, 0x0874e77c]
0874e770 +0x00:  push   %ebp
0874e771 +0x01:  mov    %esp,%ebp
0874e773 +0x03:  mov    0x8(%ebp),%eax
0874e776 +0x06:  pop    %ebp
0874e777 +0x07:  mov    0x8(%eax),%eax
0874e77a +0x0a:  ret
0874e77b +0x0b:  nop
0874e77c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Crypto::get_dh @ 0x874e770

/* yaSSL::Crypto::get_dh() const */

undefined4 __thiscall yaSSL::Crypto::get_dh(Crypto *this)

{
  return *(undefined4 *)(this + 8);
}
```
