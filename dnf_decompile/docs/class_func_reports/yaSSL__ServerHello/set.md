# set

`_ZN5yaSSL11ServerHello3setERNS_12input_bufferE`

`yaSSL::ServerHello::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerHello` | `0x08747df0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747df0  _ZN5yaSSL11ServerHello3setERNS_12input_bufferE
#           yaSSL::ServerHello::set(yaSSL::input_buffer&)
# range [0x08747df0, 0x08747e1a]
08747df0 +0x00:  push   %ebp
08747df1 +0x01:  mov    %esp,%ebp
08747df3 +0x03:  push   %ebx
08747df4 +0x04:  sub    $0x14,%esp
08747df7 +0x07:  mov    0x8(%ebp),%eax
08747dfa +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08747dff +0x0f:  add    $0xc24d99,%ebx
08747e05 +0x15:  mov    %eax,0x4(%esp)
08747e09 +0x19:  mov    0xc(%ebp),%eax
08747e0c +0x1c:  mov    %eax,(%esp)
08747e0f +0x1f:  call   08747d10 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ServerHelloE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::ServerHello&)
08747e14 +0x24:  add    $0x14,%esp
08747e17 +0x27:  pop    %ebx
08747e18 +0x28:  pop    %ebp
08747e19 +0x29:  ret
08747e1a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ServerHello::set @ 0x8747df0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHello::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::ServerHello::set(ServerHello *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}
```
