# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_17ClientKeyExchangeE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ClientKeyExchange const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087483f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087483f0  _ZN5yaSSLlsERNS_13output_bufferERKNS_17ClientKeyExchangeE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ClientKeyExchange const&)
# range [0x087483f0, 0x08748449]
087483f0 +0x00:  push   %ebp
087483f1 +0x01:  mov    %esp,%ebp
087483f3 +0x03:  sub    $0x38,%esp
087483f6 +0x06:  mov    %ebx,-0xc(%ebp)
087483f9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087483fe +0x0e:  add    $0xc2479a,%ebx
08748404 +0x14:  mov    %edi,-0x4(%ebp)
08748407 +0x17:  mov    0xc(%ebp),%edi
0874840a +0x1a:  mov    %esi,-0x8(%ebp)
0874840d +0x1d:  mov    0x8(%ebp),%esi
08748410 +0x20:  mov    %edi,(%esp)
08748413 +0x23:  call   08747150 <_ZNK5yaSSL17ClientKeyExchange12getKeyLengthEv>  ; yaSSL::ClientKeyExchange::getKeyLength() const
08748418 +0x28:  mov    %edi,(%esp)
0874841b +0x2b:  mov    %eax,-0x1c(%ebp)
0874841e +0x2e:  call   08747130 <_ZNK5yaSSL17ClientKeyExchange6getKeyEv>  ; yaSSL::ClientKeyExchange::getKey() const
08748423 +0x33:  mov    -0x1c(%ebp),%edx
08748426 +0x36:  mov    %esi,(%esp)
08748429 +0x39:  mov    %edx,0x8(%esp)
0874842d +0x3d:  mov    %eax,0x4(%esp)
08748431 +0x41:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748436 +0x46:  mov    %esi,%eax
08748438 +0x48:  mov    -0xc(%ebp),%ebx
0874843b +0x4b:  mov    -0x8(%ebp),%esi
0874843e +0x4e:  mov    -0x4(%ebp),%edi
08748441 +0x51:  mov    %ebp,%esp
08748443 +0x53:  pop    %ebp
08748444 +0x54:  ret
08748445 +0x55:  nop
08748446 +0x56:  lea    0x0(%esi),%esi
08748449 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x87483f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::ClientKeyExchange const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,ClientKeyExchange *param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = ClientKeyExchange::getKeyLength(param_2);
  puVar2 = (uchar *)ClientKeyExchange::getKey(param_2);
  output_buffer::write(param_1,puVar2,uVar1);
  return param_1;
}
```
