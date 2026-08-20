# clear

`_ZN10AttackInfo5clearEv`

`AttackInfo::clear()`

| 类 | 地址 |
|---|---|
| `AttackInfo` | `0x088904b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088904b8  _ZN10AttackInfo5clearEv
#           AttackInfo::clear()
# range [0x088904b8, 0x0889075f]
088904b8 +0x000:  push   %ebp
088904b9 +0x001:  mov    %esp,%ebp
088904bb +0x003:  sub    $0x28,%esp
088904be +0x006:  mov    0x8(%ebp),%eax
088904c1 +0x009:  mov    $0x0,%edx
088904c6 +0x00e:  mov    %edx,(%eax)
088904c8 +0x010:  mov    0x8(%ebp),%eax
088904cb +0x013:  movl   $0x0,0x8(%eax)
088904d2 +0x01a:  mov    0x8(%ebp),%eax
088904d5 +0x01d:  movl   $0x0,0xc(%eax)
088904dc +0x024:  mov    0x8(%ebp),%eax
088904df +0x027:  movl   $0x0,0x10(%eax)
088904e6 +0x02e:  mov    0x8(%ebp),%eax
088904e9 +0x031:  movl   $0x0,0x14(%eax)
088904f0 +0x038:  mov    0x8(%ebp),%eax
088904f3 +0x03b:  mov    $0x3f800000,%edx
088904f8 +0x040:  mov    %edx,0x18(%eax)
088904fb +0x043:  mov    0x8(%ebp),%eax
088904fe +0x046:  movl   $0x1,0x1c(%eax)
08890505 +0x04d:  mov    0x8(%ebp),%eax
08890508 +0x050:  movl   $0x0,0x20(%eax)
0889050f +0x057:  mov    0x8(%ebp),%eax
08890512 +0x05a:  movl   $0x0,0x24(%eax)
08890519 +0x061:  mov    0x8(%ebp),%eax
0889051c +0x064:  mov    $0x0,%edx
08890521 +0x069:  mov    %edx,0x28(%eax)
08890524 +0x06c:  mov    0x8(%ebp),%eax
08890527 +0x06f:  mov    $0x0,%edx
0889052c +0x074:  mov    %edx,0x2c(%eax)
0889052f +0x077:  mov    0x8(%ebp),%eax
08890532 +0x07a:  movl   $0x0,0x30(%eax)
08890539 +0x081:  mov    0x8(%ebp),%eax
0889053c +0x084:  movl   $0x0,0x34(%eax)
08890543 +0x08b:  mov    0x8(%ebp),%eax
08890546 +0x08e:  movl   $0x0,0x38(%eax)
0889054d +0x095:  mov    0x8(%ebp),%eax
08890550 +0x098:  mov    $0x0,%edx
08890555 +0x09d:  mov    %edx,0x3c(%eax)
08890558 +0x0a0:  mov    0x8(%ebp),%eax
0889055b +0x0a3:  mov    $0x0,%edx
08890560 +0x0a8:  mov    %edx,0x40(%eax)
08890563 +0x0ab:  mov    0x8(%ebp),%eax
08890566 +0x0ae:  movl   $0x0,0x44(%eax)
0889056d +0x0b5:  mov    0x8(%ebp),%eax
08890570 +0x0b8:  movl   $0x0,0x48(%eax)
08890577 +0x0bf:  mov    0x8(%ebp),%eax
0889057a +0x0c2:  add    $0x4c,%eax
0889057d +0x0c5:  movl   $"",0x4(%esp)
08890585 +0x0cd:  mov    %eax,(%esp)
08890588 +0x0d0:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0889058d +0x0d5:  mov    0x8(%ebp),%eax
08890590 +0x0d8:  movl   $0x1,0x50(%eax)
08890597 +0x0df:  mov    0x8(%ebp),%eax
0889059a +0x0e2:  movl   $0x5,0x54(%eax)
088905a1 +0x0e9:  mov    0x8(%ebp),%eax
088905a4 +0x0ec:  movb   $0x0,0x58(%eax)
088905a8 +0x0f0:  mov    0x8(%ebp),%eax
088905ab +0x0f3:  movl   $0xffffffff,0x5c(%eax)
088905b2 +0x0fa:  mov    0x8(%ebp),%eax
088905b5 +0x0fd:  mov    $0xbf800000,%edx
088905ba +0x102:  mov    %edx,0x60(%eax)
088905bd +0x105:  mov    0x8(%ebp),%eax
088905c0 +0x108:  movb   $0x0,0x64(%eax)
088905c4 +0x10c:  mov    0x8(%ebp),%eax
088905c7 +0x10f:  movl   $0x0,0x68(%eax)
088905ce +0x116:  mov    0x8(%ebp),%eax
088905d1 +0x119:  movl   $0x0,0x6c(%eax)
088905d8 +0x120:  mov    0x8(%ebp),%eax
088905db +0x123:  movl   $0x0,0x70(%eax)
088905e2 +0x12a:  mov    0x8(%ebp),%eax
088905e5 +0x12d:  movl   $0x0,0x78(%eax)
088905ec +0x134:  mov    0x8(%ebp),%eax
088905ef +0x137:  movl   $0x0,0x7c(%eax)
088905f6 +0x13e:  mov    0x8(%ebp),%eax
088905f9 +0x141:  mov    $0x0,%edx
088905fe +0x146:  mov    %edx,0x80(%eax)
08890604 +0x14c:  mov    0x8(%ebp),%eax
08890607 +0x14f:  mov    $0x42c80000,%edx
0889060c +0x154:  mov    %edx,0x84(%eax)
08890612 +0x15a:  mov    0x8(%ebp),%eax
08890615 +0x15d:  movb   $0x1,0x88(%eax)
0889061c +0x164:  mov    0x8(%ebp),%eax
0889061f +0x167:  movl   $0x0,0x74(%eax)
08890626 +0x16e:  mov    0x8(%ebp),%eax
08890629 +0x171:  movl   $0x3,0x8c(%eax)
08890633 +0x17b:  mov    0x8(%ebp),%eax
08890636 +0x17e:  movb   $0x0,0x90(%eax)
0889063d +0x185:  mov    0x8(%ebp),%eax
08890640 +0x188:  movb   $0x0,0x91(%eax)
08890647 +0x18f:  movl   $0x0,-0x14(%ebp)
0889064e +0x196:  jmp    0889066b <+0x1b3>
08890650 +0x198:  mov    -0x14(%ebp),%ecx
08890653 +0x19b:  cmpl   $0x2,-0x14(%ebp)
08890657 +0x19f:  sete   %al
0889065a +0x1a2:  movzbl %al,%edx
0889065d +0x1a5:  mov    0x8(%ebp),%eax
08890660 +0x1a8:  add    $0x24,%ecx
08890663 +0x1ab:  mov    %edx,0x8(%eax,%ecx,4)
08890667 +0x1af:  addl   $0x1,-0x14(%ebp)
0889066b +0x1b3:  cmpl   $0x2,-0x14(%ebp)
0889066f +0x1b7:  setle  %al
08890672 +0x1ba:  test   %al,%al
08890674 +0x1bc:  jne    08890650 <+0x198>
08890676 +0x1be:  mov    0x8(%ebp),%eax
08890679 +0x1c1:  add    $0xa4,%eax
0889067e +0x1c6:  mov    %eax,(%esp)
08890681 +0x1c9:  call   08890dd8 <_ZN10AttackInfo13getAttackTypeERSs+0x512>  ; AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x512
08890686 +0x1ce:  movl   $0x0,-0x10(%ebp)
0889068d +0x1d5:  jmp    08890707 <+0x24f>
0889068f +0x1d7:  mov    -0x10(%ebp),%edx
08890692 +0x1da:  mov    0x8(%ebp),%eax
08890695 +0x1dd:  add    $0x2c,%edx
08890698 +0x1e0:  movl   $0x12,0xc(%eax,%edx,4)
088906a0 +0x1e8:  mov    -0x10(%ebp),%edx
088906a3 +0x1eb:  mov    0x8(%ebp),%eax
088906a6 +0x1ee:  lea    0x30(%edx),%ecx
088906a9 +0x1f1:  mov    $0x0,%edx
088906ae +0x1f6:  mov    %edx,0x8(%eax,%ecx,4)
088906b2 +0x1fa:  mov    -0x10(%ebp),%edx
088906b5 +0x1fd:  mov    0x8(%ebp),%eax
088906b8 +0x200:  add    $0x34,%edx
088906bb +0x203:  movl   $0x0,0x4(%eax,%edx,4)
088906c3 +0x20b:  mov    -0x10(%ebp),%edx
088906c6 +0x20e:  mov    0x8(%ebp),%eax
088906c9 +0x211:  add    $0x38,%edx
088906cc +0x214:  movl   $0x0,(%eax,%edx,4)
088906d3 +0x21b:  mov    -0x10(%ebp),%edx
088906d6 +0x21e:  mov    0x8(%ebp),%eax
088906d9 +0x221:  add    $0x38,%edx
088906dc +0x224:  movl   $0x0,0xc(%eax,%edx,4)
088906e4 +0x22c:  mov    -0x10(%ebp),%edx
088906e7 +0x22f:  mov    %edx,%eax
088906e9 +0x231:  add    %eax,%eax
088906eb +0x233:  add    %edx,%eax
088906ed +0x235:  shl    $0x2,%eax
088906f0 +0x238:  add    $0xf0,%eax
088906f5 +0x23d:  add    0x8(%ebp),%eax
088906f8 +0x240:  add    $0x8,%eax
088906fb +0x243:  mov    %eax,(%esp)
088906fe +0x246:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08890703 +0x24b:  addl   $0x1,-0x10(%ebp)
08890707 +0x24f:  cmpl   $0x2,-0x10(%ebp)
0889070b +0x253:  setle  %al
0889070e +0x256:  test   %al,%al
08890710 +0x258:  jne    0889068f <+0x1d7>
08890716 +0x25e:  movl   $0x0,-0xc(%ebp)
0889071d +0x265:  jmp    08890735 <+0x27d>
0889071f +0x267:  mov    -0xc(%ebp),%edx
08890722 +0x26a:  mov    0x8(%ebp),%eax
08890725 +0x26d:  lea    0x44(%edx),%ecx
08890728 +0x270:  mov    $0x42c80000,%edx
0889072d +0x275:  mov    %edx,0xc(%eax,%ecx,4)
08890731 +0x279:  addl   $0x1,-0xc(%ebp)
08890735 +0x27d:  cmpl   $0x2,-0xc(%ebp)
08890739 +0x281:  setle  %al
0889073c +0x284:  test   %al,%al
0889073e +0x286:  jne    0889071f <+0x267>
08890740 +0x288:  mov    0x8(%ebp),%eax
08890743 +0x28b:  movl   $0xffffffff,0x94(%eax)
0889074d +0x295:  mov    0x8(%ebp),%eax
08890750 +0x298:  add    $0x128,%eax
08890755 +0x29d:  mov    %eax,(%esp)
08890758 +0x2a0:  call   08890dec <_ZN10AttackInfo13getAttackTypeERSs+0x526>  ; AttackInfo::getAttackType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x526
0889075d +0x2a5:  leave
0889075e +0x2a6:  ret
0889075f +0x2a7:  nop
```

## 反编译 C

```c
// AttackInfo::clear @ 0x88904b8

/* AttackInfo::clear() */

void __thiscall AttackInfo::clear(AttackInfo *this)

{
  int local_18;
  int local_14;
  int local_10;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  std::string::operator=((string *)(this + 0x4c),"");
  *(undefined4 *)(this + 0x50) = 1;
  *(undefined4 *)(this + 0x54) = 5;
  this[0x58] = (AttackInfo)0x0;
  *(undefined4 *)(this + 0x5c) = 0xffffffff;
  *(undefined4 *)(this + 0x60) = 0xbf800000;
  this[100] = (AttackInfo)0x0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0x42c80000;
  this[0x88] = (AttackInfo)0x1;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x8c) = 3;
  this[0x90] = (AttackInfo)0x0;
  this[0x91] = (AttackInfo)0x0;
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    *(uint *)(this + (local_18 + 0x24) * 4 + 8) = (uint)(local_18 == 2);
  }
  std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::clear
            ((set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> *)(this + 0xa4)
            );
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    *(undefined4 *)(this + (local_14 + 0x2c) * 4 + 0xc) = 0x12;
    *(undefined4 *)(this + (local_14 + 0x30) * 4 + 8) = 0;
    *(undefined4 *)(this + (local_14 + 0x34) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_14 + 0x38) * 4) = 0;
    *(undefined4 *)(this + (local_14 + 0x38) * 4 + 0xc) = 0;
    std::vector<int,std::allocator<int>>::clear
              ((vector<int,std::allocator<int>> *)(this + local_14 * 0xc + 0xf8));
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x44) * 4 + 0xc) = 0x42c80000;
  }
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  std::vector<CatchObjectInfo,std::allocator<CatchObjectInfo>>::clear
            ((vector<CatchObjectInfo,std::allocator<CatchObjectInfo>> *)(this + 0x128));
  return;
}
```
