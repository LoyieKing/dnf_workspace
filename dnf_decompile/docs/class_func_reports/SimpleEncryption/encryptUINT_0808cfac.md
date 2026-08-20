# encryptUINT

`_ZN16SimpleEncryption11encryptUINTEj`

`SimpleEncryption::encryptUINT(unsigned int)`

| 类 | 地址 |
|---|---|
| `SimpleEncryption` | `0x0808cfac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808cfac  _ZN16SimpleEncryption11encryptUINTEj
#           SimpleEncryption::encryptUINT(unsigned int)
# range [0x0808cfac, 0x0808cfd7]
0808cfac +0x00:  push   %ebp
0808cfad +0x01:  mov    %esp,%ebp
0808cfaf +0x03:  sub    $0x1c,%esp
0808cfb2 +0x06:  movl   $0x0,-0x4(%ebp)
0808cfb9 +0x0d:  lea    -0x4(%ebp),%eax
0808cfbc +0x10:  mov    %eax,0x8(%esp)
0808cfc0 +0x14:  mov    0xc(%ebp),%eax
0808cfc3 +0x17:  mov    %eax,0x4(%esp)
0808cfc7 +0x1b:  mov    0x8(%ebp),%eax
0808cfca +0x1e:  mov    %eax,(%esp)
0808cfcd +0x21:  call   0808cf24 <_ZN16SimpleEncryption11encryptUINTEjRj>  ; SimpleEncryption::encryptUINT(unsigned int, unsigned int&)
0808cfd2 +0x26:  mov    -0x4(%ebp),%eax
0808cfd5 +0x29:  leave
0808cfd6 +0x2a:  ret
0808cfd7 +0x2b:  nop
```

## 反编译 C

```c
// SimpleEncryption::encryptUINT @ 0x808cfac

/* SimpleEncryption::encryptUINT(unsigned int) */

uint __thiscall SimpleEncryption::encryptUINT(SimpleEncryption *this,uint param_1)

{
  uint local_8;
  
  local_8 = 0;
  encryptUINT(this,param_1,&local_8);
  return local_8;
}
```
