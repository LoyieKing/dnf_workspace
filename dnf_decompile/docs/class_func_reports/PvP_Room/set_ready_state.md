# set_ready_state

`_ZN8PvP_Room15set_ready_stateEP5CUserb`

`PvP_Room::set_ready_state(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d8290` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d8290  _ZN8PvP_Room15set_ready_stateEP5CUserb
#           PvP_Room::set_ready_state(CUser*, bool)
# range [0x085d8290, 0x085d84c5]
085d8290 +0x000:  push   %ebp
085d8291 +0x001:  mov    %esp,%ebp
085d8293 +0x003:  push   %esi
085d8294 +0x004:  push   %ebx
085d8295 +0x005:  sub    $0x30,%esp
085d8298 +0x008:  mov    0x10(%ebp),%eax
085d829b +0x00b:  mov    %al,-0x1c(%ebp)
085d829e +0x00e:  mov    0x8(%ebp),%eax
085d82a1 +0x011:  mov    0x6e4(%eax),%eax
085d82a7 +0x017:  mov    (%eax),%eax
085d82a9 +0x019:  add    $0x48,%eax
085d82ac +0x01c:  mov    (%eax),%ecx
085d82ae +0x01e:  movzbl -0x1c(%ebp),%edx
085d82b2 +0x022:  mov    0x8(%ebp),%eax
085d82b5 +0x025:  mov    0x6e4(%eax),%eax
085d82bb +0x02b:  mov    %edx,0x8(%esp)
085d82bf +0x02f:  mov    0xc(%ebp),%edx
085d82c2 +0x032:  mov    %edx,0x4(%esp)
085d82c6 +0x036:  mov    %eax,(%esp)
085d82c9 +0x039:  call   *%ecx
085d82cb +0x03b:  xor    $0x1,%eax
085d82ce +0x03e:  test   %al,%al
085d82d0 +0x040:  je     085d82dc <+0x4c>
085d82d2 +0x042:  mov    $0x0,%ebx
085d82d7 +0x047:  jmp    085d84bc <+0x22c>
085d82dc +0x04c:  lea    -0x18(%ebp),%eax
085d82df +0x04f:  mov    %eax,(%esp)
085d82e2 +0x052:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d82e7 +0x057:  mov    0x8(%ebp),%eax
085d82ea +0x05a:  mov    0x28(%eax),%eax
085d82ed +0x05d:  cmp    0xc(%ebp),%eax
085d82f0 +0x060:  jne    085d83e8 <+0x158>
085d82f6 +0x066:  cmpb   $0x0,-0x1c(%ebp)
085d82fa +0x06a:  je     085d848f <+0x1ff>
085d8300 +0x070:  mov    0x8(%ebp),%eax
085d8303 +0x073:  mov    %eax,(%esp)
085d8306 +0x076:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d830b +0x07b:  mov    0x8(%ebp),%eax
085d830e +0x07e:  mov    0x2c(%eax),%eax
085d8311 +0x081:  mov    0x8(%ebp),%edx
085d8314 +0x084:  movzbl -0x1c(%ebp),%ecx
085d8318 +0x088:  mov    %cl,0x70(%edx,%eax,1)
085d831c +0x08c:  movzbl -0x1c(%ebp),%edx
085d8320 +0x090:  mov    0x8(%ebp),%eax
085d8323 +0x093:  mov    0x2c(%eax),%eax
085d8326 +0x096:  mov    0x8(%ebp),%ecx
085d8329 +0x099:  add    $0x620,%ecx
085d832f +0x09f:  mov    %edx,0x8(%esp)
085d8333 +0x0a3:  mov    %eax,0x4(%esp)
085d8337 +0x0a7:  mov    %ecx,(%esp)
085d833a +0x0aa:  call   085de252 <_ZN15CRelayBattleMgr7OnReadyEib>  ; CRelayBattleMgr::OnReady(int, bool)
085d833f +0x0af:  mov    0x8(%ebp),%eax
085d8342 +0x0b2:  mov    %eax,(%esp)
085d8345 +0x0b5:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d834a +0x0ba:  mov    0x8(%ebp),%eax
085d834d +0x0bd:  mov    %eax,(%esp)
085d8350 +0x0c0:  call   085d65e8 <_ZN8PvP_Room17check_start_stateEv>  ; PvP_Room::check_start_state()
085d8355 +0x0c5:  test   %al,%al
085d8357 +0x0c7:  je     085d83ad <+0x11d>
085d8359 +0x0c9:  mov    0x8(%ebp),%eax
085d835c +0x0cc:  mov    %eax,(%esp)
085d835f +0x0cf:  call   085d6680 <_ZN8PvP_Room14check_team_pvpEv>  ; PvP_Room::check_team_pvp()
085d8364 +0x0d4:  xor    $0x1,%eax
085d8367 +0x0d7:  test   %al,%al
085d8369 +0x0d9:  je     085d8375 <+0xe5>
085d836b +0x0db:  mov    $0xe,%ebx
085d8370 +0x0e0:  jmp    085d84b1 <+0x221>
085d8375 +0x0e5:  mov    0x8(%ebp),%eax
085d8378 +0x0e8:  mov    0x2c(%eax),%edx
085d837b +0x0eb:  lea    -0x18(%ebp),%eax
085d837e +0x0ee:  mov    %edx,0x8(%esp)
085d8382 +0x0f2:  mov    %eax,0x4(%esp)
085d8386 +0x0f6:  mov    0x8(%ebp),%eax
085d8389 +0x0f9:  mov    %eax,(%esp)
085d838c +0x0fc:  call   085dbcce <_ZN8PvP_Room15make_ready_infoEPci>  ; PvP_Room::make_ready_info(char*, int)
085d8391 +0x101:  lea    -0x18(%ebp),%eax
085d8394 +0x104:  mov    %eax,0x4(%esp)
085d8398 +0x108:  mov    0x8(%ebp),%eax
085d839b +0x10b:  mov    %eax,(%esp)
085d839e +0x10e:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
085d83a3 +0x113:  mov    $0xffffffff,%ebx
085d83a8 +0x118:  jmp    085d84b1 <+0x221>
085d83ad +0x11d:  mov    0x8(%ebp),%eax
085d83b0 +0x120:  mov    0x2c(%eax),%eax
085d83b3 +0x123:  mov    0x8(%ebp),%edx
085d83b6 +0x126:  movb   $0x0,0x70(%edx,%eax,1)
085d83bb +0x12b:  mov    0x8(%ebp),%eax
085d83be +0x12e:  mov    0x2c(%eax),%eax
085d83c1 +0x131:  mov    0x8(%ebp),%edx
085d83c4 +0x134:  add    $0x620,%edx
085d83ca +0x13a:  movl   $0x0,0x8(%esp)
085d83d2 +0x142:  mov    %eax,0x4(%esp)
085d83d6 +0x146:  mov    %edx,(%esp)
085d83d9 +0x149:  call   085de252 <_ZN15CRelayBattleMgr7OnReadyEib>  ; CRelayBattleMgr::OnReady(int, bool)
085d83de +0x14e:  mov    $0x16,%ebx
085d83e3 +0x153:  jmp    085d84b1 <+0x221>
085d83e8 +0x158:  movl   $0x0,-0xc(%ebp)
085d83ef +0x15f:  mov    0x8(%ebp),%eax
085d83f2 +0x162:  mov    %eax,(%esp)
085d83f5 +0x165:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d83fa +0x16a:  movl   $0x0,-0xc(%ebp)
085d8401 +0x171:  jmp    085d8448 <+0x1b8>
085d8403 +0x173:  mov    -0xc(%ebp),%edx
085d8406 +0x176:  mov    0x8(%ebp),%eax
085d8409 +0x179:  add    $0xc,%edx
085d840c +0x17c:  mov    (%eax,%edx,4),%eax
085d840f +0x17f:  cmp    0xc(%ebp),%eax
085d8412 +0x182:  jne    085d8444 <+0x1b4>
085d8414 +0x184:  mov    -0xc(%ebp),%eax
085d8417 +0x187:  mov    0x8(%ebp),%edx
085d841a +0x18a:  movzbl -0x1c(%ebp),%ecx
085d841e +0x18e:  mov    %cl,0x70(%edx,%eax,1)
085d8422 +0x192:  movzbl -0x1c(%ebp),%eax
085d8426 +0x196:  mov    0x8(%ebp),%edx
085d8429 +0x199:  add    $0x620,%edx
085d842f +0x19f:  mov    %eax,0x8(%esp)
085d8433 +0x1a3:  mov    -0xc(%ebp),%eax
085d8436 +0x1a6:  mov    %eax,0x4(%esp)
085d843a +0x1aa:  mov    %edx,(%esp)
085d843d +0x1ad:  call   085de252 <_ZN15CRelayBattleMgr7OnReadyEib>  ; CRelayBattleMgr::OnReady(int, bool)
085d8442 +0x1b2:  jmp    085d8453 <+0x1c3>
085d8444 +0x1b4:  addl   $0x1,-0xc(%ebp)
085d8448 +0x1b8:  cmpl   $0x7,-0xc(%ebp)
085d844c +0x1bc:  setle  %al
085d844f +0x1bf:  test   %al,%al
085d8451 +0x1c1:  jne    085d8403 <+0x173>
085d8453 +0x1c3:  mov    0x8(%ebp),%eax
085d8456 +0x1c6:  mov    %eax,(%esp)
085d8459 +0x1c9:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d845e +0x1ce:  cmpl   $0x7,-0xc(%ebp)
085d8462 +0x1d2:  jg     085d848f <+0x1ff>
085d8464 +0x1d4:  lea    -0x18(%ebp),%eax
085d8467 +0x1d7:  mov    -0xc(%ebp),%edx
085d846a +0x1da:  mov    %edx,0x8(%esp)
085d846e +0x1de:  mov    %eax,0x4(%esp)
085d8472 +0x1e2:  mov    0x8(%ebp),%eax
085d8475 +0x1e5:  mov    %eax,(%esp)
085d8478 +0x1e8:  call   085dbcce <_ZN8PvP_Room15make_ready_infoEPci>  ; PvP_Room::make_ready_info(char*, int)
085d847d +0x1ed:  lea    -0x18(%ebp),%eax
085d8480 +0x1f0:  mov    %eax,0x4(%esp)
085d8484 +0x1f4:  mov    0x8(%ebp),%eax
085d8487 +0x1f7:  mov    %eax,(%esp)
085d848a +0x1fa:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
085d848f +0x1ff:  mov    $0x0,%ebx
085d8494 +0x204:  jmp    085d84b1 <+0x221>
085d8496 +0x206:  mov    %edx,%ebx
085d8498 +0x208:  mov    %eax,%esi
085d849a +0x20a:  lea    -0x18(%ebp),%eax
085d849d +0x20d:  mov    %eax,(%esp)
085d84a0 +0x210:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d84a5 +0x215:  mov    %esi,%eax
085d84a7 +0x217:  mov    %ebx,%edx
085d84a9 +0x219:  mov    %eax,(%esp)
085d84ac +0x21c:  call   08ae3750 <_Unwind_Resume>
085d84b1 +0x221:  lea    -0x18(%ebp),%eax
085d84b4 +0x224:  mov    %eax,(%esp)
085d84b7 +0x227:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d84bc +0x22c:  mov    %ebx,%eax
085d84be +0x22e:  add    $0x30,%esp
085d84c1 +0x231:  pop    %ebx
085d84c2 +0x232:  pop    %esi
085d84c3 +0x233:  pop    %ebp
085d84c4 +0x234:  ret
085d84c5 +0x235:  nop
```

## 反编译 C

```c
// PvP_Room::set_ready_state @ 0x85d8290

/* PvP_Room::set_ready_state(CUser*, bool) */

undefined4 __thiscall PvP_Room::set_ready_state(PvP_Room *this,CUser *param_1,bool param_2)

{
  char cVar1;
  undefined4 uVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  cVar1 = (**(code **)(**(int **)(this + 0x6e4) + 0x48))
                    (*(undefined4 *)(this + 0x6e4),param_1,param_2);
  if (cVar1 != '\x01') {
    return 0;
  }
  PacketGuard::PacketGuard(local_1c);
  if (*(CUser **)(this + 0x28) == param_1) {
    if (param_2) {
      lock();
      this[*(int *)(this + 0x2c) + 0x70] = (PvP_Room)0x1;
      CRelayBattleMgr::OnReady((CRelayBattleMgr *)(this + 0x620),*(int *)(this + 0x2c),true);
      unlock();
      cVar1 = check_start_state(this);
      if (cVar1 == '\0') {
        this[*(int *)(this + 0x2c) + 0x70] = (PvP_Room)0x0;
        CRelayBattleMgr::OnReady((CRelayBattleMgr *)(this + 0x620),*(int *)(this + 0x2c),false);
        uVar2 = 0x16;
      }
      else {
                    /* try { // try from 085d835f to 085d848e has its CatchHandler @ 085d8496 */
        cVar1 = check_team_pvp(this);
        if (cVar1 == '\x01') {
          make_ready_info(this,(char *)local_1c,*(int *)(this + 0x2c));
          send_to_pvp(this,local_1c);
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = 0xe;
        }
      }
      goto LAB_085d84b1;
    }
  }
  else {
    local_10 = 0;
    lock();
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (*(CUser **)(this + (local_10 + 0xc) * 4) == param_1) {
        this[local_10 + 0x70] = (PvP_Room)param_2;
        CRelayBattleMgr::OnReady((CRelayBattleMgr *)(this + 0x620),local_10,param_2);
        break;
      }
    }
    unlock();
    if (local_10 < 8) {
      make_ready_info(this,(char *)local_1c,local_10);
      send_to_pvp(this,local_1c);
    }
  }
  uVar2 = 0;
LAB_085d84b1:
  PacketGuard::~PacketGuard(local_1c);
  return uVar2;
}
```
