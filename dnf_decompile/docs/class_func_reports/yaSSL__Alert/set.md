# set

`_ZN5yaSSL5Alert3setERNS_12input_bufferE`

`yaSSL::Alert::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Alert` | `0x08747e80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747e80  _ZN5yaSSL5Alert3setERNS_12input_bufferE
#           yaSSL::Alert::set(yaSSL::input_buffer&)
# range [0x08747e80, 0x08747eaa]
08747e80 +0x00:  push   %ebp
08747e81 +0x01:  mov    %esp,%ebp
08747e83 +0x03:  push   %ebx
08747e84 +0x04:  sub    $0x14,%esp
08747e87 +0x07:  mov    0x8(%ebp),%eax
08747e8a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08747e8f +0x0f:  add    $0xc24d09,%ebx
08747e95 +0x15:  mov    %eax,0x4(%esp)
08747e99 +0x19:  mov    0xc(%ebp),%eax
08747e9c +0x1c:  mov    %eax,(%esp)
08747e9f +0x1f:  call   08747e20 <_ZN5yaSSLrsERNS_12input_bufferERNS_5AlertE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::Alert&)
08747ea4 +0x24:  add    $0x14,%esp
08747ea7 +0x27:  pop    %ebx
08747ea8 +0x28:  pop    %ebp
08747ea9 +0x29:  ret
08747eaa +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Alert::set @ 0x8747e80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Alert::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::Alert::set(Alert *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}
```
