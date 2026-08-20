# decryptUINT

`_ZN16SimpleEncryption11decryptUINTEjRj`

`SimpleEncryption::decryptUINT(unsigned int, unsigned int&)`

| 类 | 地址 |
|---|---|
| `SimpleEncryption` | `0x0808cf68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808cf68  _ZN16SimpleEncryption11decryptUINTEjRj
#           SimpleEncryption::decryptUINT(unsigned int, unsigned int&)
# range [0x0808cf68, 0x0808cfab]
0808cf68 +0x00:  push   %ebp
0808cf69 +0x01:  mov    %esp,%ebp
0808cf6b +0x03:  sub    $0x10,%esp
0808cf6e +0x06:  movl   $0x0,-0x8(%ebp)
0808cf75 +0x0d:  movl   $0x0,-0x4(%ebp)
0808cf7c +0x14:  mov    0x8(%ebp),%eax
0808cf7f +0x17:  mov    (%eax),%eax
0808cf81 +0x19:  mov    %eax,-0x8(%ebp)
0808cf84 +0x1c:  mov    0x8(%ebp),%eax
0808cf87 +0x1f:  mov    0x4(%eax),%eax
0808cf8a +0x22:  mov    %eax,-0x4(%ebp)
0808cf8d +0x25:  mov    -0x8(%ebp),%eax
0808cf90 +0x28:  mov    0xc(%ebp),%edx
0808cf93 +0x2b:  mov    %eax,%ecx
0808cf95 +0x2d:  shr    %cl,%edx
0808cf97 +0x2f:  mov    0x10(%ebp),%eax
0808cf9a +0x32:  mov    %edx,(%eax)
0808cf9c +0x34:  mov    -0x4(%ebp),%eax
0808cf9f +0x37:  mov    %eax,%edx
0808cfa1 +0x39:  xor    0xc(%ebp),%edx
0808cfa4 +0x3c:  mov    0x10(%ebp),%eax
0808cfa7 +0x3f:  mov    %edx,(%eax)
0808cfa9 +0x41:  leave
0808cfaa +0x42:  ret
0808cfab +0x43:  nop
```

## 反编译 C

```c
// SimpleEncryption::decryptUINT @ 0x808cf68

/* SimpleEncryption::decryptUINT(unsigned int, unsigned int&) */

void __thiscall SimpleEncryption::decryptUINT(SimpleEncryption *this,uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  *param_2 = param_1 >> ((byte)*(undefined4 *)this & 0x1f);
  *param_2 = uVar1 ^ param_1;
  return;
}
```
