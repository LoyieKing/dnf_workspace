# CMonitorServerProxy

`_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii`

`global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CMonitorServerProxy` | `0x084715a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084715a6  _GLOBAL__I__ZN19CMonitorServerProxyC2ESsii
#           global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)
# range [0x084715a6, 0x08471757]
084715a6 +0x000:  push   %ebp
084715a7 +0x001:  mov    %esp,%ebp
084715a9 +0x003:  sub    $0x18,%esp
084715ac +0x006:  movl   $0xffff,0x4(%esp)
084715b4 +0x00e:  movl   $0x1,(%esp)
084715bb +0x015:  call   08471566 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084715c0 +0x01a:  leave
084715c1 +0x01b:  ret
084715c2 +0x01c:  push   %ebp
084715c3 +0x01d:  mov    %esp,%ebp
084715c5 +0x01f:  sub    $0x18,%esp
084715c8 +0x022:  mov    0x8(%ebp),%eax
084715cb +0x025:  movl   $0x16,0x8(%esp)
084715d3 +0x02d:  movl   $0x4c0,0x4(%esp)
084715db +0x035:  mov    %eax,(%esp)
084715de +0x038:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084715e3 +0x03d:  leave
084715e4 +0x03e:  ret
084715e5 +0x03f:  nop
084715e6 +0x040:  push   %ebp
084715e7 +0x041:  mov    %esp,%ebp
084715e9 +0x043:  sub    $0x18,%esp
084715ec +0x046:  mov    0x8(%ebp),%eax
084715ef +0x049:  movl   $0xe,0x8(%esp)
084715f7 +0x051:  movl   $0x640,0x4(%esp)
084715ff +0x059:  mov    %eax,(%esp)
08471602 +0x05c:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
08471607 +0x061:  leave
08471608 +0x062:  ret
08471609 +0x063:  nop
0847160a +0x064:  push   %ebp
0847160b +0x065:  mov    %esp,%ebp
0847160d +0x067:  sub    $0x18,%esp
08471610 +0x06a:  mov    0x8(%ebp),%eax
08471613 +0x06d:  movl   $0x30,0x8(%esp)
0847161b +0x075:  movl   $0x4d0,0x4(%esp)
08471623 +0x07d:  mov    %eax,(%esp)
08471626 +0x080:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0847162b +0x085:  mov    0x8(%ebp),%eax
0847162e +0x088:  add    $0x12,%eax
08471631 +0x08b:  movl   $0x1e,0x8(%esp)
08471639 +0x093:  movl   $0x0,0x4(%esp)
08471641 +0x09b:  mov    %eax,(%esp)
08471644 +0x09e:  call   0807dcc0 <_init+0x5b8>
08471649 +0x0a3:  leave
0847164a +0x0a4:  ret
0847164b +0x0a5:  nop
0847164c +0x0a6:  push   %ebp
0847164d +0x0a7:  mov    %esp,%ebp
0847164f +0x0a9:  sub    $0x18,%esp
08471652 +0x0ac:  mov    0x8(%ebp),%eax
08471655 +0x0af:  movl   $0x12,0x8(%esp)
0847165d +0x0b7:  movl   $0x514,0x4(%esp)
08471665 +0x0bf:  mov    %eax,(%esp)
08471668 +0x0c2:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0847166d +0x0c7:  leave
0847166e +0x0c8:  ret
0847166f +0x0c9:  nop
08471670 +0x0ca:  push   %ebp
08471671 +0x0cb:  mov    %esp,%ebp
08471673 +0x0cd:  sub    $0x18,%esp
08471676 +0x0d0:  mov    0x8(%ebp),%eax
08471679 +0x0d3:  movl   $0x14,0x8(%esp)
08471681 +0x0db:  movl   $0x9de,0x4(%esp)
08471689 +0x0e3:  mov    %eax,(%esp)
0847168c +0x0e6:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
08471691 +0x0eb:  leave
08471692 +0x0ec:  ret
08471693 +0x0ed:  nop
08471694 +0x0ee:  push   %ebp
08471695 +0x0ef:  mov    %esp,%ebp
08471697 +0x0f1:  sub    $0x18,%esp
0847169a +0x0f4:  mov    0x8(%ebp),%eax
0847169d +0x0f7:  movl   $0x34,0x8(%esp)
084716a5 +0x0ff:  movl   $0x76c,0x4(%esp)
084716ad +0x107:  mov    %eax,(%esp)
084716b0 +0x10a:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084716b5 +0x10f:  mov    0x8(%ebp),%eax
084716b8 +0x112:  add    $0x16,%eax
084716bb +0x115:  movl   $0x1e,0x8(%esp)
084716c3 +0x11d:  movl   $0x0,0x4(%esp)
084716cb +0x125:  mov    %eax,(%esp)
084716ce +0x128:  call   0807dcc0 <_init+0x5b8>
084716d3 +0x12d:  leave
084716d4 +0x12e:  ret
084716d5 +0x12f:  nop
084716d6 +0x130:  push   %ebp
084716d7 +0x131:  mov    %esp,%ebp
084716d9 +0x133:  sub    $0x18,%esp
084716dc +0x136:  mov    0x8(%ebp),%eax
084716df +0x139:  movl   $0x1a,0x8(%esp)
084716e7 +0x141:  movl   $0x4ce,0x4(%esp)
084716ef +0x149:  mov    %eax,(%esp)
084716f2 +0x14c:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084716f7 +0x151:  leave
084716f8 +0x152:  ret
084716f9 +0x153:  nop
084716fa +0x154:  push   %ebp
084716fb +0x155:  mov    %esp,%ebp
084716fd +0x157:  sub    $0x18,%esp
08471700 +0x15a:  mov    0x8(%ebp),%eax
08471703 +0x15d:  movl   $0x16,0x8(%esp)
0847170b +0x165:  movl   $0x17c3,0x4(%esp)
08471713 +0x16d:  mov    %eax,(%esp)
08471716 +0x170:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0847171b +0x175:  mov    0x8(%ebp),%eax
0847171e +0x178:  movl   $0x0,0xa(%eax)
08471725 +0x17f:  mov    0x8(%ebp),%eax
08471728 +0x182:  movl   $0xffffffff,0xe(%eax)
0847172f +0x189:  mov    0x8(%ebp),%eax
08471732 +0x18c:  movl   $0x0,0x12(%eax)
08471739 +0x193:  leave
0847173a +0x194:  ret
0847173b +0x195:  nop
0847173c +0x196:  push   %ebp
0847173d +0x197:  mov    %esp,%ebp
0847173f +0x199:  mov    0x8(%ebp),%eax
08471742 +0x19c:  add    $0xc,%eax
08471745 +0x19f:  pop    %ebp
08471746 +0x1a0:  ret
08471747 +0x1a1:  nop
08471748 +0x1a2:  push   %ebp
08471749 +0x1a3:  mov    %esp,%ebp
0847174b +0x1a5:  mov    0x8(%ebp),%eax
0847174e +0x1a8:  mov    &_ZL14gUnicodeBuffer+0xe1a4(%eax),%eax
08471754 +0x1ae:  pop    %ebp
08471755 +0x1af:  ret
08471756 +0x1b0:  nop
08471757 +0x1b1:  nop
```

## 反编译 C

```c
// <global>::global @ 0x84715a6

/* CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, int, int) */

void CMonitorServerProxy::_GLOBAL__I_CMonitorServerProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
