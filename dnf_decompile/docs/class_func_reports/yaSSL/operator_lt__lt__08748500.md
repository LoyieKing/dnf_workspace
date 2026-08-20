# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_17ServerKeyExchangeE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ServerKeyExchange const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08748500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748500  _ZN5yaSSLlsERNS_13output_bufferERKNS_17ServerKeyExchangeE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ServerKeyExchange const&)
# range [0x08748500, 0x08748559]
08748500 +0x00:  push   %ebp
08748501 +0x01:  mov    %esp,%ebp
08748503 +0x03:  sub    $0x38,%esp
08748506 +0x06:  mov    %ebx,-0xc(%ebp)
08748509 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874850e +0x0e:  add    $0xc2468a,%ebx
08748514 +0x14:  mov    %edi,-0x4(%ebp)
08748517 +0x17:  mov    0xc(%ebp),%edi
0874851a +0x1a:  mov    %esi,-0x8(%ebp)
0874851d +0x1d:  mov    0x8(%ebp),%esi
08748520 +0x20:  mov    %edi,(%esp)
08748523 +0x23:  call   08746fe0 <_ZNK5yaSSL17ServerKeyExchange12getKeyLengthEv>  ; yaSSL::ServerKeyExchange::getKeyLength() const
08748528 +0x28:  mov    %edi,(%esp)
0874852b +0x2b:  mov    %eax,-0x1c(%ebp)
0874852e +0x2e:  call   08746fc0 <_ZNK5yaSSL17ServerKeyExchange6getKeyEv>  ; yaSSL::ServerKeyExchange::getKey() const
08748533 +0x33:  mov    -0x1c(%ebp),%edx
08748536 +0x36:  mov    %esi,(%esp)
08748539 +0x39:  mov    %edx,0x8(%esp)
0874853d +0x3d:  mov    %eax,0x4(%esp)
08748541 +0x41:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748546 +0x46:  mov    %esi,%eax
08748548 +0x48:  mov    -0xc(%ebp),%ebx
0874854b +0x4b:  mov    -0x8(%ebp),%esi
0874854e +0x4e:  mov    -0x4(%ebp),%edi
08748551 +0x51:  mov    %ebp,%esp
08748553 +0x53:  pop    %ebp
08748554 +0x54:  ret
08748555 +0x55:  nop
08748556 +0x56:  lea    0x0(%esi),%esi
08748559 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8748500

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::ServerKeyExchange const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,ServerKeyExchange *param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = ServerKeyExchange::getKeyLength(param_2);
  puVar2 = (uchar *)ServerKeyExchange::getKey(param_2);
  output_buffer::write(param_1,puVar2,uVar1);
  return param_1;
}
```
