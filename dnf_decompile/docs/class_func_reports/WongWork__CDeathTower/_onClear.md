# _onClear

`_ZN8WongWork11CDeathTower8_onClearEb`

`WongWork::CDeathTower::_onClear(bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08467e60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08467e60  _ZN8WongWork11CDeathTower8_onClearEb
#           WongWork::CDeathTower::_onClear(bool)
# range [0x08467e60, 0x08467f6d]
08467e60 +0x000:  push   %ebp
08467e61 +0x001:  mov    %esp,%ebp
08467e63 +0x003:  sub    $0x38,%esp
08467e66 +0x006:  mov    0xc(%ebp),%eax
08467e69 +0x009:  mov    %al,-0x1c(%ebp)
08467e6c +0x00c:  movl   $0x0,-0x14(%ebp)
08467e73 +0x013:  cmpb   $0x0,-0x1c(%ebp)
08467e77 +0x017:  je     08467e8e <+0x2e>
08467e79 +0x019:  mov    0x8(%ebp),%eax
08467e7c +0x01c:  add    $0x110,%eax
08467e81 +0x021:  mov    %eax,(%esp)
08467e84 +0x024:  call   08469bd4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2b7>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2b7
08467e89 +0x029:  mov    %eax,-0x14(%ebp)
08467e8c +0x02c:  jmp    08467ea1 <+0x41>
08467e8e +0x02e:  mov    0x8(%ebp),%eax
08467e91 +0x031:  add    $0x110,%eax
08467e96 +0x036:  mov    %eax,(%esp)
08467e99 +0x039:  call   08469be0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2c3>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2c3
08467e9e +0x03e:  mov    %eax,-0x14(%ebp)
08467ea1 +0x041:  movl   $0x0,-0x10(%ebp)
08467ea8 +0x048:  jmp    08467f5c <+0xfc>
08467ead +0x04d:  movl   $0x0,-0xc(%ebp)
08467eb4 +0x054:  mov    0x8(%ebp),%eax
08467eb7 +0x057:  mov    (%eax),%eax
08467eb9 +0x059:  mov    -0x10(%ebp),%edx
08467ebc +0x05c:  mov    %edx,0x4(%esp)
08467ec0 +0x060:  mov    %eax,(%esp)
08467ec3 +0x063:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08467ec8 +0x068:  mov    %eax,-0xc(%ebp)
08467ecb +0x06b:  cmpl   $0x0,-0xc(%ebp)
08467ecf +0x06f:  je     08467eec <+0x8c>
08467ed1 +0x071:  mov    0x8(%ebp),%eax
08467ed4 +0x074:  mov    (%eax),%eax
08467ed6 +0x076:  mov    -0x10(%ebp),%edx
08467ed9 +0x079:  mov    %edx,0x4(%esp)
08467edd +0x07d:  mov    %eax,(%esp)
08467ee0 +0x080:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08467ee5 +0x085:  xor    $0x1,%eax
08467ee8 +0x088:  test   %al,%al
08467eea +0x08a:  je     08467ef3 <+0x93>
08467eec +0x08c:  mov    $0x1,%eax
08467ef1 +0x091:  jmp    08467ef8 <+0x98>
08467ef3 +0x093:  mov    $0x0,%eax
08467ef8 +0x098:  test   %al,%al
08467efa +0x09a:  jne    08467f57 <+0xf7>
08467efc +0x09c:  mov    0x8(%ebp),%eax
08467eff +0x09f:  mov    (%eax),%eax
08467f01 +0x0a1:  mov    -0x10(%ebp),%edx
08467f04 +0x0a4:  mov    %edx,0x4(%esp)
08467f08 +0x0a8:  mov    %eax,(%esp)
08467f0b +0x0ab:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08467f10 +0x0b0:  movl   $0x0,0x4(%esp)
08467f18 +0x0b8:  mov    %eax,(%esp)
08467f1b +0x0bb:  call   08469a5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x13f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x13f
08467f20 +0x0c0:  mov    -0x14(%ebp),%ecx
08467f23 +0x0c3:  mov    $0x10624dd3,%edx
08467f28 +0x0c8:  mov    %ecx,%eax
08467f2a +0x0ca:  imul   %edx
08467f2c +0x0cc:  sar    $0x6,%edx
08467f2f +0x0cf:  mov    %ecx,%eax
08467f31 +0x0d1:  sar    $0x1f,%eax
08467f34 +0x0d4:  mov    %edx,%ecx
08467f36 +0x0d6:  sub    %eax,%ecx
08467f38 +0x0d8:  movzbl -0x1c(%ebp),%eax
08467f3c +0x0dc:  mov    -0xc(%ebp),%edx
08467f3f +0x0df:  add    $0x79700,%edx
08467f45 +0x0e5:  mov    %ecx,0x8(%esp)
08467f49 +0x0e9:  mov    %eax,0x4(%esp)
08467f4d +0x0ed:  mov    %edx,(%esp)
08467f50 +0x0f0:  call   08684ac4 <_ZN15cUserHistoryLog16DungeonClearInfoEil>  ; cUserHistoryLog::DungeonClearInfo(int, long)
08467f55 +0x0f5:  jmp    08467f58 <+0xf8>
08467f57 +0x0f7:  nop
08467f58 +0x0f8:  addl   $0x1,-0x10(%ebp)
08467f5c +0x0fc:  cmpl   $0x3,-0x10(%ebp)
08467f60 +0x100:  setle  %al
08467f63 +0x103:  test   %al,%al
08467f65 +0x105:  jne    08467ead <+0x4d>
08467f6b +0x10b:  leave
08467f6c +0x10c:  ret
08467f6d +0x10d:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::_onClear @ 0x8467e60

/* WongWork::CDeathTower::_onClear(bool) */

void __thiscall WongWork::CDeathTower::_onClear(CDeathTower *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUser *this_00;
  int local_18;
  int local_14;
  
  if (param_1) {
    local_18 = CPlayData::getPlayTime((CPlayData *)(this + 0x110));
  }
  else {
    local_18 = CPlayData::getLastPlayTime((CPlayData *)(this + 0x110));
  }
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    iVar3 = CParty::get_user(*(CParty **)this,local_14);
    if (iVar3 == 0) {
LAB_08467eec:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_14);
      if (cVar2 != '\x01') goto LAB_08467eec;
      bVar1 = false;
    }
    if (!bVar1) {
      this_00 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
      CUser::setChattingMessageCount(this_00,0);
      cUserHistoryLog::DungeonClearInfo
                ((cUserHistoryLog *)(iVar3 + 0x79700),(uint)param_1,local_18 / 1000);
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
