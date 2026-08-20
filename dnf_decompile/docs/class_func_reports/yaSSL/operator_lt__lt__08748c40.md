# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_18CertificateRequestE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::CertificateRequest const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08748c40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748c40  _ZN5yaSSLlsERNS_13output_bufferERKNS_18CertificateRequestE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::CertificateRequest const&)
# range [0x08748c40, 0x08748d2e]
08748c40 +0x00:  push   %ebp
08748c41 +0x01:  mov    %esp,%ebp
08748c43 +0x03:  push   %edi
08748c44 +0x04:  push   %esi
08748c45 +0x05:  push   %ebx
08748c46 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
08748c4b +0x0b:  add    $0xc23f4d,%ebx
08748c51 +0x11:  sub    $0x3c,%esp
08748c54 +0x14:  mov    0xc(%ebp),%edx
08748c57 +0x17:  mov    0x8(%ebp),%edi
08748c5a +0x1a:  movl   $0xfeedbeef,0x4(%esp)
08748c62 +0x22:  mov    %edx,-0x30(%ebp)
08748c65 +0x25:  mov    %edi,(%esp)
08748c68 +0x28:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748c6d +0x2d:  mov    -0x30(%ebp),%edx
08748c70 +0x30:  mov    0x24(%edx),%ecx
08748c73 +0x33:  mov    %cl,(%eax)
08748c75 +0x35:  mov    0x24(%edx),%eax
08748c78 +0x38:  test   %eax,%eax
08748c7a +0x3a:  jle    08748ca4 <+0x64>
08748c7c +0x3c:  xor    %esi,%esi
08748c7e +0x3e:  xchg   %ax,%ax
08748c80 +0x40:  mov    %edx,-0x30(%ebp)
08748c83 +0x43:  movl   $0xfeedbeef,0x4(%esp)
08748c8b +0x4b:  mov    %edi,(%esp)
08748c8e +0x4e:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748c93 +0x53:  mov    -0x30(%ebp),%edx
08748c96 +0x56:  mov    0x8(%edx,%esi,4),%ecx
08748c9a +0x5a:  add    $0x1,%esi
08748c9d +0x5d:  mov    %cl,(%eax)
08748c9f +0x5f:  cmp    %esi,0x24(%edx)
08748ca2 +0x62:  jg     08748c80 <+0x40>
08748ca4 +0x64:  mov    %edx,(%esp)
08748ca7 +0x67:  lea    -0x1a(%ebp),%esi
08748caa +0x6a:  mov    %edx,-0x30(%ebp)
08748cad +0x6d:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
08748cb2 +0x72:  mov    -0x30(%ebp),%edx
08748cb5 +0x75:  mov    %esi,0x4(%esp)
08748cb9 +0x79:  sub    0x24(%edx),%ax
08748cbd +0x7d:  sub    $0x3,%eax
08748cc0 +0x80:  movzwl %ax,%eax
08748cc3 +0x83:  mov    %eax,(%esp)
08748cc6 +0x86:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
08748ccb +0x8b:  mov    %esi,0x4(%esp)
08748ccf +0x8f:  movl   $0x2,0x8(%esp)
08748cd7 +0x97:  mov    %edi,(%esp)
08748cda +0x9a:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748cdf +0x9f:  mov    -0x30(%ebp),%edx
08748ce2 +0xa2:  mov    0x28(%edx),%esi
08748ce5 +0xa5:  test   %esi,%esi
08748ce7 +0xa7:  je     08748d23 <+0xe3>
08748ce9 +0xa9:  lea    -0x1c(%ebp),%eax
08748cec +0xac:  mov    %eax,-0x2c(%ebp)
08748cef +0xaf:  nop
08748cf0 +0xb0:  mov    -0x2c(%ebp),%eax
08748cf3 +0xb3:  mov    %eax,0x4(%esp)
08748cf7 +0xb7:  mov    0x8(%esi),%eax
08748cfa +0xba:  mov    %eax,(%esp)
08748cfd +0xbd:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
08748d02 +0xc2:  movzwl -0x1c(%ebp),%eax
08748d06 +0xc6:  add    $0x2,%eax
08748d09 +0xc9:  mov    %eax,0x8(%esp)
08748d0d +0xcd:  mov    0x8(%esi),%eax
08748d10 +0xd0:  mov    %edi,(%esp)
08748d13 +0xd3:  mov    %eax,0x4(%esp)
08748d17 +0xd7:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748d1c +0xdc:  mov    0x4(%esi),%esi
08748d1f +0xdf:  test   %esi,%esi
08748d21 +0xe1:  jne    08748cf0 <+0xb0>
08748d23 +0xe3:  add    $0x3c,%esp
08748d26 +0xe6:  mov    %edi,%eax
08748d28 +0xe8:  pop    %ebx
08748d29 +0xe9:  pop    %esi
08748d2a +0xea:  pop    %edi
08748d2b +0xeb:  pop    %ebp
08748d2c +0xec:  ret
08748d2d +0xed:  nop
08748d2e +0xee:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8748c40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::CertificateRequest const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,CertificateRequest *param_2)

{
  int iVar1;
  short sVar2;
  undefined1 *puVar3;
  int iVar4;
  ushort local_20;
  uchar local_1e [10];
  undefined4 uStack_14;
  
  uStack_14 = 0x8748c4b;
  puVar3 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar3 = (char)*(undefined4 *)(param_2 + 0x24);
  if (0 < *(int *)(param_2 + 0x24)) {
    iVar4 = 0;
    do {
      puVar3 = (undefined1 *)output_buffer::operator[]((uint)param_1);
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *puVar3 = (char)*(undefined4 *)(param_2 + iVar1 + 8);
    } while (iVar4 < *(int *)(param_2 + 0x24));
  }
  sVar2 = HandShakeBase::get_length((HandShakeBase *)param_2);
  c16toa((sVar2 - *(short *)(param_2 + 0x24)) - 3,local_1e);
  output_buffer::write(param_1,local_1e,2);
  iVar4 = *(int *)(param_2 + 0x28);
  if (iVar4 != 0) {
    do {
      ato16(*(uchar **)(iVar4 + 8),&local_20);
      output_buffer::write(param_1,*(uchar **)(iVar4 + 8),local_20 + 2);
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != 0);
  }
  return param_1;
}
```
