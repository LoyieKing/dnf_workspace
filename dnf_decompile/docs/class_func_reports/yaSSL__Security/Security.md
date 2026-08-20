# Security

`_ZN5yaSSL8SecurityC1ENS_15ProtocolVersionERNS_10RandomPoolENS_13ConnectionEndERKNS_7CiphersEPNS_7SSL_CTXEb`

`yaSSL::Security::Security(yaSSL::ProtocolVersion, yaSSL::RandomPool&, yaSSL::ConnectionEnd, yaSSL::Ciphers const&, yaSSL::SSL_CTX*, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::Security` | `0x0874f830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f830  _ZN5yaSSL8SecurityC1ENS_15ProtocolVersionERNS_10RandomPoolENS_13ConnectionEndERKNS_7CiphersEPNS_7SSL_CTXEb
#           yaSSL::Security::Security(yaSSL::ProtocolVersion, yaSSL::RandomPool&, yaSSL::ConnectionEnd, yaSSL::Ciphers const&, yaSSL::SSL_CTX*, bool)
# range [0x0874f830, 0x0874f8ca]
0874f830 +0x00:  push   %ebp
0874f831 +0x01:  mov    %esp,%ebp
0874f833 +0x03:  sub    $0x48,%esp
0874f836 +0x06:  mov    %ebx,-0xc(%ebp)
0874f839 +0x09:  movzwl 0xc(%ebp),%eax
0874f83d +0x0d:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f842 +0x12:  add    $0xc1d356,%ebx
0874f848 +0x18:  movzbl 0x20(%ebp),%edx
0874f84c +0x1c:  mov    %esi,-0x8(%ebp)
0874f84f +0x1f:  mov    0x8(%ebp),%esi
0874f852 +0x22:  mov    %edi,-0x4(%ebp)
0874f855 +0x25:  mov    0x10(%ebp),%edi
0874f858 +0x28:  mov    %ax,0x4(%esp)
0874f85d +0x2d:  mov    %dl,-0x19(%ebp)
0874f860 +0x30:  mov    %esi,(%esp)
0874f863 +0x33:  mov    %edi,0x8(%esp)
0874f867 +0x37:  mov    %eax,-0x20(%ebp)
0874f86a +0x3a:  call   08747850 <_ZN5yaSSL10ConnectionC1ENS_15ProtocolVersionERNS_10RandomPoolE>  ; yaSSL::Connection::Connection(yaSSL::ProtocolVersion, yaSSL::RandomPool&)
0874f86f +0x3f:  mov    -0x20(%ebp),%eax
0874f872 +0x42:  movzbl -0x19(%ebp),%edx
0874f876 +0x46:  mov    %ax,0xc(%esp)
0874f87b +0x4b:  mov    0x18(%ebp),%eax
0874f87e +0x4e:  mov    %edx,0x10(%esp)
0874f882 +0x52:  mov    %eax,0x8(%esp)
0874f886 +0x56:  mov    0x14(%ebp),%eax
0874f889 +0x59:  mov    %eax,0x4(%esp)
0874f88d +0x5d:  lea    0x138(%esi),%eax
0874f893 +0x63:  mov    %eax,(%esp)
0874f896 +0x66:  call   0874a820 <_ZN5yaSSL10ParametersC1ENS_13ConnectionEndERKNS_7CiphersENS_15ProtocolVersionEb>  ; yaSSL::Parameters::Parameters(yaSSL::ConnectionEnd, yaSSL::Ciphers const&, yaSSL::ProtocolVersion, bool)
0874f89b +0x6b:  lea    0x818(%esi),%eax
0874f8a1 +0x71:  mov    %edi,0x4(%esp)
0874f8a5 +0x75:  mov    %eax,(%esp)
0874f8a8 +0x78:  call   0874f7d0 <_ZN5yaSSL11SSL_SESSIONC1ERNS_10RandomPoolE>  ; yaSSL::SSL_SESSION::SSL_SESSION(yaSSL::RandomPool&)
0874f8ad +0x7d:  mov    0x1c(%ebp),%eax
0874f8b0 +0x80:  movb   $0x0,0x880(%esi)
0874f8b7 +0x87:  mov    %eax,0x87c(%esi)
0874f8bd +0x8d:  mov    -0xc(%ebp),%ebx
0874f8c0 +0x90:  mov    -0x8(%ebp),%esi
0874f8c3 +0x93:  mov    -0x4(%ebp),%edi
0874f8c6 +0x96:  mov    %ebp,%esp
0874f8c8 +0x98:  pop    %ebp
0874f8c9 +0x99:  ret
0874f8ca +0x9a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Security::Security @ 0x874f830

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Security::Security(yaSSL::ProtocolVersion, yaSSL::RandomPool&, yaSSL::ConnectionEnd,
   yaSSL::Ciphers const&, yaSSL::SSL_CTX*, bool) */

void __thiscall
yaSSL::Security::Security
          (Security *this,undefined2 param_2,RandomPool *param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  Connection::Connection((Connection *)this,param_2,param_3);
  Parameters::Parameters((Parameters *)(this + 0x138),param_4,param_5,param_2,param_7);
  SSL_SESSION::SSL_SESSION((SSL_SESSION *)(this + 0x818),param_3);
  this[0x880] = (Security)0x0;
  *(undefined4 *)(this + 0x87c) = param_6;
  return;
}
```
