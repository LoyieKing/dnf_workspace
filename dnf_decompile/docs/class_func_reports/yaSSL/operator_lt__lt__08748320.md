# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_8FinishedE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Finished const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08748320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748320  _ZN5yaSSLlsERNS_13output_bufferERKNS_8FinishedE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Finished const&)
# range [0x08748320, 0x087483b9]
08748320 +0x00:  push   %ebp
08748321 +0x01:  mov    %esp,%ebp
08748323 +0x03:  sub    $0x28,%esp
08748326 +0x06:  mov    %ebx,-0xc(%ebp)
08748329 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874832e +0x0e:  add    $0xc2486a,%ebx
08748334 +0x14:  mov    %edi,-0x4(%ebp)
08748337 +0x17:  mov    0xc(%ebp),%edi
0874833a +0x1a:  mov    %esi,-0x8(%ebp)
0874833d +0x1d:  mov    0x8(%ebp),%esi
08748340 +0x20:  mov    %edi,(%esp)
08748343 +0x23:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
08748348 +0x28:  cmp    $0x24,%eax
0874834b +0x2b:  je     08748378 <+0x58>
0874834d +0x2d:  add    $0x8,%edi
08748350 +0x30:  mov    %edi,0x4(%esp)
08748354 +0x34:  mov    %esi,(%esp)
08748357 +0x37:  movl   $0xc,0x8(%esp)
0874835f +0x3f:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748364 +0x44:  mov    %esi,%eax
08748366 +0x46:  mov    -0xc(%ebp),%ebx
08748369 +0x49:  mov    -0x8(%ebp),%esi
0874836c +0x4c:  mov    -0x4(%ebp),%edi
0874836f +0x4f:  mov    %ebp,%esp
08748371 +0x51:  pop    %ebp
08748372 +0x52:  ret
08748373 +0x53:  nop
08748374 +0x54:  lea    0x0(%esi,%eiz,1),%esi
08748378 +0x58:  lea    0x8(%edi),%eax
0874837b +0x5b:  add    $0x18,%edi
0874837e +0x5e:  mov    %eax,0x4(%esp)
08748382 +0x62:  mov    %esi,(%esp)
08748385 +0x65:  movl   $0x10,0x8(%esp)
0874838d +0x6d:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748392 +0x72:  mov    %edi,0x4(%esp)
08748396 +0x76:  mov    %esi,(%esp)
08748399 +0x79:  movl   $0x14,0x8(%esp)
087483a1 +0x81:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087483a6 +0x86:  mov    %esi,%eax
087483a8 +0x88:  mov    -0xc(%ebp),%ebx
087483ab +0x8b:  mov    -0x8(%ebp),%esi
087483ae +0x8e:  mov    -0x4(%ebp),%edi
087483b1 +0x91:  mov    %ebp,%esp
087483b3 +0x93:  pop    %ebp
087483b4 +0x94:  ret
087483b5 +0x95:  nop
087483b6 +0x96:  lea    0x0(%esi),%esi
087483b9 +0x99:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8748320

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::Finished const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,Finished *param_2)

{
  int iVar1;
  
  iVar1 = HandShakeBase::get_length((HandShakeBase *)param_2);
  if (iVar1 != 0x24) {
    output_buffer::write(param_1,(uchar *)(param_2 + 8),0xc);
    return param_1;
  }
  output_buffer::write(param_1,(uchar *)(param_2 + 8),0x10);
  output_buffer::write(param_1,(uchar *)(param_2 + 0x18),0x14);
  return param_1;
}
```
