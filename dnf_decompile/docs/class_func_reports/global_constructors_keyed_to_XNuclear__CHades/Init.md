# Init

`_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser`

`global constructors keyed to XNuclear::CHades::Init(CUser*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to XNuclear::CHades` | `0x084b992a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b992a  _GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser
#           global constructors keyed to XNuclear::CHades::Init(CUser*)
# range [0x084b992a, 0x084b9abf]
084b992a +0x000:  push   %ebp
084b992b +0x001:  mov    %esp,%ebp
084b992d +0x003:  sub    $0x18,%esp
084b9930 +0x006:  movl   $0xffff,0x4(%esp)
084b9938 +0x00e:  movl   $0x1,(%esp)
084b993f +0x015:  call   084b98ea <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084b9944 +0x01a:  leave
084b9945 +0x01b:  ret
084b9946 +0x01c:  push   %ebp
084b9947 +0x01d:  mov    %esp,%ebp
084b9949 +0x01f:  sub    $0x18,%esp
084b994c +0x022:  mov    0x8(%ebp),%eax
084b994f +0x025:  movl   $0x64,0x8(%esp)
084b9957 +0x02d:  movl   $0xfd2,0x4(%esp)
084b995f +0x035:  mov    %eax,(%esp)
084b9962 +0x038:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084b9967 +0x03d:  leave
084b9968 +0x03e:  ret
084b9969 +0x03f:  nop
084b996a +0x040:  push   %ebp
084b996b +0x041:  mov    %esp,%ebp
084b996d +0x043:  sub    $0x18,%esp
084b9970 +0x046:  mov    0x8(%ebp),%eax
084b9973 +0x049:  movl   $0xe,0x8(%esp)
084b997b +0x051:  movl   $0xfd3,0x4(%esp)
084b9983 +0x059:  mov    %eax,(%esp)
084b9986 +0x05c:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084b998b +0x061:  leave
084b998c +0x062:  ret
084b998d +0x063:  nop
084b998e +0x064:  push   %ebp
084b998f +0x065:  mov    %esp,%ebp
084b9991 +0x067:  sub    $0x18,%esp
084b9994 +0x06a:  mov    0x8(%ebp),%eax
084b9997 +0x06d:  movl   $0x1a,0x8(%esp)
084b999f +0x075:  movl   $0xfd7,0x4(%esp)
084b99a7 +0x07d:  mov    %eax,(%esp)
084b99aa +0x080:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084b99af +0x085:  leave
084b99b0 +0x086:  ret
084b99b1 +0x087:  nop
084b99b2 +0x088:  push   %ebp
084b99b3 +0x089:  mov    %esp,%ebp
084b99b5 +0x08b:  sub    $0x18,%esp
084b99b8 +0x08e:  mov    0x8(%ebp),%eax
084b99bb +0x091:  movl   $0x14,0x8(%esp)
084b99c3 +0x099:  movl   $0xfda,0x4(%esp)
084b99cb +0x0a1:  mov    %eax,(%esp)
084b99ce +0x0a4:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084b99d3 +0x0a9:  leave
084b99d4 +0x0aa:  ret
084b99d5 +0x0ab:  nop
084b99d6 +0x0ac:  push   %ebp
084b99d7 +0x0ad:  mov    %esp,%ebp
084b99d9 +0x0af:  sub    $0x18,%esp
084b99dc +0x0b2:  mov    0x8(%ebp),%eax
084b99df +0x0b5:  movl   $0x14,0x8(%esp)
084b99e7 +0x0bd:  movl   $0xfdb,0x4(%esp)
084b99ef +0x0c5:  mov    %eax,(%esp)
084b99f2 +0x0c8:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084b99f7 +0x0cd:  leave
084b99f8 +0x0ce:  ret
084b99f9 +0x0cf:  nop
084b99fa +0x0d0:  push   %ebp
084b99fb +0x0d1:  mov    %esp,%ebp
084b99fd +0x0d3:  sub    $0x18,%esp
084b9a00 +0x0d6:  mov    0x8(%ebp),%eax
084b9a03 +0x0d9:  movl   $0x29,0x8(%esp)
084b9a0b +0x0e1:  movl   $0xfdc,0x4(%esp)
084b9a13 +0x0e9:  mov    %eax,(%esp)
084b9a16 +0x0ec:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084b9a1b +0x0f1:  leave
084b9a1c +0x0f2:  ret
084b9a1d +0x0f3:  nop
084b9a1e +0x0f4:  push   %ebp
084b9a1f +0x0f5:  mov    %esp,%ebp
084b9a21 +0x0f7:  sub    $0x18,%esp
084b9a24 +0x0fa:  mov    0x8(%ebp),%eax
084b9a27 +0x0fd:  movl   $0x12,0x8(%esp)
084b9a2f +0x105:  movl   $0xfdd,0x4(%esp)
084b9a37 +0x10d:  mov    %eax,(%esp)
084b9a3a +0x110:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084b9a3f +0x115:  leave
084b9a40 +0x116:  ret
084b9a41 +0x117:  nop
084b9a42 +0x118:  push   %ebp
084b9a43 +0x119:  mov    %esp,%ebp
084b9a45 +0x11b:  sub    $0x18,%esp
084b9a48 +0x11e:  mov    0x8(%ebp),%eax
084b9a4b +0x121:  movl   $0x12,0x8(%esp)
084b9a53 +0x129:  movl   $0xfd9,0x4(%esp)
084b9a5b +0x131:  mov    %eax,(%esp)
084b9a5e +0x134:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084b9a63 +0x139:  mov    0x8(%ebp),%eax
084b9a66 +0x13c:  movl   $0x0,0xa(%eax)
084b9a6d +0x143:  mov    0x8(%ebp),%eax
084b9a70 +0x146:  movw   $0x0,0xe(%eax)
084b9a76 +0x14c:  mov    0x8(%ebp),%eax
084b9a79 +0x14f:  movw   $0x0,0x10(%eax)
084b9a7f +0x155:  leave
084b9a80 +0x156:  ret
084b9a81 +0x157:  nop
084b9a82 +0x158:  push   %ebp
084b9a83 +0x159:  mov    %esp,%ebp
084b9a85 +0x15b:  mov    0x8(%ebp),%eax
084b9a88 +0x15e:  movb   $0x1,0x8d1a8(%eax)
084b9a8f +0x165:  pop    %ebp
084b9a90 +0x166:  ret
084b9a91 +0x167:  nop
084b9a92 +0x168:  push   %ebp
084b9a93 +0x169:  mov    %esp,%ebp
084b9a95 +0x16b:  mov    0x8(%ebp),%eax
084b9a98 +0x16e:  movb   $0x1,0x8d1a9(%eax)
084b9a9f +0x175:  pop    %ebp
084b9aa0 +0x176:  ret
084b9aa1 +0x177:  nop
084b9aa2 +0x178:  push   %ebp
084b9aa3 +0x179:  mov    %esp,%ebp
084b9aa5 +0x17b:  mov    0x8(%ebp),%eax
084b9aa8 +0x17e:  movzbl 0x8e97d(%eax),%eax
084b9aaf +0x185:  pop    %ebp
084b9ab0 +0x186:  ret
084b9ab1 +0x187:  nop
084b9ab2 +0x188:  push   %ebp
084b9ab3 +0x189:  mov    %esp,%ebp
084b9ab5 +0x18b:  mov    0x8(%ebp),%eax
084b9ab8 +0x18e:  mov    &_ZL14gUnicodeBuffer+0x268ec(%eax),%eax
084b9abe +0x194:  pop    %ebp
084b9abf +0x195:  ret
```

## 反编译 C

```c
// <global>::global @ 0x84b992a

/* XNuclear::CHades::Init(CUser*) */

void XNuclear::CHades::_GLOBAL__I_Init(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
