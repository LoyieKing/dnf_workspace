# getKey

`_ZNK5yaSSL7SSL_CTX6getKeyEv`

`yaSSL::SSL_CTX::getKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e490  _ZNK5yaSSL7SSL_CTX6getKeyEv
#           yaSSL::SSL_CTX::getKey() const
# range [0x0874e490, 0x0874e49c]
0874e490 +0x00:  push   %ebp
0874e491 +0x01:  mov    %esp,%ebp
0874e493 +0x03:  mov    0x8(%ebp),%eax
0874e496 +0x06:  pop    %ebp
0874e497 +0x07:  mov    0x8(%eax),%eax
0874e49a +0x0a:  ret
0874e49b +0x0b:  nop
0874e49c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::getKey @ 0x874e490

/* yaSSL::SSL_CTX::getKey() const */

undefined4 __thiscall yaSSL::SSL_CTX::getKey(SSL_CTX *this)

{
  return *(undefined4 *)(this + 8);
}
```
