# onTimer

`_ZN22CNPCDynamicInfoManager7onTimerEv`

`CNPCDynamicInfoManager::onTimer()`

| 类 | 地址 |
|---|---|
| `CNPCDynamicInfoManager` | `0x08580722` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08580722  _ZN22CNPCDynamicInfoManager7onTimerEv
#           CNPCDynamicInfoManager::onTimer()
# range [0x08580722, 0x085808a5]
08580722 +0x000:  push   %ebp
08580723 +0x001:  mov    %esp,%ebp
08580725 +0x003:  push   %esi
08580726 +0x004:  push   %ebx
08580727 +0x005:  sub    $0x40,%esp
0858072a +0x008:  lea    -0x20(%ebp),%eax
0858072d +0x00b:  mov    %eax,(%esp)
08580730 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08580735 +0x013:  movl   $0xc3,0x8(%esp)
0858073d +0x01b:  movl   $0x0,0x4(%esp)
08580745 +0x023:  lea    -0x20(%ebp),%eax
08580748 +0x026:  mov    %eax,(%esp)
0858074b +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08580750 +0x02e:  lea    -0x20(%ebp),%eax
08580753 +0x031:  mov    %eax,(%esp)
08580756 +0x034:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0858075b +0x039:  mov    %eax,-0x24(%ebp)
0858075e +0x03c:  movw   $0x0,-0x12(%ebp)
08580764 +0x042:  movl   $0x0,0x4(%esp)
0858076c +0x04a:  lea    -0x20(%ebp),%eax
0858076f +0x04d:  mov    %eax,(%esp)
08580772 +0x050:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08580777 +0x055:  mov    0x8(%ebp),%edx
0858077a +0x058:  lea    -0x28(%ebp),%eax
0858077d +0x05b:  mov    %edx,0x4(%esp)
08580781 +0x05f:  mov    %eax,(%esp)
08580784 +0x062:  call   085829d0 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1162>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1162
08580789 +0x067:  sub    $0x4,%esp
0858078c +0x06a:  mov    0x8(%ebp),%edx
0858078f +0x06d:  lea    -0x2c(%ebp),%eax
08580792 +0x070:  mov    %edx,0x4(%esp)
08580796 +0x074:  mov    %eax,(%esp)
08580799 +0x077:  call   0858243e <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xbd0>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xbd0
0858079e +0x07c:  sub    $0x4,%esp
085807a1 +0x07f:  jmp    08580812 <+0xf0>
085807a3 +0x081:  lea    -0x28(%ebp),%eax
085807a6 +0x084:  mov    %eax,(%esp)
085807a9 +0x087:  call   08582478 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xc0a>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xc0a
085807ae +0x08c:  mov    0x4(%eax),%eax
085807b1 +0x08f:  mov    %eax,(%esp)
085807b4 +0x092:  call   08581910 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xa2>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xa2
085807b9 +0x097:  mov    %eax,-0x10(%ebp)
085807bc +0x09a:  lea    -0x28(%ebp),%eax
085807bf +0x09d:  mov    %eax,(%esp)
085807c2 +0x0a0:  call   08582478 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xc0a>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xc0a
085807c7 +0x0a5:  mov    0x4(%eax),%eax
085807ca +0x0a8:  movl   $0x0,0x4(%esp)
085807d2 +0x0b0:  mov    %eax,(%esp)
085807d5 +0x0b3:  call   085804b2 <_ZN15CNPCDynamicInfo10changeMoodEb>  ; CNPCDynamicInfo::changeMood(bool)
085807da +0x0b8:  mov    %eax,-0xc(%ebp)
085807dd +0x0bb:  mov    -0x10(%ebp),%eax
085807e0 +0x0be:  cmp    -0xc(%ebp),%eax
085807e3 +0x0c1:  je     08580807 <+0xe5>
085807e5 +0x0c3:  lea    -0x28(%ebp),%eax
085807e8 +0x0c6:  mov    %eax,(%esp)
085807eb +0x0c9:  call   08582478 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xc0a>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xc0a
085807f0 +0x0ce:  mov    0x4(%eax),%eax
085807f3 +0x0d1:  lea    -0x20(%ebp),%edx
085807f6 +0x0d4:  mov    %edx,0x4(%esp)
085807fa +0x0d8:  mov    %eax,(%esp)
085807fd +0x0db:  call   08580624 <_ZNK15CNPCDynamicInfo21makeNotiPacketCurMoodER11PacketGuard>  ; CNPCDynamicInfo::makeNotiPacketCurMood(PacketGuard&) const
08580802 +0x0e0:  addw   $0x1,-0x12(%ebp)
08580807 +0x0e5:  lea    -0x28(%ebp),%eax
0858080a +0x0e8:  mov    %eax,(%esp)
0858080d +0x0eb:  call   08582a0a <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x119c>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x119c
08580812 +0x0f0:  lea    -0x2c(%ebp),%eax
08580815 +0x0f3:  mov    %eax,0x4(%esp)
08580819 +0x0f7:  lea    -0x28(%ebp),%eax
0858081c +0x0fa:  mov    %eax,(%esp)
0858081f +0x0fd:  call   085829f6 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1188>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1188
08580824 +0x102:  test   %al,%al
08580826 +0x104:  jne    085807a3 <+0x81>
0858082c +0x10a:  movswl -0x12(%ebp),%eax
08580830 +0x10e:  mov    %eax,0x8(%esp)
08580834 +0x112:  lea    -0x24(%ebp),%eax
08580837 +0x115:  mov    %eax,0x4(%esp)
0858083b +0x119:  lea    -0x20(%ebp),%eax
0858083e +0x11c:  mov    %eax,(%esp)
08580841 +0x11f:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
08580846 +0x124:  movl   $0x1,0x4(%esp)
0858084e +0x12c:  lea    -0x20(%ebp),%eax
08580851 +0x12f:  mov    %eax,(%esp)
08580854 +0x132:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08580859 +0x137:  cmpw   $0x0,-0x12(%ebp)
0858085e +0x13c:  je     08580891 <+0x16f>
08580860 +0x13e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08580865 +0x143:  lea    -0x20(%ebp),%edx
08580868 +0x146:  mov    %edx,0x4(%esp)
0858086c +0x14a:  mov    %eax,(%esp)
0858086f +0x14d:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08580874 +0x152:  jmp    08580891 <+0x16f>
08580876 +0x154:  mov    %edx,%ebx
08580878 +0x156:  mov    %eax,%esi
0858087a +0x158:  lea    -0x20(%ebp),%eax
0858087d +0x15b:  mov    %eax,(%esp)
08580880 +0x15e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08580885 +0x163:  mov    %esi,%eax
08580887 +0x165:  mov    %ebx,%edx
08580889 +0x167:  mov    %eax,(%esp)
0858088c +0x16a:  call   08ae3750 <_Unwind_Resume>
08580891 +0x16f:  lea    -0x20(%ebp),%eax
08580894 +0x172:  mov    %eax,(%esp)
08580897 +0x175:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858089c +0x17a:  lea    -0x8(%ebp),%esp
0858089f +0x17d:  add    $0x0,%esp
085808a2 +0x180:  pop    %ebx
085808a3 +0x181:  pop    %esi
085808a4 +0x182:  pop    %ebp
085808a5 +0x183:  ret
```

## 反编译 C

```c
// CNPCDynamicInfoManager::onTimer @ 0x8580722

/* CNPCDynamicInfoManager::onTimer() */

void CNPCDynamicInfoManager::onTimer(void)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  local_30 [4];
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  local_2c [4];
  int local_28;
  PacketGuard local_24 [14];
  short local_16;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0858074b to 08580873 has its CatchHandler @ 08580876 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xc3);
  local_28 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_24);
  local_16 = 0;
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,0);
  std::
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  ::begin(local_2c);
  std::
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  ::end(local_30);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)local_2c
                       ,(_Rb_tree_iterator *)local_30);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)local_2c
                      );
    local_14 = CNPCDynamicInfo::getMood(*(CNPCDynamicInfo **)(iVar2 + 4));
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)local_2c
                      );
    local_10 = CNPCDynamicInfo::changeMood(*(CNPCDynamicInfo **)(iVar2 + 4),false);
    if (local_14 != local_10) {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)
                         local_2c);
      CNPCDynamicInfo::makeNotiPacketCurMood(*(CNPCDynamicInfo **)(iVar2 + 4),local_24);
      local_16 = local_16 + 1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)local_2c);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,&local_28,(int)local_16);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  if (local_16 != 0) {
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_24);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
