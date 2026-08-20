# set

`_ZN5yaSSL15HandShakeHeader3setERNS_12input_bufferE`

`yaSSL::HandShakeHeader::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeHeader` | `0x08747fb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747fb0  _ZN5yaSSL15HandShakeHeader3setERNS_12input_bufferE
#           yaSSL::HandShakeHeader::set(yaSSL::input_buffer&)
# range [0x08747fb0, 0x08747fda]
08747fb0 +0x00:  push   %ebp
08747fb1 +0x01:  mov    %esp,%ebp
08747fb3 +0x03:  push   %ebx
08747fb4 +0x04:  sub    $0x14,%esp
08747fb7 +0x07:  mov    0x8(%ebp),%eax
08747fba +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08747fbf +0x0f:  add    $0xc24bd9,%ebx
08747fc5 +0x15:  mov    %eax,0x4(%esp)
08747fc9 +0x19:  mov    0xc(%ebp),%eax
08747fcc +0x1c:  mov    %eax,(%esp)
08747fcf +0x1f:  call   08747f20 <_ZN5yaSSLrsERNS_12input_bufferERNS_15HandShakeHeaderE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::HandShakeHeader&)
08747fd4 +0x24:  add    $0x14,%esp
08747fd7 +0x27:  pop    %ebx
08747fd8 +0x28:  pop    %ebp
08747fd9 +0x29:  ret
08747fda +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HandShakeHeader::set @ 0x8747fb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HandShakeHeader::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::HandShakeHeader::set(HandShakeHeader *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}
```
