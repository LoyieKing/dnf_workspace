# ChangeHp

`_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri`

`pvp_assault::CAssaultPlace::ChangeHp(CUser*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ed752` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ed752  _ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri
#           pvp_assault::CAssaultPlace::ChangeHp(CUser*, int)
# range [0x082ed752, 0x082ed965]
082ed752 +0x000:  push   %ebp
082ed753 +0x001:  mov    %esp,%ebp
082ed755 +0x003:  push   %esi
082ed756 +0x004:  push   %ebx
082ed757 +0x005:  sub    $0x30,%esp
082ed75a +0x008:  movl   $0x1,0x8(%esp)
082ed762 +0x010:  mov    0xc(%ebp),%eax
082ed765 +0x013:  mov    %eax,0x4(%esp)
082ed769 +0x017:  mov    0x8(%ebp),%eax
082ed76c +0x01a:  mov    %eax,(%esp)
082ed76f +0x01d:  call   082e849a <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb>  ; pvp_assault::CAssaultPlace::_GetUserIndex(CUser*, bool)
082ed774 +0x022:  mov    %eax,-0x18(%ebp)
082ed777 +0x025:  mov    -0x18(%ebp),%eax
082ed77a +0x028:  shl    $0x5,%eax
082ed77d +0x02b:  add    0x8(%ebp),%eax
082ed780 +0x02e:  mov    0x10(%ebp),%edx
082ed783 +0x031:  mov    %edx,0x4(%esp)
082ed787 +0x035:  mov    %eax,(%esp)
082ed78a +0x038:  call   082e6694 <_ZN11pvp_assault10CAssaulter8ChangeHpEi>  ; pvp_assault::CAssaulter::ChangeHp(int)
082ed78f +0x03d:  test   %al,%al
082ed791 +0x03f:  je     082ed868 <+0x116>
082ed797 +0x045:  lea    -0x24(%ebp),%eax
082ed79a +0x048:  mov    %eax,(%esp)
082ed79d +0x04b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ed7a2 +0x050:  mov    0x10(%ebp),%eax
082ed7a5 +0x053:  mov    %eax,0xc(%esp)
082ed7a9 +0x057:  mov    -0x18(%ebp),%eax
082ed7ac +0x05a:  mov    %eax,0x8(%esp)
082ed7b0 +0x05e:  lea    -0x24(%ebp),%eax
082ed7b3 +0x061:  mov    %eax,0x4(%esp)
082ed7b7 +0x065:  mov    0x8(%ebp),%eax
082ed7ba +0x068:  mov    %eax,(%esp)
082ed7bd +0x06b:  call   082e90a0 <_ZN11pvp_assault13CAssaultPlace13_MakeChangeHpEP11PacketGuardii>  ; pvp_assault::CAssaultPlace::_MakeChangeHp(PacketGuard*, int, int)
082ed7c2 +0x070:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ed7c7 +0x075:  mov    %eax,(%esp)
082ed7ca +0x078:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ed7cf +0x07d:  test   %al,%al
082ed7d1 +0x07f:  je     082ed7e9 <+0x97>
082ed7d3 +0x081:  mov    0xc(%ebp),%eax
082ed7d6 +0x084:  mov    %eax,(%esp)
082ed7d9 +0x087:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ed7de +0x08c:  cmp    $0x7,%al
082ed7e0 +0x08e:  jne    082ed7e9 <+0x97>
082ed7e2 +0x090:  mov    $0x1,%eax
082ed7e7 +0x095:  jmp    082ed7ee <+0x9c>
082ed7e9 +0x097:  mov    $0x0,%eax
082ed7ee +0x09c:  test   %al,%al
082ed7f0 +0x09e:  je     082ed82e <+0xdc>
082ed7f2 +0x0a0:  mov    0xc(%ebp),%eax
082ed7f5 +0x0a3:  mov    %eax,(%esp)
082ed7f8 +0x0a6:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082ed7fd +0x0ab:  mov    %eax,-0x14(%ebp)
082ed800 +0x0ae:  cmpl   $0x0,-0x14(%ebp)
082ed804 +0x0b2:  je     082ed81a <+0xc8>
082ed806 +0x0b4:  lea    -0x24(%ebp),%eax
082ed809 +0x0b7:  mov    %eax,0x4(%esp)
082ed80d +0x0bb:  mov    -0x14(%ebp),%eax
082ed810 +0x0be:  mov    %eax,(%esp)
082ed813 +0x0c1:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
082ed818 +0x0c6:  jmp    082ed85d <+0x10b>
082ed81a +0x0c8:  lea    -0x24(%ebp),%eax
082ed81d +0x0cb:  mov    %eax,0x4(%esp)
082ed821 +0x0cf:  mov    0xc(%ebp),%eax
082ed824 +0x0d2:  mov    %eax,(%esp)
082ed827 +0x0d5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082ed82c +0x0da:  jmp    082ed85d <+0x10b>
082ed82e +0x0dc:  lea    -0x24(%ebp),%eax
082ed831 +0x0df:  mov    %eax,0x4(%esp)
082ed835 +0x0e3:  mov    0x8(%ebp),%eax
082ed838 +0x0e6:  mov    %eax,(%esp)
082ed83b +0x0e9:  call   082e6d3a <_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuard>  ; pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&)
082ed840 +0x0ee:  jmp    082ed85d <+0x10b>
082ed842 +0x0f0:  mov    %edx,%ebx
082ed844 +0x0f2:  mov    %eax,%esi
082ed846 +0x0f4:  lea    -0x24(%ebp),%eax
082ed849 +0x0f7:  mov    %eax,(%esp)
082ed84c +0x0fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ed851 +0x0ff:  mov    %esi,%eax
082ed853 +0x101:  mov    %ebx,%edx
082ed855 +0x103:  mov    %eax,(%esp)
082ed858 +0x106:  call   08ae3750 <_Unwind_Resume>
082ed85d +0x10b:  lea    -0x24(%ebp),%eax
082ed860 +0x10e:  mov    %eax,(%esp)
082ed863 +0x111:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ed868 +0x116:  mov    0x8(%ebp),%eax
082ed86b +0x119:  mov    0x10c(%eax),%eax
082ed871 +0x11f:  cmp    $0x5,%eax
082ed874 +0x122:  je     082ed888 <+0x136>
082ed876 +0x124:  mov    0x8(%ebp),%eax
082ed879 +0x127:  mov    0x10c(%eax),%eax
082ed87f +0x12d:  cmp    $0x6,%eax
082ed882 +0x130:  jne    082ed95e <+0x20c>
082ed888 +0x136:  mov    -0x18(%ebp),%eax
082ed88b +0x139:  shl    $0x5,%eax
082ed88e +0x13c:  add    0x8(%ebp),%eax
082ed891 +0x13f:  movl   $0x8,0x4(%esp)
082ed899 +0x147:  mov    %eax,(%esp)
082ed89c +0x14a:  call   082f057c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x300>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x300
082ed8a1 +0x14f:  movb   $0x1,-0xd(%ebp)
082ed8a5 +0x153:  movl   $0x0,-0xc(%ebp)
082ed8ac +0x15a:  jmp    082ed8e9 <+0x197>
082ed8ae +0x15c:  mov    -0xc(%ebp),%eax
082ed8b1 +0x15f:  shl    $0x5,%eax
082ed8b4 +0x162:  add    0x8(%ebp),%eax
082ed8b7 +0x165:  mov    %eax,(%esp)
082ed8ba +0x168:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082ed8bf +0x16d:  test   %al,%al
082ed8c1 +0x16f:  jne    082ed8e4 <+0x192>
082ed8c3 +0x171:  mov    -0xc(%ebp),%eax
082ed8c6 +0x174:  shl    $0x5,%eax
082ed8c9 +0x177:  add    0x8(%ebp),%eax
082ed8cc +0x17a:  mov    %eax,(%esp)
082ed8cf +0x17d:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082ed8d4 +0x182:  cmp    $0x8,%eax
082ed8d7 +0x185:  setne  %al
082ed8da +0x188:  test   %al,%al
082ed8dc +0x18a:  je     082ed8e5 <+0x193>
082ed8de +0x18c:  movb   $0x0,-0xd(%ebp)
082ed8e2 +0x190:  jmp    082ed8e5 <+0x193>
082ed8e4 +0x192:  nop
082ed8e5 +0x193:  addl   $0x1,-0xc(%ebp)
082ed8e9 +0x197:  cmpl   $0x7,-0xc(%ebp)
082ed8ed +0x19b:  setle  %al
082ed8f0 +0x19e:  test   %al,%al
082ed8f2 +0x1a0:  jne    082ed8ae <+0x15c>
082ed8f4 +0x1a2:  cmpb   $0x0,-0xd(%ebp)
082ed8f8 +0x1a6:  je     082ed95e <+0x20c>
082ed8fa +0x1a8:  mov    0x8(%ebp),%eax
082ed8fd +0x1ab:  mov    0x12c(%eax),%eax
082ed903 +0x1b1:  test   %eax,%eax
082ed905 +0x1b3:  je     082ed920 <+0x1ce>
082ed907 +0x1b5:  mov    0x8(%ebp),%eax
082ed90a +0x1b8:  mov    0x12c(%eax),%eax
082ed910 +0x1be:  movl   $0x7,0x4(%esp)
082ed918 +0x1c6:  mov    %eax,(%esp)
082ed91b +0x1c9:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ed920 +0x1ce:  mov    0x8(%ebp),%eax
082ed923 +0x1d1:  mov    0x130(%eax),%eax
082ed929 +0x1d7:  test   %eax,%eax
082ed92b +0x1d9:  je     082ed946 <+0x1f4>
082ed92d +0x1db:  mov    0x8(%ebp),%eax
082ed930 +0x1de:  mov    0x130(%eax),%eax
082ed936 +0x1e4:  movl   $0x7,0x4(%esp)
082ed93e +0x1ec:  mov    %eax,(%esp)
082ed941 +0x1ef:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ed946 +0x1f4:  mov    0x8(%ebp),%eax
082ed949 +0x1f7:  movl   $0x7,0x10c(%eax)
082ed953 +0x201:  mov    0x8(%ebp),%eax
082ed956 +0x204:  mov    %eax,(%esp)
082ed959 +0x207:  call   082e9ad6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv>  ; pvp_assault::CAssaultPlace::CloseAssault()
082ed95e +0x20c:  add    $0x30,%esp
082ed961 +0x20f:  pop    %ebx
082ed962 +0x210:  pop    %esi
082ed963 +0x211:  pop    %ebp
082ed964 +0x212:  ret
082ed965 +0x213:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::ChangeHp @ 0x82ed752

/* pvp_assault::CAssaultPlace::ChangeHp(CUser*, int) */

void __thiscall pvp_assault::CAssaultPlace::ChangeHp(CAssaultPlace *this,CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PacketGuard local_28 [12];
  int local_1c;
  CParty *local_18;
  char local_11;
  int local_10;
  
  local_1c = _GetUserIndex(this,param_1,true);
  cVar2 = CAssaulter::ChangeHp((CAssaulter *)(this + local_1c * 0x20),param_2);
  if (cVar2 == '\0') goto LAB_082ed868;
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 082ed7bd to 082ed83f has its CatchHandler @ 082ed842 */
  _MakeChangeHp(this,local_28,local_1c,param_2);
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 == '\0') {
LAB_082ed7e9:
    bVar1 = false;
  }
  else {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 != '\a') goto LAB_082ed7e9;
    bVar1 = true;
  }
  if (bVar1) {
    local_18 = (CParty *)CUser::GetParty(param_1);
    if (local_18 == (CParty *)0x0) {
      CUser::Send(param_1,local_28);
    }
    else {
      CParty::send_to_party(local_18,local_28);
    }
  }
  else {
    _SendPacketToArea(this,local_28);
  }
  PacketGuard::~PacketGuard(local_28);
LAB_082ed868:
  if ((*(int *)(this + 0x10c) == 5) || (*(int *)(this + 0x10c) == 6)) {
    CAssaulter::SetState((CAssaulter *)(this + local_1c * 0x20),8);
    local_11 = '\x01';
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
      if (cVar2 == '\0') {
        iVar3 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20));
        if (iVar3 != 8) {
          local_11 = '\0';
        }
      }
    }
    if (local_11 != '\0') {
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\a');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\a');
      }
      *(undefined4 *)(this + 0x10c) = 7;
      CloseAssault(this);
    }
  }
  return;
}
```
