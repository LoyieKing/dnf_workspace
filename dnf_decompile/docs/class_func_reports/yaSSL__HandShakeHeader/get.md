# get

`_ZNK5yaSSL15HandShakeHeader3getERNS_13output_bufferE`

`yaSSL::HandShakeHeader::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeHeader` | `0x08749130` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749130  _ZNK5yaSSL15HandShakeHeader3getERNS_13output_bufferE
#           yaSSL::HandShakeHeader::get(yaSSL::output_buffer&) const
# range [0x08749130, 0x0874915a]
08749130 +0x00:  push   %ebp
08749131 +0x01:  mov    %esp,%ebp
08749133 +0x03:  push   %ebx
08749134 +0x04:  sub    $0x14,%esp
08749137 +0x07:  mov    0x8(%ebp),%eax
0874913a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874913f +0x0f:  add    $0xc23a59,%ebx
08749145 +0x15:  mov    %eax,0x4(%esp)
08749149 +0x19:  mov    0xc(%ebp),%eax
0874914c +0x1c:  mov    %eax,(%esp)
0874914f +0x1f:  call   087490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
08749154 +0x24:  add    $0x14,%esp
08749157 +0x27:  pop    %ebx
08749158 +0x28:  pop    %ebp
08749159 +0x29:  ret
0874915a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HandShakeHeader::get @ 0x8749130

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HandShakeHeader::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::HandShakeHeader::get(HandShakeHeader *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
