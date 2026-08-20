# getData

`_ZNK8fair_pvp13CFairPvPScore7getDataEPc`

`fair_pvp::CFairPvPScore::getData(char*) const`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairPvPScore` | `0x084a55a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a55a8  _ZNK8fair_pvp13CFairPvPScore7getDataEPc
#           fair_pvp::CFairPvPScore::getData(char*) const
# range [0x084a55a8, 0x084a57fd]
084a55a8 +0x000:  push   %ebp
084a55a9 +0x001:  mov    %esp,%ebp
084a55ab +0x003:  push   %esi
084a55ac +0x004:  push   %ebx
084a55ad +0x005:  sub    $0x30,%esp
084a55b0 +0x008:  mov    0xc(%ebp),%eax
084a55b3 +0x00b:  mov    %eax,-0x10(%ebp)
084a55b6 +0x00e:  movl   $0x0,-0xc(%ebp)
084a55bd +0x015:  mov    0x8(%ebp),%eax
084a55c0 +0x018:  lea    0x8(%eax),%edx
084a55c3 +0x01b:  lea    -0x1c(%ebp),%eax
084a55c6 +0x01e:  mov    %edx,0x4(%esp)
084a55ca +0x022:  mov    %eax,(%esp)
084a55cd +0x025:  call   084a66e6 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x6ce>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x6ce
084a55d2 +0x02a:  sub    $0x4,%esp
084a55d5 +0x02d:  movl   $0x0,-0xc(%ebp)
084a55dc +0x034:  jmp    084a566c <+0xc4>
084a55e1 +0x039:  mov    -0xc(%ebp),%ebx
084a55e4 +0x03c:  lea    -0x1c(%ebp),%eax
084a55e7 +0x03f:  mov    %eax,(%esp)
084a55ea +0x042:  call   084a6764 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x74c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x74c
084a55ef +0x047:  mov    (%eax),%eax
084a55f1 +0x049:  mov    %eax,%edx
084a55f3 +0x04b:  mov    -0x10(%ebp),%eax
084a55f6 +0x04e:  lea    0x2(%ebx),%ecx
084a55f9 +0x051:  shl    $0x4,%ecx
084a55fc +0x054:  mov    %dl,0x10(%ecx,%eax,1)
084a5600 +0x058:  mov    -0xc(%ebp),%ebx
084a5603 +0x05b:  lea    -0x1c(%ebp),%eax
084a5606 +0x05e:  mov    %eax,(%esp)
084a5609 +0x061:  call   084a6764 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x74c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x74c
084a560e +0x066:  movzbl 0x4(%eax),%eax
084a5612 +0x06a:  mov    %eax,%edx
084a5614 +0x06c:  mov    -0x10(%ebp),%eax
084a5617 +0x06f:  lea    0x2(%ebx),%ecx
084a561a +0x072:  shl    $0x4,%ecx
084a561d +0x075:  mov    %dl,0x11(%ecx,%eax,1)
084a5621 +0x079:  mov    -0xc(%ebp),%ebx
084a5624 +0x07c:  lea    -0x1c(%ebp),%eax
084a5627 +0x07f:  mov    %eax,(%esp)
084a562a +0x082:  call   084a6764 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x74c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x74c
084a562f +0x087:  mov    -0x10(%ebp),%edx
084a5632 +0x08a:  lea    0x2(%ebx),%ecx
084a5635 +0x08d:  shl    $0x4,%ecx
084a5638 +0x090:  mov    0x8(%eax),%ebx
084a563b +0x093:  mov    %ebx,0x14(%ecx,%edx,1)
084a563f +0x097:  mov    0xc(%eax),%ebx
084a5642 +0x09a:  mov    %ebx,0x18(%ecx,%edx,1)
084a5646 +0x09e:  mov    0x10(%eax),%eax
084a5649 +0x0a1:  mov    %eax,0x1c(%ecx,%edx,1)
084a564d +0x0a5:  mov    -0x10(%ebp),%eax
084a5650 +0x0a8:  movzbl 0x2c(%eax),%eax
084a5654 +0x0ac:  lea    0x1(%eax),%edx
084a5657 +0x0af:  mov    -0x10(%ebp),%eax
084a565a +0x0b2:  mov    %dl,0x2c(%eax)
084a565d +0x0b5:  lea    -0x1c(%ebp),%eax
084a5660 +0x0b8:  mov    %eax,(%esp)
084a5663 +0x0bb:  call   084a6746 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x72e>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x72e
084a5668 +0x0c0:  addl   $0x1,-0xc(%ebp)
084a566c +0x0c4:  mov    0x8(%ebp),%eax
084a566f +0x0c7:  lea    0x8(%eax),%edx
084a5672 +0x0ca:  lea    -0x18(%ebp),%eax
084a5675 +0x0cd:  mov    %edx,0x4(%esp)
084a5679 +0x0d1:  mov    %eax,(%esp)
084a567c +0x0d4:  call   084a670c <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x6f4>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x6f4
084a5681 +0x0d9:  sub    $0x4,%esp
084a5684 +0x0dc:  lea    -0x18(%ebp),%eax
084a5687 +0x0df:  mov    %eax,0x4(%esp)
084a568b +0x0e3:  lea    -0x1c(%ebp),%eax
084a568e +0x0e6:  mov    %eax,(%esp)
084a5691 +0x0e9:  call   084a6732 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x71a>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x71a
084a5696 +0x0ee:  test   %al,%al
084a5698 +0x0f0:  je     084a56a7 <+0xff>
084a569a +0x0f2:  cmpl   $0x63,-0xc(%ebp)
084a569e +0x0f6:  jg     084a56a7 <+0xff>
084a56a0 +0x0f8:  mov    $0x1,%eax
084a56a5 +0x0fd:  jmp    084a56ac <+0x104>
084a56a7 +0x0ff:  mov    $0x0,%eax
084a56ac +0x104:  test   %al,%al
084a56ae +0x106:  jne    084a55e1 <+0x39>
084a56b4 +0x10c:  mov    0x8(%ebp),%eax
084a56b7 +0x10f:  lea    0x20(%eax),%edx
084a56ba +0x112:  lea    -0x20(%ebp),%eax
084a56bd +0x115:  mov    %edx,0x4(%esp)
084a56c1 +0x119:  mov    %eax,(%esp)
084a56c4 +0x11c:  call   084a6772 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x75a>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x75a
084a56c9 +0x121:  sub    $0x4,%esp
084a56cc +0x124:  movl   $0x0,-0xc(%ebp)
084a56d3 +0x12b:  jmp    084a56ff <+0x157>
084a56d5 +0x12d:  mov    -0xc(%ebp),%ebx
084a56d8 +0x130:  lea    -0x20(%ebp),%eax
084a56db +0x133:  mov    %eax,(%esp)
084a56de +0x136:  call   084a67e4 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7cc>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7cc
084a56e3 +0x13b:  movzbl (%eax),%edx
084a56e6 +0x13e:  mov    -0x10(%ebp),%eax
084a56e9 +0x141:  mov    %dl,0x670(%eax,%ebx,1)
084a56f0 +0x148:  addl   $0x1,-0xc(%ebp)
084a56f4 +0x14c:  lea    -0x20(%ebp),%eax
084a56f7 +0x14f:  mov    %eax,(%esp)
084a56fa +0x152:  call   084a67d0 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7b8>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7b8
084a56ff +0x157:  mov    0x8(%ebp),%eax
084a5702 +0x15a:  lea    0x20(%eax),%edx
084a5705 +0x15d:  lea    -0x14(%ebp),%eax
084a5708 +0x160:  mov    %edx,0x4(%esp)
084a570c +0x164:  mov    %eax,(%esp)
084a570f +0x167:  call   084a6798 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x780>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x780
084a5714 +0x16c:  sub    $0x4,%esp
084a5717 +0x16f:  lea    -0x14(%ebp),%eax
084a571a +0x172:  mov    %eax,0x4(%esp)
084a571e +0x176:  lea    -0x20(%ebp),%eax
084a5721 +0x179:  mov    %eax,(%esp)
084a5724 +0x17c:  call   084a67bc <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7a4>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7a4
084a5729 +0x181:  test   %al,%al
084a572b +0x183:  je     084a573a <+0x192>
084a572d +0x185:  cmpl   $0x9,-0xc(%ebp)
084a5731 +0x189:  jg     084a573a <+0x192>
084a5733 +0x18b:  mov    $0x1,%eax
084a5738 +0x190:  jmp    084a573f <+0x197>
084a573a +0x192:  mov    $0x0,%eax
084a573f +0x197:  test   %al,%al
084a5741 +0x199:  jne    084a56d5 <+0x12d>
084a5743 +0x19b:  movl   $0x0,-0xc(%ebp)
084a574a +0x1a2:  jmp    084a5789 <+0x1e1>
084a574c +0x1a4:  mov    -0xc(%ebp),%edx
084a574f +0x1a7:  mov    -0xc(%ebp),%ebx
084a5752 +0x1aa:  mov    -0x10(%ebp),%ecx
084a5755 +0x1ad:  mov    %edx,%eax
084a5757 +0x1af:  add    %eax,%eax
084a5759 +0x1b1:  add    %edx,%eax
084a575b +0x1b3:  shl    $0x2,%eax
084a575e +0x1b6:  mov    0x8(%ebp),%esi
084a5761 +0x1b9:  mov    %ebx,%edx
084a5763 +0x1bb:  add    %edx,%edx
084a5765 +0x1bd:  add    %ebx,%edx
084a5767 +0x1bf:  shl    $0x2,%edx
084a576a +0x1c2:  lea    (%esi,%edx,1),%edx
084a576d +0x1c5:  add    $0x20,%edx
084a5770 +0x1c8:  mov    0x8(%edx),%ebx
084a5773 +0x1cb:  mov    %ebx,0x4(%eax,%ecx,1)
084a5777 +0x1cf:  mov    0xc(%edx),%ebx
084a577a +0x1d2:  mov    %ebx,0x8(%eax,%ecx,1)
084a577e +0x1d6:  mov    0x10(%edx),%edx
084a5781 +0x1d9:  mov    %edx,0xc(%eax,%ecx,1)
084a5785 +0x1dd:  addl   $0x1,-0xc(%ebp)
084a5789 +0x1e1:  cmpl   $0x1,-0xc(%ebp)
084a578d +0x1e5:  setle  %al
084a5790 +0x1e8:  test   %al,%al
084a5792 +0x1ea:  jne    084a574c <+0x1a4>
084a5794 +0x1ec:  mov    0x8(%ebp),%eax
084a5797 +0x1ef:  mov    0x40(%eax),%edx
084a579a +0x1f2:  mov    -0x10(%ebp),%eax
084a579d +0x1f5:  mov    %edx,0x1c(%eax)
084a57a0 +0x1f8:  mov    0x8(%ebp),%eax
084a57a3 +0x1fb:  mov    0x44(%eax),%edx
084a57a6 +0x1fe:  mov    -0x10(%ebp),%eax
084a57a9 +0x201:  mov    %edx,0x20(%eax)
084a57ac +0x204:  mov    0x8(%ebp),%eax
084a57af +0x207:  mov    0x48(%eax),%edx
084a57b2 +0x20a:  mov    -0x10(%ebp),%eax
084a57b5 +0x20d:  mov    %edx,0x24(%eax)
084a57b8 +0x210:  mov    0x8(%ebp),%eax
084a57bb +0x213:  mov    0x4c(%eax),%edx
084a57be +0x216:  mov    -0x10(%ebp),%eax
084a57c1 +0x219:  mov    %edx,0x28(%eax)
084a57c4 +0x21c:  mov    0x8(%ebp),%eax
084a57c7 +0x21f:  mov    0x50(%eax),%edx
084a57ca +0x222:  mov    -0x10(%ebp),%eax
084a57cd +0x225:  mov    %edx,0x67c(%eax)
084a57d3 +0x22b:  mov    0x8(%ebp),%eax
084a57d6 +0x22e:  mov    0x54(%eax),%eax
084a57d9 +0x231:  mov    %eax,%edx
084a57db +0x233:  mov    -0x10(%ebp),%eax
084a57de +0x236:  mov    %edx,0x680(%eax)
084a57e4 +0x23c:  mov    0x8(%ebp),%eax
084a57e7 +0x23f:  movzbl 0x5b(%eax),%edx
084a57eb +0x243:  mov    -0x10(%ebp),%eax
084a57ee +0x246:  mov    %dl,0x684(%eax)
084a57f4 +0x24c:  lea    -0x8(%ebp),%esp
084a57f7 +0x24f:  add    $0x0,%esp
084a57fa +0x252:  pop    %ebx
084a57fb +0x253:  pop    %esi
084a57fc +0x254:  pop    %ebp
084a57fd +0x255:  ret
```

## 反编译 C

```c
// fair_pvp::CFairPvPScore::getData @ 0x84a55a8

/* fair_pvp::CFairPvPScore::getData(char*) const */

void __thiscall fair_pvp::CFairPvPScore::getData(CFairPvPScore *this,char *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  _List_const_iterator<unsigned_char> local_24 [4];
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  local_20 [4];
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  local_1c [4];
  _List_const_iterator local_18 [4];
  char *local_14;
  int local_10;
  
  local_14 = param_1;
  local_10 = 0;
  std::
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  ::begin(local_20);
  local_10 = 0;
  while( true ) {
    std::
    map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
    ::end(local_1c);
    cVar2 = std::
            _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
            operator!=((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                        *)local_20,(_Rb_tree_const_iterator *)local_1c);
    iVar7 = local_10;
    if ((cVar2 == '\0') || (99 < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    puVar3 = (undefined4 *)
             std::
             _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
             operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                         *)local_20);
    iVar5 = local_10;
    local_14[(iVar7 + 2) * 0x10 + 0x10] = (char)*puVar3;
    iVar4 = std::
            _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
            operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                        *)local_20);
    iVar7 = local_10;
    local_14[(iVar5 + 2) * 0x10 + 0x11] = *(char *)(iVar4 + 4);
    iVar5 = std::
            _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
            operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                        *)local_20);
    iVar7 = (iVar7 + 2) * 0x10;
    *(undefined4 *)(local_14 + iVar7 + 0x14) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(local_14 + iVar7 + 0x18) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(local_14 + iVar7 + 0x1c) = *(undefined4 *)(iVar5 + 0x10);
    local_14[0x2c] = local_14[0x2c] + '\x01';
    std::_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
    operator++((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                *)local_20);
    local_10 = local_10 + 1;
  }
  std::list<unsigned_char,std::allocator<unsigned_char>>::begin();
  local_10 = 0;
  while( true ) {
    std::list<unsigned_char,std::allocator<unsigned_char>>::end();
    cVar2 = std::_List_const_iterator<unsigned_char>::operator!=(local_24,local_18);
    iVar7 = local_10;
    if ((cVar2 == '\0') || (9 < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    pcVar6 = (char *)std::_List_const_iterator<unsigned_char>::operator*(local_24);
    local_14[iVar7 + 0x670] = *pcVar6;
    local_10 = local_10 + 1;
    std::_List_const_iterator<unsigned_char>::operator++(local_24);
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    iVar7 = local_10 * 0xc;
    *(undefined4 *)(local_14 + iVar7 + 4) = *(undefined4 *)(this + local_10 * 0xc + 0x28);
    *(undefined4 *)(local_14 + iVar7 + 8) = *(undefined4 *)(this + local_10 * 0xc + 0x2c);
    *(undefined4 *)(local_14 + iVar7 + 0xc) = *(undefined4 *)(this + local_10 * 0xc + 0x30);
  }
  *(undefined4 *)(local_14 + 0x1c) = *(undefined4 *)(this + 0x40);
  *(undefined4 *)(local_14 + 0x20) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(local_14 + 0x24) = *(undefined4 *)(this + 0x48);
  *(undefined4 *)(local_14 + 0x28) = *(undefined4 *)(this + 0x4c);
  *(undefined4 *)(local_14 + 0x67c) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(local_14 + 0x680) = *(undefined4 *)(this + 0x54);
  *(CFairPvPScore *)(local_14 + 0x684) = this[0x5b];
  return;
}
```
