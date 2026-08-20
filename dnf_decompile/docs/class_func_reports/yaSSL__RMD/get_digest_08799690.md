# get_digest

`_ZN5yaSSL3RMD10get_digestEPhPKhj`

`yaSSL::RMD::get_digest(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::RMD` | `0x08799690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799690  _ZN5yaSSL3RMD10get_digestEPhPKhj
#           yaSSL::RMD::get_digest(unsigned char*, unsigned char const*, unsigned int)
# range [0x08799690, 0x087996df]
08799690 +0x00:  push   %ebp
08799691 +0x01:  mov    %esp,%ebp
08799693 +0x03:  sub    $0x18,%esp
08799696 +0x06:  mov    0x14(%ebp),%eax
08799699 +0x09:  mov    %esi,-0x4(%ebp)
0879969c +0x0c:  mov    0x8(%ebp),%esi
0879969f +0x0f:  mov    %ebx,-0x8(%ebp)
087996a2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087996a7 +0x17:  add    $0xbd34f1,%ebx
087996ad +0x1d:  mov    %eax,0x8(%esp)
087996b1 +0x21:  mov    0x10(%ebp),%eax
087996b4 +0x24:  mov    %eax,0x4(%esp)
087996b8 +0x28:  mov    0x4(%esi),%eax
087996bb +0x2b:  mov    %eax,(%esp)
087996be +0x2e:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
087996c3 +0x33:  mov    0xc(%ebp),%eax
087996c6 +0x36:  mov    %eax,0x4(%esp)
087996ca +0x3a:  mov    0x4(%esi),%eax
087996cd +0x3d:  mov    %eax,(%esp)
087996d0 +0x40:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
087996d5 +0x45:  mov    -0x8(%ebp),%ebx
087996d8 +0x48:  mov    -0x4(%ebp),%esi
087996db +0x4b:  mov    %ebp,%esp
087996dd +0x4d:  pop    %ebp
087996de +0x4e:  ret
087996df +0x4f:  nop
```

## 反编译 C

```c
// yaSSL::RMD::get_digest @ 0x8799690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::RMD::get_digest(RMD *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::RIPEMD160::Update(*(RIPEMD160 **)(this + 4),param_2,param_3);
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}
```
