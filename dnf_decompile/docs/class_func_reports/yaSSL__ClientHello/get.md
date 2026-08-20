# get

`_ZNK5yaSSL11ClientHello3getERNS_13output_bufferE`

`yaSSL::ClientHello::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientHello` | `0x08748e90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748e90  _ZNK5yaSSL11ClientHello3getERNS_13output_bufferE
#           yaSSL::ClientHello::get(yaSSL::output_buffer&) const
# range [0x08748e90, 0x08748eba]
08748e90 +0x00:  push   %ebp
08748e91 +0x01:  mov    %esp,%ebp
08748e93 +0x03:  push   %ebx
08748e94 +0x04:  sub    $0x14,%esp
08748e97 +0x07:  mov    0x8(%ebp),%eax
08748e9a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08748e9f +0x0f:  add    $0xc23cf9,%ebx
08748ea5 +0x15:  mov    %eax,0x4(%esp)
08748ea9 +0x19:  mov    0xc(%ebp),%eax
08748eac +0x1c:  mov    %eax,(%esp)
08748eaf +0x1f:  call   08748d60 <_ZN5yaSSLlsERNS_13output_bufferERKNS_11ClientHelloE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ClientHello const&)
08748eb4 +0x24:  add    $0x14,%esp
08748eb7 +0x27:  pop    %ebx
08748eb8 +0x28:  pop    %ebp
08748eb9 +0x29:  ret
08748eba +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientHello::get @ 0x8748e90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientHello::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::ClientHello::get(ClientHello *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
