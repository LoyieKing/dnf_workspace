# get_buffer

`_ZNK5yaSSL11Certificate10get_bufferEv`

`yaSSL::Certificate::get_buffer() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Certificate` | `0x08749980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749980  _ZNK5yaSSL11Certificate10get_bufferEv
#           yaSSL::Certificate::get_buffer() const
# range [0x08749980, 0x087499a9]
08749980 +0x00:  push   %ebp
08749981 +0x01:  mov    %esp,%ebp
08749983 +0x03:  push   %ebx
08749984 +0x04:  sub    $0x14,%esp
08749987 +0x07:  mov    0x8(%ebp),%eax
0874998a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874998f +0x0f:  add    $0xc23209,%ebx
08749995 +0x15:  mov    0x8(%eax),%eax
08749998 +0x18:  mov    %eax,(%esp)
0874999b +0x1b:  call   087973e0 <_ZNK5yaSSL4x50910get_bufferEv>  ; yaSSL::x509::get_buffer() const
087499a0 +0x20:  add    $0x14,%esp
087499a3 +0x23:  pop    %ebx
087499a4 +0x24:  pop    %ebp
087499a5 +0x25:  ret
087499a6 +0x26:  lea    0x0(%esi),%esi
087499a9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Certificate::get_buffer @ 0x8749980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Certificate::get_buffer() const */

void __thiscall yaSSL::Certificate::get_buffer(Certificate *this)

{
  yaSSL::x509::get_buffer(*(x509 **)(this + 8));
  return;
}
```
