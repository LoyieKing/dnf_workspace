# operator=

`_ZN8TaoCrypt3SHAaSERKS0_`

`TaoCrypt::SHA::operator=(TaoCrypt::SHA const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA` | `0x08770510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08770510  _ZN8TaoCrypt3SHAaSERKS0_
#           TaoCrypt::SHA::operator=(TaoCrypt::SHA const&)
# range [0x08770510, 0x087707df]
08770510 +0x000:  push   %ebp
08770511 +0x001:  mov    %esp,%ebp
08770513 +0x003:  sub    $0x98,%esp
08770519 +0x009:  mov    %ebx,-0xc(%ebp)
0877051c +0x00c:  mov    0xc(%ebp),%eax
0877051f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08770524 +0x014:  add    $0xbfc674,%ebx
0877052a +0x01a:  mov    %esi,-0x8(%ebp)
0877052d +0x01d:  mov    0x8(%ebp),%esi
08770530 +0x020:  mov    %edi,-0x4(%ebp)
08770533 +0x023:  lea    -0x88(%ebp),%edi
08770539 +0x029:  mov    %eax,0x4(%esp)
0877053d +0x02d:  mov    %edi,(%esp)
08770540 +0x030:  call   08770420 <_ZN8TaoCrypt3SHAC1ERKS0_>  ; TaoCrypt::SHA::SHA(TaoCrypt::SHA const&)
08770545 +0x035:  mov    %edi,0x4(%esp)
08770549 +0x039:  mov    %esi,(%esp)
0877054c +0x03c:  call   0876fba0 <_ZN8TaoCrypt3SHA4SwapERS0_>  ; TaoCrypt::SHA::Swap(TaoCrypt::SHA&)
08770551 +0x041:  mov    %esi,%eax
08770553 +0x043:  mov    -0xc(%ebp),%ebx
08770556 +0x046:  mov    -0x8(%ebp),%esi
08770559 +0x049:  mov    -0x4(%ebp),%edi
0877055c +0x04c:  mov    %ebp,%esp
0877055e +0x04e:  pop    %ebp
0877055f +0x04f:  ret
08770560 +0x050:  push   %ebp
08770561 +0x051:  mov    $0x1,%eax
08770566 +0x056:  mov    %esp,%ebp
08770568 +0x058:  pop    %ebp
08770569 +0x059:  ret
0877056a +0x05a:  nop
0877056b +0x05b:  nop
0877056c +0x05c:  nop
0877056d +0x05d:  nop
0877056e +0x05e:  nop
0877056f +0x05f:  nop
08770570 +0x060:  push   %ebp
08770571 +0x061:  mov    $0x40,%eax
08770576 +0x066:  mov    %esp,%ebp
08770578 +0x068:  pop    %ebp
08770579 +0x069:  ret
0877057a +0x06a:  nop
0877057b +0x06b:  nop
0877057c +0x06c:  nop
0877057d +0x06d:  nop
0877057e +0x06e:  nop
0877057f +0x06f:  nop
08770580 +0x070:  push   %ebp
08770581 +0x071:  mov    $0x14,%eax
08770586 +0x076:  mov    %esp,%ebp
08770588 +0x078:  pop    %ebp
08770589 +0x079:  ret
0877058a +0x07a:  nop
0877058b +0x07b:  nop
0877058c +0x07c:  nop
0877058d +0x07d:  nop
0877058e +0x07e:  nop
0877058f +0x07f:  nop
08770590 +0x080:  push   %ebp
08770591 +0x081:  mov    $0x38,%eax
08770596 +0x086:  mov    %esp,%ebp
08770598 +0x088:  pop    %ebp
08770599 +0x089:  ret
0877059a +0x08a:  nop
0877059b +0x08b:  nop
0877059c +0x08c:  nop
0877059d +0x08d:  nop
0877059e +0x08e:  nop
0877059f +0x08f:  nop
087705a0 +0x090:  push   %ebp
087705a1 +0x091:  mov    $0x1,%eax
087705a6 +0x096:  mov    %esp,%ebp
087705a8 +0x098:  pop    %ebp
087705a9 +0x099:  ret
087705aa +0x09a:  nop
087705ab +0x09b:  nop
087705ac +0x09c:  nop
087705ad +0x09d:  nop
087705ae +0x09e:  nop
087705af +0x09f:  nop
087705b0 +0x0a0:  push   %ebp
087705b1 +0x0a1:  mov    $0x40,%eax
087705b6 +0x0a6:  mov    %esp,%ebp
087705b8 +0x0a8:  pop    %ebp
087705b9 +0x0a9:  ret
087705ba +0x0aa:  nop
087705bb +0x0ab:  nop
087705bc +0x0ac:  nop
087705bd +0x0ad:  nop
087705be +0x0ae:  nop
087705bf +0x0af:  nop
087705c0 +0x0b0:  push   %ebp
087705c1 +0x0b1:  mov    $0x20,%eax
087705c6 +0x0b6:  mov    %esp,%ebp
087705c8 +0x0b8:  pop    %ebp
087705c9 +0x0b9:  ret
087705ca +0x0ba:  nop
087705cb +0x0bb:  nop
087705cc +0x0bc:  nop
087705cd +0x0bd:  nop
087705ce +0x0be:  nop
087705cf +0x0bf:  nop
087705d0 +0x0c0:  push   %ebp
087705d1 +0x0c1:  mov    $0x38,%eax
087705d6 +0x0c6:  mov    %esp,%ebp
087705d8 +0x0c8:  pop    %ebp
087705d9 +0x0c9:  ret
087705da +0x0ca:  nop
087705db +0x0cb:  nop
087705dc +0x0cc:  nop
087705dd +0x0cd:  nop
087705de +0x0ce:  nop
087705df +0x0cf:  nop
087705e0 +0x0d0:  push   %ebp
087705e1 +0x0d1:  mov    $0x1,%eax
087705e6 +0x0d6:  mov    %esp,%ebp
087705e8 +0x0d8:  pop    %ebp
087705e9 +0x0d9:  ret
087705ea +0x0da:  nop
087705eb +0x0db:  nop
087705ec +0x0dc:  nop
087705ed +0x0dd:  nop
087705ee +0x0de:  nop
087705ef +0x0df:  nop
087705f0 +0x0e0:  push   %ebp
087705f1 +0x0e1:  mov    $0x40,%eax
087705f6 +0x0e6:  mov    %esp,%ebp
087705f8 +0x0e8:  pop    %ebp
087705f9 +0x0e9:  ret
087705fa +0x0ea:  nop
087705fb +0x0eb:  nop
087705fc +0x0ec:  nop
087705fd +0x0ed:  nop
087705fe +0x0ee:  nop
087705ff +0x0ef:  nop
08770600 +0x0f0:  push   %ebp
08770601 +0x0f1:  mov    $0x1c,%eax
08770606 +0x0f6:  mov    %esp,%ebp
08770608 +0x0f8:  pop    %ebp
08770609 +0x0f9:  ret
0877060a +0x0fa:  nop
0877060b +0x0fb:  nop
0877060c +0x0fc:  nop
0877060d +0x0fd:  nop
0877060e +0x0fe:  nop
0877060f +0x0ff:  nop
08770610 +0x100:  push   %ebp
08770611 +0x101:  mov    $0x38,%eax
08770616 +0x106:  mov    %esp,%ebp
08770618 +0x108:  pop    %ebp
08770619 +0x109:  ret
0877061a +0x10a:  nop
0877061b +0x10b:  nop
0877061c +0x10c:  nop
0877061d +0x10d:  nop
0877061e +0x10e:  nop
0877061f +0x10f:  nop
08770620 +0x110:  push   %ebp
08770621 +0x111:  mov    $0x1,%eax
08770626 +0x116:  mov    %esp,%ebp
08770628 +0x118:  pop    %ebp
08770629 +0x119:  ret
0877062a +0x11a:  nop
0877062b +0x11b:  nop
0877062c +0x11c:  nop
0877062d +0x11d:  nop
0877062e +0x11e:  nop
0877062f +0x11f:  nop
08770630 +0x120:  push   %ebp
08770631 +0x121:  mov    $0x80,%eax
08770636 +0x126:  mov    %esp,%ebp
08770638 +0x128:  pop    %ebp
08770639 +0x129:  ret
0877063a +0x12a:  nop
0877063b +0x12b:  nop
0877063c +0x12c:  nop
0877063d +0x12d:  nop
0877063e +0x12e:  nop
0877063f +0x12f:  nop
08770640 +0x130:  push   %ebp
08770641 +0x131:  mov    $0x40,%eax
08770646 +0x136:  mov    %esp,%ebp
08770648 +0x138:  pop    %ebp
08770649 +0x139:  ret
0877064a +0x13a:  nop
0877064b +0x13b:  nop
0877064c +0x13c:  nop
0877064d +0x13d:  nop
0877064e +0x13e:  nop
0877064f +0x13f:  nop
08770650 +0x140:  push   %ebp
08770651 +0x141:  mov    $0x70,%eax
08770656 +0x146:  mov    %esp,%ebp
08770658 +0x148:  pop    %ebp
08770659 +0x149:  ret
0877065a +0x14a:  nop
0877065b +0x14b:  nop
0877065c +0x14c:  nop
0877065d +0x14d:  nop
0877065e +0x14e:  nop
0877065f +0x14f:  nop
08770660 +0x150:  push   %ebp
08770661 +0x151:  mov    $0x1,%eax
08770666 +0x156:  mov    %esp,%ebp
08770668 +0x158:  pop    %ebp
08770669 +0x159:  ret
0877066a +0x15a:  nop
0877066b +0x15b:  nop
0877066c +0x15c:  nop
0877066d +0x15d:  nop
0877066e +0x15e:  nop
0877066f +0x15f:  nop
08770670 +0x160:  push   %ebp
08770671 +0x161:  mov    $0x80,%eax
08770676 +0x166:  mov    %esp,%ebp
08770678 +0x168:  pop    %ebp
08770679 +0x169:  ret
0877067a +0x16a:  nop
0877067b +0x16b:  nop
0877067c +0x16c:  nop
0877067d +0x16d:  nop
0877067e +0x16e:  nop
0877067f +0x16f:  nop
08770680 +0x170:  push   %ebp
08770681 +0x171:  mov    $0x30,%eax
08770686 +0x176:  mov    %esp,%ebp
08770688 +0x178:  pop    %ebp
08770689 +0x179:  ret
0877068a +0x17a:  nop
0877068b +0x17b:  nop
0877068c +0x17c:  nop
0877068d +0x17d:  nop
0877068e +0x17e:  nop
0877068f +0x17f:  nop
08770690 +0x180:  push   %ebp
08770691 +0x181:  mov    $0x70,%eax
08770696 +0x186:  mov    %esp,%ebp
08770698 +0x188:  pop    %ebp
08770699 +0x189:  ret
0877069a +0x18a:  nop
0877069b +0x18b:  nop
0877069c +0x18c:  nop
0877069d +0x18d:  nop
0877069e +0x18e:  nop
0877069f +0x18f:  nop
087706a0 +0x190:  call   087245c4 <__i686.get_pc_thunk.cx>
087706a5 +0x195:  add    $0xbfc4f3,%ecx
087706ab +0x19b:  push   %ebp
087706ac +0x19c:  mov    %esp,%ebp
087706ae +0x19e:  mov    -0x3c(%ecx),%eax
087706b4 +0x1a4:  lea    0x8(%eax),%edx
087706b7 +0x1a7:  mov    0x8(%ebp),%eax
087706ba +0x1aa:  mov    %edx,(%eax)
087706bc +0x1ac:  pop    %ebp
087706bd +0x1ad:  ret
087706be +0x1ae:  nop
087706bf +0x1af:  nop
087706c0 +0x1b0:  call   087245c4 <__i686.get_pc_thunk.cx>
087706c5 +0x1b5:  add    $0xbfc4d3,%ecx
087706cb +0x1bb:  push   %ebp
087706cc +0x1bc:  mov    %esp,%ebp
087706ce +0x1be:  mov    -0x3c(%ecx),%eax
087706d4 +0x1c4:  lea    0x8(%eax),%edx
087706d7 +0x1c7:  mov    0x8(%ebp),%eax
087706da +0x1ca:  mov    %edx,(%eax)
087706dc +0x1cc:  pop    %ebp
087706dd +0x1cd:  ret
087706de +0x1ce:  nop
087706df +0x1cf:  nop
087706e0 +0x1d0:  call   087245c4 <__i686.get_pc_thunk.cx>
087706e5 +0x1d5:  add    $0xbfc4b3,%ecx
087706eb +0x1db:  push   %ebp
087706ec +0x1dc:  mov    %esp,%ebp
087706ee +0x1de:  mov    -0x3c(%ecx),%eax
087706f4 +0x1e4:  lea    0x8(%eax),%edx
087706f7 +0x1e7:  mov    0x8(%ebp),%eax
087706fa +0x1ea:  mov    %edx,(%eax)
087706fc +0x1ec:  pop    %ebp
087706fd +0x1ed:  ret
087706fe +0x1ee:  nop
087706ff +0x1ef:  nop
08770700 +0x1f0:  call   087245c4 <__i686.get_pc_thunk.cx>
08770705 +0x1f5:  add    $0xbfc493,%ecx
0877070b +0x1fb:  push   %ebp
0877070c +0x1fc:  mov    %esp,%ebp
0877070e +0x1fe:  mov    -0x3c(%ecx),%eax
08770714 +0x204:  lea    0x8(%eax),%edx
08770717 +0x207:  mov    0x8(%ebp),%eax
0877071a +0x20a:  mov    %edx,(%eax)
0877071c +0x20c:  pop    %ebp
0877071d +0x20d:  ret
0877071e +0x20e:  nop
0877071f +0x20f:  nop
08770720 +0x210:  call   087245c4 <__i686.get_pc_thunk.cx>
08770725 +0x215:  add    $0xbfc473,%ecx
0877072b +0x21b:  push   %ebp
0877072c +0x21c:  mov    %esp,%ebp
0877072e +0x21e:  mov    -0x3c(%ecx),%eax
08770734 +0x224:  lea    0x8(%eax),%edx
08770737 +0x227:  mov    0x8(%ebp),%eax
0877073a +0x22a:  mov    %edx,(%eax)
0877073c +0x22c:  pop    %ebp
0877073d +0x22d:  ret
0877073e +0x22e:  nop
0877073f +0x22f:  nop
08770740 +0x230:  call   087245c4 <__i686.get_pc_thunk.cx>
08770745 +0x235:  add    $0xbfc453,%ecx
0877074b +0x23b:  push   %ebp
0877074c +0x23c:  mov    %esp,%ebp
0877074e +0x23e:  mov    -0x3c(%ecx),%eax
08770754 +0x244:  lea    0x8(%eax),%edx
08770757 +0x247:  mov    0x8(%ebp),%eax
0877075a +0x24a:  mov    %edx,(%eax)
0877075c +0x24c:  pop    %ebp
0877075d +0x24d:  ret
0877075e +0x24e:  nop
0877075f +0x24f:  nop
08770760 +0x250:  call   087245c4 <__i686.get_pc_thunk.cx>
08770765 +0x255:  add    $0xbfc433,%ecx
0877076b +0x25b:  push   %ebp
0877076c +0x25c:  mov    %esp,%ebp
0877076e +0x25e:  mov    -0x3c(%ecx),%eax
08770774 +0x264:  lea    0x8(%eax),%edx
08770777 +0x267:  mov    0x8(%ebp),%eax
0877077a +0x26a:  mov    %edx,(%eax)
0877077c +0x26c:  pop    %ebp
0877077d +0x26d:  ret
0877077e +0x26e:  nop
0877077f +0x26f:  nop
08770780 +0x270:  call   087245c4 <__i686.get_pc_thunk.cx>
08770785 +0x275:  add    $0xbfc413,%ecx
0877078b +0x27b:  push   %ebp
0877078c +0x27c:  mov    %esp,%ebp
0877078e +0x27e:  mov    -0x3c(%ecx),%eax
08770794 +0x284:  lea    0x8(%eax),%edx
08770797 +0x287:  mov    0x8(%ebp),%eax
0877079a +0x28a:  mov    %edx,(%eax)
0877079c +0x28c:  pop    %ebp
0877079d +0x28d:  ret
0877079e +0x28e:  nop
0877079f +0x28f:  nop
087707a0 +0x290:  call   087245c4 <__i686.get_pc_thunk.cx>
087707a5 +0x295:  add    $0xbfc3f3,%ecx
087707ab +0x29b:  push   %ebp
087707ac +0x29c:  mov    %esp,%ebp
087707ae +0x29e:  mov    -0x3c(%ecx),%eax
087707b4 +0x2a4:  lea    0x8(%eax),%edx
087707b7 +0x2a7:  mov    0x8(%ebp),%eax
087707ba +0x2aa:  mov    %edx,(%eax)
087707bc +0x2ac:  pop    %ebp
087707bd +0x2ad:  ret
087707be +0x2ae:  nop
087707bf +0x2af:  nop
087707c0 +0x2b0:  call   087245c4 <__i686.get_pc_thunk.cx>
087707c5 +0x2b5:  add    $0xbfc3d3,%ecx
087707cb +0x2bb:  push   %ebp
087707cc +0x2bc:  mov    %esp,%ebp
087707ce +0x2be:  mov    -0x3c(%ecx),%eax
087707d4 +0x2c4:  lea    0x8(%eax),%edx
087707d7 +0x2c7:  mov    0x8(%ebp),%eax
087707da +0x2ca:  mov    %edx,(%eax)
087707dc +0x2cc:  pop    %ebp
087707dd +0x2cd:  ret
087707de +0x2ce:  nop
087707df +0x2cf:  nop
```

## 反编译 C

```c
// TaoCrypt::SHA::operator= @ 0x8770510

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::SHA const&) */

SHA * __thiscall TaoCrypt::SHA::operator=(SHA *this,SHA *param_1)

{
  SHA local_8c [124];
  
  SHA(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}
```
