# _onFinishDeathTower

`_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv`

`WongWork::CDeathTower::_onFinishDeathTower()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08467f6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08467f6e  _ZN8WongWork11CDeathTower19_onFinishDeathTowerEv
#           WongWork::CDeathTower::_onFinishDeathTower()
# range [0x08467f6e, 0x0846801d]
08467f6e +0x00:  push   %ebp
08467f6f +0x01:  mov    %esp,%ebp
08467f71 +0x03:  sub    $0x28,%esp
08467f74 +0x06:  movl   $0x0,-0x10(%ebp)
08467f7b +0x0d:  jmp    08467fe5 <+0x77>
08467f7d +0x0f:  movl   $0x0,-0xc(%ebp)
08467f84 +0x16:  mov    0x8(%ebp),%eax
08467f87 +0x19:  mov    (%eax),%eax
08467f89 +0x1b:  mov    -0x10(%ebp),%edx
08467f8c +0x1e:  mov    %edx,0x4(%esp)
08467f90 +0x22:  mov    %eax,(%esp)
08467f93 +0x25:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08467f98 +0x2a:  mov    %eax,-0xc(%ebp)
08467f9b +0x2d:  cmpl   $0x0,-0xc(%ebp)
08467f9f +0x31:  je     08467fbc <+0x4e>
08467fa1 +0x33:  mov    0x8(%ebp),%eax
08467fa4 +0x36:  mov    (%eax),%eax
08467fa6 +0x38:  mov    -0x10(%ebp),%edx
08467fa9 +0x3b:  mov    %edx,0x4(%esp)
08467fad +0x3f:  mov    %eax,(%esp)
08467fb0 +0x42:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08467fb5 +0x47:  xor    $0x1,%eax
08467fb8 +0x4a:  test   %al,%al
08467fba +0x4c:  je     08467fc3 <+0x55>
08467fbc +0x4e:  mov    $0x1,%eax
08467fc1 +0x53:  jmp    08467fc8 <+0x5a>
08467fc3 +0x55:  mov    $0x0,%eax
08467fc8 +0x5a:  test   %al,%al
08467fca +0x5c:  jne    08467fe0 <+0x72>
08467fcc +0x5e:  mov    -0xc(%ebp),%eax
08467fcf +0x61:  mov    %eax,0x4(%esp)
08467fd3 +0x65:  mov    0x8(%ebp),%eax
08467fd6 +0x68:  mov    %eax,(%esp)
08467fd9 +0x6b:  call   084636f2 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser>  ; WongWork::CDeathTower::onLeaveUser(CUser*)
08467fde +0x70:  jmp    08467fe1 <+0x73>
08467fe0 +0x72:  nop
08467fe1 +0x73:  addl   $0x1,-0x10(%ebp)
08467fe5 +0x77:  cmpl   $0x3,-0x10(%ebp)
08467fe9 +0x7b:  setle  %al
08467fec +0x7e:  test   %al,%al
08467fee +0x80:  jne    08467f7d <+0xf>
08467ff0 +0x82:  mov    0x8(%ebp),%eax
08467ff3 +0x85:  mov    (%eax),%eax
08467ff5 +0x87:  mov    %eax,(%esp)
08467ff8 +0x8a:  call   085aca60 <_ZN6CParty15ReturnToVillageEv>  ; CParty::ReturnToVillage()
08467ffd +0x8f:  mov    0x8(%ebp),%eax
08468000 +0x92:  mov    %eax,(%esp)
08468003 +0x95:  call   08469c5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x33f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x33f
08468008 +0x9a:  test   %eax,%eax
0846800a +0x9c:  setg   %al
0846800d +0x9f:  test   %al,%al
0846800f +0xa1:  je     0846801c <+0xae>
08468011 +0xa3:  mov    0x8(%ebp),%eax
08468014 +0xa6:  mov    %eax,(%esp)
08468017 +0xa9:  call   08467b20 <_ZN8WongWork11CDeathTower8_destroyEv>  ; WongWork::CDeathTower::_destroy()
0846801c +0xae:  leave
0846801d +0xaf:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::_onFinishDeathTower @ 0x8467f6e

/* WongWork::CDeathTower::_onFinishDeathTower() */

void __thiscall WongWork::CDeathTower::_onFinishDeathTower(CDeathTower *this)

{
  bool bVar1;
  char cVar2;
  CUser *pCVar3;
  int iVar4;
  undefined4 local_14;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      CParty::ReturnToVillage(*(CParty **)this);
      iVar4 = getTowerState(this);
      if (0 < iVar4) {
        _destroy(this);
      }
      return;
    }
    pCVar3 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
    if (pCVar3 == (CUser *)0x0) {
LAB_08467fbc:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_14);
      if (cVar2 != '\x01') goto LAB_08467fbc;
      bVar1 = false;
    }
    if (!bVar1) {
      onLeaveUser(this,pCVar3);
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
