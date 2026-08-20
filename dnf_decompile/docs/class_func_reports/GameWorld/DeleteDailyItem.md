# DeleteDailyItem

`_ZN9GameWorld15DeleteDailyItemEv`

`GameWorld::DeleteDailyItem()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ccc8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ccc8e  _ZN9GameWorld15DeleteDailyItemEv
#           GameWorld::DeleteDailyItem()
# range [0x086ccc8e, 0x086ccdcd]
086ccc8e +0x000:  push   %ebp
086ccc8f +0x001:  mov    %esp,%ebp
086ccc91 +0x003:  push   %esi
086ccc92 +0x004:  push   %ebx
086ccc93 +0x005:  sub    $0x40,%esp
086ccc96 +0x008:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086ccc9d +0x00f:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
086ccca2 +0x014:  mov    %eax,%esi
086ccca4 +0x016:  mov    0x8(%ebp),%eax
086ccca7 +0x019:  add    $0x134,%eax
086cccac +0x01e:  mov    %eax,(%esp)
086cccaf +0x021:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
086cccb4 +0x026:  mov    %eax,%ebx
086cccb6 +0x028:  movl   $0x0,0xc(%esp)
086cccbe +0x030:  movl   $0x13da,0x8(%esp)
086cccc6 +0x038:  movl   $&_ZZN9GameWorld15DeleteDailyItemEvE19__PRETTY_FUNCTION__,0x4(%esp)
086cccce +0x040:  lea    -0x30(%ebp),%eax
086cccd1 +0x043:  mov    %eax,(%esp)
086cccd4 +0x046:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cccd9 +0x04b:  mov    %esi,0xc(%esp)
086cccdd +0x04f:  mov    %ebx,0x8(%esp)
086ccce1 +0x053:  movl   $"DeleteDailyItem size(%d) start tick(%u)",0x4(%esp)
086ccce9 +0x05b:  lea    -0x30(%ebp),%eax
086cccec +0x05e:  mov    %eax,(%esp)
086cccef +0x061:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cccf4 +0x066:  mov    0x8(%ebp),%eax
086cccf7 +0x069:  lea    0x134(%eax),%edx
086cccfd +0x06f:  lea    -0x34(%ebp),%eax
086ccd00 +0x072:  mov    %edx,0x4(%esp)
086ccd04 +0x076:  mov    %eax,(%esp)
086ccd07 +0x079:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086ccd0c +0x07e:  sub    $0x4,%esp
086ccd0f +0x081:  jmp    086ccd3e <+0xb0>
086ccd11 +0x083:  lea    -0x34(%ebp),%eax
086ccd14 +0x086:  mov    %eax,(%esp)
086ccd17 +0x089:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086ccd1c +0x08e:  mov    0x4(%eax),%eax
086ccd1f +0x091:  mov    %eax,-0xc(%ebp)
086ccd22 +0x094:  cmpl   $0x0,-0xc(%ebp)
086ccd26 +0x098:  je     086ccd33 <+0xa5>
086ccd28 +0x09a:  mov    -0xc(%ebp),%eax
086ccd2b +0x09d:  mov    %eax,(%esp)
086ccd2e +0x0a0:  call   0867e092 <_ZN5CUser19processDelDailyItemEv>  ; CUser::processDelDailyItem()
086ccd33 +0x0a5:  lea    -0x34(%ebp),%eax
086ccd36 +0x0a8:  mov    %eax,(%esp)
086ccd39 +0x0ab:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086ccd3e +0x0b0:  mov    0x8(%ebp),%eax
086ccd41 +0x0b3:  lea    0x134(%eax),%edx
086ccd47 +0x0b9:  lea    -0x20(%ebp),%eax
086ccd4a +0x0bc:  mov    %edx,0x4(%esp)
086ccd4e +0x0c0:  mov    %eax,(%esp)
086ccd51 +0x0c3:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086ccd56 +0x0c8:  sub    $0x4,%esp
086ccd59 +0x0cb:  lea    -0x20(%ebp),%eax
086ccd5c +0x0ce:  mov    %eax,0x4(%esp)
086ccd60 +0x0d2:  lea    -0x34(%ebp),%eax
086ccd63 +0x0d5:  mov    %eax,(%esp)
086ccd66 +0x0d8:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086ccd6b +0x0dd:  test   %al,%al
086ccd6d +0x0df:  jne    086ccd11 <+0x83>
086ccd6f +0x0e1:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086ccd76 +0x0e8:  call   082a68c8 <_GLOBAL__I__ZN4CLog5this_E+0x2cef>  ; global constructors keyed to CLog::this_+0x2cef
086ccd7b +0x0ed:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086ccd82 +0x0f4:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
086ccd87 +0x0f9:  mov    %eax,%ebx
086ccd89 +0x0fb:  movl   $0x0,0xc(%esp)
086ccd91 +0x103:  movl   $0x13e6,0x8(%esp)
086ccd99 +0x10b:  movl   $&_ZZN9GameWorld15DeleteDailyItemEvE19__PRETTY_FUNCTION__,0x4(%esp)
086ccda1 +0x113:  lea    -0x1c(%ebp),%eax
086ccda4 +0x116:  mov    %eax,(%esp)
086ccda7 +0x119:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ccdac +0x11e:  mov    %ebx,0x8(%esp)
086ccdb0 +0x122:  movl   $"DeleteDailyItem end tick(%u)",0x4(%esp)
086ccdb8 +0x12a:  lea    -0x1c(%ebp),%eax
086ccdbb +0x12d:  mov    %eax,(%esp)
086ccdbe +0x130:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ccdc3 +0x135:  lea    -0x8(%ebp),%esp
086ccdc6 +0x138:  add    $0x0,%esp
086ccdc9 +0x13b:  pop    %ebx
086ccdca +0x13c:  pop    %esi
086ccdcb +0x13d:  pop    %ebp
086ccdcc +0x13e:  ret
086ccdcd +0x13f:  nop
```

## 反编译 C

```c
// GameWorld::DeleteDailyItem @ 0x86ccc8e

/* GameWorld::DeleteDailyItem() */

void __thiscall GameWorld::DeleteDailyItem(GameWorld *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_38 [4];
  cMyTrace local_34 [16];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_24 [4];
  cMyTrace local_20 [16];
  CUser *local_10;
  
  uVar2 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  uVar3 = std::
          map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
          ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                  *)(this + 0x134));
  cMyTrace::cMyTrace(local_34,"void GameWorld::DeleteDailyItem()",0x13da,0);
  cMyTrace::operator()(local_34,"DeleteDailyItem size(%d) start tick(%u)",uVar3,uVar2);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_38);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_38,
                       (_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_38);
    local_10 = *(CUser **)(iVar4 + 4);
    if (local_10 != (CUser *)0x0) {
      CUser::processDelDailyItem(local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_38);
  }
  CSystemTime::update((CSystemTime *)GlobalData::s_systemTime_);
  uVar2 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  cMyTrace::cMyTrace(local_20,"void GameWorld::DeleteDailyItem()",0x13e6,0);
  cMyTrace::operator()(local_20,"DeleteDailyItem end tick(%u)",uVar2);
  return;
}
```
