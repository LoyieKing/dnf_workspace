# IPGOutputCancel

`_ZN8WongWork3IPG10CIPGHelper15IPGOutputCancelEPNS0_8SIPGDataES3_`

`WongWork::IPG::CIPGHelper::IPGOutputCancel(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x08100616` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08100616  _ZN8WongWork3IPG10CIPGHelper15IPGOutputCancelEPNS0_8SIPGDataES3_
#           WongWork::IPG::CIPGHelper::IPGOutputCancel(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*)
# range [0x08100616, 0x0810078f]
08100616 +0x000:  push   %ebp
08100617 +0x001:  mov    %esp,%ebp
08100619 +0x003:  sub    $0x28,%esp
0810061c +0x006:  mov    0x8(%ebp),%eax
0810061f +0x009:  mov    0x4(%eax),%eax
08100622 +0x00c:  mov    %eax,(%esp)
08100625 +0x00f:  call   0810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>  ; WongWork::IPG::CIPGMgr::AllocIPGData()
0810062a +0x014:  mov    %eax,-0xc(%ebp)
0810062d +0x017:  mov    0xc(%ebp),%eax
08100630 +0x01a:  lea    0x28(%eax),%edx
08100633 +0x01d:  mov    -0xc(%ebp),%eax
08100636 +0x020:  add    $0x28,%eax
08100639 +0x023:  movl   $0x41,0x8(%esp)
08100641 +0x02b:  mov    %edx,0x4(%esp)
08100645 +0x02f:  mov    %eax,(%esp)
08100648 +0x032:  call   0807d8a0 <_init+0x198>
0810064d +0x037:  mov    0x10(%ebp),%eax
08100650 +0x03a:  add    $0x16e,%eax
08100655 +0x03f:  mov    %eax,%edx
08100657 +0x041:  mov    -0xc(%ebp),%eax
0810065a +0x044:  add    $0x69,%eax
0810065d +0x047:  movl   $0x15,0x8(%esp)
08100665 +0x04f:  mov    %edx,0x4(%esp)
08100669 +0x053:  mov    %eax,(%esp)
0810066c +0x056:  call   0807d8d0 <_init+0x1c8>
08100671 +0x05b:  mov    0xc(%ebp),%eax
08100674 +0x05e:  add    $0x69,%eax
08100677 +0x061:  mov    %eax,%edx
08100679 +0x063:  mov    -0xc(%ebp),%eax
0810067c +0x066:  add    $0x7e,%eax
0810067f +0x069:  movl   $0x8,0x8(%esp)
08100687 +0x071:  mov    %edx,0x4(%esp)
0810068b +0x075:  mov    %eax,(%esp)
0810068e +0x078:  call   0807d8d0 <_init+0x1c8>
08100693 +0x07d:  mov    0xc(%ebp),%eax
08100696 +0x080:  add    $0x7d,%eax
08100699 +0x083:  mov    %eax,%edx
0810069b +0x085:  mov    -0xc(%ebp),%eax
0810069e +0x088:  add    $0x92,%eax
081006a3 +0x08d:  movl   $0x14,0x8(%esp)
081006ab +0x095:  mov    %edx,0x4(%esp)
081006af +0x099:  mov    %eax,(%esp)
081006b2 +0x09c:  call   0807d8d0 <_init+0x1c8>
081006b7 +0x0a1:  mov    0xc(%ebp),%eax
081006ba +0x0a4:  add    $0x71,%eax
081006bd +0x0a7:  mov    %eax,%edx
081006bf +0x0a9:  mov    -0xc(%ebp),%eax
081006c2 +0x0ac:  add    $0x86,%eax
081006c7 +0x0b1:  movl   $0xc,0x8(%esp)
081006cf +0x0b9:  mov    %edx,0x4(%esp)
081006d3 +0x0bd:  mov    %eax,(%esp)
081006d6 +0x0c0:  call   0807d8d0 <_init+0x1c8>
081006db +0x0c5:  mov    0xc(%ebp),%eax
081006de +0x0c8:  add    $0x91,%eax
081006e3 +0x0cd:  test   %eax,%eax
081006e5 +0x0cf:  je     0810070d <+0xf7>
081006e7 +0x0d1:  mov    0xc(%ebp),%eax
081006ea +0x0d4:  add    $0x91,%eax
081006ef +0x0d9:  mov    %eax,%edx
081006f1 +0x0db:  mov    -0xc(%ebp),%eax
081006f4 +0x0de:  add    $0xa6,%eax
081006f9 +0x0e3:  movl   $0x64,0x8(%esp)
08100701 +0x0eb:  mov    %edx,0x4(%esp)
08100705 +0x0ef:  mov    %eax,(%esp)
08100708 +0x0f2:  call   0807d8d0 <_init+0x1c8>
0810070d +0x0f7:  mov    0xc(%ebp),%eax
08100710 +0x0fa:  add    $0xf5,%eax
08100715 +0x0ff:  test   %eax,%eax
08100717 +0x101:  je     0810073f <+0x129>
08100719 +0x103:  mov    0xc(%ebp),%eax
0810071c +0x106:  add    $0xf5,%eax
08100721 +0x10b:  mov    %eax,%edx
08100723 +0x10d:  mov    -0xc(%ebp),%eax
08100726 +0x110:  add    $0x10a,%eax
0810072b +0x115:  movl   $0x64,0x8(%esp)
08100733 +0x11d:  mov    %edx,0x4(%esp)
08100737 +0x121:  mov    %eax,(%esp)
0810073a +0x124:  call   0807d8d0 <_init+0x1c8>
0810073f +0x129:  mov    -0xc(%ebp),%eax
08100742 +0x12c:  mov    0x10(%ebp),%edx
08100745 +0x12f:  mov    0x1dc(%edx),%ecx
0810074b +0x135:  mov    %ecx,0x1f0(%eax)
08100751 +0x13b:  mov    0x1e0(%edx),%ecx
08100757 +0x141:  mov    %ecx,0x1f4(%eax)
0810075d +0x147:  mov    0x1e4(%edx),%edx
08100763 +0x14d:  mov    %edx,0x1f8(%eax)
08100769 +0x153:  mov    -0xc(%ebp),%eax
0810076c +0x156:  movb   $0x0,0x24(%eax)
08100770 +0x15a:  mov    0x8(%ebp),%eax
08100773 +0x15d:  mov    0x4(%eax),%eax
08100776 +0x160:  movl   $0x1,0x8(%esp)
0810077e +0x168:  mov    -0xc(%ebp),%edx
08100781 +0x16b:  mov    %edx,0x4(%esp)
08100785 +0x16f:  mov    %eax,(%esp)
08100788 +0x172:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
0810078d +0x177:  leave
0810078e +0x178:  ret
0810078f +0x179:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGOutputCancel @ 0x8100616

/* WongWork::IPG::CIPGHelper::IPGOutputCancel(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutputCancel(CIPGHelper *this,SIPGData *param_1,SIPGData *param_2)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)CIPGMgr::AllocIPGData(*(CIPGMgr **)(this + 4));
  memcpy(pSVar1 + 0x28,param_1 + 0x28,0x41);
  strncpy((char *)(pSVar1 + 0x69),(char *)(param_2 + 0x16e),0x15);
  strncpy((char *)(pSVar1 + 0x7e),(char *)(param_1 + 0x69),8);
  strncpy((char *)(pSVar1 + 0x92),(char *)(param_1 + 0x7d),0x14);
  strncpy((char *)(pSVar1 + 0x86),(char *)(param_1 + 0x71),0xc);
  if (param_1 != (SIPGData *)0xffffff6f) {
    strncpy((char *)(pSVar1 + 0xa6),(char *)(param_1 + 0x91),100);
  }
  if (param_1 != (SIPGData *)0xffffff0b) {
    strncpy((char *)(pSVar1 + 0x10a),(char *)(param_1 + 0xf5),100);
  }
  *(undefined4 *)(pSVar1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(pSVar1 + 500) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(pSVar1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1e4);
  pSVar1[0x24] = (SIPGData)0x0;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}
```
