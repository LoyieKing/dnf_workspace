# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087490d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087490d0  _ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
# range [0x087490d0, 0x0874912c]
087490d0 +0x00:  push   %ebp
087490d1 +0x01:  mov    %esp,%ebp
087490d3 +0x03:  sub    $0x28,%esp
087490d6 +0x06:  mov    %ebx,-0xc(%ebp)
087490d9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087490de +0x0e:  add    $0xc23aba,%ebx
087490e4 +0x14:  mov    %esi,-0x8(%ebp)
087490e7 +0x17:  mov    0x8(%ebp),%esi
087490ea +0x1a:  mov    %edi,-0x4(%ebp)
087490ed +0x1d:  mov    0xc(%ebp),%edi
087490f0 +0x20:  movl   $0xfeedbeef,0x4(%esp)
087490f8 +0x28:  mov    %esi,(%esp)
087490fb +0x2b:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08749100 +0x30:  mov    0x4(%edi),%edx
08749103 +0x33:  add    $0x8,%edi
08749106 +0x36:  mov    %dl,(%eax)
08749108 +0x38:  mov    %edi,0x4(%esp)
0874910c +0x3c:  mov    %esi,(%esp)
0874910f +0x3f:  movl   $0x3,0x8(%esp)
08749117 +0x47:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0874911c +0x4c:  mov    %esi,%eax
0874911e +0x4e:  mov    -0xc(%ebp),%ebx
08749121 +0x51:  mov    -0x8(%ebp),%esi
08749124 +0x54:  mov    -0x4(%ebp),%edi
08749127 +0x57:  mov    %ebp,%esp
08749129 +0x59:  pop    %ebp
0874912a +0x5a:  ret
0874912b +0x5b:  nop
0874912c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x87490d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,HandShakeHeader *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = (char)*(undefined4 *)(param_2 + 4);
  output_buffer::write(param_1,(uchar *)(param_2 + 8),3);
  return param_1;
}
```
