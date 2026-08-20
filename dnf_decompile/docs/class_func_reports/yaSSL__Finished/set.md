# set

`_ZN5yaSSL8Finished3setERNS_12input_bufferE`

`yaSSL::Finished::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Finished` | `0x08747200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747200  _ZN5yaSSL8Finished3setERNS_12input_bufferE
#           yaSSL::Finished::set(yaSSL::input_buffer&)
# range [0x08747200, 0x0874722a]
08747200 +0x00:  push   %ebp
08747201 +0x01:  mov    %esp,%ebp
08747203 +0x03:  push   %ebx
08747204 +0x04:  sub    $0x14,%esp
08747207 +0x07:  mov    0x8(%ebp),%eax
0874720a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874720f +0x0f:  add    $0xc25989,%ebx
08747215 +0x15:  mov    %eax,0x4(%esp)
08747219 +0x19:  mov    0xc(%ebp),%eax
0874721c +0x1c:  mov    %eax,(%esp)
0874721f +0x1f:  call   08747190 <_ZN5yaSSLrsERNS_12input_bufferERNS_8FinishedE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::Finished&)
08747224 +0x24:  add    $0x14,%esp
08747227 +0x27:  pop    %ebx
08747228 +0x28:  pop    %ebp
08747229 +0x29:  ret
0874722a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Finished::set @ 0x8747200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Finished::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::Finished::set(Finished *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}
```
