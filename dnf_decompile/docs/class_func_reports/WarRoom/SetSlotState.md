# SetSlotState

`_ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_`

`WarRoom::SetSlotState(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd0f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd0f8  _ZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_
#           WarRoom::SetSlotState(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)
# range [0x086bd0f8, 0x086bd255]
086bd0f8 +0x000:  push   %ebp
086bd0f9 +0x001:  mov    %esp,%ebp
086bd0fb +0x003:  push   %ebx
086bd0fc +0x004:  sub    $0x24,%esp
086bd0ff +0x007:  cmpl   $0x0,0xc(%ebp)
086bd103 +0x00b:  jne    086bd10f <+0x17>
086bd105 +0x00d:  mov    $0x0,%eax
086bd10a +0x012:  jmp    086bd24f <+0x157>
086bd10f +0x017:  mov    0x14(%ebp),%eax
086bd112 +0x01a:  cmp    $0xff,%eax
086bd117 +0x01f:  jne    086bd24a <+0x152>
086bd11d +0x025:  mov    0x10(%ebp),%edx
086bd120 +0x028:  mov    0x8(%ebp),%eax
086bd123 +0x02b:  add    $0x48,%edx
086bd126 +0x02e:  mov    0xc(%eax,%edx,4),%eax
086bd12a +0x032:  test   %eax,%eax
086bd12c +0x034:  jne    086bd175 <+0x7d>
086bd12e +0x036:  movl   $0x5,0xc(%esp)
086bd136 +0x03e:  movl   $0x590,0x8(%esp)
086bd13e +0x046:  movl   $&_ZZN7WarRoom12SetSlotStateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_E19__PRETTY_FUNCTION__,0x4(%esp)
086bd146 +0x04e:  lea    -0x18(%ebp),%eax
086bd149 +0x051:  mov    %eax,(%esp)
086bd14c +0x054:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086bd151 +0x059:  mov    0x10(%ebp),%eax
086bd154 +0x05c:  mov    %eax,0x8(%esp)
086bd158 +0x060:  movl   $"WARAREA  WarRoom::SetSlotState players_[pos] is NULL pos(%d)",0x4(%esp)
086bd160 +0x068:  lea    -0x18(%ebp),%eax
086bd163 +0x06b:  mov    %eax,(%esp)
086bd166 +0x06e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086bd16b +0x073:  mov    $0x0,%eax
086bd170 +0x078:  jmp    086bd24f <+0x157>
086bd175 +0x07d:  mov    0x10(%ebp),%edx
086bd178 +0x080:  mov    0x8(%ebp),%eax
086bd17b +0x083:  add    $0x48,%edx
086bd17e +0x086:  mov    0xc(%eax,%edx,4),%edx
086bd182 +0x08a:  mov    0x18(%ebp),%eax
086bd185 +0x08d:  mov    %edx,(%eax)
086bd187 +0x08f:  mov    0x10(%ebp),%edx
086bd18a +0x092:  mov    0x8(%ebp),%eax
086bd18d +0x095:  add    $0x50,%edx
086bd190 +0x098:  movl   $0xff,0x8(%eax,%edx,4)
086bd198 +0x0a0:  mov    0x10(%ebp),%edx
086bd19b +0x0a3:  mov    0x8(%ebp),%eax
086bd19e +0x0a6:  add    $0x48,%edx
086bd1a1 +0x0a9:  movl   $0x0,0xc(%eax,%edx,4)
086bd1a9 +0x0b1:  mov    0x10(%ebp),%eax
086bd1ac +0x0b4:  mov    0x8(%ebp),%edx
086bd1af +0x0b7:  movb   $0x0,0x184(%edx,%eax,1)
086bd1b7 +0x0bf:  mov    0x1c(%ebp),%eax
086bd1ba +0x0c2:  movb   $0x1,(%eax)
086bd1bd +0x0c5:  mov    0x8(%ebp),%eax
086bd1c0 +0x0c8:  mov    %eax,(%esp)
086bd1c3 +0x0cb:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bd1c8 +0x0d0:  cmp    $0x2,%eax
086bd1cb +0x0d3:  setg   %al
086bd1ce +0x0d6:  test   %al,%al
086bd1d0 +0x0d8:  je     086bd1e4 <+0xec>
086bd1d2 +0x0da:  mov    0xc(%ebp),%eax
086bd1d5 +0x0dd:  mov    %eax,0x4(%esp)
086bd1d9 +0x0e1:  mov    0x8(%ebp),%eax
086bd1dc +0x0e4:  mov    %eax,(%esp)
086bd1df +0x0e7:  call   086ba948 <_ZN7WarRoom10AddBanListEP5CUser>  ; WarRoom::AddBanList(CUser*)
086bd1e4 +0x0ec:  mov    0xc(%ebp),%eax
086bd1e7 +0x0ef:  mov    %eax,(%esp)
086bd1ea +0x0f2:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086bd1ef +0x0f7:  mov    %eax,(%esp)
086bd1f2 +0x0fa:  call   080f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>  ; WongWork::CHackAnalyzer::reportHackInfo()
086bd1f7 +0x0ff:  mov    0xc(%ebp),%eax
086bd1fa +0x102:  mov    %eax,(%esp)
086bd1fd +0x105:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086bd202 +0x10a:  mov    %eax,(%esp)
086bd205 +0x10d:  call   080f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>  ; WongWork::CHackAnalyzer::resetHackInfo()
086bd20a +0x112:  mov    0x8(%ebp),%eax
086bd20d +0x115:  mov    0x1d0(%eax),%eax
086bd213 +0x11b:  test   %eax,%eax
086bd215 +0x11d:  je     086bd24a <+0x152>
086bd217 +0x11f:  mov    0x8(%ebp),%eax
086bd21a +0x122:  movzbl (%eax),%eax
086bd21d +0x125:  movzbl %al,%ebx
086bd220 +0x128:  mov    0x8(%ebp),%eax
086bd223 +0x12b:  mov    0x1d0(%eax),%eax
086bd229 +0x131:  mov    %eax,(%esp)
086bd22c +0x134:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
086bd231 +0x139:  mov    0xc(%ebp),%edx
086bd234 +0x13c:  add    $0x79700,%edx
086bd23a +0x142:  mov    %ebx,0x8(%esp)
086bd23e +0x146:  mov    %eax,0x4(%esp)
086bd242 +0x14a:  mov    %edx,(%esp)
086bd245 +0x14d:  call   08684a42 <_ZN15cUserHistoryLog12LeaveDungeonEPKci>  ; cUserHistoryLog::LeaveDungeon(char const*, int)
086bd24a +0x152:  mov    $0x0,%eax
086bd24f +0x157:  add    $0x24,%esp
086bd252 +0x15a:  pop    %ebx
086bd253 +0x15b:  pop    %ebp
086bd254 +0x15c:  ret
086bd255 +0x15d:  nop
```

## 反编译 C

```c
// WarRoom::SetSlotState @ 0x86bd0f8

/* WarRoom::SetSlotState(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&) */

undefined4
WarRoom::SetSlotState
          (WarRoom *param_1,CUser *param_2,int param_3,int param_4,undefined4 *param_5,
          undefined1 *param_6)

{
  WarRoom WVar1;
  int iVar2;
  CHackAnalyzer *this;
  char *pcVar3;
  cMyTrace local_1c [20];
  
  if ((param_2 != (CUser *)0x0) && (param_4 == 0xff)) {
    if (*(int *)(param_1 + (param_3 + 0x48) * 4 + 0xc) == 0) {
      cMyTrace::cMyTrace(local_1c,
                         "int WarRoom::SetSlotState(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)"
                         ,0x590,5);
      cMyTrace::operator()
                (local_1c,"WARAREA  WarRoom::SetSlotState players_[pos] is NULL pos(%d)",param_3);
    }
    else {
      *param_5 = *(undefined4 *)(param_1 + (param_3 + 0x48) * 4 + 0xc);
      *(undefined4 *)(param_1 + (param_3 + 0x50) * 4 + 8) = 0xff;
      *(undefined4 *)(param_1 + (param_3 + 0x48) * 4 + 0xc) = 0;
      param_1[param_3 + 0x184] = (WarRoom)0x0;
      *param_6 = 1;
      iVar2 = GetState(param_1);
      if (2 < iVar2) {
        AddBanList(param_1,param_2);
      }
      CUser::getHackAnalyzer(param_2);
      WongWork::CHackAnalyzer::reportHackInfo();
      this = (CHackAnalyzer *)CUser::getHackAnalyzer(param_2);
      WongWork::CHackAnalyzer::resetHackInfo(this);
      if (*(int *)(param_1 + 0x1d0) != 0) {
        WVar1 = *param_1;
        pcVar3 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(param_1 + 0x1d0));
        cUserHistoryLog::LeaveDungeon
                  ((cUserHistoryLog *)(param_2 + 0x79700),pcVar3,(uint)(byte)WVar1);
      }
    }
  }
  return 0;
}
```
