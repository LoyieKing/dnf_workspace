# CmmChannelProxy

`_GLOBAL__I__ZN15CmmChannelProxyC2ESsi`

`global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CmmChannelProxy` | `0x08106b7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08106b7e  _GLOBAL__I__ZN15CmmChannelProxyC2ESsi
#           global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
# range [0x08106b7e, 0x08106d1b]
08106b7e +0x000:  push   %ebp
08106b7f +0x001:  mov    %esp,%ebp
08106b81 +0x003:  sub    $0x18,%esp
08106b84 +0x006:  movl   $0xffff,0x4(%esp)
08106b8c +0x00e:  movl   $0x1,(%esp)
08106b93 +0x015:  call   08106b3e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08106b98 +0x01a:  leave
08106b99 +0x01b:  ret
08106b9a +0x01c:  push   %ebp
08106b9b +0x01d:  mov    %esp,%ebp
08106b9d +0x01f:  sub    $0x18,%esp
08106ba0 +0x022:  mov    0xc(%ebp),%eax
08106ba3 +0x025:  mov    %eax,0x8(%esp)
08106ba7 +0x029:  mov    0x8(%ebp),%eax
08106baa +0x02c:  mov    %eax,0x4(%esp)
08106bae +0x030:  movl   $0x3,(%esp)
08106bb5 +0x037:  call   0807e610 <_init+0xf08>
08106bba +0x03c:  leave
08106bbb +0x03d:  ret
08106bbc +0x03e:  push   %ebp
08106bbd +0x03f:  mov    %esp,%ebp
08106bbf +0x041:  mov    0xc(%ebp),%eax
08106bc2 +0x044:  mov    %eax,%edx
08106bc4 +0x046:  mov    0x8(%ebp),%eax
08106bc7 +0x049:  mov    %dl,0x1(%eax)
08106bca +0x04c:  pop    %ebp
08106bcb +0x04d:  ret
08106bcc +0x04e:  push   %ebp
08106bcd +0x04f:  mov    %esp,%ebp
08106bcf +0x051:  mov    0x8(%ebp),%eax
08106bd2 +0x054:  mov    0x2(%eax),%eax
08106bd5 +0x057:  pop    %ebp
08106bd6 +0x058:  ret
08106bd7 +0x059:  nop
08106bd8 +0x05a:  push   %ebp
08106bd9 +0x05b:  mov    %esp,%ebp
08106bdb +0x05d:  mov    0xc(%ebp),%edx
08106bde +0x060:  mov    0x8(%ebp),%eax
08106be1 +0x063:  mov    %edx,0x2(%eax)
08106be4 +0x066:  pop    %ebp
08106be5 +0x067:  ret
08106be6 +0x068:  push   %ebp
08106be7 +0x069:  mov    %esp,%ebp
08106be9 +0x06b:  mov    0xc(%ebp),%eax
08106bec +0x06e:  mov    %eax,%edx
08106bee +0x070:  mov    0x8(%ebp),%eax
08106bf1 +0x073:  mov    %dl,(%eax)
08106bf3 +0x075:  pop    %ebp
08106bf4 +0x076:  ret
08106bf5 +0x077:  nop
08106bf6 +0x078:  push   %ebp
08106bf7 +0x079:  mov    %esp,%ebp
08106bf9 +0x07b:  pop    %ebp
08106bfa +0x07c:  ret
08106bfb +0x07d:  nop
08106bfc +0x07e:  push   %ebp
08106bfd +0x07f:  mov    %esp,%ebp
08106bff +0x081:  sub    $0x18,%esp
08106c02 +0x084:  mov    0x8(%ebp),%eax
08106c05 +0x087:  mov    %eax,(%esp)
08106c08 +0x08a:  call   08106bf6 <+0x78>
08106c0d +0x08f:  mov    0x8(%ebp),%eax
08106c10 +0x092:  movl   $0x1,0x4(%esp)
08106c18 +0x09a:  mov    %eax,(%esp)
08106c1b +0x09d:  call   08106be6 <+0x68>
08106c20 +0x0a2:  mov    0x8(%ebp),%eax
08106c23 +0x0a5:  movl   $0x2,0x4(%esp)
08106c2b +0x0ad:  mov    %eax,(%esp)
08106c2e +0x0b0:  call   08106bbc <+0x3e>
08106c33 +0x0b5:  mov    0x8(%ebp),%eax
08106c36 +0x0b8:  movl   $0x33,0x4(%esp)
08106c3e +0x0c0:  mov    %eax,(%esp)
08106c41 +0x0c3:  call   08106bd8 <+0x5a>
08106c46 +0x0c8:  leave
08106c47 +0x0c9:  ret
08106c48 +0x0ca:  push   %ebp
08106c49 +0x0cb:  mov    %esp,%ebp
08106c4b +0x0cd:  sub    $0x18,%esp
08106c4e +0x0d0:  mov    0x8(%ebp),%eax
08106c51 +0x0d3:  mov    %eax,(%esp)
08106c54 +0x0d6:  call   08106bf6 <+0x78>
08106c59 +0x0db:  mov    0x8(%ebp),%eax
08106c5c +0x0de:  movl   $0x2,0x4(%esp)
08106c64 +0x0e6:  mov    %eax,(%esp)
08106c67 +0x0e9:  call   08106be6 <+0x68>
08106c6c +0x0ee:  mov    0x8(%ebp),%eax
08106c6f +0x0f1:  movl   $0x9,0x4(%esp)
08106c77 +0x0f9:  mov    %eax,(%esp)
08106c7a +0x0fc:  call   08106bbc <+0x3e>
08106c7f +0x101:  mov    0x8(%ebp),%eax
08106c82 +0x104:  movl   $0xb,0x4(%esp)
08106c8a +0x10c:  mov    %eax,(%esp)
08106c8d +0x10f:  call   08106bd8 <+0x5a>
08106c92 +0x114:  leave
08106c93 +0x115:  ret
08106c94 +0x116:  push   %ebp
08106c95 +0x117:  mov    %esp,%ebp
08106c97 +0x119:  sub    $0x18,%esp
08106c9a +0x11c:  mov    0x8(%ebp),%eax
08106c9d +0x11f:  mov    %eax,(%esp)
08106ca0 +0x122:  call   08106bf6 <+0x78>
08106ca5 +0x127:  mov    0x8(%ebp),%eax
08106ca8 +0x12a:  movl   $0x1,0x4(%esp)
08106cb0 +0x132:  mov    %eax,(%esp)
08106cb3 +0x135:  call   08106be6 <+0x68>
08106cb8 +0x13a:  mov    0x8(%ebp),%eax
08106cbb +0x13d:  movl   $0x5,0x4(%esp)
08106cc3 +0x145:  mov    %eax,(%esp)
08106cc6 +0x148:  call   08106bbc <+0x3e>
08106ccb +0x14d:  mov    0x8(%ebp),%eax
08106cce +0x150:  movl   $0x1b,0x4(%esp)
08106cd6 +0x158:  mov    %eax,(%esp)
08106cd9 +0x15b:  call   08106bd8 <+0x5a>
08106cde +0x160:  leave
08106cdf +0x161:  ret
08106ce0 +0x162:  push   %ebp
08106ce1 +0x163:  mov    %esp,%ebp
08106ce3 +0x165:  mov    0x8(%ebp),%eax
08106ce6 +0x168:  mov    0x378(%eax),%eax
08106cec +0x16e:  pop    %ebp
08106ced +0x16f:  ret
08106cee +0x170:  push   %ebp
08106cef +0x171:  mov    %esp,%ebp
08106cf1 +0x173:  mov    0x8(%ebp),%eax
08106cf4 +0x176:  mov    0x250(%eax),%eax
08106cfa +0x17c:  pop    %ebp
08106cfb +0x17d:  ret
08106cfc +0x17e:  push   %ebp
08106cfd +0x17f:  mov    %esp,%ebp
08106cff +0x181:  sub    $0x18,%esp
08106d02 +0x184:  mov    0x8(%ebp),%eax
08106d05 +0x187:  mov    %eax,(%esp)
08106d08 +0x18a:  call   08106d10 <+0x192>
08106d0d +0x18f:  leave
08106d0e +0x190:  ret
08106d0f +0x191:  nop
08106d10 +0x192:  push   %ebp
08106d11 +0x193:  mov    %esp,%ebp
08106d13 +0x195:  mov    0x8(%ebp),%eax
08106d16 +0x198:  mov    0x14(%eax),%eax
08106d19 +0x19b:  pop    %ebp
08106d1a +0x19c:  ret
08106d1b +0x19d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8106b7e

/* CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, int) */

void CmmChannelProxy::_GLOBAL__I_CmmChannelProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
