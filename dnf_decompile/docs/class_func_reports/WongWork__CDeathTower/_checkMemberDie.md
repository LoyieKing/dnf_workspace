# _checkMemberDie

`_ZN8WongWork11CDeathTower15_checkMemberDieEv`

`WongWork::CDeathTower::_checkMemberDie()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08467188` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08467188  _ZN8WongWork11CDeathTower15_checkMemberDieEv
#           WongWork::CDeathTower::_checkMemberDie()
# range [0x08467188, 0x08467207]
08467188 +0x00:  push   %ebp
08467189 +0x01:  mov    %esp,%ebp
0846718b +0x03:  sub    $0x28,%esp
0846718e +0x06:  movl   $0x0,-0xc(%ebp)
08467195 +0x0d:  movl   $0x0,-0xc(%ebp)
0846719c +0x14:  jmp    084671e6 <+0x5e>
0846719e +0x16:  mov    -0xc(%ebp),%edx
084671a1 +0x19:  mov    0x8(%ebp),%eax
084671a4 +0x1c:  mov    (%eax),%eax
084671a6 +0x1e:  mov    %edx,0x4(%esp)
084671aa +0x22:  mov    %eax,(%esp)
084671ad +0x25:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
084671b2 +0x2a:  test   %al,%al
084671b4 +0x2c:  je     084671d9 <+0x51>
084671b6 +0x2e:  mov    -0xc(%ebp),%eax
084671b9 +0x31:  mov    0x8(%ebp),%edx
084671bc +0x34:  add    $0x110,%edx
084671c2 +0x3a:  mov    %eax,0x4(%esp)
084671c6 +0x3e:  mov    %edx,(%esp)
084671c9 +0x41:  call   08469b76 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x259>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x259
084671ce +0x46:  test   %al,%al
084671d0 +0x48:  je     084671d9 <+0x51>
084671d2 +0x4a:  mov    $0x1,%eax
084671d7 +0x4f:  jmp    084671de <+0x56>
084671d9 +0x51:  mov    $0x0,%eax
084671de +0x56:  test   %al,%al
084671e0 +0x58:  jne    084671f3 <+0x6b>
084671e2 +0x5a:  addl   $0x1,-0xc(%ebp)
084671e6 +0x5e:  cmpl   $0x3,-0xc(%ebp)
084671ea +0x62:  setbe  %al
084671ed +0x65:  test   %al,%al
084671ef +0x67:  jne    0846719e <+0x16>
084671f1 +0x69:  jmp    084671f4 <+0x6c>
084671f3 +0x6b:  nop
084671f4 +0x6c:  cmpl   $0x4,-0xc(%ebp)
084671f8 +0x70:  jne    08467201 <+0x79>
084671fa +0x72:  mov    $0x1,%eax
084671ff +0x77:  jmp    08467206 <+0x7e>
08467201 +0x79:  mov    $0x0,%eax
08467206 +0x7e:  leave
08467207 +0x7f:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::_checkMemberDie @ 0x8467188

/* WongWork::CDeathTower::_checkMemberDie() */

bool __thiscall WongWork::CDeathTower::_checkMemberDie(CDeathTower *this)

{
  bool bVar1;
  char cVar2;
  uint local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = CParty::checkValidUser(*(CParty **)this,local_10);
    if ((cVar2 == '\0') ||
       (cVar2 = CPlayData::isMemberAlive((CPlayData *)(this + 0x110),local_10), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
  }
  return local_10 == 4;
}
```
