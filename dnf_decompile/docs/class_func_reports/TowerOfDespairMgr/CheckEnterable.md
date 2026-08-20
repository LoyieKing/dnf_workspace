# CheckEnterable

`_ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon`

`TowerOfDespairMgr::CheckEnterable(CUser*, CDungeon const*)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x086440ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086440ee  _ZN17TowerOfDespairMgr14CheckEnterableEP5CUserPK8CDungeon
#           TowerOfDespairMgr::CheckEnterable(CUser*, CDungeon const*)
# range [0x086440ee, 0x08644271]
086440ee +0x000:  push   %ebp
086440ef +0x001:  mov    %esp,%ebp
086440f1 +0x003:  push   %esi
086440f2 +0x004:  push   %ebx
086440f3 +0x005:  sub    $0x60,%esp
086440f6 +0x008:  cmpl   $0x0,0xc(%ebp)
086440fa +0x00c:  jne    08644106 <+0x18>
086440fc +0x00e:  mov    $0x15,%eax
08644101 +0x013:  jmp    08644267 <+0x179>
08644106 +0x018:  mov    0xc(%ebp),%eax
08644109 +0x01b:  mov    %eax,(%esp)
0864410c +0x01e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08644111 +0x023:  mov    0x8(%ebp),%edx
08644114 +0x026:  movzwl 0x34e(%edx),%edx
0864411b +0x02d:  movzwl %dx,%edx
0864411e +0x030:  cmp    %edx,%eax
08644120 +0x032:  setl   %al
08644123 +0x035:  test   %al,%al
08644125 +0x037:  je     08644131 <+0x43>
08644127 +0x039:  mov    $0xe,%eax
0864412c +0x03e:  jmp    08644267 <+0x179>
08644131 +0x043:  movl   $0xd,0x4(%esp)
08644139 +0x04b:  mov    0xc(%ebp),%eax
0864413c +0x04e:  mov    %eax,(%esp)
0864413f +0x051:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08644144 +0x056:  mov    %eax,-0x14(%ebp)
08644147 +0x059:  mov    -0x14(%ebp),%eax
0864414a +0x05c:  mov    %eax,(%esp)
0864414d +0x05f:  call   08643872 <_ZNK13TOD_UserState13getEnterCountEv>  ; TOD_UserState::getEnterCount() const
08644152 +0x064:  test   %eax,%eax
08644154 +0x066:  setg   %al
08644157 +0x069:  test   %al,%al
08644159 +0x06b:  je     0864422b <+0x13d>
0864415f +0x071:  mov    0xc(%ebp),%eax
08644162 +0x074:  mov    %eax,(%esp)
08644165 +0x077:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0864416a +0x07c:  xor    $0x1,%eax
0864416d +0x07f:  test   %al,%al
0864416f +0x081:  je     086441b8 <+0xca>
08644171 +0x083:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08644178 +0x08a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0864417d +0x08f:  mov    %eax,%esi
0864417f +0x091:  mov    -0x14(%ebp),%eax
08644182 +0x094:  mov    %eax,(%esp)
08644185 +0x097:  call   0864387e <_ZNK13TOD_UserState16getLastClearTimeEv>  ; TOD_UserState::getLastClearTime() const
0864418a +0x09c:  mov    %eax,%ebx
0864418c +0x09e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08644191 +0x0a3:  mov    0x37c(%eax),%eax
08644197 +0x0a9:  mov    %esi,0x8(%esp)
0864419b +0x0ad:  mov    %ebx,0x4(%esp)
0864419f +0x0b1:  mov    %eax,(%esp)
086441a2 +0x0b4:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
086441a7 +0x0b9:  xor    $0x1,%eax
086441aa +0x0bc:  test   %al,%al
086441ac +0x0be:  je     086441b8 <+0xca>
086441ae +0x0c0:  mov    $0xf5,%eax
086441b3 +0x0c5:  jmp    08644267 <+0x179>
086441b8 +0x0ca:  mov    0x10(%ebp),%eax
086441bb +0x0cd:  mov    0x7f4(%eax),%ebx
086441c1 +0x0d3:  mov    0xc(%ebp),%eax
086441c4 +0x0d6:  mov    %eax,(%esp)
086441c7 +0x0d9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086441cc +0x0de:  mov    %ebx,0x4(%esp)
086441d0 +0x0e2:  mov    %eax,(%esp)
086441d3 +0x0e5:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
086441d8 +0x0ea:  mov    %eax,-0xc(%ebp)
086441db +0x0ed:  cmpl   $0xffffffff,-0xc(%ebp)
086441df +0x0f1:  jne    086441e8 <+0xfa>
086441e1 +0x0f3:  mov    $0xf5,%eax
086441e6 +0x0f8:  jmp    08644267 <+0x179>
086441e8 +0x0fa:  mov    0xc(%ebp),%eax
086441eb +0x0fd:  mov    %eax,(%esp)
086441ee +0x100:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086441f3 +0x105:  lea    -0x51(%ebp),%edx
086441f6 +0x108:  mov    -0xc(%ebp),%ecx
086441f9 +0x10b:  mov    %ecx,0xc(%esp)
086441fd +0x10f:  movl   $0x1,0x8(%esp)
08644205 +0x117:  mov    %eax,0x4(%esp)
08644209 +0x11b:  mov    %edx,(%esp)
0864420c +0x11e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08644211 +0x123:  sub    $0x4,%esp
08644214 +0x126:  mov    -0x4a(%ebp),%edx
08644217 +0x129:  mov    0x10(%ebp),%eax
0864421a +0x12c:  mov    0x7f8(%eax),%eax
08644220 +0x132:  cmp    %eax,%edx
08644222 +0x134:  jge    0864422b <+0x13d>
08644224 +0x136:  mov    $0x11,%eax
08644229 +0x13b:  jmp    08644267 <+0x179>
0864422b +0x13d:  mov    0xc(%ebp),%eax
0864422e +0x140:  mov    %eax,(%esp)
08644231 +0x143:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08644236 +0x148:  mov    %eax,-0x10(%ebp)
08644239 +0x14b:  cmpl   $0x0,-0x10(%ebp)
0864423d +0x14f:  je     0864425b <+0x16d>
0864423f +0x151:  mov    -0x10(%ebp),%eax
08644242 +0x154:  mov    %eax,(%esp)
08644245 +0x157:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0864424a +0x15c:  cmp    $0x1,%eax
0864424d +0x15f:  setg   %al
08644250 +0x162:  test   %al,%al
08644252 +0x164:  je     08644262 <+0x174>
08644254 +0x166:  mov    $0xab,%eax
08644259 +0x16b:  jmp    08644267 <+0x179>
0864425b +0x16d:  mov    $0x15,%eax
08644260 +0x172:  jmp    08644267 <+0x179>
08644262 +0x174:  mov    $0x0,%eax
08644267 +0x179:  lea    -0x8(%ebp),%esp
0864426a +0x17c:  add    $0x0,%esp
0864426d +0x17f:  pop    %ebx
0864426e +0x180:  pop    %esi
0864426f +0x181:  pop    %ebp
08644270 +0x182:  ret
08644271 +0x183:  nop
```

## 反编译 C

```c
// TowerOfDespairMgr::CheckEnterable @ 0x86440ee

/* TowerOfDespairMgr::CheckEnterable(CUser*, CDungeon const*) */

undefined4 __thiscall
TowerOfDespairMgr::CheckEnterable(TowerOfDespairMgr *this,CUser *param_1,CDungeon *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  CInventory *this_00;
  undefined1 local_55 [7];
  int local_4e;
  TOD_UserState *local_18;
  CParty *local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0x15;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar3 < (int)(uint)*(ushort *)(this + 0x34e)) {
      uVar2 = 0xe;
    }
    else {
      local_18 = (TOD_UserState *)CUser::GetCharacExpandData(param_1,0xd);
      iVar3 = TOD_UserState::getEnterCount(local_18);
      if (0 < iVar3) {
        cVar1 = CUser::isGMUser(param_1);
        if (cVar1 != '\x01') {
          lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          lVar5 = TOD_UserState::getLastClearTime(local_18);
          iVar3 = G_CEnvironment();
          cVar1 = CheckDailyScheduleTime(*(int *)(iVar3 + 0x37c),lVar5,lVar4);
          if (cVar1 != '\x01') {
            return 0xf5;
          }
        }
        iVar3 = *(int *)(param_2 + 0x7f4);
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        local_10 = CInventory::check_item_exist(this_00,iVar3);
        if (local_10 == -1) {
          return 0xf5;
        }
        iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_55,iVar3);
        if (local_4e < *(int *)(param_2 + 0x7f8)) {
          return 0x11;
        }
      }
      local_14 = (CParty *)CUser::GetParty(param_1);
      if (local_14 == (CParty *)0x0) {
        uVar2 = 0x15;
      }
      else {
        iVar3 = CParty::get_member_count(local_14);
        if (iVar3 < 2) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xab;
        }
      }
    }
  }
  return uVar2;
}
```
