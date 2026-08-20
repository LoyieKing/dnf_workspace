# decrypt

`_ZN5yaSSL3RC47decryptEPhPKhj`

`yaSSL::RC4::decrypt(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::RC4` | `0x08799200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799200  _ZN5yaSSL3RC47decryptEPhPKhj
#           yaSSL::RC4::decrypt(unsigned char*, unsigned char const*, unsigned int)
# range [0x08799200, 0x0879923f]
08799200 +0x00:  push   %ebp
08799201 +0x01:  mov    %esp,%ebp
08799203 +0x03:  push   %ebx
08799204 +0x04:  sub    $0x14,%esp
08799207 +0x07:  mov    0x14(%ebp),%eax
0879920a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879920f +0x0f:  add    $0xbd3989,%ebx
08799215 +0x15:  mov    %eax,0xc(%esp)
08799219 +0x19:  mov    0x10(%ebp),%eax
0879921c +0x1c:  mov    %eax,0x8(%esp)
08799220 +0x20:  mov    0xc(%ebp),%eax
08799223 +0x23:  mov    %eax,0x4(%esp)
08799227 +0x27:  mov    0x8(%ebp),%eax
0879922a +0x2a:  mov    0x4(%eax),%eax
0879922d +0x2d:  add    $0x102,%eax
08799232 +0x32:  mov    %eax,(%esp)
08799235 +0x35:  call   087a5a20 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj>  ; TaoCrypt::ARC4::Process(unsigned char*, unsigned char const*, unsigned int)
0879923a +0x3a:  add    $0x14,%esp
0879923d +0x3d:  pop    %ebx
0879923e +0x3e:  pop    %ebp
0879923f +0x3f:  ret
```

## 反编译 C

```c
// yaSSL::RC4::decrypt @ 0x8799200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::decrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::RC4::decrypt(RC4 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::ARC4::Process((ARC4 *)(*(int *)(this + 4) + 0x102),param_1,param_2,param_3);
  return;
}
```
