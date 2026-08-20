# CDoubleConnCheckServerProxy

`_GLOBAL__I__ZN27CDoubleConnCheckServerProxyC2ESsi`

`global constructors keyed to CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CDoubleConnCheckServerProxy` | `0x0846d56e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d56e  _GLOBAL__I__ZN27CDoubleConnCheckServerProxyC2ESsi
#           global constructors keyed to CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
# range [0x0846d56e, 0x0846d62b]
0846d56e +0x00:  push   %ebp
0846d56f +0x01:  mov    %esp,%ebp
0846d571 +0x03:  sub    $0x18,%esp
0846d574 +0x06:  movl   $0xffff,0x4(%esp)
0846d57c +0x0e:  movl   $0x1,(%esp)
0846d583 +0x15:  call   0846d52e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0846d588 +0x1a:  leave
0846d589 +0x1b:  ret
0846d58a +0x1c:  push   %ebp
0846d58b +0x1d:  mov    %esp,%ebp
0846d58d +0x1f:  sub    $0x18,%esp
0846d590 +0x22:  mov    0x8(%ebp),%eax
0846d593 +0x25:  movl   $0x10,0x8(%esp)
0846d59b +0x2d:  movl   $0xbb8,0x4(%esp)
0846d5a3 +0x35:  mov    %eax,(%esp)
0846d5a6 +0x38:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846d5ab +0x3d:  mov    0x8(%ebp),%eax
0846d5ae +0x40:  movl   $0x0,0xa(%eax)
0846d5b5 +0x47:  mov    0x8(%ebp),%eax
0846d5b8 +0x4a:  movb   $0xff,0xe(%eax)
0846d5bc +0x4e:  mov    0x8(%ebp),%eax
0846d5bf +0x51:  movb   $0xff,0xf(%eax)
0846d5c3 +0x55:  leave
0846d5c4 +0x56:  ret
0846d5c5 +0x57:  nop
0846d5c6 +0x58:  push   %ebp
0846d5c7 +0x59:  mov    %esp,%ebp
0846d5c9 +0x5b:  sub    $0x18,%esp
0846d5cc +0x5e:  mov    0x8(%ebp),%eax
0846d5cf +0x61:  movl   $0x10,0x8(%esp)
0846d5d7 +0x69:  movl   $0xbb9,0x4(%esp)
0846d5df +0x71:  mov    %eax,(%esp)
0846d5e2 +0x74:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846d5e7 +0x79:  mov    0x8(%ebp),%eax
0846d5ea +0x7c:  movl   $0x0,0xa(%eax)
0846d5f1 +0x83:  mov    0x8(%ebp),%eax
0846d5f4 +0x86:  movb   $0xff,0xe(%eax)
0846d5f8 +0x8a:  mov    0x8(%ebp),%eax
0846d5fb +0x8d:  movb   $0xff,0xf(%eax)
0846d5ff +0x91:  leave
0846d600 +0x92:  ret
0846d601 +0x93:  nop
0846d602 +0x94:  push   %ebp
0846d603 +0x95:  mov    %esp,%ebp
0846d605 +0x97:  sub    $0x18,%esp
0846d608 +0x9a:  mov    0x8(%ebp),%eax
0846d60b +0x9d:  movl   $0xc,0x8(%esp)
0846d613 +0xa5:  movl   $0xbba,0x4(%esp)
0846d61b +0xad:  mov    %eax,(%esp)
0846d61e +0xb0:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846d623 +0xb5:  mov    0x8(%ebp),%eax
0846d626 +0xb8:  movb   $0xff,0xa(%eax)
0846d62a +0xbc:  leave
0846d62b +0xbd:  ret
```

## 反编译 C

```c
// <global>::global @ 0x846d56e

/* CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, int) */

void CDoubleConnCheckServerProxy::_GLOBAL__I_CDoubleConnCheckServerProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
