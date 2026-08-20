# CreateClientKeyExchange

`_ZN5yaSSL23CreateClientKeyExchangeEv`

`yaSSL::CreateClientKeyExchange()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087475d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087475d0  _ZN5yaSSL23CreateClientKeyExchangeEv
#           yaSSL::CreateClientKeyExchange()
# range [0x087475d0, 0x0874760e]
087475d0 +0x00:  push   %ebp
087475d1 +0x01:  mov    %esp,%ebp
087475d3 +0x03:  sub    $0x18,%esp
087475d6 +0x06:  mov    %ebx,-0x8(%ebp)
087475d9 +0x09:  mov    %esi,-0x4(%ebp)
087475dc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087475e1 +0x11:  add    $0xc255b7,%ebx
087475e7 +0x17:  movb   $0x0,0x4(%esp)
087475ec +0x1c:  movl   $0xc,(%esp)
087475f3 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087475f8 +0x28:  mov    %eax,%esi
087475fa +0x2a:  mov    %eax,(%esp)
087475fd +0x2d:  call   087470b0 <_ZN5yaSSL17ClientKeyExchangeC1Ev>  ; yaSSL::ClientKeyExchange::ClientKeyExchange()
08747602 +0x32:  mov    %esi,%eax
08747604 +0x34:  mov    -0x8(%ebp),%ebx
08747607 +0x37:  mov    -0x4(%ebp),%esi
0874760a +0x3a:  mov    %ebp,%esp
0874760c +0x3c:  pop    %ebp
0874760d +0x3d:  ret
0874760e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateClientKeyExchange @ 0x87475d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateClientKeyExchange() */

ClientKeyExchange * yaSSL::CreateClientKeyExchange(void)

{
  ClientKeyExchange *this;
  
  this = operator_new(0xc,0);
  ClientKeyExchange::ClientKeyExchange(this);
  return this;
}
```
