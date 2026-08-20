# get

`_ZNK5yaSSL17ClientKeyExchange3getERNS_13output_bufferE`

`yaSSL::ClientKeyExchange::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x08748450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748450  _ZNK5yaSSL17ClientKeyExchange3getERNS_13output_bufferE
#           yaSSL::ClientKeyExchange::get(yaSSL::output_buffer&) const
# range [0x08748450, 0x0874847a]
08748450 +0x00:  push   %ebp
08748451 +0x01:  mov    %esp,%ebp
08748453 +0x03:  push   %ebx
08748454 +0x04:  sub    $0x14,%esp
08748457 +0x07:  mov    0x8(%ebp),%eax
0874845a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874845f +0x0f:  add    $0xc24739,%ebx
08748465 +0x15:  mov    %eax,0x4(%esp)
08748469 +0x19:  mov    0xc(%ebp),%eax
0874846c +0x1c:  mov    %eax,(%esp)
0874846f +0x1f:  call   087483f0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17ClientKeyExchangeE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ClientKeyExchange const&)
08748474 +0x24:  add    $0x14,%esp
08748477 +0x27:  pop    %ebx
08748478 +0x28:  pop    %ebp
08748479 +0x29:  ret
0874847a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::get @ 0x8748450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::ClientKeyExchange::get(ClientKeyExchange *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
