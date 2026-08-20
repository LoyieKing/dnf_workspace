# set_data_header

`_ZN5nexon4cash9NCashImpl15set_data_headerEhh`

`nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ad0e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ad0e6  _ZN5nexon4cash9NCashImpl15set_data_headerEhh
#           nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char)
# range [0x081ad0e6, 0x081ad167]
081ad0e6 +0x00:  push   %ebp
081ad0e7 +0x01:  mov    %esp,%ebp
081ad0e9 +0x03:  push   %ebx
081ad0ea +0x04:  sub    $0x24,%esp
081ad0ed +0x07:  mov    0x8(%ebp),%ebx
081ad0f0 +0x0a:  mov    0x10(%ebp),%edx
081ad0f3 +0x0d:  mov    0x14(%ebp),%eax
081ad0f6 +0x10:  mov    %dl,-0xc(%ebp)
081ad0f9 +0x13:  mov    %al,-0x10(%ebp)
081ad0fc +0x16:  mov    0xc(%ebp),%eax
081ad0ff +0x19:  add    $0x248,%eax
081ad104 +0x1e:  mov    %eax,(%esp)
081ad107 +0x21:  call   081ae560 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x4f>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x4f
081ad10c +0x26:  movl   $0x200,0x8(%esp)
081ad114 +0x2e:  mov    %eax,0x4(%esp)
081ad118 +0x32:  mov    %ebx,(%esp)
081ad11b +0x35:  call   081ae9e2 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x4d1>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x4d1
081ad120 +0x3a:  movzbl -0xc(%ebp),%eax
081ad124 +0x3e:  mov    %eax,0x4(%esp)
081ad128 +0x42:  mov    %ebx,(%esp)
081ad12b +0x45:  call   081ae614 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x103>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x103
081ad130 +0x4a:  movzbl -0x10(%ebp),%eax
081ad134 +0x4e:  mov    %eax,0x4(%esp)
081ad138 +0x52:  mov    %ebx,(%esp)
081ad13b +0x55:  call   081ae614 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x103>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x103
081ad140 +0x5a:  mov    0xc(%ebp),%eax
081ad143 +0x5d:  mov    %eax,(%esp)
081ad146 +0x60:  call   081aea32 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x521>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x521
081ad14b +0x65:  mov    0xc(%ebp),%eax
081ad14e +0x68:  mov    0x8(%eax),%eax
081ad151 +0x6b:  mov    %eax,0x4(%esp)
081ad155 +0x6f:  mov    %ebx,(%esp)
081ad158 +0x72:  call   081ae74c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x23b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x23b
081ad15d +0x77:  mov    %ebx,%eax
081ad15f +0x79:  add    $0x24,%esp
081ad162 +0x7c:  pop    %ebx
081ad163 +0x7d:  pop    %ebp
081ad164 +0x7e:  ret    $0x4
081ad167 +0x81:  nop
```

## 反编译 C

```c
// nexon::cash::NCashImpl::set_data_header @ 0x81ad0e6

/* nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char) */

ByteBuffer * nexon::cash::NCashImpl::set_data_header(uchar param_1,uchar param_2)

{
  char *pcVar1;
  undefined3 in_stack_00000005;
  undefined3 in_stack_00000009;
  uchar in_stack_0000000c;
  uchar in_stack_00000010;
  
  pcVar1 = (char *)NCashMessage::body((NCashMessage *)(_param_2 + 0x248));
  ByteBuffer::ByteBuffer(_param_1,pcVar1,0x200);
  ByteBuffer::operator<<(_param_1,in_stack_0000000c);
  ByteBuffer::operator<<(_param_1,in_stack_00000010);
  _increaseRequestID(_param_2);
  ByteBuffer::operator<<(_param_1,*(uint *)(_param_2 + 8));
  return _param_1;
}
```
