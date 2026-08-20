# uninitialize

`_ZN16SimpleEncryption12uninitializeEv`

`SimpleEncryption::uninitialize()`

| 类 | 地址 |
|---|---|
| `SimpleEncryption` | `0x0808cf1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808cf1e  _ZN16SimpleEncryption12uninitializeEv
#           SimpleEncryption::uninitialize()
# range [0x0808cf1e, 0x0808cf23]
0808cf1e +0x00:  push   %ebp
0808cf1f +0x01:  mov    %esp,%ebp
0808cf21 +0x03:  pop    %ebp
0808cf22 +0x04:  ret
0808cf23 +0x05:  nop
```

## 反编译 C

```c
// SimpleEncryption::uninitialize @ 0x808cf1e

/* SimpleEncryption::uninitialize() */

void SimpleEncryption::uninitialize(void)

{
  return;
}
```
