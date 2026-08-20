# Certificate

`_ZN5yaSSL11CertificateC1Ev`

`yaSSL::Certificate::Certificate()`

| 类 | 地址 |
|---|---|
| `yaSSL::Certificate` | `0x08746d10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746d10  _ZN5yaSSL11CertificateC1Ev
#           yaSSL::Certificate::Certificate()
# range [0x08746d10, 0x08746d39]
08746d10 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08746d15 +0x05:  add    $0xc25e83,%ecx
08746d1b +0x0b:  push   %ebp
08746d1c +0x0c:  mov    %esp,%ebp
08746d1e +0x0e:  mov    0x8(%ebp),%eax
08746d21 +0x11:  mov    -0x368(%ecx),%edx
08746d27 +0x17:  movl   $0x0,0x8(%eax)
08746d2e +0x1e:  add    $0x8,%edx
08746d31 +0x21:  mov    %edx,(%eax)
08746d33 +0x23:  pop    %ebp
08746d34 +0x24:  ret
08746d35 +0x25:  nop
08746d36 +0x26:  lea    0x0(%esi),%esi
08746d39 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Certificate::Certificate @ 0x8746d10

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::Certificate::Certificate() */

void __thiscall yaSSL::Certificate::Certificate(Certificate *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936c830;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}
```
