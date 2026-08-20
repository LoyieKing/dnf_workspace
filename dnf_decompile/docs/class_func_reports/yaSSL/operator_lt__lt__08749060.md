# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_16ChangeCipherSpecE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ChangeCipherSpec const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08749060` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749060  _ZN5yaSSLlsERNS_13output_bufferERKNS_16ChangeCipherSpecE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ChangeCipherSpec const&)
# range [0x08749060, 0x0874909e]
08749060 +0x00:  push   %ebp
08749061 +0x01:  mov    %esp,%ebp
08749063 +0x03:  sub    $0x18,%esp
08749066 +0x06:  mov    %ebx,-0x8(%ebp)
08749069 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874906e +0x0e:  add    $0xc23b2a,%ebx
08749074 +0x14:  mov    %esi,-0x4(%ebp)
08749077 +0x17:  mov    0x8(%ebp),%esi
0874907a +0x1a:  movl   $0xfeedbeef,0x4(%esp)
08749082 +0x22:  mov    %esi,(%esp)
08749085 +0x25:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
0874908a +0x2a:  mov    0xc(%ebp),%edx
0874908d +0x2d:  mov    0x4(%edx),%edx
08749090 +0x30:  mov    %dl,(%eax)
08749092 +0x32:  mov    %esi,%eax
08749094 +0x34:  mov    -0x8(%ebp),%ebx
08749097 +0x37:  mov    -0x4(%ebp),%esi
0874909a +0x3a:  mov    %ebp,%esp
0874909c +0x3c:  pop    %ebp
0874909d +0x3d:  ret
0874909e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8749060

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::ChangeCipherSpec const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,ChangeCipherSpec *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = (char)*(undefined4 *)(param_2 + 4);
  return param_1;
}
```
