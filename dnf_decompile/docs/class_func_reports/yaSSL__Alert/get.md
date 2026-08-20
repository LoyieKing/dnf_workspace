# get

`_ZNK5yaSSL5Alert3getERNS_13output_bufferE`

`yaSSL::Alert::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::Alert` | `0x08749030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749030  _ZNK5yaSSL5Alert3getERNS_13output_bufferE
#           yaSSL::Alert::get(yaSSL::output_buffer&) const
# range [0x08749030, 0x0874905a]
08749030 +0x00:  push   %ebp
08749031 +0x01:  mov    %esp,%ebp
08749033 +0x03:  push   %ebx
08749034 +0x04:  sub    $0x14,%esp
08749037 +0x07:  mov    0x8(%ebp),%eax
0874903a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874903f +0x0f:  add    $0xc23b59,%ebx
08749045 +0x15:  mov    %eax,0x4(%esp)
08749049 +0x19:  mov    0xc(%ebp),%eax
0874904c +0x1c:  mov    %eax,(%esp)
0874904f +0x1f:  call   08748fd0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_5AlertE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Alert const&)
08749054 +0x24:  add    $0x14,%esp
08749057 +0x27:  pop    %ebx
08749058 +0x28:  pop    %ebp
08749059 +0x29:  ret
0874905a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Alert::get @ 0x8749030

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Alert::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::Alert::get(Alert *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
