# decryptUINT

`_ZN16SimpleEncryption11decryptUINTEj`

`SimpleEncryption::decryptUINT(unsigned int)`

| 类 | 地址 |
|---|---|
| `SimpleEncryption` | `0x0808cfd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808cfd8  _ZN16SimpleEncryption11decryptUINTEj
#           SimpleEncryption::decryptUINT(unsigned int)
# range [0x0808cfd8, 0x0808d002]
0808cfd8 +0x00:  push   %ebp
0808cfd9 +0x01:  mov    %esp,%ebp
0808cfdb +0x03:  sub    $0x1c,%esp
0808cfde +0x06:  movl   $0x0,-0x4(%ebp)
0808cfe5 +0x0d:  lea    -0x4(%ebp),%eax
0808cfe8 +0x10:  mov    %eax,0x8(%esp)
0808cfec +0x14:  mov    0xc(%ebp),%eax
0808cfef +0x17:  mov    %eax,0x4(%esp)
0808cff3 +0x1b:  mov    0x8(%ebp),%eax
0808cff6 +0x1e:  mov    %eax,(%esp)
0808cff9 +0x21:  call   0808cf24 <_ZN16SimpleEncryption11encryptUINTEjRj>  ; SimpleEncryption::encryptUINT(unsigned int, unsigned int&)
0808cffe +0x26:  mov    -0x4(%ebp),%eax
0808d001 +0x29:  leave
0808d002 +0x2a:  ret
```

## 反编译 C

```c
// SimpleEncryption::decryptUINT @ 0x808cfd8

/* SimpleEncryption::decryptUINT(unsigned int) */

uint __thiscall SimpleEncryption::decryptUINT(SimpleEncryption *this,uint param_1)

{
  uint local_8;
  
  local_8 = 0;
  encryptUINT(this,param_1,&local_8);
  return local_8;
}
```
