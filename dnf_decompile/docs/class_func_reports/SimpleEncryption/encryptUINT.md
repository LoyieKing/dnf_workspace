# encryptUINT

`_ZN16SimpleEncryption11encryptUINTEjRj`

`SimpleEncryption::encryptUINT(unsigned int, unsigned int&)`

| 类 | 地址 |
|---|---|
| `SimpleEncryption` | `0x0808cf24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808cf24  _ZN16SimpleEncryption11encryptUINTEjRj
#           SimpleEncryption::encryptUINT(unsigned int, unsigned int&)
# range [0x0808cf24, 0x0808cf67]
0808cf24 +0x00:  push   %ebp
0808cf25 +0x01:  mov    %esp,%ebp
0808cf27 +0x03:  sub    $0x10,%esp
0808cf2a +0x06:  movl   $0x0,-0x8(%ebp)
0808cf31 +0x0d:  movl   $0x0,-0x4(%ebp)
0808cf38 +0x14:  mov    0x8(%ebp),%eax
0808cf3b +0x17:  mov    (%eax),%eax
0808cf3d +0x19:  mov    %eax,-0x8(%ebp)
0808cf40 +0x1c:  mov    0x8(%ebp),%eax
0808cf43 +0x1f:  mov    0x4(%eax),%eax
0808cf46 +0x22:  mov    %eax,-0x4(%ebp)
0808cf49 +0x25:  mov    -0x8(%ebp),%eax
0808cf4c +0x28:  mov    0xc(%ebp),%edx
0808cf4f +0x2b:  mov    %eax,%ecx
0808cf51 +0x2d:  shl    %cl,%edx
0808cf53 +0x2f:  mov    0x10(%ebp),%eax
0808cf56 +0x32:  mov    %edx,(%eax)
0808cf58 +0x34:  mov    -0x4(%ebp),%eax
0808cf5b +0x37:  mov    %eax,%edx
0808cf5d +0x39:  xor    0xc(%ebp),%edx
0808cf60 +0x3c:  mov    0x10(%ebp),%eax
0808cf63 +0x3f:  mov    %edx,(%eax)
0808cf65 +0x41:  leave
0808cf66 +0x42:  ret
0808cf67 +0x43:  nop
```

## 反编译 C

```c
// SimpleEncryption::encryptUINT @ 0x808cf24

/* SimpleEncryption::encryptUINT(unsigned int, unsigned int&) */

void __thiscall SimpleEncryption::encryptUINT(SimpleEncryption *this,uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  *param_2 = param_1 << ((byte)*(undefined4 *)this & 0x1f);
  *param_2 = uVar1 ^ param_1;
  return;
}
```
