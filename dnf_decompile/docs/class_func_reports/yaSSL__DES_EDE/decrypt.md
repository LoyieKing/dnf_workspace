# decrypt

`_ZN5yaSSL7DES_EDE7decryptEPhPKhj`

`yaSSL::DES_EDE::decrypt(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::DES_EDE` | `0x08799300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799300  _ZN5yaSSL7DES_EDE7decryptEPhPKhj
#           yaSSL::DES_EDE::decrypt(unsigned char*, unsigned char const*, unsigned int)
# range [0x08799300, 0x0879933f]
08799300 +0x00:  push   %ebp
08799301 +0x01:  mov    %esp,%ebp
08799303 +0x03:  push   %ebx
08799304 +0x04:  sub    $0x14,%esp
08799307 +0x07:  mov    0x14(%ebp),%eax
0879930a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879930f +0x0f:  add    $0xbd3889,%ebx
08799315 +0x15:  mov    %eax,0xc(%esp)
08799319 +0x19:  mov    0x10(%ebp),%eax
0879931c +0x1c:  mov    %eax,0x8(%esp)
08799320 +0x20:  mov    0xc(%ebp),%eax
08799323 +0x23:  mov    %eax,0x4(%esp)
08799327 +0x27:  mov    0x8(%ebp),%eax
0879932a +0x2a:  mov    0x4(%eax),%eax
0879932d +0x2d:  add    $0x1b8,%eax
08799332 +0x32:  mov    %eax,(%esp)
08799335 +0x35:  call   087a8370 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj>  ; TaoCrypt::DES_EDE3::Process(unsigned char*, unsigned char const*, unsigned int)
0879933a +0x3a:  add    $0x14,%esp
0879933d +0x3d:  pop    %ebx
0879933e +0x3e:  pop    %ebp
0879933f +0x3f:  ret
```

## 反编译 C

```c
// yaSSL::DES_EDE::decrypt @ 0x8799300

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::decrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::DES_EDE::decrypt(DES_EDE *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::DES_EDE3::Process((DES_EDE3 *)(*(int *)(this + 4) + 0x1b8),param_1,param_2,param_3);
  return;
}
```
