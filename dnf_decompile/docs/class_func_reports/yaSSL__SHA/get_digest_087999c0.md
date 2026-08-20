# get_digest

`_ZN5yaSSL3SHA10get_digestEPhPKhj`

`yaSSL::SHA::get_digest(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::SHA` | `0x087999c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087999c0  _ZN5yaSSL3SHA10get_digestEPhPKhj
#           yaSSL::SHA::get_digest(unsigned char*, unsigned char const*, unsigned int)
# range [0x087999c0, 0x08799a0f]
087999c0 +0x00:  push   %ebp
087999c1 +0x01:  mov    %esp,%ebp
087999c3 +0x03:  sub    $0x18,%esp
087999c6 +0x06:  mov    0x14(%ebp),%eax
087999c9 +0x09:  mov    %esi,-0x4(%ebp)
087999cc +0x0c:  mov    0x8(%ebp),%esi
087999cf +0x0f:  mov    %ebx,-0x8(%ebp)
087999d2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087999d7 +0x17:  add    $0xbd31c1,%ebx
087999dd +0x1d:  mov    %eax,0x8(%esp)
087999e1 +0x21:  mov    0x10(%ebp),%eax
087999e4 +0x24:  mov    %eax,0x4(%esp)
087999e8 +0x28:  mov    0x4(%esi),%eax
087999eb +0x2b:  mov    %eax,(%esp)
087999ee +0x2e:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
087999f3 +0x33:  mov    0xc(%ebp),%eax
087999f6 +0x36:  mov    %eax,0x4(%esp)
087999fa +0x3a:  mov    0x4(%esi),%eax
087999fd +0x3d:  mov    %eax,(%esp)
08799a00 +0x40:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799a05 +0x45:  mov    -0x8(%ebp),%ebx
08799a08 +0x48:  mov    -0x4(%ebp),%esi
08799a0b +0x4b:  mov    %ebp,%esp
08799a0d +0x4d:  pop    %ebp
08799a0e +0x4e:  ret
08799a0f +0x4f:  nop
```

## 反编译 C

```c
// yaSSL::SHA::get_digest @ 0x87999c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::SHA::get_digest(SHA *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::SHA::Update(*(SHA **)(this + 4),param_2,param_3);
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}
```
