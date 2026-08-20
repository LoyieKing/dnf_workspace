# CompleteLoad

`_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser`

`pvp_assault::CAssaultPlace::CompleteLoad(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082eb774` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eb774  _ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser
#           pvp_assault::CAssaultPlace::CompleteLoad(CUser*)
# range [0x082eb774, 0x082eb955]
082eb774 +0x000:  push   %ebp
082eb775 +0x001:  mov    %esp,%ebp
082eb777 +0x003:  push   %esi
082eb778 +0x004:  push   %ebx
082eb779 +0x005:  sub    $0x30,%esp
082eb77c +0x008:  mov    0x8(%ebp),%eax
082eb77f +0x00b:  mov    0x10c(%eax),%eax
082eb785 +0x011:  cmp    $0x2,%eax
082eb788 +0x014:  je     082eb7b6 <+0x42>
082eb78a +0x016:  movl   $0x4,(%esp)
082eb791 +0x01d:  call   08725800 <__cxa_allocate_exception>
082eb796 +0x022:  mov    %eax,%edx
082eb798 +0x024:  movl   $0x13,(%edx)
082eb79e +0x02a:  movl   $0x0,0x8(%esp)
082eb7a6 +0x032:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eb7ae +0x03a:  mov    %eax,(%esp)
082eb7b1 +0x03d:  call   08724c50 <__cxa_throw>
082eb7b6 +0x042:  movb   $0x1,-0xd(%ebp)
082eb7ba +0x046:  movl   $0x0,-0xc(%ebp)
082eb7c1 +0x04d:  jmp    082eb8e2 <+0x16e>
082eb7c6 +0x052:  mov    -0xc(%ebp),%eax
082eb7c9 +0x055:  shl    $0x5,%eax
082eb7cc +0x058:  add    0x8(%ebp),%eax
082eb7cf +0x05b:  mov    %eax,(%esp)
082eb7d2 +0x05e:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082eb7d7 +0x063:  test   %al,%al
082eb7d9 +0x065:  jne    082eb8dd <+0x169>
082eb7df +0x06b:  mov    -0xc(%ebp),%eax
082eb7e2 +0x06e:  shl    $0x5,%eax
082eb7e5 +0x071:  add    0x8(%ebp),%eax
082eb7e8 +0x074:  mov    %eax,(%esp)
082eb7eb +0x077:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082eb7f0 +0x07c:  cmp    0xc(%ebp),%eax
082eb7f3 +0x07f:  sete   %al
082eb7f6 +0x082:  test   %al,%al
082eb7f8 +0x084:  je     082eb8bc <+0x148>
082eb7fe +0x08a:  mov    -0xc(%ebp),%eax
082eb801 +0x08d:  shl    $0x5,%eax
082eb804 +0x090:  add    0x8(%ebp),%eax
082eb807 +0x093:  mov    %eax,(%esp)
082eb80a +0x096:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082eb80f +0x09b:  cmp    $0x1,%eax
082eb812 +0x09e:  setne  %al
082eb815 +0x0a1:  test   %al,%al
082eb817 +0x0a3:  je     082eb845 <+0xd1>
082eb819 +0x0a5:  movl   $0x4,(%esp)
082eb820 +0x0ac:  call   08725800 <__cxa_allocate_exception>
082eb825 +0x0b1:  mov    %eax,%edx
082eb827 +0x0b3:  movl   $0x12,(%edx)
082eb82d +0x0b9:  movl   $0x0,0x8(%esp)
082eb835 +0x0c1:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eb83d +0x0c9:  mov    %eax,(%esp)
082eb840 +0x0cc:  call   08724c50 <__cxa_throw>
082eb845 +0x0d1:  mov    -0xc(%ebp),%eax
082eb848 +0x0d4:  shl    $0x5,%eax
082eb84b +0x0d7:  add    0x8(%ebp),%eax
082eb84e +0x0da:  movl   $0x2,0x4(%esp)
082eb856 +0x0e2:  mov    %eax,(%esp)
082eb859 +0x0e5:  call   082f057c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x300>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x300
082eb85e +0x0ea:  lea    -0x1c(%ebp),%eax
082eb861 +0x0ed:  mov    %eax,(%esp)
082eb864 +0x0f0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082eb869 +0x0f5:  mov    -0xc(%ebp),%eax
082eb86c +0x0f8:  mov    %eax,0x8(%esp)
082eb870 +0x0fc:  lea    -0x1c(%ebp),%eax
082eb873 +0x0ff:  mov    %eax,0x4(%esp)
082eb877 +0x103:  mov    0x8(%ebp),%eax
082eb87a +0x106:  mov    %eax,(%esp)
082eb87d +0x109:  call   082e8810 <_ZN11pvp_assault13CAssaultPlace17_MakeCompleteLoadEP11PacketGuardi>  ; pvp_assault::CAssaultPlace::_MakeCompleteLoad(PacketGuard*, int)
082eb882 +0x10e:  lea    -0x1c(%ebp),%eax
082eb885 +0x111:  mov    %eax,0x4(%esp)
082eb889 +0x115:  mov    0x8(%ebp),%eax
082eb88c +0x118:  mov    %eax,(%esp)
082eb88f +0x11b:  call   082e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>  ; pvp_assault::CAssaultPlace::SendPacket(PacketGuard&)
082eb894 +0x120:  jmp    082eb8b1 <+0x13d>
082eb896 +0x122:  mov    %edx,%ebx
082eb898 +0x124:  mov    %eax,%esi
082eb89a +0x126:  lea    -0x1c(%ebp),%eax
082eb89d +0x129:  mov    %eax,(%esp)
082eb8a0 +0x12c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eb8a5 +0x131:  mov    %esi,%eax
082eb8a7 +0x133:  mov    %ebx,%edx
082eb8a9 +0x135:  mov    %eax,(%esp)
082eb8ac +0x138:  call   08ae3750 <_Unwind_Resume>
082eb8b1 +0x13d:  lea    -0x1c(%ebp),%eax
082eb8b4 +0x140:  mov    %eax,(%esp)
082eb8b7 +0x143:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eb8bc +0x148:  mov    -0xc(%ebp),%eax
082eb8bf +0x14b:  shl    $0x5,%eax
082eb8c2 +0x14e:  add    0x8(%ebp),%eax
082eb8c5 +0x151:  mov    %eax,(%esp)
082eb8c8 +0x154:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082eb8cd +0x159:  cmp    $0x2,%eax
082eb8d0 +0x15c:  setne  %al
082eb8d3 +0x15f:  test   %al,%al
082eb8d5 +0x161:  je     082eb8de <+0x16a>
082eb8d7 +0x163:  movb   $0x0,-0xd(%ebp)
082eb8db +0x167:  jmp    082eb8de <+0x16a>
082eb8dd +0x169:  nop
082eb8de +0x16a:  addl   $0x1,-0xc(%ebp)
082eb8e2 +0x16e:  cmpl   $0x7,-0xc(%ebp)
082eb8e6 +0x172:  setle  %al
082eb8e9 +0x175:  test   %al,%al
082eb8eb +0x177:  jne    082eb7c6 <+0x52>
082eb8f1 +0x17d:  cmpb   $0x0,-0xd(%ebp)
082eb8f5 +0x181:  je     082eb94e <+0x1da>
082eb8f7 +0x183:  mov    0x8(%ebp),%eax
082eb8fa +0x186:  mov    %eax,(%esp)
082eb8fd +0x189:  call   082e91fa <_ZN11pvp_assault13CAssaultPlace12DoConnectP2PEv>  ; pvp_assault::CAssaultPlace::DoConnectP2P()
082eb902 +0x18e:  mov    0x8(%ebp),%eax
082eb905 +0x191:  mov    0x12c(%eax),%eax
082eb90b +0x197:  test   %eax,%eax
082eb90d +0x199:  je     082eb928 <+0x1b4>
082eb90f +0x19b:  mov    0x8(%ebp),%eax
082eb912 +0x19e:  mov    0x12c(%eax),%eax
082eb918 +0x1a4:  movl   $0x3,0x4(%esp)
082eb920 +0x1ac:  mov    %eax,(%esp)
082eb923 +0x1af:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eb928 +0x1b4:  mov    0x8(%ebp),%eax
082eb92b +0x1b7:  mov    0x130(%eax),%eax
082eb931 +0x1bd:  test   %eax,%eax
082eb933 +0x1bf:  je     082eb94e <+0x1da>
082eb935 +0x1c1:  mov    0x8(%ebp),%eax
082eb938 +0x1c4:  mov    0x130(%eax),%eax
082eb93e +0x1ca:  movl   $0x3,0x4(%esp)
082eb946 +0x1d2:  mov    %eax,(%esp)
082eb949 +0x1d5:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eb94e +0x1da:  add    $0x30,%esp
082eb951 +0x1dd:  pop    %ebx
082eb952 +0x1de:  pop    %esi
082eb953 +0x1df:  pop    %ebp
082eb954 +0x1e0:  ret
082eb955 +0x1e1:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::CompleteLoad @ 0x82eb774

/* pvp_assault::CAssaultPlace::CompleteLoad(CUser*) */

void __thiscall pvp_assault::CAssaultPlace::CompleteLoad(CAssaultPlace *this,CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  CUser *pCVar3;
  int iVar4;
  PacketGuard local_20 [15];
  char local_11;
  int local_10;
  
  if (*(int *)(this + 0x10c) != 2) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  local_11 = '\x01';
  local_10 = 0;
  do {
    if (7 < local_10) {
      if (local_11 != '\0') {
        DoConnectP2P(this);
        if (*(int *)(this + 300) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 300),'\x03');
        }
        if (*(int *)(this + 0x130) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x03');
        }
      }
      return;
    }
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      pCVar3 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      if (pCVar3 == param_1) {
        iVar4 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20));
        if (iVar4 != 1) {
          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar2 = 0x12;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
        }
        CAssaulter::SetState((CAssaulter *)(this + local_10 * 0x20),2);
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 082eb87d to 082eb893 has its CatchHandler @ 082eb896 */
        _MakeCompleteLoad(this,local_20,local_10);
        SendPacket(this,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      iVar4 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20));
      if (iVar4 != 2) {
        local_11 = '\0';
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
