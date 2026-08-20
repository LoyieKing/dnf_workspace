# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_16ChangeCipherSpecE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::ChangeCipherSpec&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747eb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747eb0  _ZN5yaSSLrsERNS_12input_bufferERNS_16ChangeCipherSpecE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::ChangeCipherSpec&)
# range [0x08747eb0, 0x08747eef]
08747eb0 +0x00:  push   %ebp
08747eb1 +0x01:  mov    %esp,%ebp
08747eb3 +0x03:  sub    $0x18,%esp
08747eb6 +0x06:  mov    %ebx,-0x8(%ebp)
08747eb9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08747ebe +0x0e:  add    $0xc24cda,%ebx
08747ec4 +0x14:  mov    %esi,-0x4(%ebp)
08747ec7 +0x17:  mov    0x8(%ebp),%esi
08747eca +0x1a:  movl   $0xfeedbeef,0x4(%esp)
08747ed2 +0x22:  mov    %esi,(%esp)
08747ed5 +0x25:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747eda +0x2a:  movzbl (%eax),%edx
08747edd +0x2d:  mov    0xc(%ebp),%eax
08747ee0 +0x30:  mov    %edx,0x4(%eax)
08747ee3 +0x33:  mov    %esi,%eax
08747ee5 +0x35:  mov    -0x8(%ebp),%ebx
08747ee8 +0x38:  mov    -0x4(%ebp),%esi
08747eeb +0x3b:  mov    %ebp,%esp
08747eed +0x3d:  pop    %ebp
08747eee +0x3e:  ret
08747eef +0x3f:  nop
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x8747eb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::ChangeCipherSpec&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,ChangeCipherSpec *param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)(param_2 + 4) = (uint)*pbVar1;
  return param_1;
}
```
