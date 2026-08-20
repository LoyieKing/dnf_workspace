# execute

`_ZN11game_master24CPowerWarStraightVictory7executeEv`

`game_master::CPowerWarStraightVictory::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CPowerWarStraightVictory` | `0x084ab23e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab23e  _ZN11game_master24CPowerWarStraightVictory7executeEv
#           game_master::CPowerWarStraightVictory::execute()
# range [0x084ab23e, 0x084ab29b]
084ab23e +0x00:  push   %ebp
084ab23f +0x01:  mov    %esp,%ebp
084ab241 +0x03:  sub    $0x28,%esp
084ab244 +0x06:  mov    0x8(%ebp),%eax
084ab247 +0x09:  mov    %eax,(%esp)
084ab24a +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ab24f +0x11:  mov    %eax,-0x10(%ebp)
084ab252 +0x14:  mov    -0x10(%ebp),%eax
084ab255 +0x17:  mov    %eax,(%esp)
084ab258 +0x1a:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084ab25d +0x1f:  mov    %eax,-0xc(%ebp)
084ab260 +0x22:  cmpl   $0x0,-0xc(%ebp)
084ab264 +0x26:  je     084ab281 <+0x43>
084ab266 +0x28:  mov    0x8(%ebp),%eax
084ab269 +0x2b:  movzwl 0x8(%eax),%eax
084ab26d +0x2f:  movzwl %ax,%eax
084ab270 +0x32:  mov    %eax,0x4(%esp)
084ab274 +0x36:  mov    -0xc(%ebp),%eax
084ab277 +0x39:  mov    %eax,(%esp)
084ab27a +0x3c:  call   084b426e <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x321>  ; global constructors keyed to game_master::CMacro::Reset()+0x321
084ab27f +0x41:  jmp    084ab29a <+0x5c>
084ab281 +0x43:  mov    0x8(%ebp),%eax
084ab284 +0x46:  movzwl 0x8(%eax),%eax
084ab288 +0x4a:  movzwl %ax,%edx
084ab28b +0x4d:  mov    -0x10(%ebp),%eax
084ab28e +0x50:  mov    %edx,0x4(%esp)
084ab292 +0x54:  mov    %eax,(%esp)
084ab295 +0x57:  call   084b42f4 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x3a7>  ; global constructors keyed to game_master::CMacro::Reset()+0x3a7
084ab29a +0x5c:  leave
084ab29b +0x5d:  ret
```

## 反编译 C

```c
// game_master::CPowerWarStraightVictory::execute @ 0x84ab23e

/* game_master::CPowerWarStraightVictory::execute() */

void __thiscall game_master::CPowerWarStraightVictory::execute(CPowerWarStraightVictory *this)

{
  CUser *this_00;
  CParty *this_01;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  this_01 = (CParty *)CUser::GetParty(this_00);
  if (this_01 == (CParty *)0x0) {
    CUserCharacInfo::setStraightVictories((CUserCharacInfo *)this_00,*(ushort *)(this + 8));
  }
  else {
    CParty::setStraightVictories(this_01,*(ushort *)(this + 8));
  }
  return;
}
```
