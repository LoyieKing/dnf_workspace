# _RandomLevel

`_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE`

`RegenerationROI::_RandomLevel(int, int, select_base_item&, std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `RegenerationROI` | `0x085f93cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f93cc  _ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE
#           RegenerationROI::_RandomLevel(int, int, select_base_item&, std::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x085f93cc, 0x085f963d]
085f93cc +0x000:  push   %ebp
085f93cd +0x001:  mov    %esp,%ebp
085f93cf +0x003:  push   %esi
085f93d0 +0x004:  push   %ebx
085f93d1 +0x005:  sub    $0x30,%esp
085f93d4 +0x008:  mov    0x10(%ebp),%ebx
085f93d7 +0x00b:  mov    0xc(%ebp),%esi
085f93da +0x00e:  mov    0x18(%ebp),%eax
085f93dd +0x011:  add    $0x8,%eax
085f93e0 +0x014:  movl   $"try regen:lv:",0x4(%esp)
085f93e8 +0x01c:  mov    %eax,(%esp)
085f93eb +0x01f:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f93f0 +0x024:  mov    %esi,0x4(%esp)
085f93f4 +0x028:  mov    %eax,(%esp)
085f93f7 +0x02b:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
085f93fc +0x030:  movl   $",",0x4(%esp)
085f9404 +0x038:  mov    %eax,(%esp)
085f9407 +0x03b:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f940c +0x040:  mov    %ebx,0x4(%esp)
085f9410 +0x044:  mov    %eax,(%esp)
085f9413 +0x047:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
085f9418 +0x04c:  movl   $"\n",0x4(%esp)
085f9420 +0x054:  mov    %eax,(%esp)
085f9423 +0x057:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f9428 +0x05c:  mov    0xc(%ebp),%edx
085f942b +0x05f:  mov    0x10(%ebp),%eax
085f942e +0x062:  cmp    %eax,%edx
085f9430 +0x064:  jle    085f9444 <+0x78>
085f9432 +0x066:  lea    0x10(%ebp),%eax
085f9435 +0x069:  mov    %eax,0x4(%esp)
085f9439 +0x06d:  lea    0xc(%ebp),%eax
085f943c +0x070:  mov    %eax,(%esp)
085f943f +0x073:  call   0813ba7b <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7682>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7682
085f9444 +0x078:  lea    -0x24(%ebp),%eax
085f9447 +0x07b:  mov    %eax,(%esp)
085f944a +0x07e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085f944f +0x083:  mov    0xc(%ebp),%ecx
085f9452 +0x086:  mov    $0x66666667,%edx
085f9457 +0x08b:  mov    %ecx,%eax
085f9459 +0x08d:  imul   %edx
085f945b +0x08f:  sar    %edx
085f945d +0x091:  mov    %ecx,%eax
085f945f +0x093:  sar    $0x1f,%eax
085f9462 +0x096:  sub    %eax,%edx
085f9464 +0x098:  mov    %edx,%eax
085f9466 +0x09a:  shl    $0x2,%eax
085f9469 +0x09d:  add    %edx,%eax
085f946b +0x09f:  mov    %ecx,%edx
085f946d +0x0a1:  sub    %eax,%edx
085f946f +0x0a3:  test   %edx,%edx
085f9471 +0x0a5:  je     085f949c <+0xd0>
085f9473 +0x0a7:  mov    0xc(%ebp),%ecx
085f9476 +0x0aa:  mov    $0x66666667,%edx
085f947b +0x0af:  mov    %ecx,%eax
085f947d +0x0b1:  imul   %edx
085f947f +0x0b3:  sar    %edx
085f9481 +0x0b5:  mov    %ecx,%eax
085f9483 +0x0b7:  sar    $0x1f,%eax
085f9486 +0x0ba:  sub    %eax,%edx
085f9488 +0x0bc:  mov    %edx,%eax
085f948a +0x0be:  shl    $0x2,%eax
085f948d +0x0c1:  add    %edx,%eax
085f948f +0x0c3:  mov    %ecx,%edx
085f9491 +0x0c5:  sub    %eax,%edx
085f9493 +0x0c7:  mov    $0x5,%eax
085f9498 +0x0cc:  sub    %edx,%eax
085f949a +0x0ce:  jmp    085f94a1 <+0xd5>
085f949c +0x0d0:  mov    $0x0,%eax
085f94a1 +0x0d5:  mov    0xc(%ebp),%edx
085f94a4 +0x0d8:  add    %edx,%eax
085f94a6 +0x0da:  mov    %eax,-0x14(%ebp)
085f94a9 +0x0dd:  mov    0x10(%ebp),%ebx
085f94ac +0x0e0:  mov    0x10(%ebp),%ecx
085f94af +0x0e3:  mov    $0x66666667,%edx
085f94b4 +0x0e8:  mov    %ecx,%eax
085f94b6 +0x0ea:  imul   %edx
085f94b8 +0x0ec:  sar    %edx
085f94ba +0x0ee:  mov    %ecx,%eax
085f94bc +0x0f0:  sar    $0x1f,%eax
085f94bf +0x0f3:  sub    %eax,%edx
085f94c1 +0x0f5:  mov    %edx,%eax
085f94c3 +0x0f7:  shl    $0x2,%eax
085f94c6 +0x0fa:  add    %edx,%eax
085f94c8 +0x0fc:  mov    %ecx,%edx
085f94ca +0x0fe:  sub    %eax,%edx
085f94cc +0x100:  mov    %ebx,%eax
085f94ce +0x102:  sub    %edx,%eax
085f94d0 +0x104:  mov    %eax,-0x10(%ebp)
085f94d3 +0x107:  mov    -0x14(%ebp),%eax
085f94d6 +0x10a:  mov    %eax,-0x28(%ebp)
085f94d9 +0x10d:  jmp    085f94f6 <+0x12a>
085f94db +0x10f:  lea    -0x28(%ebp),%eax
085f94de +0x112:  mov    %eax,0x4(%esp)
085f94e2 +0x116:  lea    -0x24(%ebp),%eax
085f94e5 +0x119:  mov    %eax,(%esp)
085f94e8 +0x11c:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085f94ed +0x121:  mov    -0x28(%ebp),%eax
085f94f0 +0x124:  add    $0x5,%eax
085f94f3 +0x127:  mov    %eax,-0x28(%ebp)
085f94f6 +0x12a:  mov    -0x28(%ebp),%eax
085f94f9 +0x12d:  cmp    -0x10(%ebp),%eax
085f94fc +0x130:  setle  %al
085f94ff +0x133:  test   %al,%al
085f9501 +0x135:  jne    085f94db <+0x10f>
085f9503 +0x137:  lea    -0x24(%ebp),%eax
085f9506 +0x13a:  mov    %eax,(%esp)
085f9509 +0x13d:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
085f950e +0x142:  test   %al,%al
085f9510 +0x144:  je     085f952d <+0x161>
085f9512 +0x146:  mov    0x18(%ebp),%eax
085f9515 +0x149:  add    $0x8,%eax
085f9518 +0x14c:  movl   $"level count : Empty\n",0x4(%esp)
085f9520 +0x154:  mov    %eax,(%esp)
085f9523 +0x157:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f9528 +0x15c:  jmp    085f962b <+0x25f>
085f952d +0x161:  lea    -0x24(%ebp),%eax
085f9530 +0x164:  mov    %eax,(%esp)
085f9533 +0x167:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085f9538 +0x16c:  sub    $0x1,%eax
085f953b +0x16f:  mov    %eax,-0x18(%ebp)
085f953e +0x172:  mov    0x8(%ebp),%eax
085f9541 +0x175:  mov    (%eax),%eax
085f9543 +0x177:  lea    -0x18(%ebp),%edx
085f9546 +0x17a:  mov    %edx,0x4(%esp)
085f954a +0x17e:  mov    %eax,(%esp)
085f954d +0x181:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f9552 +0x186:  mov    %eax,-0xc(%ebp)
085f9555 +0x189:  mov    -0xc(%ebp),%eax
085f9558 +0x18c:  mov    %eax,0x4(%esp)
085f955c +0x190:  lea    -0x24(%ebp),%eax
085f955f +0x193:  mov    %eax,(%esp)
085f9562 +0x196:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085f9567 +0x19b:  mov    (%eax),%edx
085f9569 +0x19d:  mov    0x14(%ebp),%eax
085f956c +0x1a0:  mov    %edx,(%eax)
085f956e +0x1a2:  mov    0x14(%ebp),%eax
085f9571 +0x1a5:  mov    (%eax),%ecx
085f9573 +0x1a7:  mov    $0x66666667,%edx
085f9578 +0x1ac:  mov    %ecx,%eax
085f957a +0x1ae:  imul   %edx
085f957c +0x1b0:  sar    $0x2,%edx
085f957f +0x1b3:  mov    %ecx,%eax
085f9581 +0x1b5:  sar    $0x1f,%eax
085f9584 +0x1b8:  sub    %eax,%edx
085f9586 +0x1ba:  mov    %edx,%eax
085f9588 +0x1bc:  shl    $0x2,%eax
085f958b +0x1bf:  add    %edx,%eax
085f958d +0x1c1:  add    %eax,%eax
085f958f +0x1c3:  mov    %ecx,%edx
085f9591 +0x1c5:  sub    %eax,%edx
085f9593 +0x1c7:  test   %edx,%edx
085f9595 +0x1c9:  je     085f95ae <+0x1e2>
085f9597 +0x1cb:  mov    0x14(%ebp),%eax
085f959a +0x1ce:  mov    (%eax),%eax
085f959c +0x1d0:  cmp    $0xa,%eax
085f959f +0x1d3:  jle    085f95ae <+0x1e2>
085f95a1 +0x1d5:  mov    0x14(%ebp),%eax
085f95a4 +0x1d8:  mov    (%eax),%eax
085f95a6 +0x1da:  lea    0x5(%eax),%edx
085f95a9 +0x1dd:  mov    0x14(%ebp),%eax
085f95ac +0x1e0:  mov    %edx,(%eax)
085f95ae +0x1e2:  mov    0x14(%ebp),%eax
085f95b1 +0x1e5:  mov    (%eax),%esi
085f95b3 +0x1e7:  lea    -0x24(%ebp),%eax
085f95b6 +0x1ea:  mov    %eax,(%esp)
085f95b9 +0x1ed:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085f95be +0x1f2:  mov    %eax,%ebx
085f95c0 +0x1f4:  mov    0x18(%ebp),%eax
085f95c3 +0x1f7:  add    $0x8,%eax
085f95c6 +0x1fa:  movl   $"Level count : ",0x4(%esp)
085f95ce +0x202:  mov    %eax,(%esp)
085f95d1 +0x205:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f95d6 +0x20a:  mov    %ebx,0x4(%esp)
085f95da +0x20e:  mov    %eax,(%esp)
085f95dd +0x211:  call   086ffe00 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb594
085f95e2 +0x216:  movl   $" and select lv : ",0x4(%esp)
085f95ea +0x21e:  mov    %eax,(%esp)
085f95ed +0x221:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f95f2 +0x226:  mov    %esi,0x4(%esp)
085f95f6 +0x22a:  mov    %eax,(%esp)
085f95f9 +0x22d:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
085f95fe +0x232:  movl   $"\n",0x4(%esp)
085f9606 +0x23a:  mov    %eax,(%esp)
085f9609 +0x23d:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
085f960e +0x242:  jmp    085f962b <+0x25f>
085f9610 +0x244:  mov    %edx,%ebx
085f9612 +0x246:  mov    %eax,%esi
085f9614 +0x248:  lea    -0x24(%ebp),%eax
085f9617 +0x24b:  mov    %eax,(%esp)
085f961a +0x24e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085f961f +0x253:  mov    %esi,%eax
085f9621 +0x255:  mov    %ebx,%edx
085f9623 +0x257:  mov    %eax,(%esp)
085f9626 +0x25a:  call   08ae3750 <_Unwind_Resume>
085f962b +0x25f:  lea    -0x24(%ebp),%eax
085f962e +0x262:  mov    %eax,(%esp)
085f9631 +0x265:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085f9636 +0x26a:  add    $0x30,%esp
085f9639 +0x26d:  pop    %ebx
085f963a +0x26e:  pop    %esi
085f963b +0x26f:  pop    %ebp
085f963c +0x270:  ret
085f963d +0x271:  nop
```

## 反编译 C

```c
// RegenerationROI::_RandomLevel @ 0x85f93cc

/* RegenerationROI::_RandomLevel(int, int, select_base_item&, std::stringstream&) */

void __thiscall
RegenerationROI::_RandomLevel
          (RegenerationROI *this,int param_1,int param_2,select_base_item *param_3,
          stringstream *param_4)

{
  int iVar1;
  char cVar2;
  ostream *poVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_2c;
  vector<int,std::allocator<int>> local_28 [12];
  ulong local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar1 = param_2;
  iVar4 = param_1;
  poVar3 = std::operator<<((ostream *)(param_4 + 8),"try regen:lv:");
  poVar3 = (ostream *)std::ostream::operator<<(poVar3,iVar4);
  poVar3 = std::operator<<(poVar3,",");
  poVar3 = (ostream *)std::ostream::operator<<(poVar3,iVar1);
  std::operator<<(poVar3,"\n");
  if (param_2 < param_1) {
    std::swap<int>(&param_1,&param_2);
  }
  std::vector<int,std::allocator<int>>::vector(local_28);
  if (param_1 == (param_1 / 5) * 5) {
    local_2c = 0;
  }
  else {
    local_2c = 5 - param_1 % 5;
  }
  local_14 = (param_2 / 5) * 5;
  local_2c = local_2c + param_1;
  local_18 = local_2c;
  for (; local_2c <= local_14; local_2c = local_2c + 5) {
                    /* try { // try from 085f94e8 to 085f960d has its CatchHandler @ 085f9610 */
    std::vector<int,std::allocator<int>>::push_back(local_28,&local_2c);
  }
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 == '\0') {
    iVar4 = std::vector<int,std::allocator<int>>::size(local_28);
    local_1c = iVar4 - 1;
    local_10 = CMTRand::randInt(*(CMTRand **)this,&local_1c);
    puVar5 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_28,local_10);
    *(undefined4 *)param_3 = *puVar5;
    if ((*(int *)param_3 % 10 != 0) && (10 < *(int *)param_3)) {
      *(int *)param_3 = *(int *)param_3 + 5;
    }
    iVar4 = *(int *)param_3;
    uVar6 = std::vector<int,std::allocator<int>>::size(local_28);
    poVar3 = std::operator<<((ostream *)(param_4 + 8),"Level count : ");
    poVar3 = (ostream *)std::ostream::operator<<(poVar3,uVar6);
    poVar3 = std::operator<<(poVar3," and select lv : ");
    poVar3 = (ostream *)std::ostream::operator<<(poVar3,iVar4);
    std::operator<<(poVar3,"\n");
  }
  else {
    std::operator<<((ostream *)(param_4 + 8),"level count : Empty\n");
  }
  std::vector<int,std::allocator<int>>::~vector(local_28);
  return;
}
```
