# HasData

`_ZNK5yaSSL3SSL7HasDataEv`

`yaSSL::SSL::HasData() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e310` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e310  _ZNK5yaSSL3SSL7HasDataEv
#           yaSSL::SSL::HasData() const
# range [0x0874e310, 0x0874e31f]
0874e310 +0x00:  push   %ebp
0874e311 +0x01:  mov    %esp,%ebp
0874e313 +0x03:  mov    0x8(%ebp),%eax
0874e316 +0x06:  pop    %ebp
0874e317 +0x07:  movzbl 0x9de(%eax),%eax
0874e31e +0x0e:  ret
0874e31f +0x0f:  nop
```

## 反编译 C

```c
// yaSSL::SSL::HasData @ 0x874e310

/* yaSSL::SSL::HasData() const */

SSL __thiscall yaSSL::SSL::HasData(SSL *this)

{
  return this[0x9de];
}
```
