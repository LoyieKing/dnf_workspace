# GetHash

`_ZNK5CSHA17GetHashEPh`

`CSHA1::GetHash(unsigned char*) const`

| 类 | 地址 |
|---|---|
| `CSHA1` | `0x0808a3d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a3d8  _ZNK5CSHA17GetHashEPh
#           CSHA1::GetHash(unsigned char*) const
# range [0x0808a3d8, 0x0808a40f]
0808a3d8 +0x00:  push   %ebp
0808a3d9 +0x01:  mov    %esp,%ebp
0808a3db +0x03:  sub    $0x18,%esp
0808a3de +0x06:  cmpl   $0x0,0xc(%ebp)
0808a3e2 +0x0a:  jne    0808a3eb <+0x13>
0808a3e4 +0x0c:  mov    $0x0,%eax
0808a3e9 +0x11:  jmp    0808a40d <+0x35>
0808a3eb +0x13:  mov    0x8(%ebp),%eax
0808a3ee +0x16:  add    $0x60,%eax
0808a3f1 +0x19:  movl   $0x14,0x8(%esp)
0808a3f9 +0x21:  mov    %eax,0x4(%esp)
0808a3fd +0x25:  mov    0xc(%ebp),%eax
0808a400 +0x28:  mov    %eax,(%esp)
0808a403 +0x2b:  call   0807d8a0 <_init+0x198>
0808a408 +0x30:  mov    $0x1,%eax
0808a40d +0x35:  leave
0808a40e +0x36:  ret
0808a40f +0x37:  nop
```

## 反编译 C

```c
// CSHA1::GetHash @ 0x808a3d8

/* CSHA1::GetHash(unsigned char*) const */

bool __thiscall CSHA1::GetHash(CSHA1 *this,uchar *param_1)

{
  if (param_1 != (uchar *)0x0) {
    memcpy(param_1,this + 0x60,0x14);
  }
  return param_1 != (uchar *)0x0;
}
```
