# get_data_header

`_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj`

`nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ad168` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ad168  _ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj
#           nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&)
# range [0x081ad168, 0x081ad1dd]
081ad168 +0x00:  push   %ebp
081ad169 +0x01:  mov    %esp,%ebp
081ad16b +0x03:  push   %esi
081ad16c +0x04:  push   %ebx
081ad16d +0x05:  sub    $0x10,%esp
081ad170 +0x08:  mov    0x8(%ebp),%ebx
081ad173 +0x0b:  mov    0xc(%ebp),%eax
081ad176 +0x0e:  add    $0x40,%eax
081ad179 +0x11:  mov    %eax,(%esp)
081ad17c +0x14:  call   081ae56c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x5b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x5b
081ad181 +0x19:  movzwl %ax,%esi
081ad184 +0x1c:  mov    0xc(%ebp),%eax
081ad187 +0x1f:  add    $0x40,%eax
081ad18a +0x22:  mov    %eax,(%esp)
081ad18d +0x25:  call   081ae560 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x4f>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x4f
081ad192 +0x2a:  mov    %esi,0x8(%esp)
081ad196 +0x2e:  mov    %eax,0x4(%esp)
081ad19a +0x32:  mov    %ebx,(%esp)
081ad19d +0x35:  call   081ae9b8 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x4a7>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x4a7
081ad1a2 +0x3a:  sub    $0x4,%esp
081ad1a5 +0x3d:  mov    0x10(%ebp),%eax
081ad1a8 +0x40:  mov    %eax,0x4(%esp)
081ad1ac +0x44:  mov    %ebx,(%esp)
081ad1af +0x47:  call   081ae8bc <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x3ab>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x3ab
081ad1b4 +0x4c:  mov    0x14(%ebp),%eax
081ad1b7 +0x4f:  mov    %eax,0x4(%esp)
081ad1bb +0x53:  mov    %ebx,(%esp)
081ad1be +0x56:  call   081ae8bc <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x3ab>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x3ab
081ad1c3 +0x5b:  mov    0x18(%ebp),%eax
081ad1c6 +0x5e:  mov    %eax,0x4(%esp)
081ad1ca +0x62:  mov    %ebx,(%esp)
081ad1cd +0x65:  call   081ae94e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x43d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x43d
081ad1d2 +0x6a:  mov    %ebx,%eax
081ad1d4 +0x6c:  lea    -0x8(%ebp),%esp
081ad1d7 +0x6f:  add    $0x0,%esp
081ad1da +0x72:  pop    %ebx
081ad1db +0x73:  pop    %esi
081ad1dc +0x74:  pop    %ebp
081ad1dd +0x75:  ret    $0x4
```

## 反编译 C

```c
// nexon::cash::NCashImpl::get_data_header @ 0x81ad168

/* nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&) */

uchar * nexon::cash::NCashImpl::get_data_header(uchar *param_1,uchar *param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  uchar *in_stack_00000010;
  uint *in_stack_00000014;
  
  uVar1 = NCashMessage::body_length((NCashMessage *)(param_2 + 0x40));
  pcVar2 = (char *)NCashMessage::body((NCashMessage *)(param_2 + 0x40));
  ByteBuffer::wrap((ByteBuffer *)param_1,pcVar2,uVar1 & 0xffff);
  ByteBuffer::operator>>((ByteBuffer *)param_1,(uchar *)param_3);
  ByteBuffer::operator>>((ByteBuffer *)param_1,in_stack_00000010);
  ByteBuffer::operator>>((ByteBuffer *)param_1,in_stack_00000014);
  return param_1;
}
```
