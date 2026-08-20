# get_digest

`_ZN5yaSSL3MD510get_digestEPhPKhj`

`yaSSL::MD5::get_digest(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::MD5` | `0x08799c90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799c90  _ZN5yaSSL3MD510get_digestEPhPKhj
#           yaSSL::MD5::get_digest(unsigned char*, unsigned char const*, unsigned int)
# range [0x08799c90, 0x08799cdf]
08799c90 +0x00:  push   %ebp
08799c91 +0x01:  mov    %esp,%ebp
08799c93 +0x03:  sub    $0x18,%esp
08799c96 +0x06:  mov    0x14(%ebp),%eax
08799c99 +0x09:  mov    %esi,-0x4(%ebp)
08799c9c +0x0c:  mov    0x8(%ebp),%esi
08799c9f +0x0f:  mov    %ebx,-0x8(%ebp)
08799ca2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08799ca7 +0x17:  add    $0xbd2ef1,%ebx
08799cad +0x1d:  mov    %eax,0x8(%esp)
08799cb1 +0x21:  mov    0x10(%ebp),%eax
08799cb4 +0x24:  mov    %eax,0x4(%esp)
08799cb8 +0x28:  mov    0x4(%esi),%eax
08799cbb +0x2b:  mov    %eax,(%esp)
08799cbe +0x2e:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
08799cc3 +0x33:  mov    0xc(%ebp),%eax
08799cc6 +0x36:  mov    %eax,0x4(%esp)
08799cca +0x3a:  mov    0x4(%esi),%eax
08799ccd +0x3d:  mov    %eax,(%esp)
08799cd0 +0x40:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799cd5 +0x45:  mov    -0x8(%ebp),%ebx
08799cd8 +0x48:  mov    -0x4(%ebp),%esi
08799cdb +0x4b:  mov    %ebp,%esp
08799cdd +0x4d:  pop    %ebp
08799cde +0x4e:  ret
08799cdf +0x4f:  nop
```

## 反编译 C

```c
// yaSSL::MD5::get_digest @ 0x8799c90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::MD5::get_digest(MD5 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::MD5::Update(*(MD5 **)(this + 4),param_2,param_3);
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}
```
