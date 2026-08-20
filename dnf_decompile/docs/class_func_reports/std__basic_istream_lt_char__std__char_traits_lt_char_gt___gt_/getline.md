# getline

`_ZNSi7getlineEPcic`

`std::basic_istream<char, std::char_traits<char> >::getline(char*, int, char)`

| 类 | 地址 |
|---|---|
| `std::basic_istream<char, std::char_traits<char> >` | `0x086e83c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e83c0  _ZNSi7getlineEPcic
#           std::basic_istream<char, std::char_traits<char> >::getline(char*, int, char)
# range [0x086e83c0, 0x086e85fe]
086e83c0 +0x000:  push   %ebp
086e83c1 +0x001:  mov    %esp,%ebp
086e83c3 +0x003:  push   %edi
086e83c4 +0x004:  push   %esi
086e83c5 +0x005:  push   %ebx
086e83c6 +0x006:  sub    $0x5c,%esp
086e83c9 +0x009:  movzbl 0x14(%ebp),%eax
086e83cd +0x00d:  mov    0x8(%ebp),%esi
086e83d0 +0x010:  mov    %al,-0x2c(%ebp)
086e83d3 +0x013:  lea    -0x19(%ebp),%eax
086e83d6 +0x016:  movl   $0x0,0x4(%esi)
086e83dd +0x01d:  movl   $0x1,0x8(%esp)
086e83e5 +0x025:  mov    %esi,0x4(%esp)
086e83e9 +0x029:  mov    %eax,(%esp)
086e83ec +0x02c:  call   086e4760 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x46c0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x46c0
086e83f1 +0x031:  xor    %ecx,%ecx
086e83f3 +0x033:  cmpb   $0x0,-0x19(%ebp)
086e83f7 +0x037:  jne    086e8448 <+0x88>
086e83f9 +0x039:  mov    0x10(%ebp),%edi
086e83fc +0x03c:  test   %edi,%edi
086e83fe +0x03e:  jle    086e8406 <+0x46>
086e8400 +0x040:  mov    0xc(%ebp),%eax
086e8403 +0x043:  movb   $0x0,(%eax)
086e8406 +0x046:  mov    0x4(%esi),%ebx
086e8409 +0x049:  test   %ebx,%ebx
086e840b +0x04b:  jne    086e8438 <+0x78>
086e840d +0x04d:  or     $0x4,%ecx
086e8410 +0x050:  mov    (%esi),%eax
086e8412 +0x052:  mov    -0xc(%eax),%eax
086e8415 +0x055:  lea    (%esi,%eax,1),%eax
086e8418 +0x058:  or     0x14(%eax),%ecx
086e841b +0x05b:  mov    %eax,(%esp)
086e841e +0x05e:  mov    %ecx,0x4(%esp)
086e8422 +0x062:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
086e8427 +0x067:  add    $0x5c,%esp
086e842a +0x06a:  mov    %esi,%eax
086e842c +0x06c:  pop    %ebx
086e842d +0x06d:  pop    %esi
086e842e +0x06e:  pop    %edi
086e842f +0x06f:  pop    %ebp
086e8430 +0x070:  ret
086e8431 +0x071:  lea    0x0(%esi,%eiz,1),%esi
086e8438 +0x078:  test   %ecx,%ecx
086e843a +0x07a:  jne    086e8410 <+0x50>
086e843c +0x07c:  add    $0x5c,%esp
086e843f +0x07f:  mov    %esi,%eax
086e8441 +0x081:  pop    %ebx
086e8442 +0x082:  pop    %esi
086e8443 +0x083:  pop    %edi
086e8444 +0x084:  pop    %ebp
086e8445 +0x085:  ret
086e8446 +0x086:  xchg   %ax,%ax
086e8448 +0x088:  mov    (%esi),%eax
086e844a +0x08a:  movzbl -0x2c(%ebp),%edx
086e844e +0x08e:  mov    -0xc(%eax),%eax
086e8451 +0x091:  mov    %edx,-0x30(%ebp)
086e8454 +0x094:  mov    0x78(%esi,%eax,1),%ebx
086e8458 +0x098:  mov    0x8(%ebx),%eax
086e845b +0x09b:  cmp    0xc(%ebx),%eax
086e845e +0x09e:  jae    086e85a3 <+0x1e3>
086e8464 +0x0a4:  movzbl (%eax),%eax
086e8467 +0x0a7:  movsbl -0x2c(%ebp),%ecx
086e846b +0x0ab:  mov    0x4(%esi),%edi
086e846e +0x0ae:  mov    %ecx,-0x2c(%ebp)
086e8471 +0x0b1:  jmp    086e850d <+0x14d>
086e8476 +0x0b6:  xchg   %ax,%ax
086e8478 +0x0b8:  cmp    $0xffffffff,%eax
086e847b +0x0bb:  je     086e8578 <+0x1b8>
086e8481 +0x0c1:  cmp    -0x30(%ebp),%eax
086e8484 +0x0c4:  je     086e8530 <+0x170>
086e848a +0x0ca:  mov    0x8(%ebx),%edx
086e848d +0x0cd:  not    %edi
086e848f +0x0cf:  mov    0xc(%ebx),%ecx
086e8492 +0x0d2:  sub    %edx,%ecx
086e8494 +0x0d4:  mov    %ecx,-0x4c(%ebp)
086e8497 +0x0d7:  mov    0x10(%ebp),%ecx
086e849a +0x0da:  lea    (%edi,%ecx,1),%ecx
086e849d +0x0dd:  mov    -0x4c(%ebp),%edi
086e84a0 +0x0e0:  mov    %ecx,-0x3c(%ebp)
086e84a3 +0x0e3:  cmp    %edi,%ecx
086e84a5 +0x0e5:  jle    086e84aa <+0xea>
086e84a7 +0x0e7:  mov    %edi,-0x3c(%ebp)
086e84aa +0x0ea:  cmpl   $0x1,-0x3c(%ebp)
086e84ae +0x0ee:  jle    086e8548 <+0x188>
086e84b4 +0x0f4:  mov    -0x2c(%ebp),%eax
086e84b7 +0x0f7:  mov    -0x3c(%ebp),%edi
086e84ba +0x0fa:  mov    %edx,(%esp)
086e84bd +0x0fd:  mov    %edx,-0x34(%ebp)
086e84c0 +0x100:  mov    %eax,0x4(%esp)
086e84c4 +0x104:  mov    %edi,0x8(%esp)
086e84c8 +0x108:  call   0807dec0 <_init+0x7b8>
086e84cd +0x10d:  mov    -0x34(%ebp),%edx
086e84d0 +0x110:  test   %eax,%eax
086e84d2 +0x112:  je     086e84d9 <+0x119>
086e84d4 +0x114:  sub    %edx,%eax
086e84d6 +0x116:  mov    %eax,-0x3c(%ebp)
086e84d9 +0x119:  mov    0xc(%ebp),%edi
086e84dc +0x11c:  mov    -0x3c(%ebp),%ecx
086e84df +0x11f:  mov    %edx,0x4(%esp)
086e84e3 +0x123:  mov    %edi,(%esp)
086e84e6 +0x126:  mov    %ecx,0x8(%esp)
086e84ea +0x12a:  call   0807d8a0 <_init+0x198>
086e84ef +0x12f:  mov    -0x3c(%ebp),%eax
086e84f2 +0x132:  add    %eax,%edi
086e84f4 +0x134:  mov    %edi,0xc(%ebp)
086e84f7 +0x137:  mov    0x4(%esi),%edi
086e84fa +0x13a:  add    %eax,0x8(%ebx)
086e84fd +0x13d:  add    %eax,%edi
086e84ff +0x13f:  mov    0x8(%ebx),%eax
086e8502 +0x142:  cmp    0xc(%ebx),%eax
086e8505 +0x145:  mov    %edi,0x4(%esi)
086e8508 +0x148:  jae    086e8582 <+0x1c2>
086e850a +0x14a:  movzbl (%eax),%eax
086e850d +0x14d:  lea    0x1(%edi),%edx
086e8510 +0x150:  cmp    0x10(%ebp),%edx
086e8513 +0x153:  jl     086e8478 <+0xb8>
086e8519 +0x159:  cmp    $0xffffffff,%eax
086e851c +0x15c:  je     086e8578 <+0x1b8>
086e851e +0x15e:  cmp    -0x30(%ebp),%eax
086e8521 +0x161:  mov    $0x4,%ecx
086e8526 +0x166:  jne    086e83f9 <+0x39>
086e852c +0x16c:  lea    0x0(%esi,%eiz,1),%esi
086e8530 +0x170:  mov    %edx,0x4(%esi)
086e8533 +0x173:  mov    %ebx,(%esp)
086e8536 +0x176:  call   08705f60 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x116f4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x116f4
086e853b +0x17b:  xor    %ecx,%ecx
086e853d +0x17d:  jmp    086e83f9 <+0x39>
086e8542 +0x182:  lea    0x0(%esi),%esi
086e8548 +0x188:  mov    0xc(%ebp),%edx
086e854b +0x18b:  mov    %al,(%edx)
086e854d +0x18d:  mov    0x8(%ebx),%eax
086e8550 +0x190:  add    $0x1,%edx
086e8553 +0x193:  addl   $0x1,0x4(%esi)
086e8557 +0x197:  cmp    0xc(%ebx),%eax
086e855a +0x19a:  mov    %edx,0xc(%ebp)
086e855d +0x19d:  jae    086e858c <+0x1cc>
086e855f +0x19f:  add    $0x1,%eax
086e8562 +0x1a2:  mov    %eax,0x8(%ebx)
086e8565 +0x1a5:  cmp    0xc(%ebx),%eax
086e8568 +0x1a8:  jae    086e8582 <+0x1c2>
086e856a +0x1aa:  movzbl (%eax),%eax
086e856d +0x1ad:  mov    0x4(%esi),%edi
086e8570 +0x1b0:  jmp    086e850d <+0x14d>
086e8572 +0x1b2:  lea    0x0(%esi),%esi
086e8578 +0x1b8:  mov    $0x2,%ecx
086e857d +0x1bd:  jmp    086e83f9 <+0x39>
086e8582 +0x1c2:  mov    (%ebx),%eax
086e8584 +0x1c4:  mov    %ebx,(%esp)
086e8587 +0x1c7:  call   *0x24(%eax)
086e858a +0x1ca:  jmp    086e856d <+0x1ad>
086e858c +0x1cc:  mov    (%ebx),%eax
086e858e +0x1ce:  mov    %ebx,(%esp)
086e8591 +0x1d1:  call   *0x28(%eax)
086e8594 +0x1d4:  mov    %eax,%edx
086e8596 +0x1d6:  or     $0xffffffff,%eax
086e8599 +0x1d9:  cmp    $0xffffffff,%edx
086e859c +0x1dc:  je     086e856d <+0x1ad>
086e859e +0x1de:  mov    0x8(%ebx),%eax
086e85a1 +0x1e1:  jmp    086e8565 <+0x1a5>
086e85a3 +0x1e3:  mov    (%ebx),%eax
086e85a5 +0x1e5:  mov    %ebx,(%esp)
086e85a8 +0x1e8:  call   *0x24(%eax)
086e85ab +0x1eb:  jmp    086e8467 <+0xa7>
086e85b0 +0x1f0:  cmp    $0x2,%edx
086e85b3 +0x1f3:  je     086e85d6 <+0x216>
086e85b5 +0x1f5:  mov    %eax,(%esp)
086e85b8 +0x1f8:  call   08725ce0 <__cxa_begin_catch>
086e85bd +0x1fd:  mov    (%esi),%eax
086e85bf +0x1ff:  mov    -0xc(%eax),%eax
086e85c2 +0x202:  lea    (%esi,%eax,1),%eax
086e85c5 +0x205:  call   086e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>  ; std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
086e85ca +0x20a:  call   08725c30 <__cxa_end_catch>
086e85cf +0x20f:  xor    %ecx,%ecx
086e85d1 +0x211:  jmp    086e83f9 <+0x39>
086e85d6 +0x216:  mov    %eax,(%esp)
086e85d9 +0x219:  call   08725ce0 <__cxa_begin_catch>
086e85de +0x21e:  mov    (%esi),%eax
086e85e0 +0x220:  add    -0xc(%eax),%esi
086e85e3 +0x223:  mov    %esi,%eax
086e85e5 +0x225:  call   086e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>  ; std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
086e85ea +0x22a:  call   08724be0 <__cxa_rethrow>
086e85ef +0x22f:  mov    %eax,%ebx
086e85f1 +0x231:  call   08725c30 <__cxa_end_catch>
086e85f6 +0x236:  mov    %ebx,(%esp)
086e85f9 +0x239:  call   08ae3750 <_Unwind_Resume>
086e85fe +0x23e:  jmp    086e85ef <+0x22f>
```

## 反编译 C

```c
// std::istream::getline @ 0x86e83c0

/* std::istream::getline(char*, int, char) */

istream * __thiscall std::istream::getline(istream *this,char *param_1,int param_2,char param_3)

{
  streambuf *this_00;
  void *__s;
  byte *pbVar1;
  uint uVar2;
  void *pvVar3;
  byte *pbVar4;
  int iVar5;
  _Ios_Iostate _Var6;
  uint uVar7;
  size_t local_40;
  sentry local_1d [13];
  
  *(undefined4 *)(this + 4) = 0;
  sentry::sentry(local_1d,this,true);
  _Var6 = _S_goodbit;
  if (local_1d[0] != (sentry)0x0) {
    this_00 = *(streambuf **)(this + *(int *)(*(int *)this + -0xc) + 0x78);
    if (*(byte **)(this_00 + 8) < *(byte **)(this_00 + 0xc)) {
      uVar2 = (uint)**(byte **)(this_00 + 8);
    }
    else {
      uVar2 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
    }
    uVar7 = *(uint *)(this + 4);
    while ((int)(uVar7 + 1) < param_2) {
      if (uVar2 == 0xffffffff) goto LAB_086e8578;
      if (uVar2 == (byte)param_3) goto LAB_086e8530;
      __s = *(void **)(this_00 + 8);
      local_40 = ~uVar7 + param_2;
      if (*(int *)(this_00 + 0xc) - (int)__s < (int)(~uVar7 + param_2)) {
        local_40 = *(int *)(this_00 + 0xc) - (int)__s;
      }
      if ((int)local_40 < 2) {
        *param_1 = (char)uVar2;
        uVar2 = *(uint *)(this_00 + 8);
        param_1 = param_1 + 1;
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        if (uVar2 < *(uint *)(this_00 + 0xc)) {
          pbVar4 = (byte *)(uVar2 + 1);
          *(byte **)(this_00 + 8) = pbVar4;
LAB_086e8565:
          if (*(byte **)(this_00 + 0xc) <= pbVar4) goto LAB_086e8582;
          uVar2 = (uint)*pbVar4;
        }
        else {
          iVar5 = (**(code **)(*(int *)this_00 + 0x28))(this_00);
          uVar2 = 0xffffffff;
          if (iVar5 != -1) {
            pbVar4 = *(byte **)(this_00 + 8);
            goto LAB_086e8565;
          }
        }
LAB_086e856d:
        uVar7 = *(uint *)(this + 4);
      }
      else {
        pvVar3 = memchr(__s,(int)param_3,local_40);
        if (pvVar3 != (void *)0x0) {
          local_40 = (int)pvVar3 - (int)__s;
        }
        memcpy(param_1,__s,local_40);
        param_1 = param_1 + local_40;
        iVar5 = *(int *)(this + 4);
        *(size_t *)(this_00 + 8) = *(int *)(this_00 + 8) + local_40;
        uVar7 = iVar5 + local_40;
        pbVar1 = *(byte **)(this_00 + 8);
        pbVar4 = *(byte **)(this_00 + 0xc);
        *(uint *)(this + 4) = uVar7;
        if (pbVar4 <= pbVar1) {
LAB_086e8582:
          uVar2 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
          goto LAB_086e856d;
        }
        uVar2 = (uint)*pbVar1;
      }
    }
    if (uVar2 == 0xffffffff) {
LAB_086e8578:
      _Var6 = _S_eofbit;
    }
    else {
      _Var6 = _S_failbit;
      if (uVar2 == (byte)param_3) {
LAB_086e8530:
        *(uint *)(this + 4) = uVar7 + 1;
                    /* try { // try from 086e8536 to 086e85aa has its CatchHandler @ 086e85b0 */
        streambuf::sbumpc(this_00);
        _Var6 = _S_goodbit;
      }
    }
  }
  if (0 < param_2) {
    *param_1 = '\0';
  }
  if (*(int *)(this + 4) == 0) {
    _Var6 = _Var6 | _S_failbit;
  }
  else if (_Var6 == _S_goodbit) {
    return this;
  }
  ios::clear((ios *)(this + *(int *)(*(int *)this + -0xc)),
             _Var6 | *(_Ios_Iostate *)((ios *)(this + *(int *)(*(int *)this + -0xc)) + 0x14));
  return this;
}
```
