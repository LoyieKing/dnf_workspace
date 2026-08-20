# get

`_ZNK5yaSSL17ServerKeyExchange3getERNS_13output_bufferE`

`yaSSL::ServerKeyExchange::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x08748560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748560  _ZNK5yaSSL17ServerKeyExchange3getERNS_13output_bufferE
#           yaSSL::ServerKeyExchange::get(yaSSL::output_buffer&) const
# range [0x08748560, 0x0874858a]
08748560 +0x00:  push   %ebp
08748561 +0x01:  mov    %esp,%ebp
08748563 +0x03:  push   %ebx
08748564 +0x04:  sub    $0x14,%esp
08748567 +0x07:  mov    0x8(%ebp),%eax
0874856a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874856f +0x0f:  add    $0xc24629,%ebx
08748575 +0x15:  mov    %eax,0x4(%esp)
08748579 +0x19:  mov    0xc(%ebp),%eax
0874857c +0x1c:  mov    %eax,(%esp)
0874857f +0x1f:  call   08748500 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17ServerKeyExchangeE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ServerKeyExchange const&)
08748584 +0x24:  add    $0x14,%esp
08748587 +0x27:  pop    %ebx
08748588 +0x28:  pop    %ebp
08748589 +0x29:  ret
0874858a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::get @ 0x8748560

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::ServerKeyExchange::get(ServerKeyExchange *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
