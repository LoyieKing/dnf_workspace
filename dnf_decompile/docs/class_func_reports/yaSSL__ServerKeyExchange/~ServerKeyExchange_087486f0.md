# ~ServerKeyExchange

`_ZN5yaSSL17ServerKeyExchangeD0Ev`

`yaSSL::ServerKeyExchange::~ServerKeyExchange()`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x087486f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087486f0  _ZN5yaSSL17ServerKeyExchangeD0Ev
#           yaSSL::ServerKeyExchange::~ServerKeyExchange()
# range [0x087486f0, 0x0874871a]
087486f0 +0x00:  push   %ebp
087486f1 +0x01:  mov    %esp,%ebp
087486f3 +0x03:  push   %ebx
087486f4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087486f9 +0x09:  add    $0xc2449f,%ebx
087486ff +0x0f:  sub    $0x14,%esp
08748702 +0x12:  mov    0x8(%ebp),%eax
08748705 +0x15:  mov    %eax,(%esp)
08748708 +0x18:  call   08748690 <_ZN5yaSSL17ServerKeyExchangeD1Ev>  ; yaSSL::ServerKeyExchange::~ServerKeyExchange()
0874870d +0x1d:  add    $0x14,%esp
08748710 +0x20:  pop    %ebx
08748711 +0x21:  pop    %ebp
08748712 +0x22:  ret
08748713 +0x23:  nop
08748714 +0x24:  lea    0x0(%esi),%esi
0874871a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::~ServerKeyExchange @ 0x87486f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::~ServerKeyExchange() */

void __thiscall yaSSL::ServerKeyExchange::~ServerKeyExchange(ServerKeyExchange *this)

{
  ~ServerKeyExchange(this);
  return;
}
```
