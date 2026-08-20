# set_decryptKey

`_ZN5yaSSL3RC414set_decryptKeyEPKhS2_`

`yaSSL::RC4::set_decryptKey(unsigned char const*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::RC4` | `0x08799280` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799280  _ZN5yaSSL3RC414set_decryptKeyEPKhS2_
#           yaSSL::RC4::set_decryptKey(unsigned char const*, unsigned char const*)
# range [0x08799280, 0x087992ba]
08799280 +0x00:  push   %ebp
08799281 +0x01:  mov    %esp,%ebp
08799283 +0x03:  push   %ebx
08799284 +0x04:  sub    $0x14,%esp
08799287 +0x07:  mov    0xc(%ebp),%eax
0879928a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879928f +0x0f:  add    $0xbd3909,%ebx
08799295 +0x15:  movl   $0x10,0x8(%esp)
0879929d +0x1d:  mov    %eax,0x4(%esp)
087992a1 +0x21:  mov    0x8(%ebp),%eax
087992a4 +0x24:  mov    0x4(%eax),%eax
087992a7 +0x27:  add    $0x102,%eax
087992ac +0x2c:  mov    %eax,(%esp)
087992af +0x2f:  call   087a5900 <_ZN8TaoCrypt4ARC46SetKeyEPKhj>  ; TaoCrypt::ARC4::SetKey(unsigned char const*, unsigned int)
087992b4 +0x34:  add    $0x14,%esp
087992b7 +0x37:  pop    %ebx
087992b8 +0x38:  pop    %ebp
087992b9 +0x39:  ret
087992ba +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::RC4::set_decryptKey @ 0x8799280

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::set_decryptKey(unsigned char const*, unsigned char const*) */

void yaSSL::RC4::set_decryptKey(uchar *param_1,uchar *param_2)

{
  TaoCrypt::ARC4::SetKey((ARC4 *)(*(int *)(param_1 + 4) + 0x102),param_2,0x10);
  return;
}
```
