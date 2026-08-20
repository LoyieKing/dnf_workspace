# ~ClientKeyExchange

`_ZN5yaSSL17ClientKeyExchangeD0Ev`

`yaSSL::ClientKeyExchange::~ClientKeyExchange()`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x08748660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748660  _ZN5yaSSL17ClientKeyExchangeD0Ev
#           yaSSL::ClientKeyExchange::~ClientKeyExchange()
# range [0x08748660, 0x0874868a]
08748660 +0x00:  push   %ebp
08748661 +0x01:  mov    %esp,%ebp
08748663 +0x03:  push   %ebx
08748664 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08748669 +0x09:  add    $0xc2452f,%ebx
0874866f +0x0f:  sub    $0x14,%esp
08748672 +0x12:  mov    0x8(%ebp),%eax
08748675 +0x15:  mov    %eax,(%esp)
08748678 +0x18:  call   08748600 <_ZN5yaSSL17ClientKeyExchangeD1Ev>  ; yaSSL::ClientKeyExchange::~ClientKeyExchange()
0874867d +0x1d:  add    $0x14,%esp
08748680 +0x20:  pop    %ebx
08748681 +0x21:  pop    %ebp
08748682 +0x22:  ret
08748683 +0x23:  nop
08748684 +0x24:  lea    0x0(%esi),%esi
0874868a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::~ClientKeyExchange @ 0x8748660

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::~ClientKeyExchange() */

void __thiscall yaSSL::ClientKeyExchange::~ClientKeyExchange(ClientKeyExchange *this)

{
  ~ClientKeyExchange(this);
  return;
}
```
