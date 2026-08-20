# ~RSA

`_ZN5yaSSL3RSAD1Ev`

`yaSSL::RSA::~RSA()`

| 类 | 地址 |
|---|---|
| `yaSSL::RSA` | `0x0879b380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879b380  _ZN5yaSSL3RSAD1Ev
#           yaSSL::RSA::~RSA()
# range [0x0879b380, 0x0879b3c9]
0879b380 +0x00:  push   %ebp
0879b381 +0x01:  mov    %esp,%ebp
0879b383 +0x03:  sub    $0x18,%esp
0879b386 +0x06:  mov    %ebx,-0x8(%ebp)
0879b389 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0879b38e +0x0e:  add    $0xbd180a,%ebx
0879b394 +0x14:  mov    %esi,-0x4(%ebp)
0879b397 +0x17:  mov    0x8(%ebp),%esi
0879b39a +0x1a:  mov    -0x154(%ebx),%eax
0879b3a0 +0x20:  add    $0x8,%eax
0879b3a3 +0x23:  mov    %eax,(%esi)
0879b3a5 +0x25:  mov    0x4(%esi),%eax
0879b3a8 +0x28:  mov    %eax,(%esp)
0879b3ab +0x2b:  call   0879c950 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE+0xca0>  ; yaSSL::PemToDer(_IO_FILE*, yaSSL::CertType, yaSSL::EncryptedInfo*)+0xca0
0879b3b0 +0x30:  mov    -0x2dc(%ebx),%eax
0879b3b6 +0x36:  add    $0x8,%eax
0879b3b9 +0x39:  mov    %eax,(%esi)
0879b3bb +0x3b:  mov    -0x8(%ebp),%ebx
0879b3be +0x3e:  mov    -0x4(%ebp),%esi
0879b3c1 +0x41:  mov    %ebp,%esp
0879b3c3 +0x43:  pop    %ebp
0879b3c4 +0x44:  ret
0879b3c5 +0x45:  nop
0879b3c6 +0x46:  lea    0x0(%esi),%esi
0879b3c9 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::RSA::~RSA @ 0x879b380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::~RSA() */

void __thiscall yaSSL::RSA::~RSA(RSA *this)

{
  *(undefined **)this = PTR_vtable_0936ca44 + 8;
  ysDelete<yaSSL::RSA::RSAImpl>(*(RSAImpl **)(this + 4));
  *(undefined **)this = PTR_vtable_0936c8bc + 8;
  return;
}
```
