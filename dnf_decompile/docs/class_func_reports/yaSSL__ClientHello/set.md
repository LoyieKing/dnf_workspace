# set

`_ZN5yaSSL11ClientHello3setERNS_12input_bufferE`

`yaSSL::ClientHello::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientHello` | `0x08749400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749400  _ZN5yaSSL11ClientHello3setERNS_12input_bufferE
#           yaSSL::ClientHello::set(yaSSL::input_buffer&)
# range [0x08749400, 0x0874942a]
08749400 +0x00:  push   %ebp
08749401 +0x01:  mov    %esp,%ebp
08749403 +0x03:  push   %ebx
08749404 +0x04:  sub    $0x14,%esp
08749407 +0x07:  mov    0x8(%ebp),%eax
0874940a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874940f +0x0f:  add    $0xc23789,%ebx
08749415 +0x15:  mov    %eax,0x4(%esp)
08749419 +0x19:  mov    0xc(%ebp),%eax
0874941c +0x1c:  mov    %eax,(%esp)
0874941f +0x1f:  call   08749210 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ClientHelloE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::ClientHello&)
08749424 +0x24:  add    $0x14,%esp
08749427 +0x27:  pop    %ebx
08749428 +0x28:  pop    %ebp
08749429 +0x29:  ret
0874942a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientHello::set @ 0x8749400

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientHello::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::ClientHello::set(ClientHello *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}
```
