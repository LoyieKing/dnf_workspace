# ~HMAC_SHA

`_ZN5yaSSL8HMAC_SHAD0Ev`

`yaSSL::HMAC_SHA::~HMAC_SHA()`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_SHA` | `0x08798b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798b60  _ZN5yaSSL8HMAC_SHAD0Ev
#           yaSSL::HMAC_SHA::~HMAC_SHA()
# range [0x08798b60, 0x08798b8a]
08798b60 +0x00:  push   %ebp
08798b61 +0x01:  mov    %esp,%ebp
08798b63 +0x03:  push   %ebx
08798b64 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08798b69 +0x09:  add    $0xbd402f,%ebx
08798b6f +0x0f:  sub    $0x14,%esp
08798b72 +0x12:  mov    0x8(%ebp),%eax
08798b75 +0x15:  mov    %eax,(%esp)
08798b78 +0x18:  call   08798b00 <_ZN5yaSSL8HMAC_SHAD1Ev>  ; yaSSL::HMAC_SHA::~HMAC_SHA()
08798b7d +0x1d:  add    $0x14,%esp
08798b80 +0x20:  pop    %ebx
08798b81 +0x21:  pop    %ebp
08798b82 +0x22:  ret
08798b83 +0x23:  nop
08798b84 +0x24:  lea    0x0(%esi),%esi
08798b8a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_SHA::~HMAC_SHA @ 0x8798b60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::~HMAC_SHA() */

void __thiscall yaSSL::HMAC_SHA::~HMAC_SHA(HMAC_SHA *this)

{
  ~HMAC_SHA(this);
  return;
}
```
