# check_boss_map

`_ZN13CBattle_Field14check_boss_mapEii`

`CBattle_Field::check_boss_map(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083079ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083079ba  _ZN13CBattle_Field14check_boss_mapEii
#           CBattle_Field::check_boss_map(int, int)
# range [0x083079ba, 0x08307b29]
083079ba +0x000:  push   %ebp
083079bb +0x001:  mov    %esp,%ebp
083079bd +0x003:  push   %esi
083079be +0x004:  push   %ebx
083079bf +0x005:  sub    $0x30,%esp
083079c2 +0x008:  mov    0x8(%ebp),%eax
083079c5 +0x00b:  mov    0xc(%eax),%eax
083079c8 +0x00e:  cmp    0xc(%ebp),%eax
083079cb +0x011:  jne    08307b1a <+0x160>
083079d1 +0x017:  mov    0x8(%ebp),%eax
083079d4 +0x01a:  mov    0x10(%eax),%eax
083079d7 +0x01d:  cmp    0x10(%ebp),%eax
083079da +0x020:  jne    08307b1a <+0x160>
083079e0 +0x026:  mov    0x8(%ebp),%eax
083079e3 +0x029:  mov    0x188(%eax),%eax
083079e9 +0x02f:  test   %eax,%eax
083079eb +0x031:  je     08307b1a <+0x160>
083079f1 +0x037:  mov    0x8(%ebp),%eax
083079f4 +0x03a:  mov    0x188(%eax),%eax
083079fa +0x040:  mov    0x90c(%eax),%eax
08307a00 +0x046:  cmp    $0x1,%eax
08307a03 +0x049:  jne    08307b1a <+0x160>
08307a09 +0x04f:  mov    0x8(%ebp),%eax
08307a0c +0x052:  lea    0x170(%eax),%edx
08307a12 +0x058:  lea    -0x10(%ebp),%eax
08307a15 +0x05b:  mov    %edx,0x4(%esp)
08307a19 +0x05f:  mov    %eax,(%esp)
08307a1c +0x062:  call   0830fefa <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1adf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1adf
08307a21 +0x067:  sub    $0x4,%esp
08307a24 +0x06a:  lea    -0x10(%ebp),%eax
08307a27 +0x06d:  mov    %eax,0x4(%esp)
08307a2b +0x071:  lea    -0x14(%ebp),%eax
08307a2e +0x074:  mov    %eax,(%esp)
08307a31 +0x077:  call   0830ff1e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b03>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b03
08307a36 +0x07c:  mov    0x8(%ebp),%eax
08307a39 +0x07f:  lea    0x170(%eax),%edx
08307a3f +0x085:  lea    -0xc(%ebp),%eax
08307a42 +0x088:  mov    %edx,0x4(%esp)
08307a46 +0x08c:  mov    %eax,(%esp)
08307a49 +0x08f:  call   0830ff38 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b1d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b1d
08307a4e +0x094:  sub    $0x4,%esp
08307a51 +0x097:  lea    -0xc(%ebp),%eax
08307a54 +0x09a:  mov    %eax,0x4(%esp)
08307a58 +0x09e:  lea    -0x18(%ebp),%eax
08307a5b +0x0a1:  mov    %eax,(%esp)
08307a5e +0x0a4:  call   0830ff1e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b03>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b03
08307a63 +0x0a9:  jmp    08307b00 <+0x146>
08307a68 +0x0ae:  lea    -0x14(%ebp),%eax
08307a6b +0x0b1:  mov    %eax,(%esp)
08307a6e +0x0b4:  call   0830ffa0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b85>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b85
08307a73 +0x0b9:  mov    0x10(%eax),%ebx
08307a76 +0x0bc:  lea    -0x14(%ebp),%eax
08307a79 +0x0bf:  mov    %eax,(%esp)
08307a7c +0x0c2:  call   0830ffa0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b85>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b85
08307a81 +0x0c7:  mov    0x14(%eax),%eax
08307a84 +0x0ca:  cmp    %eax,%ebx
08307a86 +0x0cc:  setl   %al
08307a89 +0x0cf:  test   %al,%al
08307a8b +0x0d1:  je     08307af5 <+0x13b>
08307a8d +0x0d3:  lea    -0x14(%ebp),%eax
08307a90 +0x0d6:  mov    %eax,(%esp)
08307a93 +0x0d9:  call   0830ffa0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b85>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b85
08307a98 +0x0de:  mov    0x14(%eax),%esi
08307a9b +0x0e1:  lea    -0x14(%ebp),%eax
08307a9e +0x0e4:  mov    %eax,(%esp)
08307aa1 +0x0e7:  call   0830ffa0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b85>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b85
08307aa6 +0x0ec:  mov    0x10(%eax),%ebx
08307aa9 +0x0ef:  lea    -0x14(%ebp),%eax
08307aac +0x0f2:  mov    %eax,(%esp)
08307aaf +0x0f5:  call   0830ffa0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b85>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b85
08307ab4 +0x0fa:  mov    (%eax),%eax
08307ab6 +0x0fc:  mov    %esi,0x1c(%esp)
08307aba +0x100:  mov    %ebx,0x18(%esp)
08307abe +0x104:  mov    %eax,0x14(%esp)
08307ac2 +0x108:  movl   $"TRY MoveMap error condition [%d][%d]/[%d]",0x10(%esp)
08307aca +0x110:  movl   $0x1181,0xc(%esp)
08307ad2 +0x118:  movl   $&_ZZN13CBattle_Field14check_boss_mapEiiE19__PRETTY_FUNCTION__,0x8(%esp)
08307ada +0x120:  movl   $"battle_field.cpp",0x4(%esp)
08307ae2 +0x128:  movl   $0x1,(%esp)
08307ae9 +0x12f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08307aee +0x134:  mov    $0x7,%eax
08307af3 +0x139:  jmp    08307b1f <+0x165>
08307af5 +0x13b:  lea    -0x14(%ebp),%eax
08307af8 +0x13e:  mov    %eax,(%esp)
08307afb +0x141:  call   0830ff8a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b6f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b6f
08307b00 +0x146:  lea    -0x18(%ebp),%eax
08307b03 +0x149:  mov    %eax,0x4(%esp)
08307b07 +0x14d:  lea    -0x14(%ebp),%eax
08307b0a +0x150:  mov    %eax,(%esp)
08307b0d +0x153:  call   0830ff5e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1b43>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1b43
08307b12 +0x158:  test   %al,%al
08307b14 +0x15a:  jne    08307a68 <+0xae>
08307b1a +0x160:  mov    $0x0,%eax
08307b1f +0x165:  lea    -0x8(%ebp),%esp
08307b22 +0x168:  add    $0x0,%esp
08307b25 +0x16b:  pop    %ebx
08307b26 +0x16c:  pop    %esi
08307b27 +0x16d:  pop    %ebp
08307b28 +0x16e:  ret
08307b29 +0x16f:  nop
```

## 反编译 C

```c
// CBattle_Field::check_boss_map @ 0x83079ba

/* CBattle_Field::check_boss_map(int, int) */

undefined4 __thiscall CBattle_Field::check_boss_map(CBattle_Field *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
  local_1c [4];
  __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [4];
  
  if ((((*(int *)(this + 0xc) == param_1) && (*(int *)(this + 0x10) == param_2)) &&
      (*(int *)(this + 0x188) != 0)) && (*(int *)(*(int *)(this + 0x188) + 0x90c) == 1)) {
    std::
    vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>
    ::begin();
    __gnu_cxx::
    __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
    ::__normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t*>(local_18,local_14);
    std::
    vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>
    ::end();
    __gnu_cxx::
    __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
    ::__normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t*>(local_1c,local_10);
    while (bVar3 = __gnu_cxx::operator!=(local_18,local_1c), bVar3) {
      iVar4 = __gnu_cxx::
              __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
              ::operator->(local_18);
      iVar4 = *(int *)(iVar4 + 0x10);
      iVar5 = __gnu_cxx::
              __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
              ::operator->(local_18);
      if (iVar4 < *(int *)(iVar5 + 0x14)) {
        iVar4 = __gnu_cxx::
                __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
                ::operator->(local_18);
        uVar1 = *(undefined4 *)(iVar4 + 0x14);
        iVar4 = __gnu_cxx::
                __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
                ::operator->(local_18);
        uVar2 = *(undefined4 *)(iVar4 + 0x10);
        puVar6 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
                 ::operator->(local_18);
        LogManager::logFormat
                  (1,"battle_field.cpp","int CBattle_Field::check_boss_map(int, int)",0x1181,
                   "TRY MoveMap error condition [%d][%d]/[%d]",*puVar6,uVar2,uVar1);
        return 7;
      }
      __gnu_cxx::
      __normal_iterator<CBattle_Field::stConditionEnterBossRoomStatus_t_const*,std::vector<CBattle_Field::stConditionEnterBossRoomStatus_t,std::allocator<CBattle_Field::stConditionEnterBossRoomStatus_t>>>
      ::operator++(local_18);
    }
  }
  return 0;
}
```
