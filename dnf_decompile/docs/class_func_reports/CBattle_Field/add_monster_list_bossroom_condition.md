# add_monster_list_bossroom_condition

`_ZN13CBattle_Field35add_monster_list_bossroom_conditionERSt4listI11_mapMonsterSaIS1_EEii`

`CBattle_Field::add_monster_list_bossroom_condition(std::list<_mapMonster, std::allocator<_mapMonster> >&, int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083013e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083013e2  _ZN13CBattle_Field35add_monster_list_bossroom_conditionERSt4listI11_mapMonsterSaIS1_EEii
#           CBattle_Field::add_monster_list_bossroom_condition(std::list<_mapMonster, std::allocator<_mapMonster> >&, int, int)
# range [0x083013e2, 0x0830162d]
083013e2 +0x000:  push   %ebp
083013e3 +0x001:  mov    %esp,%ebp
083013e5 +0x003:  push   %esi
083013e6 +0x004:  push   %ebx
083013e7 +0x005:  sub    $0x40,%esp
083013ea +0x008:  mov    0x8(%ebp),%eax
083013ed +0x00b:  mov    0x188(%eax),%eax
083013f3 +0x011:  test   %eax,%eax
083013f5 +0x013:  je     08301620 <+0x23e>
083013fb +0x019:  mov    0x8(%ebp),%eax
083013fe +0x01c:  mov    0x108(%eax),%eax
08301404 +0x022:  test   %eax,%eax
08301406 +0x024:  je     08301623 <+0x241>
0830140c +0x02a:  mov    0x8(%ebp),%eax
0830140f +0x02d:  mov    0x188(%eax),%eax
08301415 +0x033:  mov    0x90c(%eax),%eax
0830141b +0x039:  cmp    $0x1,%eax
0830141e +0x03c:  jne    08301624 <+0x242>
08301424 +0x042:  mov    0x8(%ebp),%eax
08301427 +0x045:  lea    0x170(%eax),%edx
0830142d +0x04b:  lea    -0x20(%ebp),%eax
08301430 +0x04e:  mov    %edx,0x4(%esp)
08301434 +0x052:  mov    %eax,(%esp)
08301437 +0x055:  call   0830fefa <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1adf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1adf
0830143c +0x05a:  sub    $0x4,%esp
0830143f +0x05d:  lea    -0x20(%ebp),%eax
08301442 +0x060:  mov    %eax,0x4(%esp)
08301446 +0x064:  lea    -0x24(%ebp),%eax
08301449 +0x067:  mov    %eax,(%esp)
0830144c +0x06a:  call   0830ff1e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b03>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b03
08301451 +0x06f:  mov    0x8(%ebp),%eax
08301454 +0x072:  lea    0x170(%eax),%edx
0830145a +0x078:  lea    -0x1c(%ebp),%eax
0830145d +0x07b:  mov    %edx,0x4(%esp)
08301461 +0x07f:  mov    %eax,(%esp)
08301464 +0x082:  call   0830ff38 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b1d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b1d
08301469 +0x087:  sub    $0x4,%esp
0830146c +0x08a:  lea    -0x1c(%ebp),%eax
0830146f +0x08d:  mov    %eax,0x4(%esp)
08301473 +0x091:  lea    -0x28(%ebp),%eax
08301476 +0x094:  mov    %eax,(%esp)
08301479 +0x097:  call   0830ff1e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b03>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b03
0830147e +0x09c:  jmp    08301604 <+0x222>
08301483 +0x0a1:  lea    -0x24(%ebp),%eax
08301486 +0x0a4:  mov    %eax,(%esp)
08301489 +0x0a7:  call   0830ffa0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b85>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b85
0830148e +0x0ac:  lea    0x4(%eax),%edx
08301491 +0x0af:  lea    -0x2c(%ebp),%eax
08301494 +0x0b2:  mov    %edx,0x4(%esp)
08301498 +0x0b6:  mov    %eax,(%esp)
0830149b +0x0b9:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
083014a0 +0x0be:  sub    $0x4,%esp
083014a3 +0x0c1:  lea    -0x24(%ebp),%eax
083014a6 +0x0c4:  mov    %eax,(%esp)
083014a9 +0x0c7:  call   0830ffa0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b85>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b85
083014ae +0x0cc:  lea    0x4(%eax),%edx
083014b1 +0x0cf:  lea    -0x30(%ebp),%eax
083014b4 +0x0d2:  mov    %edx,0x4(%esp)
083014b8 +0x0d6:  mov    %eax,(%esp)
083014bb +0x0d9:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
083014c0 +0x0de:  sub    $0x4,%esp
083014c3 +0x0e1:  jmp    083015df <+0x1fd>
083014c8 +0x0e6:  lea    -0x2c(%ebp),%eax
083014cb +0x0e9:  mov    %eax,(%esp)
083014ce +0x0ec:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
083014d3 +0x0f1:  mov    (%eax),%eax
083014d5 +0x0f3:  cmp    0x10(%ebp),%eax
083014d8 +0x0f6:  jne    083014f4 <+0x112>
083014da +0x0f8:  lea    -0x2c(%ebp),%eax
083014dd +0x0fb:  mov    %eax,(%esp)
083014e0 +0x0fe:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
083014e5 +0x103:  mov    0x4(%eax),%eax
083014e8 +0x106:  cmp    0x14(%ebp),%eax
083014eb +0x109:  jne    083014f4 <+0x112>
083014ed +0x10b:  mov    $0x1,%eax
083014f2 +0x110:  jmp    083014f9 <+0x117>
083014f4 +0x112:  mov    $0x0,%eax
083014f9 +0x117:  test   %al,%al
083014fb +0x119:  je     083015d4 <+0x1f2>
08301501 +0x11f:  mov    0x8(%ebp),%eax
08301504 +0x122:  mov    0x108(%eax),%edx
0830150a +0x128:  lea    -0x18(%ebp),%eax
0830150d +0x12b:  mov    %edx,0x4(%esp)
08301511 +0x12f:  mov    %eax,(%esp)
08301514 +0x132:  call   0830e5cc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b1
08301519 +0x137:  sub    $0x4,%esp
0830151c +0x13a:  lea    -0x18(%ebp),%eax
0830151f +0x13d:  mov    %eax,-0xc(%ebp)
08301522 +0x140:  lea    -0x34(%ebp),%eax
08301525 +0x143:  mov    -0xc(%ebp),%edx
08301528 +0x146:  mov    %edx,0x4(%esp)
0830152c +0x14a:  mov    %eax,(%esp)
0830152f +0x14d:  call   08135d88 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x198f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x198f
08301534 +0x152:  sub    $0x4,%esp
08301537 +0x155:  jmp    08301581 <+0x19f>
08301539 +0x157:  lea    -0x34(%ebp),%eax
0830153c +0x15a:  mov    %eax,(%esp)
0830153f +0x15d:  call   08135e1e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a25>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a25
08301544 +0x162:  mov    (%eax),%ebx
08301546 +0x164:  lea    -0x24(%ebp),%eax
08301549 +0x167:  mov    %eax,(%esp)
0830154c +0x16a:  call   0830ffa0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b85>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b85
08301551 +0x16f:  mov    (%eax),%eax
08301553 +0x171:  cmp    %eax,%ebx
08301555 +0x173:  sete   %al
08301558 +0x176:  test   %al,%al
0830155a +0x178:  je     08301576 <+0x194>
0830155c +0x17a:  lea    -0x34(%ebp),%eax
0830155f +0x17d:  mov    %eax,(%esp)
08301562 +0x180:  call   08139874 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x547b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x547b
08301567 +0x185:  mov    %eax,0x4(%esp)
0830156b +0x189:  mov    0xc(%ebp),%eax
0830156e +0x18c:  mov    %eax,(%esp)
08301571 +0x18f:  call   08139882 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5489>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5489
08301576 +0x194:  lea    -0x34(%ebp),%eax
08301579 +0x197:  mov    %eax,(%esp)
0830157c +0x19a:  call   08139860 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5467>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5467
08301581 +0x19f:  lea    -0x10(%ebp),%eax
08301584 +0x1a2:  mov    -0xc(%ebp),%edx
08301587 +0x1a5:  mov    %edx,0x4(%esp)
0830158b +0x1a9:  mov    %eax,(%esp)
0830158e +0x1ac:  call   08135dae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19b5
08301593 +0x1b1:  sub    $0x4,%esp
08301596 +0x1b4:  lea    -0x10(%ebp),%eax
08301599 +0x1b7:  mov    %eax,0x4(%esp)
0830159d +0x1bb:  lea    -0x34(%ebp),%eax
083015a0 +0x1be:  mov    %eax,(%esp)
083015a3 +0x1c1:  call   08135dd2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19d9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19d9
083015a8 +0x1c6:  test   %al,%al
083015aa +0x1c8:  jne    08301539 <+0x157>
083015ac +0x1ca:  jmp    083015c9 <+0x1e7>
083015ae +0x1cc:  mov    %edx,%ebx
083015b0 +0x1ce:  mov    %eax,%esi
083015b2 +0x1d0:  lea    -0x18(%ebp),%eax
083015b5 +0x1d3:  mov    %eax,(%esp)
083015b8 +0x1d6:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
083015bd +0x1db:  mov    %esi,%eax
083015bf +0x1dd:  mov    %ebx,%edx
083015c1 +0x1df:  mov    %eax,(%esp)
083015c4 +0x1e2:  call   08ae3750 <_Unwind_Resume>
083015c9 +0x1e7:  lea    -0x18(%ebp),%eax
083015cc +0x1ea:  mov    %eax,(%esp)
083015cf +0x1ed:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
083015d4 +0x1f2:  lea    -0x2c(%ebp),%eax
083015d7 +0x1f5:  mov    %eax,(%esp)
083015da +0x1f8:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
083015df +0x1fd:  lea    -0x30(%ebp),%eax
083015e2 +0x200:  mov    %eax,0x4(%esp)
083015e6 +0x204:  lea    -0x2c(%ebp),%eax
083015e9 +0x207:  mov    %eax,(%esp)
083015ec +0x20a:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
083015f1 +0x20f:  test   %al,%al
083015f3 +0x211:  jne    083014c8 <+0xe6>
083015f9 +0x217:  lea    -0x24(%ebp),%eax
083015fc +0x21a:  mov    %eax,(%esp)
083015ff +0x21d:  call   0830ff8a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b6f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b6f
08301604 +0x222:  lea    -0x28(%ebp),%eax
08301607 +0x225:  mov    %eax,0x4(%esp)
0830160b +0x229:  lea    -0x24(%ebp),%eax
0830160e +0x22c:  mov    %eax,(%esp)
08301611 +0x22f:  call   0830ff5e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b43>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b43
08301616 +0x234:  test   %al,%al
08301618 +0x236:  jne    08301483 <+0xa1>
0830161e +0x23c:  jmp    08301624 <+0x242>
08301620 +0x23e:  nop
08301621 +0x23f:  jmp    08301624 <+0x242>
08301623 +0x241:  nop
08301624 +0x242:  lea    -0x8(%ebp),%esp
08301627 +0x245:  add    $0x0,%esp
0830162a +0x248:  pop    %ebx
0830162b +0x249:  pop    %esi
0830162c +0x24a:  pop    %ebp
0830162d +0x24b:  ret
```

## 反编译 C

```c
// CBattle_Field::add_monster_list_bossroom_condition @ 0x83013e2

/* CBattle_Field::add_monster_list_bossroom_condition(std::list<_mapMonster,
   std::allocator<_mapMonster> >&, int, int) */

void __thiscall
CBattle_Field::add_monster_list_bossroom_condition
          (CBattle_Field *this,list *param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  _mapMonster *p_Var5;
  _List_const_iterator<_mapMonster> local_38 [4];
  __normal_iterator local_34 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
  local_2c [4];
  __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator local_20 [4];
  list<_mapMonster,std::allocator<_mapMonster>> local_1c [8];
  _List_const_iterator local_14 [4];
  list<_mapMonster,std::allocator<_mapMonster>> *local_10;
  
  if (((*(int *)(this + 0x188) != 0) && (*(int *)(this + 0x108) != 0)) &&
     (*(int *)(*(int *)(this + 0x188) + 0x90c) == 1)) {
    std::
    vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>
    ::begin();
    __gnu_cxx::
    __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
    ::__normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t*>(local_28,local_24);
    std::
    vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>
    ::end();
    __gnu_cxx::
    __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
    ::__normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t*>(local_2c,local_20);
    while (bVar2 = __gnu_cxx::operator!=(local_28,local_2c), bVar2) {
      __gnu_cxx::
      __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
      ::operator->(local_28);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      __gnu_cxx::
      __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
      ::operator->(local_28);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      while (bVar2 = __gnu_cxx::operator!=(local_30,local_34), bVar2) {
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_30);
        if ((*piVar3 == param_2) &&
           (iVar4 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_30), *(int *)(iVar4 + 4) == param_3)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          CMap::get_condition_monster_list();
          local_10 = local_1c;
                    /* try { // try from 0830152f to 08301592 has its CatchHandler @ 083015ae */
          std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
          while( true ) {
            std::list<_mapMonster,std::allocator<_mapMonster>>::end();
            cVar1 = std::_List_const_iterator<_mapMonster>::operator!=(local_38,local_14);
            if (cVar1 == '\0') break;
            piVar3 = (int *)std::_List_const_iterator<_mapMonster>::operator->(local_38);
            iVar4 = *piVar3;
            piVar3 = (int *)__gnu_cxx::
                            __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
                            ::operator->(local_28);
            if (iVar4 == *piVar3) {
              p_Var5 = (_mapMonster *)std::_List_const_iterator<_mapMonster>::operator*(local_38);
              std::list<_mapMonster,std::allocator<_mapMonster>>::push_back
                        ((list<_mapMonster,std::allocator<_mapMonster>> *)param_1,p_Var5);
            }
            std::_List_const_iterator<_mapMonster>::operator++(local_38);
          }
          std::list<_mapMonster,std::allocator<_mapMonster>>::~list(local_1c);
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_30);
      }
      __gnu_cxx::
      __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
      ::operator++(local_28);
    }
  }
  return;
}
```
