# ~HMAC_RMD

`_ZN5yaSSL8HMAC_RMDD0Ev`

`yaSSL::HMAC_RMD::~HMAC_RMD()`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_RMD` | `0x08798ad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798ad0  _ZN5yaSSL8HMAC_RMDD0Ev
#           yaSSL::HMAC_RMD::~HMAC_RMD()
# range [0x08798ad0, 0x08798afa]
08798ad0 +0x00:  push   %ebp
08798ad1 +0x01:  mov    %esp,%ebp
08798ad3 +0x03:  push   %ebx
08798ad4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08798ad9 +0x09:  add    $0xbd40bf,%ebx
08798adf +0x0f:  sub    $0x14,%esp
08798ae2 +0x12:  mov    0x8(%ebp),%eax
08798ae5 +0x15:  mov    %eax,(%esp)
08798ae8 +0x18:  call   08798a70 <_ZN5yaSSL8HMAC_RMDD1Ev>  ; yaSSL::HMAC_RMD::~HMAC_RMD()
08798aed +0x1d:  add    $0x14,%esp
08798af0 +0x20:  pop    %ebx
08798af1 +0x21:  pop    %ebp
08798af2 +0x22:  ret
08798af3 +0x23:  nop
08798af4 +0x24:  lea    0x0(%esi),%esi
08798afa +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_RMD::~HMAC_RMD @ 0x8798ad0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::~HMAC_RMD() */

void __thiscall yaSSL::HMAC_RMD::~HMAC_RMD(HMAC_RMD *this)

{
  ~HMAC_RMD(this);
  return;
}
```
