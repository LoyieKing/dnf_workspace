# get

`_ZNK5yaSSL4Data3getERNS_13output_bufferE`

`yaSSL::Data::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::Data` | `0x087485d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087485d0  _ZNK5yaSSL4Data3getERNS_13output_bufferE
#           yaSSL::Data::get(yaSSL::output_buffer&) const
# range [0x087485d0, 0x087485fa]
087485d0 +0x00:  push   %ebp
087485d1 +0x01:  mov    %esp,%ebp
087485d3 +0x03:  push   %ebx
087485d4 +0x04:  sub    $0x14,%esp
087485d7 +0x07:  mov    0x8(%ebp),%eax
087485da +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087485df +0x0f:  add    $0xc245b9,%ebx
087485e5 +0x15:  mov    %eax,0x4(%esp)
087485e9 +0x19:  mov    0xc(%ebp),%eax
087485ec +0x1c:  mov    %eax,(%esp)
087485ef +0x1f:  call   08748590 <_ZN5yaSSLlsERNS_13output_bufferERKNS_4DataE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Data const&)
087485f4 +0x24:  add    $0x14,%esp
087485f7 +0x27:  pop    %ebx
087485f8 +0x28:  pop    %ebp
087485f9 +0x29:  ret
087485fa +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Data::get @ 0x87485d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Data::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::Data::get(Data *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
