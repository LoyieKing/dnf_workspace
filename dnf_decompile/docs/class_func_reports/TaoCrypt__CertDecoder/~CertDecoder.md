# ~CertDecoder

`_ZN8TaoCrypt11CertDecoderD1Ev`

`TaoCrypt::CertDecoder::~CertDecoder()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x087541a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087541a0  _ZN8TaoCrypt11CertDecoderD1Ev
#           TaoCrypt::CertDecoder::~CertDecoder()
# range [0x087541a0, 0x087541fa]
087541a0 +0x00:  push   %ebp
087541a1 +0x01:  mov    %esp,%ebp
087541a3 +0x03:  sub    $0x18,%esp
087541a6 +0x06:  mov    %ebx,-0x8(%ebp)
087541a9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087541ae +0x0e:  add    $0xc189ea,%ebx
087541b4 +0x14:  mov    %esi,-0x4(%ebp)
087541b7 +0x17:  mov    0x8(%ebp),%esi
087541ba +0x1a:  mov    -0x508(%ebx),%eax
087541c0 +0x20:  add    $0x8,%eax
087541c3 +0x23:  mov    %eax,(%esi)
087541c5 +0x25:  movb   $0x0,0x4(%esp)
087541ca +0x2a:  mov    0x4c(%esi),%eax
087541cd +0x2d:  mov    %eax,(%esp)
087541d0 +0x30:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087541d5 +0x35:  movb   $0x0,0x4(%esp)
087541da +0x3a:  mov    0x8(%esi),%eax
087541dd +0x3d:  mov    %eax,(%esp)
087541e0 +0x40:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087541e5 +0x45:  mov    -0x354(%ebx),%eax
087541eb +0x4b:  add    $0x8,%eax
087541ee +0x4e:  mov    %eax,(%esi)
087541f0 +0x50:  mov    -0x8(%ebp),%ebx
087541f3 +0x53:  mov    -0x4(%ebp),%esi
087541f6 +0x56:  mov    %ebp,%esp
087541f8 +0x58:  pop    %ebp
087541f9 +0x59:  ret
087541fa +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::~CertDecoder @ 0x87541a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::~CertDecoder() */

void __thiscall TaoCrypt::CertDecoder::~CertDecoder(CertDecoder *this)

{
  *(undefined **)this = PTR_vtable_0936c690 + 8;
  operator_delete__(*(undefined4 *)(this + 0x4c),0);
  operator_delete__(*(undefined4 *)(this + 8),0);
  *(undefined **)this = PTR_vtable_0936c844 + 8;
  return;
}
```
