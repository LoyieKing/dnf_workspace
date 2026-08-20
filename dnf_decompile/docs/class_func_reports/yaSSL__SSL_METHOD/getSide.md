# getSide

`_ZNK5yaSSL10SSL_METHOD7getSideEv`

`yaSSL::SSL_METHOD::getSide() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_METHOD` | `0x0874e3e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e3e0  _ZNK5yaSSL10SSL_METHOD7getSideEv
#           yaSSL::SSL_METHOD::getSide() const
# range [0x0874e3e0, 0x0874e3ec]
0874e3e0 +0x00:  push   %ebp
0874e3e1 +0x01:  mov    %esp,%ebp
0874e3e3 +0x03:  mov    0x8(%ebp),%eax
0874e3e6 +0x06:  pop    %ebp
0874e3e7 +0x07:  mov    0x4(%eax),%eax
0874e3ea +0x0a:  ret
0874e3eb +0x0b:  nop
0874e3ec +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_METHOD::getSide @ 0x874e3e0

/* yaSSL::SSL_METHOD::getSide() const */

undefined4 __thiscall yaSSL::SSL_METHOD::getSide(SSL_METHOD *this)

{
  return *(undefined4 *)(this + 4);
}
```
