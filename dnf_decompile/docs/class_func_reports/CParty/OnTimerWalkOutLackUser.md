# OnTimerWalkOutLackUser

`_ZN6CParty22OnTimerWalkOutLackUserEv`

`CParty::OnTimerWalkOutLackUser()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b3e12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b3e12  _ZN6CParty22OnTimerWalkOutLackUserEv
#           CParty::OnTimerWalkOutLackUser()
# range [0x085b3e12, 0x085b3f33]
085b3e12 +0x000:  push   %ebp
085b3e13 +0x001:  mov    %esp,%ebp
085b3e15 +0x003:  sub    $0x38,%esp
085b3e18 +0x006:  mov    0x8(%ebp),%eax
085b3e1b +0x009:  add    $0xd8,%eax
085b3e20 +0x00e:  mov    %eax,(%esp)
085b3e23 +0x011:  call   085c03a8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1906>  ; global constructors keyed to CParty::cMember::cMember()+0x1906
085b3e28 +0x016:  mov    %eax,-0x10(%ebp)
085b3e2b +0x019:  jmp    085b3f1a <+0x108>
085b3e30 +0x01e:  cmpl   $0x0,-0x10(%ebp)
085b3e34 +0x022:  js     085b3f2c <+0x11a>
085b3e3a +0x028:  mov    0x8(%ebp),%eax
085b3e3d +0x02b:  lea    0xd8(%eax),%edx
085b3e43 +0x031:  mov    -0x10(%ebp),%eax
085b3e46 +0x034:  mov    %eax,0x4(%esp)
085b3e4a +0x038:  mov    %edx,(%esp)
085b3e4d +0x03b:  call   085c047c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x19da>  ; global constructors keyed to CParty::cMember::cMember()+0x19da
085b3e52 +0x040:  mov    0x8(%ebp),%eax
085b3e55 +0x043:  lea    0xd8(%eax),%edx
085b3e5b +0x049:  mov    -0x10(%ebp),%eax
085b3e5e +0x04c:  mov    %eax,0x4(%esp)
085b3e62 +0x050:  mov    %edx,(%esp)
085b3e65 +0x053:  call   085c04b2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1a10>  ; global constructors keyed to CParty::cMember::cMember()+0x1a10
085b3e6a +0x058:  mov    -0x10(%ebp),%edx
085b3e6d +0x05b:  mov    0x8(%ebp),%ecx
085b3e70 +0x05e:  mov    %edx,%eax
085b3e72 +0x060:  add    %eax,%eax
085b3e74 +0x062:  add    %edx,%eax
085b3e76 +0x064:  shl    $0x3,%eax
085b3e79 +0x067:  lea    (%ecx,%eax,1),%eax
085b3e7c +0x06a:  add    $0x78,%eax
085b3e7f +0x06d:  mov    (%eax),%eax
085b3e81 +0x06f:  mov    %eax,-0xc(%ebp)
085b3e84 +0x072:  cmpl   $0x0,-0xc(%ebp)
085b3e88 +0x076:  jne    085b3ebd <+0xab>
085b3e8a +0x078:  movl   $"pVictim is null",0x10(%esp)
085b3e92 +0x080:  movl   $0x35c6,0xc(%esp)
085b3e9a +0x088:  movl   $&_ZZN6CParty22OnTimerWalkOutLackUserEvE19__PRETTY_FUNCTION__,0x8(%esp)
085b3ea2 +0x090:  movl   $"party.cpp",0x4(%esp)
085b3eaa +0x098:  movl   $0x1,(%esp)
085b3eb1 +0x09f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085b3eb6 +0x0a4:  mov    $0x0,%eax
085b3ebb +0x0a9:  jmp    085b3f32 <+0x120>
085b3ebd +0x0ab:  movl   $0x1,0x8(%esp)
085b3ec5 +0x0b3:  mov    -0x10(%ebp),%eax
085b3ec8 +0x0b6:  mov    %eax,0x4(%esp)
085b3ecc +0x0ba:  mov    0x8(%ebp),%eax
085b3ecf +0x0bd:  mov    %eax,(%esp)
085b3ed2 +0x0c0:  call   0859cb00 <_ZN6CParty11SendWalkoutEi17ENUM_WALKOUT_TYPE>  ; CParty::SendWalkout(int, ENUM_WALKOUT_TYPE)
085b3ed7 +0x0c5:  mov    0x8(%ebp),%eax
085b3eda +0x0c8:  mov    0x74(%eax),%eax
085b3edd +0x0cb:  mov    -0x10(%ebp),%edx
085b3ee0 +0x0ce:  mov    %edx,0x8(%esp)
085b3ee4 +0x0d2:  mov    %eax,0x4(%esp)
085b3ee8 +0x0d6:  mov    0x8(%ebp),%eax
085b3eeb +0x0d9:  mov    %eax,(%esp)
085b3eee +0x0dc:  call   0859ca4a <_ZN6CParty14walkout_memberEP5CUseri>  ; CParty::walkout_member(CUser*, int)
085b3ef3 +0x0e1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085b3ef8 +0x0e6:  mov    -0xc(%ebp),%edx
085b3efb +0x0e9:  mov    %edx,0x4(%esp)
085b3eff +0x0ed:  mov    %eax,(%esp)
085b3f02 +0x0f0:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
085b3f07 +0x0f5:  mov    0x8(%ebp),%eax
085b3f0a +0x0f8:  add    $0xd8,%eax
085b3f0f +0x0fd:  mov    %eax,(%esp)
085b3f12 +0x100:  call   085c03a8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1906>  ; global constructors keyed to CParty::cMember::cMember()+0x1906
085b3f17 +0x105:  mov    %eax,-0x10(%ebp)
085b3f1a +0x108:  mov    -0x10(%ebp),%eax
085b3f1d +0x10b:  not    %eax
085b3f1f +0x10d:  shr    $0x1f,%eax
085b3f22 +0x110:  test   %al,%al
085b3f24 +0x112:  jne    085b3e30 <+0x1e>
085b3f2a +0x118:  jmp    085b3f2d <+0x11b>
085b3f2c +0x11a:  nop
085b3f2d +0x11b:  mov    $0x1,%eax
085b3f32 +0x120:  leave
085b3f33 +0x121:  ret
```

## 反编译 C

```c
// CParty::OnTimerWalkOutLackUser @ 0x85b3e12

/* CParty::OnTimerWalkOutLackUser() */

undefined4 __thiscall CParty::OnTimerWalkOutLackUser(CParty *this)

{
  CUser *pCVar1;
  GameWorld *this_00;
  int local_14;
  
  local_14 = cElection<int,4,4>::GetElected((cElection<int,4,4> *)(this + 0xd8));
  while ((-1 < local_14 && (-1 < local_14))) {
    cElection<int,4,4>::CancelCandidate((cElection<int,4,4> *)(this + 0xd8),local_14);
    cElection<int,4,4>::CancelVoter((cElection<int,4,4> *)(this + 0xd8),local_14);
    pCVar1 = *(CUser **)(this + local_14 * 0x18 + 0x78);
    if (pCVar1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"party.cpp","bool CParty::OnTimerWalkOutLackUser()",0x35c6,"pVictim is null");
      return 0;
    }
    SendWalkout(this,local_14,1);
    walkout_member(this,*(CUser **)(this + 0x74),local_14);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::out_from_dungeon(this_00,pCVar1);
    local_14 = cElection<int,4,4>::GetElected((cElection<int,4,4> *)(this + 0xd8));
  }
  return 1;
}
```
