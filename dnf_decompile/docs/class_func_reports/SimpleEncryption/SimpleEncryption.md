# SimpleEncryption

`_ZN16SimpleEncryptionC1Ev`

`SimpleEncryption::SimpleEncryption()`

| 类 | 地址 |
|---|---|
| `SimpleEncryption` | `0x0808ce68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808ce68  _ZN16SimpleEncryptionC1Ev
#           SimpleEncryption::SimpleEncryption()
# range [0x0808ce68, 0x0808ce8d]
0808ce68 +0x00:  push   %ebp
0808ce69 +0x01:  mov    %esp,%ebp
0808ce6b +0x03:  sub    $0x18,%esp
0808ce6e +0x06:  mov    0x8(%ebp),%eax
0808ce71 +0x09:  movl   $0x0,(%eax)
0808ce77 +0x0f:  mov    0x8(%ebp),%eax
0808ce7a +0x12:  movl   $0x0,0x4(%eax)
0808ce81 +0x19:  mov    0x8(%ebp),%eax
0808ce84 +0x1c:  mov    %eax,(%esp)
0808ce87 +0x1f:  call   0808cf06 <_ZN16SimpleEncryption10initializeEv>  ; SimpleEncryption::initialize()
0808ce8c +0x24:  leave
0808ce8d +0x25:  ret
```

## 反编译 C

```c
// SimpleEncryption::SimpleEncryption @ 0x808ce68

/* SimpleEncryption::SimpleEncryption() */

void __thiscall SimpleEncryption::SimpleEncryption(SimpleEncryption *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  initialize(this);
  return;
}
```
