# SendBuffertoClient

`_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs`

`global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CBusinessImpl` | `0x080de610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080de610  _GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs
#           global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)
# range [0x080de610, 0x080de677]
080de610 +0x00:  push   %ebp
080de611 +0x01:  mov    %esp,%ebp
080de613 +0x03:  sub    $0x18,%esp
080de616 +0x06:  movl   $0xffff,0x4(%esp)
080de61e +0x0e:  movl   $0x1,(%esp)
080de625 +0x15:  call   080de5d0 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080de62a +0x1a:  leave
080de62b +0x1b:  ret
080de62c +0x1c:  push   %ebp
080de62d +0x1d:  mov    %esp,%ebp
080de62f +0x1f:  sub    $0x4,%esp
080de632 +0x22:  mov    0xc(%ebp),%eax
080de635 +0x25:  mov    %al,-0x4(%ebp)
080de638 +0x28:  mov    0x8(%ebp),%eax
080de63b +0x2b:  movzbl -0x4(%ebp),%edx
080de63f +0x2f:  mov    %dl,0x4(%eax)
080de642 +0x32:  leave
080de643 +0x33:  ret
080de644 +0x34:  push   %ebp
080de645 +0x35:  mov    %esp,%ebp
080de647 +0x37:  mov    0x8(%ebp),%eax
080de64a +0x3a:  mov    0xc(%ebp),%edx
080de64d +0x3d:  mov    %edx,(%eax)
080de64f +0x3f:  pop    %ebp
080de650 +0x40:  ret
080de651 +0x41:  nop
080de652 +0x42:  push   %ebp
080de653 +0x43:  mov    %esp,%ebp
080de655 +0x45:  sub    $0x18,%esp
080de658 +0x48:  mov    0x8(%ebp),%eax
080de65b +0x4b:  mov    (%eax),%eax
080de65d +0x4d:  mov    0x10(%ebp),%edx
080de660 +0x50:  mov    %edx,0x8(%esp)
080de664 +0x54:  mov    0xc(%ebp),%edx
080de667 +0x57:  mov    %edx,0x4(%esp)
080de66b +0x5b:  mov    %eax,(%esp)
080de66e +0x5e:  call   0861c3f4 <_ZN6Stream10put_binaryEPvi>  ; Stream::put_binary(void*, int)
080de673 +0x63:  leave
080de674 +0x64:  ret
080de675 +0x65:  nop
080de676 +0x66:  nop
080de677 +0x67:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80de610

/* CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short) */

void CBusinessImpl::_GLOBAL__I_SendBuffertoClient(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
