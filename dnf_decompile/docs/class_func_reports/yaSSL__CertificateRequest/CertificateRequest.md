# CertificateRequest

`_ZN5yaSSL18CertificateRequestC1Ev`

`yaSSL::CertificateRequest::CertificateRequest()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateRequest` | `0x08747940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747940  _ZN5yaSSL18CertificateRequestC1Ev
#           yaSSL::CertificateRequest::CertificateRequest()
# range [0x08747940, 0x0874798e]
08747940 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08747945 +0x05:  add    $0xc25253,%ecx
0874794b +0x0b:  push   %ebp
0874794c +0x0c:  mov    %esp,%ebp
0874794e +0x0e:  mov    0x8(%ebp),%eax
08747951 +0x11:  mov    -0x59c(%ecx),%edx
08747957 +0x17:  movl   $0x0,0x24(%eax)
0874795e +0x1e:  movl   $0x0,0x28(%eax)
08747965 +0x25:  movl   $0x0,0x2c(%eax)
0874796c +0x2c:  add    $0x8,%edx
0874796f +0x2f:  mov    %edx,(%eax)
08747971 +0x31:  xor    %edx,%edx
08747973 +0x33:  movl   $0x0,0x30(%eax)
0874797a +0x3a:  add    $0x8,%eax
0874797d +0x3d:  movl   $0x0,(%eax,%edx,1)
08747984 +0x44:  add    $0x4,%edx
08747987 +0x47:  cmp    $0x1c,%edx
0874798a +0x4a:  jb     0874797d <+0x3d>
0874798c +0x4c:  pop    %ebp
0874798d +0x4d:  ret
0874798e +0x4e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CertificateRequest::CertificateRequest @ 0x8747940

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::CertificateRequest::CertificateRequest() */

void __thiscall yaSSL::CertificateRequest::CertificateRequest(CertificateRequest *this)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_vtable_0936c5fc;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined **)this = puVar1 + 8;
  uVar2 = 0;
  *(undefined4 *)(this + 0x30) = 0;
  do {
    *(undefined4 *)(this + uVar2 + 8) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x1c);
  return;
}
```
