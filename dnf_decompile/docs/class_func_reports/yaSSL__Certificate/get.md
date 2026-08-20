# get

`_ZNK5yaSSL11Certificate3getERNS_13output_bufferE`

`yaSSL::Certificate::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::Certificate` | `0x08749a60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749a60  _ZNK5yaSSL11Certificate3getERNS_13output_bufferE
#           yaSSL::Certificate::get(yaSSL::output_buffer&) const
# range [0x08749a60, 0x08749a8a]
08749a60 +0x00:  push   %ebp
08749a61 +0x01:  mov    %esp,%ebp
08749a63 +0x03:  push   %ebx
08749a64 +0x04:  sub    $0x14,%esp
08749a67 +0x07:  mov    0x8(%ebp),%eax
08749a6a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08749a6f +0x0f:  add    $0xc23129,%ebx
08749a75 +0x15:  mov    %eax,0x4(%esp)
08749a79 +0x19:  mov    0xc(%ebp),%eax
08749a7c +0x1c:  mov    %eax,(%esp)
08749a7f +0x1f:  call   087499b0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_11CertificateE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Certificate const&)
08749a84 +0x24:  add    $0x14,%esp
08749a87 +0x27:  pop    %ebx
08749a88 +0x28:  pop    %ebp
08749a89 +0x29:  ret
08749a8a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Certificate::get @ 0x8749a60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Certificate::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::Certificate::get(Certificate *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
