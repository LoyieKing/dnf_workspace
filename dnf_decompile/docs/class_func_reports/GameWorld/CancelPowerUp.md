# CancelPowerUp

`_ZN9GameWorld13CancelPowerUpEv`

`GameWorld::CancelPowerUp()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cf356` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cf356  _ZN9GameWorld13CancelPowerUpEv
#           GameWorld::CancelPowerUp()
# range [0x086cf356, 0x086cf469]
086cf356 +0x000:  push   %ebp
086cf357 +0x001:  mov    %esp,%ebp
086cf359 +0x003:  push   %esi
086cf35a +0x004:  push   %ebx
086cf35b +0x005:  sub    $0x30,%esp
086cf35e +0x008:  lea    -0x1c(%ebp),%eax
086cf361 +0x00b:  mov    %eax,(%esp)
086cf364 +0x00e:  call   082f1b1e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18a2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18a2
086cf369 +0x013:  mov    0x8(%ebp),%eax
086cf36c +0x016:  lea    0x134(%eax),%edx
086cf372 +0x01c:  lea    -0x20(%ebp),%eax
086cf375 +0x01f:  mov    %edx,0x4(%esp)
086cf379 +0x023:  mov    %eax,(%esp)
086cf37c +0x026:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cf381 +0x02b:  sub    $0x4,%esp
086cf384 +0x02e:  jmp    086cf3e8 <+0x92>
086cf386 +0x030:  lea    -0x20(%ebp),%eax
086cf389 +0x033:  mov    %eax,(%esp)
086cf38c +0x036:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cf391 +0x03b:  mov    0x4(%eax),%eax
086cf394 +0x03e:  mov    %eax,-0x24(%ebp)
086cf397 +0x041:  mov    -0x24(%ebp),%eax
086cf39a +0x044:  mov    %eax,(%esp)
086cf39d +0x047:  call   0863be64 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x375>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x375
086cf3a2 +0x04c:  test   %al,%al
086cf3a4 +0x04e:  je     086cf3cb <+0x75>
086cf3a6 +0x050:  mov    -0x24(%ebp),%eax
086cf3a9 +0x053:  movl   $0x0,0x4(%esp)
086cf3b1 +0x05b:  mov    %eax,(%esp)
086cf3b4 +0x05e:  call   08595078 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x58>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x58
086cf3b9 +0x063:  lea    -0x24(%ebp),%eax
086cf3bc +0x066:  mov    %eax,0x4(%esp)
086cf3c0 +0x06a:  lea    -0x1c(%ebp),%eax
086cf3c3 +0x06d:  mov    %eax,(%esp)
086cf3c6 +0x070:  call   08551088 <_GLOBAL__I__ZN10CLuckPointC2Ev+0xdb>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xdb
086cf3cb +0x075:  lea    -0xc(%ebp),%eax
086cf3ce +0x078:  movl   $0x0,0x8(%esp)
086cf3d6 +0x080:  lea    -0x20(%ebp),%edx
086cf3d9 +0x083:  mov    %edx,0x4(%esp)
086cf3dd +0x087:  mov    %eax,(%esp)
086cf3e0 +0x08a:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086cf3e5 +0x08f:  sub    $0x4,%esp
086cf3e8 +0x092:  mov    0x8(%ebp),%eax
086cf3eb +0x095:  lea    0x134(%eax),%edx
086cf3f1 +0x09b:  lea    -0x10(%ebp),%eax
086cf3f4 +0x09e:  mov    %edx,0x4(%esp)
086cf3f8 +0x0a2:  mov    %eax,(%esp)
086cf3fb +0x0a5:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cf400 +0x0aa:  sub    $0x4,%esp
086cf403 +0x0ad:  lea    -0x10(%ebp),%eax
086cf406 +0x0b0:  mov    %eax,0x4(%esp)
086cf40a +0x0b4:  lea    -0x20(%ebp),%eax
086cf40d +0x0b7:  mov    %eax,(%esp)
086cf410 +0x0ba:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cf415 +0x0bf:  test   %al,%al
086cf417 +0x0c1:  jne    086cf386 <+0x30>
086cf41d +0x0c7:  lea    -0x1c(%ebp),%eax
086cf420 +0x0ca:  mov    %eax,0x8(%esp)
086cf424 +0x0ce:  movl   $0x0,0x4(%esp)
086cf42c +0x0d6:  mov    0x8(%ebp),%eax
086cf42f +0x0d9:  mov    %eax,(%esp)
086cf432 +0x0dc:  call   086cf46a <_ZN9GameWorld15SendPowerUpListE27ENUM_POWER_UP_ACTIVATE_TYPERSt6vectorIP5CUserSaIS3_EE>  ; GameWorld::SendPowerUpList(ENUM_POWER_UP_ACTIVATE_TYPE, std::vector<CUser*, std::allocator<CUser*> >&)
086cf437 +0x0e1:  jmp    086cf454 <+0xfe>
086cf439 +0x0e3:  mov    %edx,%ebx
086cf43b +0x0e5:  mov    %eax,%esi
086cf43d +0x0e7:  lea    -0x1c(%ebp),%eax
086cf440 +0x0ea:  mov    %eax,(%esp)
086cf443 +0x0ed:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
086cf448 +0x0f2:  mov    %esi,%eax
086cf44a +0x0f4:  mov    %ebx,%edx
086cf44c +0x0f6:  mov    %eax,(%esp)
086cf44f +0x0f9:  call   08ae3750 <_Unwind_Resume>
086cf454 +0x0fe:  lea    -0x1c(%ebp),%eax
086cf457 +0x101:  mov    %eax,(%esp)
086cf45a +0x104:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
086cf45f +0x109:  lea    -0x8(%ebp),%esp
086cf462 +0x10c:  add    $0x0,%esp
086cf465 +0x10f:  pop    %ebx
086cf466 +0x110:  pop    %esi
086cf467 +0x111:  pop    %ebp
086cf468 +0x112:  ret
086cf469 +0x113:  nop
```

## 反编译 C

```c
// GameWorld::CancelPowerUp @ 0x86cf356

/* GameWorld::CancelPowerUp() */

void __thiscall GameWorld::CancelPowerUp(GameWorld *this)

{
  char cVar1;
  int iVar2;
  CUser *local_28;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_24 [4];
  vector<CUser*,std::allocator<CUser*>> local_20 [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_14 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_10 [4];
  
  std::vector<CUser*,std::allocator<CUser*>>::vector(local_20);
                    /* try { // try from 086cf37c to 086cf436 has its CatchHandler @ 086cf439 */
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_24);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_24,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_24);
    local_28 = *(CUser **)(iVar2 + 4);
    cVar1 = CUser::IsPowerUp(local_28);
    if (cVar1 != '\0') {
      CUser::SetPowerUp(local_28,false);
      std::vector<CUser*,std::allocator<CUser*>>::push_back(local_20,&local_28);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_10,(int)local_24);
  }
  SendPowerUpList(this,0,local_20);
  std::vector<CUser*,std::allocator<CUser*>>::~vector(local_20);
  return;
}
```
