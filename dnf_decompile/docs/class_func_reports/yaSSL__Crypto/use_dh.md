# use_dh

`_ZN5yaSSL6Crypto6use_dhEv`

`yaSSL::Crypto::use_dh()`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e7c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e7c0  _ZN5yaSSL6Crypto6use_dhEv
#           yaSSL::Crypto::use_dh()
# range [0x0874e7c0, 0x0874e7cc]
0874e7c0 +0x00:  push   %ebp
0874e7c1 +0x01:  mov    %esp,%ebp
0874e7c3 +0x03:  mov    0x8(%ebp),%eax
0874e7c6 +0x06:  pop    %ebp
0874e7c7 +0x07:  mov    0x8(%eax),%eax
0874e7ca +0x0a:  ret
0874e7cb +0x0b:  nop
0874e7cc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Crypto::use_dh @ 0x874e7c0

/* yaSSL::Crypto::use_dh() */

undefined4 __thiscall yaSSL::Crypto::use_dh(Crypto *this)

{
  return *(undefined4 *)(this + 8);
}
```
