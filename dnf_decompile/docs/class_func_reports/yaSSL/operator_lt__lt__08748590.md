# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_4DataE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Data const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08748590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748590  _ZN5yaSSLlsERNS_13output_bufferERKNS_4DataE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Data const&)
# range [0x08748590, 0x087485cf]
08748590 +0x00:  push   %ebp
08748591 +0x01:  mov    %esp,%ebp
08748593 +0x03:  sub    $0x18,%esp
08748596 +0x06:  mov    0xc(%ebp),%eax
08748599 +0x09:  mov    %ebx,-0x8(%ebp)
0874859c +0x0c:  mov    %esi,-0x4(%ebp)
0874859f +0x0f:  mov    0x8(%ebp),%esi
087485a2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087485a7 +0x17:  add    $0xc245f1,%ebx
087485ad +0x1d:  movzwl 0x4(%eax),%edx
087485b1 +0x21:  mov    %edx,0x8(%esp)
087485b5 +0x25:  mov    0xc(%eax),%eax
087485b8 +0x28:  mov    %esi,(%esp)
087485bb +0x2b:  mov    %eax,0x4(%esp)
087485bf +0x2f:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087485c4 +0x34:  mov    %esi,%eax
087485c6 +0x36:  mov    -0x8(%ebp),%ebx
087485c9 +0x39:  mov    -0x4(%ebp),%esi
087485cc +0x3c:  mov    %ebp,%esp
087485ce +0x3e:  pop    %ebp
087485cf +0x3f:  ret
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8748590

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::Data const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,Data *param_2)

{
  output_buffer::write(param_1,*(uchar **)(param_2 + 0xc),(uint)*(ushort *)(param_2 + 4));
  return param_1;
}
```
