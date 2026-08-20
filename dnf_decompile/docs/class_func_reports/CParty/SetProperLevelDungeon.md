# SetProperLevelDungeon

`_ZN6CParty21SetProperLevelDungeonEP5CUser`

`CParty::SetProperLevelDungeon(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bb746` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bb746  _ZN6CParty21SetProperLevelDungeonEP5CUser
#           CParty::SetProperLevelDungeon(CUser*)
# range [0x085bb746, 0x085bb831]
085bb746 +0x00:  push   %ebp
085bb747 +0x01:  mov    %esp,%ebp
085bb749 +0x03:  push   %ebx
085bb74a +0x04:  sub    $0x34,%esp
085bb74d +0x07:  mov    0xc(%ebp),%eax
085bb750 +0x0a:  mov    %eax,(%esp)
085bb753 +0x0d:  call   0868f5da <_ZN5CUser27ClearProperLevelDungeonUserEv>  ; CUser::ClearProperLevelDungeonUser()
085bb758 +0x12:  mov    0x8(%ebp),%eax
085bb75b +0x15:  mov    0xcac(%eax),%eax
085bb761 +0x1b:  mov    %eax,(%esp)
085bb764 +0x1e:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085bb769 +0x23:  mov    %eax,%ebx
085bb76b +0x25:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bb770 +0x2a:  add    $0x4de8,%eax
085bb775 +0x2f:  mov    %ebx,0x4(%esp)
085bb779 +0x33:  mov    %eax,(%esp)
085bb77c +0x36:  call   089139d4 <_ZN24ConditionLevelChkDungeon14isEventDungeonEi>  ; ConditionLevelChkDungeon::isEventDungeon(int)
085bb781 +0x3b:  xor    $0x1,%eax
085bb784 +0x3e:  test   %al,%al
085bb786 +0x40:  jne    085bb824 <+0xde>
085bb78c +0x46:  mov    0x8(%ebp),%eax
085bb78f +0x49:  mov    0xcac(%eax),%eax
085bb795 +0x4f:  mov    %eax,(%esp)
085bb798 +0x52:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085bb79d +0x57:  mov    %eax,-0x10(%ebp)
085bb7a0 +0x5a:  mov    0x8(%ebp),%eax
085bb7a3 +0x5d:  mov    0xcac(%eax),%eax
085bb7a9 +0x63:  mov    %eax,(%esp)
085bb7ac +0x66:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
085bb7b1 +0x6b:  mov    %eax,-0x1c(%ebp)
085bb7b4 +0x6e:  movl   $0x0,-0x18(%ebp)
085bb7bb +0x75:  lea    -0x18(%ebp),%eax
085bb7be +0x78:  mov    %eax,0x4(%esp)
085bb7c2 +0x7c:  lea    -0x1c(%ebp),%eax
085bb7c5 +0x7f:  mov    %eax,(%esp)
085bb7c8 +0x82:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
085bb7cd +0x87:  mov    (%eax),%eax
085bb7cf +0x89:  mov    %eax,-0x1c(%ebp)
085bb7d2 +0x8c:  mov    -0x10(%ebp),%eax
085bb7d5 +0x8f:  add    $0x1,%eax
085bb7d8 +0x92:  mov    %eax,-0x20(%ebp)
085bb7db +0x95:  movl   $0x46,-0x14(%ebp)
085bb7e2 +0x9c:  lea    -0x14(%ebp),%eax
085bb7e5 +0x9f:  mov    %eax,0x4(%esp)
085bb7e9 +0xa3:  lea    -0x20(%ebp),%eax
085bb7ec +0xa6:  mov    %eax,(%esp)
085bb7ef +0xa9:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
085bb7f4 +0xae:  mov    (%eax),%eax
085bb7f6 +0xb0:  mov    %eax,-0x20(%ebp)
085bb7f9 +0xb3:  mov    0xc(%ebp),%eax
085bb7fc +0xb6:  mov    %eax,(%esp)
085bb7ff +0xb9:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085bb804 +0xbe:  mov    %eax,-0xc(%ebp)
085bb807 +0xc1:  mov    -0x1c(%ebp),%eax
085bb80a +0xc4:  cmp    %eax,-0xc(%ebp)
085bb80d +0xc7:  jl     085bb827 <+0xe1>
085bb80f +0xc9:  mov    -0x20(%ebp),%eax
085bb812 +0xcc:  cmp    %eax,-0xc(%ebp)
085bb815 +0xcf:  jg     085bb82a <+0xe4>
085bb817 +0xd1:  mov    0xc(%ebp),%eax
085bb81a +0xd4:  mov    %eax,(%esp)
085bb81d +0xd7:  call   0868f5ca <_ZN5CUser25SetProperLevelDungeonUserEv>  ; CUser::SetProperLevelDungeonUser()
085bb822 +0xdc:  jmp    085bb82b <+0xe5>
085bb824 +0xde:  nop
085bb825 +0xdf:  jmp    085bb82b <+0xe5>
085bb827 +0xe1:  nop
085bb828 +0xe2:  jmp    085bb82b <+0xe5>
085bb82a +0xe4:  nop
085bb82b +0xe5:  add    $0x34,%esp
085bb82e +0xe8:  pop    %ebx
085bb82f +0xe9:  pop    %ebp
085bb830 +0xea:  ret
085bb831 +0xeb:  nop
```

## 反编译 C

```c
// CParty::SetProperLevelDungeon @ 0x85bb746

/* CParty::SetProperLevelDungeon(CUser*) */

void __thiscall CParty::SetProperLevelDungeon(CParty *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_24;
  int local_20 [4];
  int local_10;
  
  CUser::ClearProperLevelDungeonUser(param_1);
  iVar2 = CDungeon::get_index(*(CDungeon **)(this + 0xcac));
  iVar3 = G_CDataManager();
  cVar1 = ConditionLevelChkDungeon::isEventDungeon
                    ((ConditionLevelChkDungeon *)(iVar3 + 0x4de8),iVar2);
  if (cVar1 == '\x01') {
    local_20[3] = CDungeon::get_standard_level(*(CDungeon **)(this + 0xcac));
    local_20[0] = CDungeon::get_min_level(*(CDungeon **)(this + 0xcac));
    local_20[1] = 0;
    piVar4 = std::max<int>(local_20,local_20 + 1);
    local_20[0] = *piVar4;
    local_24 = local_20[3] + 1;
    local_20[2] = 0x46;
    piVar4 = std::min<int>(&local_24,local_20 + 2);
    local_24 = *piVar4;
    local_10 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if ((local_20[0] <= local_10) && (local_10 <= local_24)) {
      CUser::SetProperLevelDungeonUser(param_1);
    }
  }
  return;
}
```
