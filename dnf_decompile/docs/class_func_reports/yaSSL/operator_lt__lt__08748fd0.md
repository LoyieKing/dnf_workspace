# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_5AlertE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Alert const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08748fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748fd0  _ZN5yaSSLlsERNS_13output_bufferERKNS_5AlertE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Alert const&)
# range [0x08748fd0, 0x0874902a]
08748fd0 +0x00:  push   %ebp
08748fd1 +0x01:  mov    %esp,%ebp
08748fd3 +0x03:  sub    $0x28,%esp
08748fd6 +0x06:  mov    %ebx,-0xc(%ebp)
08748fd9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08748fde +0x0e:  add    $0xc23bba,%ebx
08748fe4 +0x14:  mov    %esi,-0x8(%ebp)
08748fe7 +0x17:  mov    0x8(%ebp),%esi
08748fea +0x1a:  mov    %edi,-0x4(%ebp)
08748fed +0x1d:  mov    0xc(%ebp),%edi
08748ff0 +0x20:  movl   $0xfeedbeef,0x4(%esp)
08748ff8 +0x28:  mov    %esi,(%esp)
08748ffb +0x2b:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08749000 +0x30:  mov    0x4(%edi),%edx
08749003 +0x33:  mov    %dl,(%eax)
08749005 +0x35:  mov    %esi,(%esp)
08749008 +0x38:  movl   $0xfeedbeef,0x4(%esp)
08749010 +0x40:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08749015 +0x45:  mov    0x8(%edi),%edx
08749018 +0x48:  mov    %dl,(%eax)
0874901a +0x4a:  mov    %esi,%eax
0874901c +0x4c:  mov    -0xc(%ebp),%ebx
0874901f +0x4f:  mov    -0x8(%ebp),%esi
08749022 +0x52:  mov    -0x4(%ebp),%edi
08749025 +0x55:  mov    %ebp,%esp
08749027 +0x57:  pop    %ebp
08749028 +0x58:  ret
08749029 +0x59:  nop
0874902a +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8748fd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::Alert const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,Alert *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = (char)*(undefined4 *)(param_2 + 4);
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = (char)*(undefined4 *)(param_2 + 8);
  return param_1;
}
```
