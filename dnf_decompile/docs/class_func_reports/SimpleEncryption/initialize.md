# initialize

`_ZN16SimpleEncryption10initializeEv`

`SimpleEncryption::initialize()`

| 类 | 地址 |
|---|---|
| `SimpleEncryption` | `0x0808cf06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808cf06  _ZN16SimpleEncryption10initializeEv
#           SimpleEncryption::initialize()
# range [0x0808cf06, 0x0808cf1d]
0808cf06 +0x00:  push   %ebp
0808cf07 +0x01:  mov    %esp,%ebp
0808cf09 +0x03:  mov    0x8(%ebp),%eax
0808cf0c +0x06:  movl   $0x3,(%eax)
0808cf12 +0x0c:  mov    0x8(%ebp),%eax
0808cf15 +0x0f:  movl   $0xf089980f,0x4(%eax)
0808cf1c +0x16:  pop    %ebp
0808cf1d +0x17:  ret
```

## 反编译 C

```c
// SimpleEncryption::initialize @ 0x808cf06

/* SimpleEncryption::initialize() */

void __thiscall SimpleEncryption::initialize(SimpleEncryption *this)

{
  *(undefined4 *)this = 3;
  *(undefined4 *)(this + 4) = 0xf089980f;
  return;
}
```
