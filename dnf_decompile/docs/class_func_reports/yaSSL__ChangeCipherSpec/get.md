# get

`_ZNK5yaSSL16ChangeCipherSpec3getERNS_13output_bufferE`

`yaSSL::ChangeCipherSpec::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::ChangeCipherSpec` | `0x087490a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087490a0  _ZNK5yaSSL16ChangeCipherSpec3getERNS_13output_bufferE
#           yaSSL::ChangeCipherSpec::get(yaSSL::output_buffer&) const
# range [0x087490a0, 0x087490ca]
087490a0 +0x00:  push   %ebp
087490a1 +0x01:  mov    %esp,%ebp
087490a3 +0x03:  push   %ebx
087490a4 +0x04:  sub    $0x14,%esp
087490a7 +0x07:  mov    0x8(%ebp),%eax
087490aa +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087490af +0x0f:  add    $0xc23ae9,%ebx
087490b5 +0x15:  mov    %eax,0x4(%esp)
087490b9 +0x19:  mov    0xc(%ebp),%eax
087490bc +0x1c:  mov    %eax,(%esp)
087490bf +0x1f:  call   08749060 <_ZN5yaSSLlsERNS_13output_bufferERKNS_16ChangeCipherSpecE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ChangeCipherSpec const&)
087490c4 +0x24:  add    $0x14,%esp
087490c7 +0x27:  pop    %ebx
087490c8 +0x28:  pop    %ebp
087490c9 +0x29:  ret
087490ca +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ChangeCipherSpec::get @ 0x87490a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ChangeCipherSpec::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::ChangeCipherSpec::get(ChangeCipherSpec *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
