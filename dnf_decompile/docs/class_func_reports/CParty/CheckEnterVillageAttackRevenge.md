# CheckEnterVillageAttackRevenge

`_ZN6CParty30CheckEnterVillageAttackRevengeEPK8CDungeon`

`CParty::CheckEnterVillageAttackRevenge(CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba804` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba804  _ZN6CParty30CheckEnterVillageAttackRevengeEPK8CDungeon
#           CParty::CheckEnterVillageAttackRevenge(CDungeon const*)
# range [0x085ba804, 0x085ba905]
085ba804 +0x000:  push   %ebp
085ba805 +0x001:  mov    %esp,%ebp
085ba807 +0x003:  sub    $0x28,%esp
085ba80a +0x006:  mov    0xc(%ebp),%eax
085ba80d +0x009:  movzbl 0x87a(%eax),%eax
085ba814 +0x010:  test   %al,%al
085ba816 +0x012:  je     085ba8ff <+0xfb>
085ba81c +0x018:  mov    0x8(%ebp),%eax
085ba81f +0x01b:  mov    %eax,(%esp)
085ba822 +0x01e:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085ba827 +0x023:  mov    %eax,-0x14(%ebp)
085ba82a +0x026:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
085ba82f +0x02b:  mov    %eax,(%esp)
085ba832 +0x02e:  call   08234ff6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6a0
085ba837 +0x033:  xor    $0x1,%eax
085ba83a +0x036:  test   %al,%al
085ba83c +0x038:  je     085ba848 <+0x44>
085ba83e +0x03a:  mov    $0x15,%eax
085ba843 +0x03f:  jmp    085ba904 <+0x100>
085ba848 +0x044:  mov    0xc(%ebp),%eax
085ba84b +0x047:  movzbl 0x879(%eax),%eax
085ba852 +0x04e:  movsbl %al,%eax
085ba855 +0x051:  cmp    -0x14(%ebp),%eax
085ba858 +0x054:  jl     085ba86c <+0x68>
085ba85a +0x056:  mov    0xc(%ebp),%eax
085ba85d +0x059:  movzbl 0x878(%eax),%eax
085ba864 +0x060:  movsbl %al,%eax
085ba867 +0x063:  cmp    -0x14(%ebp),%eax
085ba86a +0x066:  jle    085ba876 <+0x72>
085ba86c +0x068:  mov    $0xab,%eax
085ba871 +0x06d:  jmp    085ba904 <+0x100>
085ba876 +0x072:  movl   $0x0,-0x10(%ebp)
085ba87d +0x079:  jmp    085ba8f4 <+0xf0>
085ba87f +0x07b:  mov    -0x10(%ebp),%eax
085ba882 +0x07e:  mov    %eax,0x4(%esp)
085ba886 +0x082:  mov    0x8(%ebp),%eax
085ba889 +0x085:  mov    %eax,(%esp)
085ba88c +0x088:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085ba891 +0x08d:  test   %al,%al
085ba893 +0x08f:  je     085ba8f0 <+0xec>
085ba895 +0x091:  mov    -0x10(%ebp),%eax
085ba898 +0x094:  mov    %eax,0x4(%esp)
085ba89c +0x098:  mov    0x8(%ebp),%eax
085ba89f +0x09b:  mov    %eax,(%esp)
085ba8a2 +0x09e:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085ba8a7 +0x0a3:  mov    %eax,(%esp)
085ba8aa +0x0a6:  call   0822f78a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e34
085ba8af +0x0ab:  mov    %al,-0x9(%ebp)
085ba8b2 +0x0ae:  cmpb   $0x0,-0x9(%ebp)
085ba8b6 +0x0b2:  je     085ba8c7 <+0xc3>
085ba8b8 +0x0b4:  mov    0xc(%ebp),%eax
085ba8bb +0x0b7:  movzbl 0x87b(%eax),%eax
085ba8c2 +0x0be:  cmp    -0x9(%ebp),%al
085ba8c5 +0x0c1:  jae    085ba8f0 <+0xec>
085ba8c7 +0x0c3:  mov    -0x10(%ebp),%eax
085ba8ca +0x0c6:  mov    %eax,0x4(%esp)
085ba8ce +0x0ca:  mov    0x8(%ebp),%eax
085ba8d1 +0x0cd:  mov    %eax,(%esp)
085ba8d4 +0x0d0:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085ba8d9 +0x0d5:  movl   $0x0,0x4(%esp)
085ba8e1 +0x0dd:  mov    %eax,(%esp)
085ba8e4 +0x0e0:  call   0822f762 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e0c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e0c
085ba8e9 +0x0e5:  mov    $0xad,%eax
085ba8ee +0x0ea:  jmp    085ba904 <+0x100>
085ba8f0 +0x0ec:  addl   $0x1,-0x10(%ebp)
085ba8f4 +0x0f0:  cmpl   $0x3,-0x10(%ebp)
085ba8f8 +0x0f4:  setle  %al
085ba8fb +0x0f7:  test   %al,%al
085ba8fd +0x0f9:  jne    085ba87f <+0x7b>
085ba8ff +0x0fb:  mov    $0x0,%eax
085ba904 +0x100:  leave
085ba905 +0x101:  ret
```

## 反编译 C

```c
// CParty::CheckEnterVillageAttackRevenge @ 0x85ba804

/* CParty::CheckEnterVillageAttackRevenge(CDungeon const*) */

undefined4 __thiscall CParty::CheckEnterVillageAttackRevenge(CParty *this,CDungeon *param_1)

{
  char cVar1;
  CDungeon CVar2;
  int iVar3;
  CUserCharacInfo *pCVar4;
  int local_14;
  
  if (param_1[0x87a] != (CDungeon)0x0) {
    iVar3 = get_member_count(this);
    cVar1 = village_attacked::CRevengeDungeon::IsOpenRevengeDungeon(GlobalData::s_revengeDungeonMgr)
    ;
    if (cVar1 != '\x01') {
      return 0x15;
    }
    if (((char)param_1[0x879] < iVar3) || (iVar3 < (char)param_1[0x878])) {
      return 0xab;
    }
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      cVar1 = checkValidUser(this,local_14);
      if (cVar1 != '\0') {
        pCVar4 = (CUserCharacInfo *)get_user(this,local_14);
        CVar2 = (CDungeon)CUserCharacInfo::GetCurRevengeDungeonCount(pCVar4);
        if ((CVar2 == (CDungeon)0x0) || ((byte)param_1[0x87b] < (byte)CVar2)) {
          pCVar4 = (CUserCharacInfo *)get_user(this,local_14);
          CUserCharacInfo::SetCurRevengeDungeonCount(pCVar4,'\0');
          return 0xad;
        }
      }
    }
  }
  return 0;
}
```
