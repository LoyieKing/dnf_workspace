# decrypt

`_ZN5yaSSL3AES7decryptEPhPKhj`

`yaSSL::AES::decrypt(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::AES` | `0x08799090` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799090  _ZN5yaSSL3AES7decryptEPhPKhj
#           yaSSL::AES::decrypt(unsigned char*, unsigned char const*, unsigned int)
# range [0x08799090, 0x087990cf]
08799090 +0x00:  push   %ebp
08799091 +0x01:  mov    %esp,%ebp
08799093 +0x03:  push   %ebx
08799094 +0x04:  sub    $0x14,%esp
08799097 +0x07:  mov    0x14(%ebp),%eax
0879909a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879909f +0x0f:  add    $0xbd3af9,%ebx
087990a5 +0x15:  mov    %eax,0xc(%esp)
087990a9 +0x19:  mov    0x10(%ebp),%eax
087990ac +0x1c:  mov    %eax,0x8(%esp)
087990b0 +0x20:  mov    0xc(%ebp),%eax
087990b3 +0x23:  mov    %eax,0x4(%esp)
087990b7 +0x27:  mov    0x8(%ebp),%eax
087990ba +0x2a:  mov    0x4(%eax),%eax
087990bd +0x2d:  add    $0x12c,%eax
087990c2 +0x32:  mov    %eax,(%esp)
087990c5 +0x35:  call   087a3950 <_ZN8TaoCrypt3AES7ProcessEPhPKhj>  ; TaoCrypt::AES::Process(unsigned char*, unsigned char const*, unsigned int)
087990ca +0x3a:  add    $0x14,%esp
087990cd +0x3d:  pop    %ebx
087990ce +0x3e:  pop    %ebp
087990cf +0x3f:  ret
```

## 反编译 C

```c
// yaSSL::AES::decrypt @ 0x8799090

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::decrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::AES::decrypt(AES *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::AES::Process((AES *)(*(int *)(this + 4) + 300),param_1,param_2,param_3);
  return;
}
```
