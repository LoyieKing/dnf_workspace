# _CheckMatchable

`_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room`

`fair_pvp::CFairMatch::_CheckMatchable(PvP_Room*) const`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08563a54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08563a54  _ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room
#           fair_pvp::CFairMatch::_CheckMatchable(PvP_Room*) const
# range [0x08563a54, 0x08563b15]
08563a54 +0x00:  push   %ebp
08563a55 +0x01:  mov    %esp,%ebp
08563a57 +0x03:  push   %ebx
08563a58 +0x04:  sub    $0x24,%esp
08563a5b +0x07:  movl   $0x0,-0x14(%ebp)
08563a62 +0x0e:  movl   $0x0,-0x10(%ebp)
08563a69 +0x15:  jmp    08563ad4 <+0x80>
08563a6b +0x17:  mov    -0x10(%ebp),%eax
08563a6e +0x1a:  mov    %eax,0x4(%esp)
08563a72 +0x1e:  mov    0xc(%ebp),%eax
08563a75 +0x21:  mov    %eax,(%esp)
08563a78 +0x24:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08563a7d +0x29:  cmp    $0x3,%eax
08563a80 +0x2c:  sete   %al
08563a83 +0x2f:  test   %al,%al
08563a85 +0x31:  je     08563a8b <+0x37>
08563a87 +0x33:  addl   $0x1,-0x14(%ebp)
08563a8b +0x37:  mov    -0x10(%ebp),%eax
08563a8e +0x3a:  mov    %eax,0x4(%esp)
08563a92 +0x3e:  mov    0xc(%ebp),%eax
08563a95 +0x41:  mov    %eax,(%esp)
08563a98 +0x44:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
08563a9d +0x49:  mov    %eax,-0xc(%ebp)
08563aa0 +0x4c:  cmpl   $0x0,-0xc(%ebp)
08563aa4 +0x50:  je     08563ad0 <+0x7c>
08563aa6 +0x52:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08563aab +0x57:  mov    %eax,(%esp)
08563aae +0x5a:  call   0822b65a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd04
08563ab3 +0x5f:  mov    %eax,%ebx
08563ab5 +0x61:  mov    -0xc(%ebp),%eax
08563ab8 +0x64:  mov    %eax,(%esp)
08563abb +0x67:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08563ac0 +0x6c:  cmp    %eax,%ebx
08563ac2 +0x6e:  setl   %al
08563ac5 +0x71:  test   %al,%al
08563ac7 +0x73:  je     08563ad0 <+0x7c>
08563ac9 +0x75:  mov    $0xd,%eax
08563ace +0x7a:  jmp    08563b0f <+0xbb>
08563ad0 +0x7c:  addl   $0x1,-0x10(%ebp)
08563ad4 +0x80:  cmpl   $0x7,-0x10(%ebp)
08563ad8 +0x84:  setle  %al
08563adb +0x87:  test   %al,%al
08563add +0x89:  jne    08563a6b <+0x17>
08563adf +0x8b:  mov    0x8(%ebp),%eax
08563ae2 +0x8e:  add    $0x1c,%eax
08563ae5 +0x91:  mov    %eax,(%esp)
08563ae8 +0x94:  call   0856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>  ; fair_pvp::TeamInfoThird::size() const
08563aed +0x99:  mov    %eax,%ebx
08563aef +0x9b:  sub    -0x14(%ebp),%ebx
08563af2 +0x9e:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08563af7 +0xa3:  movzbl %al,%eax
08563afa +0xa6:  cmp    %eax,%ebx
08563afc +0xa8:  setg   %al
08563aff +0xab:  test   %al,%al
08563b01 +0xad:  je     08563b0a <+0xb6>
08563b03 +0xaf:  mov    $0x16,%eax
08563b08 +0xb4:  jmp    08563b0f <+0xbb>
08563b0a +0xb6:  mov    $0x0,%eax
08563b0f +0xbb:  add    $0x24,%esp
08563b12 +0xbe:  pop    %ebx
08563b13 +0xbf:  pop    %ebp
08563b14 +0xc0:  ret
08563b15 +0xc1:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_CheckMatchable @ 0x8563a54

/* fair_pvp::CFairMatch::_CheckMatchable(PvP_Room*) const */

undefined4 __thiscall fair_pvp::CFairMatch::_CheckMatchable(CFairMatch *this,PvP_Room *param_1)

{
  CUserCharacInfo *this_00;
  CDataManager *this_01;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 0;
  do {
    if (7 < local_14) {
      iVar2 = TeamInfoThird::size((TeamInfoThird *)(this + 0x1c));
      uVar3 = GetPlayCountPerOneTeam();
      if ((int)(uVar3 & 0xff) < iVar2 - local_18) {
        uVar4 = 0x16;
      }
      else {
        uVar4 = 0;
      }
      return uVar4;
    }
    iVar2 = PvP_Room::get_team(param_1,local_14);
    if (iVar2 == 3) {
      local_18 = local_18 + 1;
    }
    this_00 = (CUserCharacInfo *)PvP_Room::get_user_seat(param_1,local_14);
    if (this_00 != (CUserCharacInfo *)0x0) {
      this_01 = (CDataManager *)G_CDataManager();
      iVar2 = CDataManager::GetMaxGradePvPChannel(this_01);
      iVar1 = CUserCharacInfo::get_pvp_grade(this_00);
      if (iVar2 < iVar1) {
        return 0xd;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
