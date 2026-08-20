# set_encryptKey

`_ZN5yaSSL3RC414set_encryptKeyEPKhS2_`

`yaSSL::RC4::set_encryptKey(unsigned char const*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::RC4` | `0x087992c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087992c0  _ZN5yaSSL3RC414set_encryptKeyEPKhS2_
#           yaSSL::RC4::set_encryptKey(unsigned char const*, unsigned char const*)
# range [0x087992c0, 0x087992f9]
087992c0 +0x00:  push   %ebp
087992c1 +0x01:  mov    %esp,%ebp
087992c3 +0x03:  push   %ebx
087992c4 +0x04:  sub    $0x14,%esp
087992c7 +0x07:  mov    0xc(%ebp),%eax
087992ca +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087992cf +0x0f:  add    $0xbd38c9,%ebx
087992d5 +0x15:  movl   $0x10,0x8(%esp)
087992dd +0x1d:  mov    %eax,0x4(%esp)
087992e1 +0x21:  mov    0x8(%ebp),%eax
087992e4 +0x24:  mov    0x4(%eax),%eax
087992e7 +0x27:  mov    %eax,(%esp)
087992ea +0x2a:  call   087a5900 <_ZN8TaoCrypt4ARC46SetKeyEPKhj>  ; TaoCrypt::ARC4::SetKey(unsigned char const*, unsigned int)
087992ef +0x2f:  add    $0x14,%esp
087992f2 +0x32:  pop    %ebx
087992f3 +0x33:  pop    %ebp
087992f4 +0x34:  ret
087992f5 +0x35:  nop
087992f6 +0x36:  lea    0x0(%esi),%esi
087992f9 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::RC4::set_encryptKey @ 0x87992c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::set_encryptKey(unsigned char const*, unsigned char const*) */

void yaSSL::RC4::set_encryptKey(uchar *param_1,uchar *param_2)

{
  TaoCrypt::ARC4::SetKey(*(ARC4 **)(param_1 + 4),param_2,0x10);
  return;
}
```
