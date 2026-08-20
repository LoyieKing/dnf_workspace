# Build

`_ZN5yaSSL18CertificateRequest5BuildEv`

`yaSSL::CertificateRequest::Build()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateRequest` | `0x08747020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747020  _ZN5yaSSL18CertificateRequest5BuildEv
#           yaSSL::CertificateRequest::Build()
# range [0x08747020, 0x0874705f]
08747020 +0x00:  push   %ebp
08747021 +0x01:  mov    %esp,%ebp
08747023 +0x03:  push   %ebx
08747024 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08747029 +0x09:  add    $0xc25b6f,%ebx
0874702f +0x0f:  sub    $0x14,%esp
08747032 +0x12:  mov    0x8(%ebp),%eax
08747035 +0x15:  movl   $0x1,0x8(%eax)
0874703c +0x1c:  movl   $0x2,0xc(%eax)
08747043 +0x23:  movl   $0x2,0x24(%eax)
0874704a +0x2a:  movl   $0x5,0x4(%esp)
08747052 +0x32:  mov    %eax,(%esp)
08747055 +0x35:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
0874705a +0x3a:  add    $0x14,%esp
0874705d +0x3d:  pop    %ebx
0874705e +0x3e:  pop    %ebp
0874705f +0x3f:  ret
```

## 反编译 C

```c
// yaSSL::CertificateRequest::Build @ 0x8747020

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::Build() */

void __thiscall yaSSL::CertificateRequest::Build(CertificateRequest *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 2;
  *(undefined4 *)(this + 0x24) = 2;
  HandShakeBase::set_length((HandShakeBase *)this,5);
  return;
}
```
