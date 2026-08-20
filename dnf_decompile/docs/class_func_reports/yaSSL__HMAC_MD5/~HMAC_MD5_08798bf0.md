# ~HMAC_MD5

`_ZN5yaSSL8HMAC_MD5D0Ev`

`yaSSL::HMAC_MD5::~HMAC_MD5()`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_MD5` | `0x08798bf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798bf0  _ZN5yaSSL8HMAC_MD5D0Ev
#           yaSSL::HMAC_MD5::~HMAC_MD5()
# range [0x08798bf0, 0x08798c1a]
08798bf0 +0x00:  push   %ebp
08798bf1 +0x01:  mov    %esp,%ebp
08798bf3 +0x03:  push   %ebx
08798bf4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08798bf9 +0x09:  add    $0xbd3f9f,%ebx
08798bff +0x0f:  sub    $0x14,%esp
08798c02 +0x12:  mov    0x8(%ebp),%eax
08798c05 +0x15:  mov    %eax,(%esp)
08798c08 +0x18:  call   08798b90 <_ZN5yaSSL8HMAC_MD5D1Ev>  ; yaSSL::HMAC_MD5::~HMAC_MD5()
08798c0d +0x1d:  add    $0x14,%esp
08798c10 +0x20:  pop    %ebx
08798c11 +0x21:  pop    %ebp
08798c12 +0x22:  ret
08798c13 +0x23:  nop
08798c14 +0x24:  lea    0x0(%esi),%esi
08798c1a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_MD5::~HMAC_MD5 @ 0x8798bf0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::~HMAC_MD5() */

void __thiscall yaSSL::HMAC_MD5::~HMAC_MD5(HMAC_MD5 *this)

{
  ~HMAC_MD5(this);
  return;
}
```
