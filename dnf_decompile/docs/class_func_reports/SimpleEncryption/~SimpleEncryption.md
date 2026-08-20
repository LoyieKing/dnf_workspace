# ~SimpleEncryption

`_ZN16SimpleEncryptionD1Ev`

`SimpleEncryption::~SimpleEncryption()`

| 类 | 地址 |
|---|---|
| `SimpleEncryption` | `0x0808ce8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808ce8e  _ZN16SimpleEncryptionD1Ev
#           SimpleEncryption::~SimpleEncryption()
# range [0x0808ce8e, 0x0808cea1]
0808ce8e +0x00:  push   %ebp
0808ce8f +0x01:  mov    %esp,%ebp
0808ce91 +0x03:  sub    $0x18,%esp
0808ce94 +0x06:  mov    0x8(%ebp),%eax
0808ce97 +0x09:  mov    %eax,(%esp)
0808ce9a +0x0c:  call   0808cf1e <_ZN16SimpleEncryption12uninitializeEv>  ; SimpleEncryption::uninitialize()
0808ce9f +0x11:  leave
0808cea0 +0x12:  ret
0808cea1 +0x13:  nop
```

## 反编译 C

```c
// SimpleEncryption::~SimpleEncryption @ 0x808ce8e

/* SimpleEncryption::~SimpleEncryption() */

void __thiscall SimpleEncryption::~SimpleEncryption(SimpleEncryption *this)

{
  uninitialize();
  return;
}
```
