# encrypt

`_ZN5yaSSL3RC47encryptEPhPKhj`

`yaSSL::RC4::encrypt(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::RC4` | `0x08799240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799240  _ZN5yaSSL3RC47encryptEPhPKhj
#           yaSSL::RC4::encrypt(unsigned char*, unsigned char const*, unsigned int)
# range [0x08799240, 0x0879927c]
08799240 +0x00:  push   %ebp
08799241 +0x01:  mov    %esp,%ebp
08799243 +0x03:  push   %ebx
08799244 +0x04:  sub    $0x14,%esp
08799247 +0x07:  mov    0x14(%ebp),%eax
0879924a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879924f +0x0f:  add    $0xbd3949,%ebx
08799255 +0x15:  mov    %eax,0xc(%esp)
08799259 +0x19:  mov    0x10(%ebp),%eax
0879925c +0x1c:  mov    %eax,0x8(%esp)
08799260 +0x20:  mov    0xc(%ebp),%eax
08799263 +0x23:  mov    %eax,0x4(%esp)
08799267 +0x27:  mov    0x8(%ebp),%eax
0879926a +0x2a:  mov    0x4(%eax),%eax
0879926d +0x2d:  mov    %eax,(%esp)
08799270 +0x30:  call   087a5a20 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj>  ; TaoCrypt::ARC4::Process(unsigned char*, unsigned char const*, unsigned int)
08799275 +0x35:  add    $0x14,%esp
08799278 +0x38:  pop    %ebx
08799279 +0x39:  pop    %ebp
0879927a +0x3a:  ret
0879927b +0x3b:  nop
0879927c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::RC4::encrypt @ 0x8799240

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::encrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::RC4::encrypt(RC4 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  TaoCrypt::ARC4::Process(*(ARC4 **)(this + 4),param_1,param_2,param_3);
  return;
}
```
