# execute

`_ZN11game_master24CVillageAttackedFightCmd7executeEv`

`game_master::CVillageAttackedFightCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CVillageAttackedFightCmd` | `0x084aa1dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aa1dc  _ZN11game_master24CVillageAttackedFightCmd7executeEv
#           game_master::CVillageAttackedFightCmd::execute()
# range [0x084aa1dc, 0x084aa297]
084aa1dc +0x00:  push   %ebp
084aa1dd +0x01:  mov    %esp,%ebp
084aa1df +0x03:  push   %ebx
084aa1e0 +0x04:  sub    $0x24,%esp
084aa1e3 +0x07:  mov    0x8(%ebp),%eax
084aa1e6 +0x0a:  mov    %eax,(%esp)
084aa1e9 +0x0d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa1ee +0x12:  mov    %eax,(%esp)
084aa1f1 +0x15:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084aa1f6 +0x1a:  mov    %eax,-0x10(%ebp)
084aa1f9 +0x1d:  cmpl   $0x0,-0x10(%ebp)
084aa1fd +0x21:  jne    084aa22f <+0x53>
084aa1ff +0x23:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084aa204 +0x28:  mov    %eax,(%esp)
084aa207 +0x2b:  call   08294e10 <_ZN12CGameManager8GetPartyEv>  ; CGameManager::GetParty()
084aa20c +0x30:  mov    %eax,-0x10(%ebp)
084aa20f +0x33:  cmpl   $0x0,-0x10(%ebp)
084aa213 +0x37:  je     084aa22f <+0x53>
084aa215 +0x39:  mov    0x8(%ebp),%eax
084aa218 +0x3c:  mov    %eax,(%esp)
084aa21b +0x3f:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa220 +0x44:  mov    %eax,0x4(%esp)
084aa224 +0x48:  mov    -0x10(%ebp),%eax
084aa227 +0x4b:  mov    %eax,(%esp)
084aa22a +0x4e:  call   0859b142 <_ZN6CParty15set_single_playEP5CUser>  ; CParty::set_single_play(CUser*)
084aa22f +0x53:  cmpl   $0x0,-0x10(%ebp)
084aa233 +0x57:  je     084aa291 <+0xb5>
084aa235 +0x59:  movl   $0x0,-0xc(%ebp)
084aa23c +0x60:  mov    0x8(%ebp),%eax
084aa23f +0x63:  mov    %eax,(%esp)
084aa242 +0x66:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa247 +0x6b:  movl   $0x0,0x8(%esp)
084aa24f +0x73:  mov    %eax,0x4(%esp)
084aa253 +0x77:  mov    -0x10(%ebp),%eax
084aa256 +0x7a:  mov    %eax,(%esp)
084aa259 +0x7d:  call   085b9596 <_ZN6CParty21OnFightVillageMonsterEP5CUseri>  ; CParty::OnFightVillageMonster(CUser*, int)
084aa25e +0x82:  mov    %eax,-0xc(%ebp)
084aa261 +0x85:  cmpl   $0x0,-0xc(%ebp)
084aa265 +0x89:  setne  %al
084aa268 +0x8c:  test   %al,%al
084aa26a +0x8e:  je     084aa291 <+0xb5>
084aa26c +0x90:  mov    -0xc(%ebp),%eax
084aa26f +0x93:  movzbl %al,%ebx
084aa272 +0x96:  mov    0x8(%ebp),%eax
084aa275 +0x99:  mov    %eax,(%esp)
084aa278 +0x9c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa27d +0xa1:  mov    %ebx,0x8(%esp)
084aa281 +0xa5:  movl   $0x10b,0x4(%esp)
084aa289 +0xad:  mov    %eax,(%esp)
084aa28c +0xb0:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084aa291 +0xb5:  add    $0x24,%esp
084aa294 +0xb8:  pop    %ebx
084aa295 +0xb9:  pop    %ebp
084aa296 +0xba:  ret
084aa297 +0xbb:  nop
```

## 反编译 C

```c
// game_master::CVillageAttackedFightCmd::execute @ 0x84aa1dc

/* game_master::CVillageAttackedFightCmd::execute() */

void __thiscall game_master::CVillageAttackedFightCmd::execute(CVillageAttackedFightCmd *this)

{
  CUser *pCVar1;
  CGameManager *this_00;
  uint uVar2;
  undefined4 local_14;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_14 = (CParty *)CUser::GetParty(pCVar1);
  if (local_14 == (CParty *)0x0) {
    this_00 = (CGameManager *)G_CGameManager();
    local_14 = (CParty *)CGameManager::GetParty(this_00);
    if (local_14 != (CParty *)0x0) {
      pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
      CParty::set_single_play(local_14,pCVar1);
    }
  }
  if (local_14 != (CParty *)0x0) {
    pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
    uVar2 = CParty::OnFightVillageMonster(local_14,pCVar1,0);
    if (uVar2 != 0) {
      pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
      CUser::SendCmdErrorPacket(pCVar1,0x10b,uVar2 & 0xff);
    }
  }
  return;
}
```
