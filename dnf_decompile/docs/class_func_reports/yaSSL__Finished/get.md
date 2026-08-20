# get

`_ZNK5yaSSL8Finished3getERNS_13output_bufferE`

`yaSSL::Finished::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::Finished` | `0x087483c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087483c0  _ZNK5yaSSL8Finished3getERNS_13output_bufferE
#           yaSSL::Finished::get(yaSSL::output_buffer&) const
# range [0x087483c0, 0x087483ea]
087483c0 +0x00:  push   %ebp
087483c1 +0x01:  mov    %esp,%ebp
087483c3 +0x03:  push   %ebx
087483c4 +0x04:  sub    $0x14,%esp
087483c7 +0x07:  mov    0x8(%ebp),%eax
087483ca +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087483cf +0x0f:  add    $0xc247c9,%ebx
087483d5 +0x15:  mov    %eax,0x4(%esp)
087483d9 +0x19:  mov    0xc(%ebp),%eax
087483dc +0x1c:  mov    %eax,(%esp)
087483df +0x1f:  call   08748320 <_ZN5yaSSLlsERNS_13output_bufferERKNS_8FinishedE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Finished const&)
087483e4 +0x24:  add    $0x14,%esp
087483e7 +0x27:  pop    %ebx
087483e8 +0x28:  pop    %ebp
087483e9 +0x29:  ret
087483ea +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Finished::get @ 0x87483c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Finished::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::Finished::get(Finished *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
