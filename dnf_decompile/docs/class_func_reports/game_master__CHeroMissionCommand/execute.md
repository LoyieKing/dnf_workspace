# execute

`_ZN11game_master19CHeroMissionCommand7executeEv`

`game_master::CHeroMissionCommand::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CHeroMissionCommand` | `0x084b3e5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b3e5e  _ZN11game_master19CHeroMissionCommand7executeEv
#           game_master::CHeroMissionCommand::execute()
# range [0x084b3e5e, 0x084b3f0c]
084b3e5e +0x00:  push   %ebp
084b3e5f +0x01:  mov    %esp,%ebp
084b3e61 +0x03:  push   %esi
084b3e62 +0x04:  push   %ebx
084b3e63 +0x05:  sub    $0x20,%esp
084b3e66 +0x08:  mov    0x8(%ebp),%eax
084b3e69 +0x0b:  mov    %eax,(%esp)
084b3e6c +0x0e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b3e71 +0x13:  mov    %eax,-0xc(%ebp)
084b3e74 +0x16:  mov    0x8(%ebp),%eax
084b3e77 +0x19:  add    $0x8,%eax
084b3e7a +0x1c:  movl   $"set",0x4(%esp)
084b3e82 +0x24:  mov    %eax,(%esp)
084b3e85 +0x27:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b3e8a +0x2c:  test   %al,%al
084b3e8c +0x2e:  je     084b3ebc <+0x5e>
084b3e8e +0x30:  mov    0x8(%ebp),%eax
084b3e91 +0x33:  mov    0x10(%eax),%eax
084b3e94 +0x36:  mov    %eax,%esi
084b3e96 +0x38:  mov    0x8(%ebp),%eax
084b3e99 +0x3b:  mov    0xc(%eax),%eax
084b3e9c +0x3e:  mov    %eax,%ebx
084b3e9e +0x40:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
084b3ea3 +0x45:  mov    %esi,0xc(%esp)
084b3ea7 +0x49:  mov    %ebx,0x8(%esp)
084b3eab +0x4d:  mov    -0xc(%ebp),%edx
084b3eae +0x50:  mov    %edx,0x4(%esp)
084b3eb2 +0x54:  mov    %eax,(%esp)
084b3eb5 +0x57:  call   081672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>  ; HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
084b3eba +0x5c:  jmp    084b3ef2 <+0x94>
084b3ebc +0x5e:  mov    0x8(%ebp),%eax
084b3ebf +0x61:  add    $0x8,%eax
084b3ec2 +0x64:  movl   $"reset",0x4(%esp)
084b3eca +0x6c:  mov    %eax,(%esp)
084b3ecd +0x6f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b3ed2 +0x74:  test   %al,%al
084b3ed4 +0x76:  je     084b3ef2 <+0x94>
084b3ed6 +0x78:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
084b3edb +0x7d:  movl   $"",0x8(%esp)
084b3ee3 +0x85:  mov    -0xc(%ebp),%edx
084b3ee6 +0x88:  mov    %edx,0x4(%esp)
084b3eea +0x8c:  mov    %eax,(%esp)
084b3eed +0x8f:  call   08166752 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc>  ; HeroMissionEvent::setEventData(CUser*, char const*)
084b3ef2 +0x94:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
084b3ef7 +0x99:  mov    -0xc(%ebp),%edx
084b3efa +0x9c:  mov    %edx,0x4(%esp)
084b3efe +0xa0:  mov    %eax,(%esp)
084b3f01 +0xa3:  call   0816770e <_ZN16HeroMissionEvent15sendMissionDataEP5CUser>  ; HeroMissionEvent::sendMissionData(CUser*)
084b3f06 +0xa8:  add    $0x20,%esp
084b3f09 +0xab:  pop    %ebx
084b3f0a +0xac:  pop    %esi
084b3f0b +0xad:  pop    %ebp
084b3f0c +0xae:  ret
```

## 反编译 C

```c
// game_master::CHeroMissionCommand::execute @ 0x84b3e5e

/* game_master::CHeroMissionCommand::execute() */

void __thiscall game_master::CHeroMissionCommand::execute(CHeroMissionCommand *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  CUser *pCVar4;
  HeroMissionEvent *pHVar5;
  
  pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
  bVar3 = std::operator==((string *)(this + 8),"set");
  if (bVar3) {
    uVar1 = *(undefined4 *)(this + 0x10);
    uVar2 = *(undefined4 *)(this + 0xc);
    pHVar5 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
    HeroMissionEvent::processMission(pHVar5,pCVar4,uVar2,uVar1);
  }
  else {
    bVar3 = std::operator==((string *)(this + 8),"reset");
    if (bVar3) {
      pHVar5 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
      HeroMissionEvent::setEventData(pHVar5,pCVar4,"");
    }
  }
  pHVar5 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
  HeroMissionEvent::sendMissionData(pHVar5,pCVar4);
  return;
}
```
