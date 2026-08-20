# ClientKeyExchange

`_ZN5yaSSL17ClientKeyExchangeC1ERNS_3SSLE`

`yaSSL::ClientKeyExchange::ClientKeyExchange(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x0874b700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b700  _ZN5yaSSL17ClientKeyExchangeC1ERNS_3SSLE
#           yaSSL::ClientKeyExchange::ClientKeyExchange(yaSSL::SSL&)
# range [0x0874b700, 0x0874b739]
0874b700 +0x00:  push   %ebp
0874b701 +0x01:  mov    %esp,%ebp
0874b703 +0x03:  push   %ebx
0874b704 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b709 +0x09:  add    $0xc2148f,%ebx
0874b70f +0x0f:  sub    $0x14,%esp
0874b712 +0x12:  mov    0x8(%ebp),%eax
0874b715 +0x15:  mov    -0x38(%ebx),%edx
0874b71b +0x1b:  add    $0x8,%edx
0874b71e +0x1e:  mov    %edx,(%eax)
0874b720 +0x20:  mov    0xc(%ebp),%edx
0874b723 +0x23:  mov    %eax,(%esp)
0874b726 +0x26:  mov    %edx,0x4(%esp)
0874b72a +0x2a:  call   0874b670 <_ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE>  ; yaSSL::ClientKeyExchange::createKey(yaSSL::SSL&)
0874b72f +0x2f:  add    $0x14,%esp
0874b732 +0x32:  pop    %ebx
0874b733 +0x33:  pop    %ebp
0874b734 +0x34:  ret
0874b735 +0x35:  nop
0874b736 +0x36:  lea    0x0(%esi),%esi
0874b739 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::ClientKeyExchange @ 0x874b700

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::ClientKeyExchange(yaSSL::SSL&) */

void __thiscall yaSSL::ClientKeyExchange::ClientKeyExchange(ClientKeyExchange *this,SSL *param_1)

{
  *(undefined **)this = PTR_vtable_0936cb60 + 8;
  createKey(this,param_1);
  return;
}
```
