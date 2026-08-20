# useHashes

`_ZN5yaSSL3SSL9useHashesEv`

`yaSSL::SSL::useHashes()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e2e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e2e0  _ZN5yaSSL3SSL9useHashesEv
#           yaSSL::SSL::useHashes()
# range [0x0874e2e0, 0x0874e2ee]
0874e2e0 +0x00:  push   %ebp
0874e2e1 +0x01:  mov    %esp,%ebp
0874e2e3 +0x03:  mov    0x8(%ebp),%eax
0874e2e6 +0x06:  pop    %ebp
0874e2e7 +0x07:  add    $0x958,%eax
0874e2ec +0x0c:  ret
0874e2ed +0x0d:  nop
0874e2ee +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::useHashes @ 0x874e2e0

/* yaSSL::SSL::useHashes() */

SSL * __thiscall yaSSL::SSL::useHashes(SSL *this)

{
  return this + 0x958;
}
```
