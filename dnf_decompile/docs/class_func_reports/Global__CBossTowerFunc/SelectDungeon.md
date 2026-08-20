# SelectDungeon

`_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE`

`Global::CBossTowerFunc::SelectDungeon(CParty*, short, ENUM_DUNGEON_TYPE)`

| 类 | 地址 |
|---|---|
| `Global::CBossTowerFunc` | `0x08146722` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146722  _ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE
#           Global::CBossTowerFunc::SelectDungeon(CParty*, short, ENUM_DUNGEON_TYPE)
# range [0x08146722, 0x08146823]
08146722 +0x000:  push   %ebp
08146723 +0x001:  mov    %esp,%ebp
08146725 +0x003:  sub    $0x58,%esp
08146728 +0x006:  mov    0xc(%ebp),%eax
0814672b +0x009:  mov    %ax,-0x2c(%ebp)
0814672f +0x00d:  cmpl   $0x0,0x8(%ebp)
08146733 +0x011:  jne    0814673f <+0x1d>
08146735 +0x013:  mov    $0x0,%eax
0814673a +0x018:  jmp    08146822 <+0x100>
0814673f +0x01d:  movb   $0x0,-0x12(%ebp)
08146743 +0x021:  movb   $0x0,-0x11(%ebp)
08146747 +0x025:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0814674c +0x02a:  mov    %eax,(%esp)
0814674f +0x02d:  call   08295906 <_ZN12CGameManager12getBossTowerEv>  ; CGameManager::getBossTower()
08146754 +0x032:  mov    %eax,-0x10(%ebp)
08146757 +0x035:  cmpl   $0x0,-0x10(%ebp)
0814675b +0x039:  jne    08146798 <+0x76>
0814675d +0x03b:  movl   $0x5,0xc(%esp)
08146765 +0x043:  movl   $0x34,0x8(%esp)
0814676d +0x04b:  movl   $&_ZZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPEE19__PRETTY_FUNCTION__,0x4(%esp)
08146775 +0x053:  lea    -0x24(%ebp),%eax
08146778 +0x056:  mov    %eax,(%esp)
0814677b +0x059:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08146780 +0x05e:  movl   $"StaticPool BossTower NULL",0x4(%esp)
08146788 +0x066:  lea    -0x24(%ebp),%eax
0814678b +0x069:  mov    %eax,(%esp)
0814678e +0x06c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08146793 +0x071:  jmp    0814681e <+0xfc>
08146798 +0x076:  mov    0x8(%ebp),%eax
0814679b +0x079:  mov    %eax,(%esp)
0814679e +0x07c:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
081467a3 +0x081:  mov    %eax,-0xc(%ebp)
081467a6 +0x084:  mov    -0xc(%ebp),%eax
081467a9 +0x087:  cmp    $0x2,%eax
081467ac +0x08a:  je     081467cc <+0xaa>
081467ae +0x08c:  cmp    $0x2,%eax
081467b1 +0x08f:  jg     081467ba <+0x98>
081467b3 +0x091:  cmp    $0x1,%eax
081467b6 +0x094:  je     081467c6 <+0xa4>
081467b8 +0x096:  jmp    081467dc <+0xba>
081467ba +0x098:  cmp    $0x3,%eax
081467bd +0x09b:  je     081467d2 <+0xb0>
081467bf +0x09d:  cmp    $0x4,%eax
081467c2 +0x0a0:  je     081467d8 <+0xb6>
081467c4 +0x0a2:  jmp    081467dc <+0xba>
081467c6 +0x0a4:  movb   $0x0,-0x11(%ebp)
081467ca +0x0a8:  jmp    081467dc <+0xba>
081467cc +0x0aa:  movb   $0x1,-0x11(%ebp)
081467d0 +0x0ae:  jmp    081467dc <+0xba>
081467d2 +0x0b0:  movb   $0x2,-0x11(%ebp)
081467d6 +0x0b4:  jmp    081467dc <+0xba>
081467d8 +0x0b6:  movb   $0x3,-0x11(%ebp)
081467dc +0x0ba:  movsbl -0x11(%ebp),%edx
081467e0 +0x0be:  movswl -0x2c(%ebp),%eax
081467e4 +0x0c2:  mov    0x10(%ebp),%ecx
081467e7 +0x0c5:  mov    %ecx,0x10(%esp)
081467eb +0x0c9:  mov    %edx,0xc(%esp)
081467ef +0x0cd:  mov    %eax,0x8(%esp)
081467f3 +0x0d1:  mov    0x8(%ebp),%eax
081467f6 +0x0d4:  mov    %eax,0x4(%esp)
081467fa +0x0d8:  mov    -0x10(%ebp),%eax
081467fd +0x0db:  mov    %eax,(%esp)
08146800 +0x0de:  call   081434f4 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE>  ; WongWork::CBossTower::handleStartGame(CParty*, int, char, ENUM_DUNGEON_TYPE)
08146805 +0x0e3:  mov    %al,-0x12(%ebp)
08146808 +0x0e6:  movzbl -0x12(%ebp),%eax
0814680c +0x0ea:  xor    $0x1,%eax
0814680f +0x0ed:  test   %al,%al
08146811 +0x0ef:  je     0814681e <+0xfc>
08146813 +0x0f1:  mov    -0x10(%ebp),%eax
08146816 +0x0f4:  mov    %eax,(%esp)
08146819 +0x0f7:  call   08142b36 <_ZN8WongWork10CBossTower8_destroyEv>  ; WongWork::CBossTower::_destroy()
0814681e +0x0fc:  movzbl -0x12(%ebp),%eax
08146822 +0x100:  leave
08146823 +0x101:  ret
```

## 反编译 C

```c
// Global::CBossTowerFunc::SelectDungeon @ 0x8146722

/* Global::CBossTowerFunc::SelectDungeon(CParty*, short, ENUM_DUNGEON_TYPE) */

char Global::CBossTowerFunc::SelectDungeon(CParty *param_1,short param_2,undefined4 param_3)

{
  CGameManager *this;
  cMyTrace local_28 [18];
  char local_16;
  char local_15;
  CBossTower *local_14;
  int local_10;
  
  if (param_1 == (CParty *)0x0) {
    local_16 = '\0';
  }
  else {
    local_16 = '\0';
    local_15 = '\0';
    this = (CGameManager *)G_CGameManager();
    local_14 = (CBossTower *)CGameManager::getBossTower(this);
    if (local_14 == (CBossTower *)0x0) {
      cMyTrace::cMyTrace(local_28,
                         "static bool Global::CBossTowerFunc::SelectDungeon(CParty*, short int, ENUM_DUNGEON_TYPE)"
                         ,0x34,5);
      cMyTrace::operator()(local_28,"StaticPool BossTower NULL");
    }
    else {
      local_10 = CParty::get_member_count(param_1);
      if (local_10 == 2) {
        local_15 = '\x01';
      }
      else if (local_10 < 3) {
        if (local_10 == 1) {
          local_15 = '\0';
        }
      }
      else if (local_10 == 3) {
        local_15 = '\x02';
      }
      else if (local_10 == 4) {
        local_15 = '\x03';
      }
      local_16 = WongWork::CBossTower::handleStartGame
                           (local_14,param_1,(int)param_2,(int)local_15,param_3);
      if (local_16 != '\x01') {
        WongWork::CBossTower::_destroy(local_14);
      }
    }
  }
  return local_16;
}
```
