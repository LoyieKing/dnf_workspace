# NCashImpl

`_ZN5nexon4cash9NCashImplC1EPKcshts`

`nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081acfdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081acfdc  _ZN5nexon4cash9NCashImplC1EPKcshts
#           nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)
# range [0x081acfdc, 0x081ad07f]
081acfdc +0x00:  push   %ebp
081acfdd +0x01:  mov    %esp,%ebp
081acfdf +0x03:  push   %ebx
081acfe0 +0x04:  sub    $0x24,%esp
081acfe3 +0x07:  mov    0x10(%ebp),%ebx
081acfe6 +0x0a:  mov    0x14(%ebp),%ecx
081acfe9 +0x0d:  mov    0x18(%ebp),%edx
081acfec +0x10:  mov    0x1c(%ebp),%eax
081acfef +0x13:  mov    %bx,-0xc(%ebp)
081acff3 +0x17:  mov    %cl,-0x10(%ebp)
081acff6 +0x1a:  mov    %dx,-0x14(%ebp)
081acffa +0x1e:  mov    %ax,-0x18(%ebp)
081acffe +0x22:  mov    0x8(%ebp),%eax
081ad001 +0x25:  add    $0x20,%eax
081ad004 +0x28:  mov    %eax,(%esp)
081ad007 +0x2b:  call   081af4cc <_ZN5nexon4cash9TCPSocketC1Ev>  ; nexon::cash::TCPSocket::TCPSocket()
081ad00c +0x30:  mov    0x8(%ebp),%eax
081ad00f +0x33:  add    $0x40,%eax
081ad012 +0x36:  mov    %eax,(%esp)
081ad015 +0x39:  call   081ae52e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x1d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x1d
081ad01a +0x3e:  mov    0x8(%ebp),%eax
081ad01d +0x41:  add    $0x248,%eax
081ad022 +0x46:  mov    %eax,(%esp)
081ad025 +0x49:  call   081ae52e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x1d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x1d
081ad02a +0x4e:  mov    0x8(%ebp),%eax
081ad02d +0x51:  movl   $0x0,0x8(%eax)
081ad034 +0x58:  mov    0x8(%ebp),%eax
081ad037 +0x5b:  movzbl -0x10(%ebp),%edx
081ad03b +0x5f:  mov    %dl,(%eax)
081ad03d +0x61:  movzwl -0x14(%ebp),%edx
081ad041 +0x65:  mov    0x8(%ebp),%eax
081ad044 +0x68:  mov    %dx,0x2(%eax)
081ad048 +0x6c:  mov    0x8(%ebp),%eax
081ad04b +0x6f:  movzwl -0x18(%ebp),%edx
081ad04f +0x73:  mov    %dx,0x4(%eax)
081ad053 +0x77:  mov    0x8(%ebp),%eax
081ad056 +0x7a:  movb   $0x0,0xc(%eax)
081ad05a +0x7e:  mov    0x8(%ebp),%eax
081ad05d +0x81:  lea    0xd(%eax),%edx
081ad060 +0x84:  mov    0xc(%ebp),%eax
081ad063 +0x87:  mov    %eax,0x4(%esp)
081ad067 +0x8b:  mov    %edx,(%esp)
081ad06a +0x8e:  call   0807def0 <_init+0x7e8>
081ad06f +0x93:  mov    0x8(%ebp),%eax
081ad072 +0x96:  movzwl -0xc(%ebp),%edx
081ad076 +0x9a:  mov    %dx,0x1e(%eax)
081ad07a +0x9e:  add    $0x24,%esp
081ad07d +0xa1:  pop    %ebx
081ad07e +0xa2:  pop    %ebp
081ad07f +0xa3:  ret
```

## 反编译 C

```c
// nexon::cash::NCashImpl::NCashImpl @ 0x81acfdc

/* nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short) */

void __thiscall
nexon::cash::NCashImpl::NCashImpl
          (NCashImpl *this,char *param_1,short param_2,uchar param_3,ushort param_4,short param_5)

{
  TCPSocket::TCPSocket((TCPSocket *)(this + 0x20));
  NCashMessage::NCashMessage((NCashMessage *)(this + 0x40));
  NCashMessage::NCashMessage((NCashMessage *)(this + 0x248));
  *(undefined4 *)(this + 8) = 0;
  *this = (NCashImpl)param_3;
  *(ushort *)(this + 2) = param_4;
  *(short *)(this + 4) = param_5;
  this[0xc] = (NCashImpl)0x0;
  strcpy((char *)(this + 0xd),param_1);
  *(short *)(this + 0x1e) = param_2;
  return;
}
```
