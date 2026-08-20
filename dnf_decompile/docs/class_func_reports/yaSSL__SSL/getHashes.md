# getHashes

`_ZNK5yaSSL3SSL9getHashesEv`

`yaSSL::SSL::getHashes() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e090` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e090  _ZNK5yaSSL3SSL9getHashesEv
#           yaSSL::SSL::getHashes() const
# range [0x0874e090, 0x0874e09e]
0874e090 +0x00:  push   %ebp
0874e091 +0x01:  mov    %esp,%ebp
0874e093 +0x03:  mov    0x8(%ebp),%eax
0874e096 +0x06:  pop    %ebp
0874e097 +0x07:  add    $0x958,%eax
0874e09c +0x0c:  ret
0874e09d +0x0d:  nop
0874e09e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::getHashes @ 0x874e090

/* yaSSL::SSL::getHashes() const */

SSL * __thiscall yaSSL::SSL::getHashes(SSL *this)

{
  return this + 0x958;
}
```
