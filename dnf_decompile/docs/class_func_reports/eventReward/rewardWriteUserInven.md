# rewardWriteUserInven

`_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi`

`eventReward::rewardWriteUserInven(Inven_Item*, rewardKey, int)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080f0408` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f0408  _ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi
#           eventReward::rewardWriteUserInven(Inven_Item*, rewardKey, int)
# range [0x080f0408, 0x080f06d9]
080f0408 +0x000:  push   %ebp
080f0409 +0x001:  mov    %esp,%ebp
080f040b +0x003:  push   %ebx
080f040c +0x004:  sub    $0xa4,%esp
080f0412 +0x00a:  mov    0x8(%ebp),%eax
080f0415 +0x00d:  mov    %eax,(%esp)
080f0418 +0x010:  call   080f19b2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa34>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa34
080f041d +0x015:  test   %al,%al
080f041f +0x017:  je     080f042b <+0x23>
080f0421 +0x019:  mov    $0x0,%eax
080f0426 +0x01e:  jmp    080f06d4 <+0x2cc>
080f042b +0x023:  mov    0x8(%ebp),%edx
080f042e +0x026:  lea    -0x2c(%ebp),%eax
080f0431 +0x029:  lea    0x10(%ebp),%ecx
080f0434 +0x02c:  mov    %ecx,0x8(%esp)
080f0438 +0x030:  mov    %edx,0x4(%esp)
080f043c +0x034:  mov    %eax,(%esp)
080f043f +0x037:  call   080f19c6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa48>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa48
080f0444 +0x03c:  sub    $0x4,%esp
080f0447 +0x03f:  mov    0x8(%ebp),%edx
080f044a +0x042:  lea    -0x28(%ebp),%eax
080f044d +0x045:  mov    %edx,0x4(%esp)
080f0451 +0x049:  mov    %eax,(%esp)
080f0454 +0x04c:  call   080f19f2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa74>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa74
080f0459 +0x051:  sub    $0x4,%esp
080f045c +0x054:  lea    -0x28(%ebp),%eax
080f045f +0x057:  mov    %eax,0x4(%esp)
080f0463 +0x05b:  lea    -0x2c(%ebp),%eax
080f0466 +0x05e:  mov    %eax,(%esp)
080f0469 +0x061:  call   080f1a18 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xa9a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xa9a
080f046e +0x066:  test   %al,%al
080f0470 +0x068:  je     080f047c <+0x74>
080f0472 +0x06a:  mov    $0x0,%eax
080f0477 +0x06f:  jmp    080f06d4 <+0x2cc>
080f047c +0x074:  lea    -0x2c(%ebp),%eax
080f047f +0x077:  mov    %eax,(%esp)
080f0482 +0x07a:  call   080f1a2c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xaae>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xaae
080f0487 +0x07f:  add    $0x8,%eax
080f048a +0x082:  mov    %eax,-0x18(%ebp)
080f048d +0x085:  lea    -0x30(%ebp),%eax
080f0490 +0x088:  lea    0x18(%ebp),%edx
080f0493 +0x08b:  mov    %edx,0x8(%esp)
080f0497 +0x08f:  mov    -0x18(%ebp),%edx
080f049a +0x092:  mov    %edx,0x4(%esp)
080f049e +0x096:  mov    %eax,(%esp)
080f04a1 +0x099:  call   080f16b6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x738>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x738
080f04a6 +0x09e:  sub    $0x4,%esp
080f04a9 +0x0a1:  lea    -0x24(%ebp),%eax
080f04ac +0x0a4:  mov    -0x18(%ebp),%edx
080f04af +0x0a7:  mov    %edx,0x4(%esp)
080f04b3 +0x0ab:  mov    %eax,(%esp)
080f04b6 +0x0ae:  call   080f16e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x764>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x764
080f04bb +0x0b3:  sub    $0x4,%esp
080f04be +0x0b6:  lea    -0x24(%ebp),%eax
080f04c1 +0x0b9:  mov    %eax,0x4(%esp)
080f04c5 +0x0bd:  lea    -0x30(%ebp),%eax
080f04c8 +0x0c0:  mov    %eax,(%esp)
080f04cb +0x0c3:  call   080f1a3a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xabc>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xabc
080f04d0 +0x0c8:  test   %al,%al
080f04d2 +0x0ca:  je     080f04de <+0xd6>
080f04d4 +0x0cc:  mov    $0x0,%eax
080f04d9 +0x0d1:  jmp    080f06d4 <+0x2cc>
080f04de +0x0d6:  lea    -0x30(%ebp),%eax
080f04e1 +0x0d9:  mov    %eax,(%esp)
080f04e4 +0x0dc:  call   080f171c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x79e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x79e
080f04e9 +0x0e1:  add    $0x4,%eax
080f04ec +0x0e4:  mov    %eax,-0x14(%ebp)
080f04ef +0x0e7:  mov    -0x14(%ebp),%eax
080f04f2 +0x0ea:  mov    %eax,(%esp)
080f04f5 +0x0ed:  call   080f1a4e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xad0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xad0
080f04fa +0x0f2:  test   %al,%al
080f04fc +0x0f4:  je     080f0508 <+0x100>
080f04fe +0x0f6:  mov    $0x0,%eax
080f0503 +0x0fb:  jmp    080f06d4 <+0x2cc>
080f0508 +0x100:  lea    -0x34(%ebp),%eax
080f050b +0x103:  mov    -0x14(%ebp),%edx
080f050e +0x106:  mov    %edx,0x4(%esp)
080f0512 +0x10a:  mov    %eax,(%esp)
080f0515 +0x10d:  call   080f1a92 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb14>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb14
080f051a +0x112:  sub    $0x4,%esp
080f051d +0x115:  jmp    080f06a0 <+0x298>
080f0522 +0x11a:  lea    -0x34(%ebp),%eax
080f0525 +0x11d:  mov    %eax,(%esp)
080f0528 +0x120:  call   080f1b3c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xbbe>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xbbe
080f052d +0x125:  mov    0x4(%eax),%ebx
080f0530 +0x128:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f0535 +0x12d:  mov    %ebx,0x4(%esp)
080f0539 +0x131:  mov    %eax,(%esp)
080f053c +0x134:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
080f0541 +0x139:  mov    %eax,-0x10(%ebp)
080f0544 +0x13c:  cmpl   $0x0,-0x10(%ebp)
080f0548 +0x140:  jne    080f0554 <+0x14c>
080f054a +0x142:  mov    $0x0,%eax
080f054f +0x147:  jmp    080f06d4 <+0x2cc>
080f0554 +0x14c:  lea    -0x79(%ebp),%eax
080f0557 +0x14f:  mov    %eax,(%esp)
080f055a +0x152:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
080f055f +0x157:  lea    -0x34(%ebp),%eax
080f0562 +0x15a:  mov    %eax,(%esp)
080f0565 +0x15d:  call   080f1b3c <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xbbe>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xbbe
080f056a +0x162:  mov    0x4(%eax),%eax
080f056d +0x165:  mov    %eax,-0x77(%ebp)
080f0570 +0x168:  mov    -0x10(%ebp),%eax
080f0573 +0x16b:  mov    (%eax),%eax
080f0575 +0x16d:  add    $0x8,%eax
080f0578 +0x170:  mov    (%eax),%edx
080f057a +0x172:  lea    -0x79(%ebp),%eax
080f057d +0x175:  mov    %eax,0x4(%esp)
080f0581 +0x179:  mov    -0x10(%ebp),%eax
080f0584 +0x17c:  mov    %eax,(%esp)
080f0587 +0x17f:  call   *%edx
080f0589 +0x181:  lea    -0x34(%ebp),%eax
080f058c +0x184:  mov    %eax,(%esp)
080f058f +0x187:  call   080f1b46 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xbc8>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xbc8
080f0594 +0x18c:  mov    %eax,0xc(%esp)
080f0598 +0x190:  mov    -0x10(%ebp),%eax
080f059b +0x193:  mov    %eax,0x8(%esp)
080f059f +0x197:  lea    -0x79(%ebp),%eax
080f05a2 +0x19a:  mov    %eax,0x4(%esp)
080f05a6 +0x19e:  mov    0x8(%ebp),%eax
080f05a9 +0x1a1:  mov    %eax,(%esp)
080f05ac +0x1a4:  call   080f0d6e <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData>  ; eventReward::applyItemOption(Inven_Item&, CItem const*, itemData const&)
080f05b1 +0x1a9:  movl   $0x0,-0x38(%ebp)
080f05b8 +0x1b0:  movl   $0x0,-0x3c(%ebp)
080f05bf +0x1b7:  movzbl -0x78(%ebp),%eax
080f05c3 +0x1bb:  movzbl %al,%eax
080f05c6 +0x1be:  movl   $0x0,0x10(%esp)
080f05ce +0x1c6:  lea    -0x3c(%ebp),%edx
080f05d1 +0x1c9:  mov    %edx,0xc(%esp)
080f05d5 +0x1cd:  lea    -0x38(%ebp),%edx
080f05d8 +0x1d0:  mov    %edx,0x8(%esp)
080f05dc +0x1d4:  mov    %eax,0x4(%esp)
080f05e0 +0x1d8:  mov    0x8(%ebp),%eax
080f05e3 +0x1db:  mov    %eax,(%esp)
080f05e6 +0x1de:  call   080f0d22 <_ZNK11eventReward11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_i>  ; eventReward::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&, int) const
080f05eb +0x1e3:  mov    -0x38(%ebp),%eax
080f05ee +0x1e6:  mov    %eax,-0xc(%ebp)
080f05f1 +0x1e9:  jmp    080f0672 <+0x26a>
080f05f3 +0x1eb:  mov    -0xc(%ebp),%eax
080f05f6 +0x1ee:  imul   $0x3d,%eax,%eax
080f05f9 +0x1f1:  add    0xc(%ebp),%eax
080f05fc +0x1f4:  mov    0x2(%eax),%eax
080f05ff +0x1f7:  test   %eax,%eax
080f0601 +0x1f9:  jne    080f066e <+0x266>
080f0603 +0x1fb:  mov    -0xc(%ebp),%eax
080f0606 +0x1fe:  imul   $0x3d,%eax,%eax
080f0609 +0x201:  add    0xc(%ebp),%eax
080f060c +0x204:  mov    -0x79(%ebp),%edx
080f060f +0x207:  mov    %edx,(%eax)
080f0611 +0x209:  mov    -0x75(%ebp),%edx
080f0614 +0x20c:  mov    %edx,0x4(%eax)
080f0617 +0x20f:  mov    -0x71(%ebp),%edx
080f061a +0x212:  mov    %edx,0x8(%eax)
080f061d +0x215:  mov    -0x6d(%ebp),%edx
080f0620 +0x218:  mov    %edx,0xc(%eax)
080f0623 +0x21b:  mov    -0x69(%ebp),%edx
080f0626 +0x21e:  mov    %edx,0x10(%eax)
080f0629 +0x221:  mov    -0x65(%ebp),%edx
080f062c +0x224:  mov    %edx,0x14(%eax)
080f062f +0x227:  mov    -0x61(%ebp),%edx
080f0632 +0x22a:  mov    %edx,0x18(%eax)
080f0635 +0x22d:  mov    -0x5d(%ebp),%edx
080f0638 +0x230:  mov    %edx,0x1c(%eax)
080f063b +0x233:  mov    -0x59(%ebp),%edx
080f063e +0x236:  mov    %edx,0x20(%eax)
080f0641 +0x239:  mov    -0x55(%ebp),%edx
080f0644 +0x23c:  mov    %edx,0x24(%eax)
080f0647 +0x23f:  mov    -0x51(%ebp),%edx
080f064a +0x242:  mov    %edx,0x28(%eax)
080f064d +0x245:  mov    -0x4d(%ebp),%edx
080f0650 +0x248:  mov    %edx,0x2c(%eax)
080f0653 +0x24b:  mov    -0x49(%ebp),%edx
080f0656 +0x24e:  mov    %edx,0x30(%eax)
080f0659 +0x251:  mov    -0x45(%ebp),%edx
080f065c +0x254:  mov    %edx,0x34(%eax)
080f065f +0x257:  mov    -0x41(%ebp),%edx
080f0662 +0x25a:  mov    %edx,0x38(%eax)
080f0665 +0x25d:  movzbl -0x3d(%ebp),%edx
080f0669 +0x261:  mov    %dl,0x3c(%eax)
080f066c +0x264:  jmp    080f0683 <+0x27b>
080f066e +0x266:  addl   $0x1,-0xc(%ebp)
080f0672 +0x26a:  mov    -0x3c(%ebp),%eax
080f0675 +0x26d:  cmp    %eax,-0xc(%ebp)
080f0678 +0x270:  setle  %al
080f067b +0x273:  test   %al,%al
080f067d +0x275:  jne    080f05f3 <+0x1eb>
080f0683 +0x27b:  lea    -0x1c(%ebp),%eax
080f0686 +0x27e:  movl   $0x0,0x8(%esp)
080f068e +0x286:  lea    -0x34(%ebp),%edx
080f0691 +0x289:  mov    %edx,0x4(%esp)
080f0695 +0x28d:  mov    %eax,(%esp)
080f0698 +0x290:  call   080f1b08 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb8a>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb8a
080f069d +0x295:  sub    $0x4,%esp
080f06a0 +0x298:  lea    -0x20(%ebp),%eax
080f06a3 +0x29b:  mov    -0x14(%ebp),%edx
080f06a6 +0x29e:  mov    %edx,0x4(%esp)
080f06aa +0x2a2:  mov    %eax,(%esp)
080f06ad +0x2a5:  call   080f1ab6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb38>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb38
080f06b2 +0x2aa:  sub    $0x4,%esp
080f06b5 +0x2ad:  lea    -0x20(%ebp),%eax
080f06b8 +0x2b0:  mov    %eax,0x4(%esp)
080f06bc +0x2b4:  lea    -0x34(%ebp),%eax
080f06bf +0x2b7:  mov    %eax,(%esp)
080f06c2 +0x2ba:  call   080f1adc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0xb5e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xb5e
080f06c7 +0x2bf:  test   %al,%al
080f06c9 +0x2c1:  jne    080f0522 <+0x11a>
080f06cf +0x2c7:  mov    $0x1,%eax
080f06d4 +0x2cc:  mov    -0x4(%ebp),%ebx
080f06d7 +0x2cf:  leave
080f06d8 +0x2d0:  ret
080f06d9 +0x2d1:  nop
```

## 反编译 C

```c
// eventReward::rewardWriteUserInven @ 0x80f0408

/* eventReward::rewardWriteUserInven(Inven_Item*, rewardKey, int) */

undefined4
eventReward::rewardWriteUserInven
          (map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
           *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this;
  itemData *piVar5;
  undefined4 *puVar6;
  Inven_Item local_7d;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined2 uStack_79;
  undefined2 uStack_77;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined1 local_41;
  int local_40;
  int local_3c;
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
  local_34 [4];
  rewardKey local_30 [4];
  map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
  local_2c [4];
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_20 [4];
  int local_1c;
  int local_18;
  CItem *local_14;
  int local_10;
  
  cVar1 = std::
          map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
          ::empty(param_1);
  if (cVar1 == '\0') {
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::find(local_30);
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::end(local_2c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
            ::operator==((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                          *)local_30,(_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') {
      local_1c = std::
                 _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                 ::operator->((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                               *)local_30);
      local_1c = local_1c + 8;
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::find((int *)local_34);
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::end(local_28);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
              ::operator==(local_34,(_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') {
        local_18 = std::
                   _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                   ::operator->(local_34);
        local_18 = local_18 + 4;
        cVar1 = std::vector<itemData,std::allocator<itemData>>::empty();
        if (cVar1 == '\0') {
          std::vector<itemData,std::allocator<itemData>>::begin();
          while( true ) {
            std::vector<itemData,std::allocator<itemData>>::end();
            bVar2 = __gnu_cxx::operator!=(local_38,local_24);
            if (!bVar2) break;
            iVar4 = __gnu_cxx::
                    __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                    operator->(local_38);
            iVar4 = *(int *)(iVar4 + 4);
            this = (CDataManager *)G_CDataManager();
            local_14 = (CItem *)CDataManager::find_item(this,iVar4);
            if (local_14 == (CItem *)0x0) {
              return 0;
            }
            Inven_Item::Inven_Item(&local_7d);
            iVar4 = __gnu_cxx::
                    __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                    operator->(local_38);
            uStack_7b = (undefined2)*(undefined4 *)(iVar4 + 4);
            uStack_79 = (undefined2)((uint)*(undefined4 *)(iVar4 + 4) >> 0x10);
            (**(code **)(*(int *)local_14 + 8))(local_14,&local_7d);
            piVar5 = (itemData *)
                     __gnu_cxx::
                     __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                     operator*(local_38);
            applyItemOption((eventReward *)param_1,&local_7d,local_14,piVar5);
            local_3c = 0;
            local_40 = 0;
            StartEndPos((eventReward *)param_1,uStack_7c,&local_3c,&local_40,0);
            for (local_10 = local_3c; local_10 <= local_40; local_10 = local_10 + 1) {
              if (*(int *)(local_10 * 0x3d + param_2 + 2) == 0) {
                puVar6 = (undefined4 *)(local_10 * 0x3d + param_2);
                *puVar6 = CONCAT22(uStack_7b,CONCAT11(uStack_7c,local_7d));
                puVar6[1] = CONCAT22(uStack_77,uStack_79);
                puVar6[2] = local_75;
                puVar6[3] = local_71;
                puVar6[4] = local_6d;
                puVar6[5] = local_69;
                puVar6[6] = local_65;
                puVar6[7] = local_61;
                puVar6[8] = local_5d;
                puVar6[9] = local_59;
                puVar6[10] = local_55;
                puVar6[0xb] = local_51;
                puVar6[0xc] = local_4d;
                puVar6[0xd] = local_49;
                puVar6[0xe] = local_45;
                *(undefined1 *)(puVar6 + 0xf) = local_41;
                break;
              }
            }
            __gnu_cxx::__normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
            operator++(local_20,(int)local_38);
          }
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
