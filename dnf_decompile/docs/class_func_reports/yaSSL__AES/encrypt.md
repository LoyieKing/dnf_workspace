# encrypt

`_ZN5yaSSL3AES7encryptEPhPKhj`

`yaSSL::AES::encrypt(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::AES` | `0x087990d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087990d0  _ZN5yaSSL3AES7encryptEPhPKhj
#           yaSSL::AES::encrypt(unsigned char*, unsigned char const*, unsigned int)
# range [0x087990d0, 0x0879910c]
087990d0 +0x00:  push   %ebp
087990d1 +0x01:  mov    %esp,%ebp
087990d3 +0x03:  push   %ebx
087990d4 +0x04:  sub    $0x14,%esp
087990d7 +0x07:  mov    0x14(%ebp),%eax
087990da +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087990df +0x0f:  add    $0xbd3ab9,%ebx
087990e5 +0x15:  mov    %eax,0xc(%esp)
087990e9 +0x19:  mov    0x10(%ebp),%eax
087990ec +0x1c:  mov    %eax,0x8(%esp)
087990f0 +0x20:  mov    0xc(%ebp),%eax
087990f3 +0x23:  mov    %eax,0x4(%esp)
087990f7 +0x27:  mov    0x8(%ebp),%eax
087990fa +0x2a:  mov    0x4(%eax),%eax
087990fd +0x2d:  mov    %eax,(%esp)
08799100 +0x30:  call   087a3950 <_ZN8TaoCrypt3AES7ProcessEPhPKhj>  ; TaoCrypt::AES::Process(unsigned char*, unsigned char const*, unsigned int)
08799105 +0x35:  add    $0x14,%esp
08799108 +0x38:  pop    %ebx
08799109 +0x39:  pop    %ebp
0879910a +0x3a:  ret
0879910b +0x3b:  nop
0879910c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::AES::encrypt @ 0x87990d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::encrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::AES::encrypt(AES *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::AES::Process(*(AES **)(this + 4),param_1,param_2,param_3);
  return;
}
```
