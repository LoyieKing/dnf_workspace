# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::CertificateRequest&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08748990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748990  _ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::CertificateRequest&)
# range [0x08748990, 0x08748afa]
08748990 +0x000:  push   %ebp
08748991 +0x001:  mov    %esp,%ebp
08748993 +0x003:  push   %edi
08748994 +0x004:  push   %esi
08748995 +0x005:  push   %ebx
08748996 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874899b +0x00b:  add    $0xc241fd,%ebx
087489a1 +0x011:  sub    $0x3c,%esp
087489a4 +0x014:  mov    0x8(%ebp),%eax
087489a7 +0x017:  mov    0xc(%ebp),%esi
087489aa +0x01a:  movl   $0xfeedbeef,0x4(%esp)
087489b2 +0x022:  mov    %eax,(%esp)
087489b5 +0x025:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
087489ba +0x02a:  movzbl (%eax),%eax
087489bd +0x02d:  test   %eax,%eax
087489bf +0x02f:  mov    %eax,0x24(%esi)
087489c2 +0x032:  je     087489ea <+0x5a>
087489c4 +0x034:  xor    %edi,%edi
087489c6 +0x036:  xchg   %ax,%ax
087489c8 +0x038:  mov    0x8(%ebp),%eax
087489cb +0x03b:  movl   $0xfeedbeef,0x4(%esp)
087489d3 +0x043:  mov    %eax,(%esp)
087489d6 +0x046:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
087489db +0x04b:  movzbl (%eax),%eax
087489de +0x04e:  mov    %eax,0x8(%esi,%edi,4)
087489e2 +0x052:  add    $0x1,%edi
087489e5 +0x055:  cmp    %edi,0x24(%esi)
087489e8 +0x058:  jg     087489c8 <+0x38>
087489ea +0x05a:  lea    -0x1a(%ebp),%eax
087489ed +0x05d:  mov    %eax,-0x2c(%ebp)
087489f0 +0x060:  mov    %eax,0x4(%esp)
087489f4 +0x064:  mov    0x8(%ebp),%eax
087489f7 +0x067:  movl   $0x2,0x8(%esp)
087489ff +0x06f:  mov    %eax,(%esp)
08748a02 +0x072:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08748a07 +0x077:  lea    -0x1c(%ebp),%eax
08748a0a +0x07a:  mov    %eax,0x4(%esp)
08748a0e +0x07e:  mov    -0x2c(%ebp),%eax
08748a11 +0x081:  mov    %eax,(%esp)
08748a14 +0x084:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
08748a19 +0x089:  cmpw   $0x0,-0x1c(%ebp)
08748a1e +0x08e:  je     08748ae8 <+0x158>
08748a24 +0x094:  lea    -0x1e(%ebp),%eax
08748a27 +0x097:  mov    %eax,-0x30(%ebp)
08748a2a +0x09a:  jmp    08748a71 <+0xe1>
08748a2c +0x09c:  lea    0x0(%esi,%eiz,1),%esi
08748a30 +0x0a0:  mov    %eax,0x4(%edx)
08748a33 +0x0a3:  mov    0x2c(%esi),%edx
08748a36 +0x0a6:  mov    %edx,(%eax)
08748a38 +0x0a8:  addl   $0x1,0x30(%esi)
08748a3c +0x0ac:  mov    %eax,0x2c(%esi)
08748a3f +0x0af:  movzwl -0x1a(%ebp),%eax
08748a43 +0x0b3:  mov    %ax,(%edi)
08748a46 +0x0b6:  movzwl -0x1e(%ebp),%eax
08748a4a +0x0ba:  add    $0x2,%edi
08748a4d +0x0bd:  mov    %edi,0x4(%esp)
08748a51 +0x0c1:  mov    %eax,0x8(%esp)
08748a55 +0x0c5:  mov    0x8(%ebp),%eax
08748a58 +0x0c8:  mov    %eax,(%esp)
08748a5b +0x0cb:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08748a60 +0x0d0:  movzwl -0x1c(%ebp),%eax
08748a64 +0x0d4:  sub    $0x2,%eax
08748a67 +0x0d7:  sub    -0x1e(%ebp),%ax
08748a6b +0x0db:  je     08748ae8 <+0x158>
08748a6d +0x0dd:  mov    %ax,-0x1c(%ebp)
08748a71 +0x0e1:  mov    -0x2c(%ebp),%eax
08748a74 +0x0e4:  movl   $0x2,0x8(%esp)
08748a7c +0x0ec:  mov    %eax,0x4(%esp)
08748a80 +0x0f0:  mov    0x8(%ebp),%eax
08748a83 +0x0f3:  mov    %eax,(%esp)
08748a86 +0x0f6:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08748a8b +0x0fb:  mov    -0x30(%ebp),%eax
08748a8e +0x0fe:  mov    %eax,0x4(%esp)
08748a92 +0x102:  mov    -0x2c(%ebp),%eax
08748a95 +0x105:  mov    %eax,(%esp)
08748a98 +0x108:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
08748a9d +0x10d:  movzwl -0x1e(%ebp),%eax
08748aa1 +0x111:  movb   $0x0,0x4(%esp)
08748aa6 +0x116:  add    $0x2,%eax
08748aa9 +0x119:  mov    %eax,(%esp)
08748aac +0x11c:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
08748ab1 +0x121:  mov    %eax,%edi
08748ab3 +0x123:  movb   $0x0,0x4(%esp)
08748ab8 +0x128:  movl   $0xc,(%esp)
08748abf +0x12f:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
08748ac4 +0x134:  movl   $0x0,(%eax)
08748aca +0x13a:  movl   $0x0,0x4(%eax)
08748ad1 +0x141:  mov    %edi,0x8(%eax)
08748ad4 +0x144:  mov    0x2c(%esi),%edx
08748ad7 +0x147:  test   %edx,%edx
08748ad9 +0x149:  jne    08748a30 <+0xa0>
08748adf +0x14f:  mov    %eax,0x28(%esi)
08748ae2 +0x152:  jmp    08748a38 <+0xa8>
08748ae7 +0x157:  nop
08748ae8 +0x158:  mov    0x8(%ebp),%eax
08748aeb +0x15b:  add    $0x3c,%esp
08748aee +0x15e:  pop    %ebx
08748aef +0x15f:  pop    %esi
08748af0 +0x160:  pop    %edi
08748af1 +0x161:  pop    %ebp
08748af2 +0x162:  ret
08748af3 +0x163:  nop
08748af4 +0x164:  lea    0x0(%esi),%esi
08748afa +0x16a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x8748990

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::CertificateRequest&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,CertificateRequest *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  ushort local_22;
  ushort local_20;
  undefined2 local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x874899b;
  pbVar2 = (byte *)input_buffer::operator[]((uint)param_1);
  bVar1 = *pbVar2;
  *(uint *)(param_2 + 0x24) = (uint)bVar1;
  if (bVar1 != 0) {
    iVar5 = 0;
    do {
      pbVar2 = (byte *)input_buffer::operator[]((uint)param_1);
      *(uint *)(param_2 + iVar5 * 4 + 8) = (uint)*pbVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_2 + 0x24));
  }
  input_buffer::read(param_1,(uchar *)local_1e,2);
  ato16((uchar *)local_1e,&local_20);
  if (local_20 != 0) {
    do {
      input_buffer::read(param_1,(uchar *)local_1e,2);
      puVar6 = &local_22;
      ato16((uchar *)local_1e,&local_22);
      uVar7 = (uint)puVar6 & 0xffffff00;
      puVar3 = operator_new__(local_22 + 2,uVar7);
      puVar4 = operator_new__(0xc,uVar7 & 0xffffff00);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = puVar3;
      if (*(int *)(param_2 + 0x2c) == 0) {
        *(undefined4 **)(param_2 + 0x28) = puVar4;
      }
      else {
        *(undefined4 **)(*(int *)(param_2 + 0x2c) + 4) = puVar4;
        *puVar4 = *(undefined4 *)(param_2 + 0x2c);
      }
      *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
      *(undefined4 **)(param_2 + 0x2c) = puVar4;
      *puVar3 = local_1e[0];
      input_buffer::read(param_1,(uchar *)(puVar3 + 1),(uint)local_22);
      local_20 = (local_20 - 2) - local_22;
    } while (local_20 != 0);
  }
  return param_1;
}
```
