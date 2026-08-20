# CPowerWarEvent

`_GLOBAL__I__ZN14CPowerWarEventC2Ev`

`global constructors keyed to CPowerWarEvent::CPowerWarEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPowerWarEvent` | `0x0826866f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826866f  _GLOBAL__I__ZN14CPowerWarEventC2Ev
#           global constructors keyed to CPowerWarEvent::CPowerWarEvent()
# range [0x0826866f, 0x08268907]
0826866f +0x000:  push   %ebp
08268670 +0x001:  mov    %esp,%ebp
08268672 +0x003:  sub    $0x18,%esp
08268675 +0x006:  movl   $0xffff,0x4(%esp)
0826867d +0x00e:  movl   $0x1,(%esp)
08268684 +0x015:  call   0826862f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08268689 +0x01a:  leave
0826868a +0x01b:  ret
0826868b +0x01c:  nop
0826868c +0x01d:  push   %ebp
0826868d +0x01e:  mov    %esp,%ebp
0826868f +0x020:  sub    $0x58,%esp
08268692 +0x023:  mov    0x10(%ebp),%eax
08268695 +0x026:  mov    %al,-0x3c(%ebp)
08268698 +0x029:  cmpb   $0x1,-0x3c(%ebp)
0826869c +0x02d:  je     0826874d <+0xde>
082686a2 +0x033:  mov    0x8(%ebp),%eax
082686a5 +0x036:  lea    0xe0(%eax),%edx
082686ab +0x03c:  lea    -0x24(%ebp),%eax
082686ae +0x03f:  mov    %edx,0x4(%esp)
082686b2 +0x043:  mov    %eax,(%esp)
082686b5 +0x046:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
082686ba +0x04b:  sub    $0x4,%esp
082686bd +0x04e:  mov    0x8(%ebp),%eax
082686c0 +0x051:  lea    0xe0(%eax),%edx
082686c6 +0x057:  lea    -0x20(%ebp),%eax
082686c9 +0x05a:  mov    %edx,0x4(%esp)
082686cd +0x05e:  mov    %eax,(%esp)
082686d0 +0x061:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
082686d5 +0x066:  sub    $0x4,%esp
082686d8 +0x069:  lea    -0x28(%ebp),%eax
082686db +0x06c:  lea    0xc(%ebp),%edx
082686de +0x06f:  mov    %edx,0xc(%esp)
082686e2 +0x073:  mov    -0x24(%ebp),%edx
082686e5 +0x076:  mov    %edx,0x8(%esp)
082686e9 +0x07a:  mov    -0x20(%ebp),%edx
082686ec +0x07d:  mov    %edx,0x4(%esp)
082686f0 +0x081:  mov    %eax,(%esp)
082686f3 +0x084:  call   080f9997 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1a3>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1a3
082686f8 +0x089:  sub    $0x4,%esp
082686fb +0x08c:  mov    0x8(%ebp),%eax
082686fe +0x08f:  lea    0xe0(%eax),%edx
08268704 +0x095:  lea    -0x1c(%ebp),%eax
08268707 +0x098:  mov    %edx,0x4(%esp)
0826870b +0x09c:  mov    %eax,(%esp)
0826870e +0x09f:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08268713 +0x0a4:  sub    $0x4,%esp
08268716 +0x0a7:  lea    -0x1c(%ebp),%eax
08268719 +0x0aa:  mov    %eax,0x4(%esp)
0826871d +0x0ae:  lea    -0x28(%ebp),%eax
08268720 +0x0b1:  mov    %eax,(%esp)
08268723 +0x0b4:  call   082688da <+0x26b>
08268728 +0x0b9:  test   %al,%al
0826872a +0x0bb:  je     082687f9 <+0x18a>
08268730 +0x0c1:  mov    0x8(%ebp),%eax
08268733 +0x0c4:  lea    0xe0(%eax),%edx
08268739 +0x0ca:  lea    0xc(%ebp),%eax
0826873c +0x0cd:  mov    %eax,0x4(%esp)
08268740 +0x0d1:  mov    %edx,(%esp)
08268743 +0x0d4:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08268748 +0x0d9:  jmp    082687f9 <+0x18a>
0826874d +0x0de:  mov    0x8(%ebp),%eax
08268750 +0x0e1:  lea    0xe0(%eax),%edx
08268756 +0x0e7:  lea    -0x18(%ebp),%eax
08268759 +0x0ea:  mov    %edx,0x4(%esp)
0826875d +0x0ee:  mov    %eax,(%esp)
08268760 +0x0f1:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08268765 +0x0f6:  sub    $0x4,%esp
08268768 +0x0f9:  mov    0x8(%ebp),%eax
0826876b +0x0fc:  lea    0xe0(%eax),%edx
08268771 +0x102:  lea    -0x14(%ebp),%eax
08268774 +0x105:  mov    %edx,0x4(%esp)
08268778 +0x109:  mov    %eax,(%esp)
0826877b +0x10c:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08268780 +0x111:  sub    $0x4,%esp
08268783 +0x114:  lea    -0x2c(%ebp),%eax
08268786 +0x117:  lea    0xc(%ebp),%edx
08268789 +0x11a:  mov    %edx,0xc(%esp)
0826878d +0x11e:  mov    -0x18(%ebp),%edx
08268790 +0x121:  mov    %edx,0x8(%esp)
08268794 +0x125:  mov    -0x14(%ebp),%edx
08268797 +0x128:  mov    %edx,0x4(%esp)
0826879b +0x12c:  mov    %eax,(%esp)
0826879e +0x12f:  call   080f9997 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1a3>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1a3
082687a3 +0x134:  sub    $0x4,%esp
082687a6 +0x137:  mov    0x8(%ebp),%eax
082687a9 +0x13a:  lea    0xe0(%eax),%edx
082687af +0x140:  lea    -0x10(%ebp),%eax
082687b2 +0x143:  mov    %edx,0x4(%esp)
082687b6 +0x147:  mov    %eax,(%esp)
082687b9 +0x14a:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
082687be +0x14f:  sub    $0x4,%esp
082687c1 +0x152:  lea    -0x10(%ebp),%eax
082687c4 +0x155:  mov    %eax,0x4(%esp)
082687c8 +0x159:  lea    -0x2c(%ebp),%eax
082687cb +0x15c:  mov    %eax,(%esp)
082687ce +0x15f:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
082687d3 +0x164:  test   %al,%al
082687d5 +0x166:  je     082687f9 <+0x18a>
082687d7 +0x168:  mov    0x8(%ebp),%eax
082687da +0x16b:  lea    0xe0(%eax),%ecx
082687e0 +0x171:  lea    -0xc(%ebp),%eax
082687e3 +0x174:  mov    -0x2c(%ebp),%edx
082687e6 +0x177:  mov    %edx,0x8(%esp)
082687ea +0x17b:  mov    %ecx,0x4(%esp)
082687ee +0x17f:  mov    %eax,(%esp)
082687f1 +0x182:  call   080ea48e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xc7>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xc7
082687f6 +0x187:  sub    $0x4,%esp
082687f9 +0x18a:  leave
082687fa +0x18b:  ret
082687fb +0x18c:  nop
082687fc +0x18d:  push   %ebp
082687fd +0x18e:  mov    %esp,%ebp
082687ff +0x190:  sub    $0x28,%esp
08268802 +0x193:  mov    0x8(%ebp),%eax
08268805 +0x196:  lea    0xe0(%eax),%edx
0826880b +0x19c:  lea    -0x14(%ebp),%eax
0826880e +0x19f:  mov    %edx,0x4(%esp)
08268812 +0x1a3:  mov    %eax,(%esp)
08268815 +0x1a6:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0826881a +0x1ab:  sub    $0x4,%esp
0826881d +0x1ae:  mov    0x8(%ebp),%eax
08268820 +0x1b1:  lea    0xe0(%eax),%edx
08268826 +0x1b7:  lea    -0x10(%ebp),%eax
08268829 +0x1ba:  mov    %edx,0x4(%esp)
0826882d +0x1be:  mov    %eax,(%esp)
08268830 +0x1c1:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08268835 +0x1c6:  sub    $0x4,%esp
08268838 +0x1c9:  lea    -0x18(%ebp),%eax
0826883b +0x1cc:  lea    0xc(%ebp),%edx
0826883e +0x1cf:  mov    %edx,0xc(%esp)
08268842 +0x1d3:  mov    -0x14(%ebp),%edx
08268845 +0x1d6:  mov    %edx,0x8(%esp)
08268849 +0x1da:  mov    -0x10(%ebp),%edx
0826884c +0x1dd:  mov    %edx,0x4(%esp)
08268850 +0x1e1:  mov    %eax,(%esp)
08268853 +0x1e4:  call   080f9997 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1a3>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1a3
08268858 +0x1e9:  sub    $0x4,%esp
0826885b +0x1ec:  mov    0x8(%ebp),%eax
0826885e +0x1ef:  lea    0xe0(%eax),%edx
08268864 +0x1f5:  lea    -0xc(%ebp),%eax
08268867 +0x1f8:  mov    %edx,0x4(%esp)
0826886b +0x1fc:  mov    %eax,(%esp)
0826886e +0x1ff:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08268873 +0x204:  sub    $0x4,%esp
08268876 +0x207:  lea    -0xc(%ebp),%eax
08268879 +0x20a:  mov    %eax,0x4(%esp)
0826887d +0x20e:  lea    -0x18(%ebp),%eax
08268880 +0x211:  mov    %eax,(%esp)
08268883 +0x214:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08268888 +0x219:  test   %al,%al
0826888a +0x21b:  je     08268893 <+0x224>
0826888c +0x21d:  mov    $0x1,%eax
08268891 +0x222:  jmp    08268898 <+0x229>
08268893 +0x224:  mov    $0x1,%eax
08268898 +0x229:  leave
08268899 +0x22a:  ret
0826889a +0x22b:  push   %ebp
0826889b +0x22c:  mov    %esp,%ebp
0826889d +0x22e:  sub    $0x18,%esp
082688a0 +0x231:  mov    0x8(%ebp),%eax
082688a3 +0x234:  movl   $0xe,0x8(%esp)
082688ab +0x23c:  movl   $0x450,0x4(%esp)
082688b3 +0x244:  mov    %eax,(%esp)
082688b6 +0x247:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
082688bb +0x24c:  leave
082688bc +0x24d:  ret
082688bd +0x24e:  nop
082688be +0x24f:  push   %ebp
082688bf +0x250:  mov    %esp,%ebp
082688c1 +0x252:  mov    0x8(%ebp),%eax
082688c4 +0x255:  mov    0xc(%ebp),%edx
082688c7 +0x258:  mov    %edx,0x1c(%eax)
082688ca +0x25b:  pop    %ebp
082688cb +0x25c:  ret
082688cc +0x25d:  push   %ebp
082688cd +0x25e:  mov    %esp,%ebp
082688cf +0x260:  mov    0x8(%ebp),%eax
082688d2 +0x263:  mov    0xc(%ebp),%edx
082688d5 +0x266:  mov    %edx,0x20(%eax)
082688d8 +0x269:  pop    %ebp
082688d9 +0x26a:  ret
082688da +0x26b:  push   %ebp
082688db +0x26c:  mov    %esp,%ebp
082688dd +0x26e:  push   %ebx
082688de +0x26f:  sub    $0x14,%esp
082688e1 +0x272:  mov    0x8(%ebp),%eax
082688e4 +0x275:  mov    %eax,(%esp)
082688e7 +0x278:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
082688ec +0x27d:  mov    (%eax),%ebx
082688ee +0x27f:  mov    0xc(%ebp),%eax
082688f1 +0x282:  mov    %eax,(%esp)
082688f4 +0x285:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
082688f9 +0x28a:  mov    (%eax),%eax
082688fb +0x28c:  cmp    %eax,%ebx
082688fd +0x28e:  sete   %al
08268900 +0x291:  add    $0x14,%esp
08268903 +0x294:  pop    %ebx
08268904 +0x295:  pop    %ebp
08268905 +0x296:  ret
08268906 +0x297:  nop
08268907 +0x298:  nop
```

## 反编译 C

```c
// <global>::global @ 0x826866f

/* CPowerWarEvent::CPowerWarEvent() */

void CPowerWarEvent::_GLOBAL__I_CPowerWarEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
