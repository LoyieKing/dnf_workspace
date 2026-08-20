# set

`_ZN5yaSSL16ChangeCipherSpec3setERNS_12input_bufferE`

`yaSSL::ChangeCipherSpec::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ChangeCipherSpec` | `0x08747ef0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747ef0  _ZN5yaSSL16ChangeCipherSpec3setERNS_12input_bufferE
#           yaSSL::ChangeCipherSpec::set(yaSSL::input_buffer&)
# range [0x08747ef0, 0x08747f1a]
08747ef0 +0x00:  push   %ebp
08747ef1 +0x01:  mov    %esp,%ebp
08747ef3 +0x03:  push   %ebx
08747ef4 +0x04:  sub    $0x14,%esp
08747ef7 +0x07:  mov    0x8(%ebp),%eax
08747efa +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08747eff +0x0f:  add    $0xc24c99,%ebx
08747f05 +0x15:  mov    %eax,0x4(%esp)
08747f09 +0x19:  mov    0xc(%ebp),%eax
08747f0c +0x1c:  mov    %eax,(%esp)
08747f0f +0x1f:  call   08747eb0 <_ZN5yaSSLrsERNS_12input_bufferERNS_16ChangeCipherSpecE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::ChangeCipherSpec&)
08747f14 +0x24:  add    $0x14,%esp
08747f17 +0x27:  pop    %ebx
08747f18 +0x28:  pop    %ebp
08747f19 +0x29:  ret
08747f1a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ChangeCipherSpec::set @ 0x8747ef0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ChangeCipherSpec::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::ChangeCipherSpec::set(ChangeCipherSpec *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}
```
