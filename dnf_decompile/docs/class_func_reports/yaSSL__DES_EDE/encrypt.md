# encrypt

`_ZN5yaSSL7DES_EDE7encryptEPhPKhj`

`yaSSL::DES_EDE::encrypt(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::DES_EDE` | `0x08799340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799340  _ZN5yaSSL7DES_EDE7encryptEPhPKhj
#           yaSSL::DES_EDE::encrypt(unsigned char*, unsigned char const*, unsigned int)
# range [0x08799340, 0x0879937c]
08799340 +0x00:  push   %ebp
08799341 +0x01:  mov    %esp,%ebp
08799343 +0x03:  push   %ebx
08799344 +0x04:  sub    $0x14,%esp
08799347 +0x07:  mov    0x14(%ebp),%eax
0879934a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879934f +0x0f:  add    $0xbd3849,%ebx
08799355 +0x15:  mov    %eax,0xc(%esp)
08799359 +0x19:  mov    0x10(%ebp),%eax
0879935c +0x1c:  mov    %eax,0x8(%esp)
08799360 +0x20:  mov    0xc(%ebp),%eax
08799363 +0x23:  mov    %eax,0x4(%esp)
08799367 +0x27:  mov    0x8(%ebp),%eax
0879936a +0x2a:  mov    0x4(%eax),%eax
0879936d +0x2d:  mov    %eax,(%esp)
08799370 +0x30:  call   087a8370 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj>  ; TaoCrypt::DES_EDE3::Process(unsigned char*, unsigned char const*, unsigned int)
08799375 +0x35:  add    $0x14,%esp
08799378 +0x38:  pop    %ebx
08799379 +0x39:  pop    %ebp
0879937a +0x3a:  ret
0879937b +0x3b:  nop
0879937c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::DES_EDE::encrypt @ 0x8799340

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::encrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::DES_EDE::encrypt(DES_EDE *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::DES_EDE3::Process(*(DES_EDE3 **)(this + 4),param_1,param_2,param_3);
  return;
}
```
