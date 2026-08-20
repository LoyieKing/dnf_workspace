# handleStageCommand

`_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh`

`WongWork::CDeathTower::handleStageCommand(CUser*, unsigned char)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08466150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08466150  _ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh
#           WongWork::CDeathTower::handleStageCommand(CUser*, unsigned char)
# range [0x08466150, 0x08466207]
08466150 +0x00:  push   %ebp
08466151 +0x01:  mov    %esp,%ebp
08466153 +0x03:  sub    $0x28,%esp
08466156 +0x06:  mov    0x10(%ebp),%eax
08466159 +0x09:  mov    %al,-0xc(%ebp)
0846615c +0x0c:  mov    0x8(%ebp),%eax
0846615f +0x0f:  mov    (%eax),%eax
08466161 +0x11:  mov    %eax,(%esp)
08466164 +0x14:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
08466169 +0x19:  cmp    0xc(%ebp),%eax
0846616c +0x1c:  setne  %al
0846616f +0x1f:  test   %al,%al
08466171 +0x21:  je     0846617d <+0x2d>
08466173 +0x23:  mov    $0x0,%eax
08466178 +0x28:  jmp    08466205 <+0xb5>
0846617d +0x2d:  movzbl -0xc(%ebp),%eax
08466181 +0x31:  cmp    $0x1,%eax
08466184 +0x34:  je     0846618d <+0x3d>
08466186 +0x36:  cmp    $0x2,%eax
08466189 +0x39:  je     084661d4 <+0x84>
0846618b +0x3b:  jmp    084661f8 <+0xa8>
0846618d +0x3d:  mov    0x8(%ebp),%eax
08466190 +0x40:  add    $0x14,%eax
08466193 +0x43:  movl   $0x1,0x4(%esp)
0846619b +0x4b:  mov    %eax,(%esp)
0846619e +0x4e:  call   08461c5a <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE>  ; WongWork::CDeathTower::CStage::setState(WongWork::CDeathTower::ENUM_STAGE_STATE)
084661a3 +0x53:  xor    $0x1,%eax
084661a6 +0x56:  test   %al,%al
084661a8 +0x58:  je     084661b1 <+0x61>
084661aa +0x5a:  mov    $0x1,%eax
084661af +0x5f:  jmp    08466205 <+0xb5>
084661b1 +0x61:  mov    0x8(%ebp),%eax
084661b4 +0x64:  mov    %eax,(%esp)
084661b7 +0x67:  call   08467188 <_ZN8WongWork11CDeathTower15_checkMemberDieEv>  ; WongWork::CDeathTower::_checkMemberDie()
084661bc +0x6c:  test   %al,%al
084661be +0x6e:  je     084661c7 <+0x77>
084661c0 +0x70:  mov    $0x1,%eax
084661c5 +0x75:  jmp    08466205 <+0xb5>
084661c7 +0x77:  mov    0x8(%ebp),%eax
084661ca +0x7a:  mov    %eax,(%esp)
084661cd +0x7d:  call   08467cac <_ZN8WongWork11CDeathTower13_onStartStageEv>  ; WongWork::CDeathTower::_onStartStage()
084661d2 +0x82:  jmp    08466200 <+0xb0>
084661d4 +0x84:  mov    0x8(%ebp),%eax
084661d7 +0x87:  add    $0x14,%eax
084661da +0x8a:  movl   $0x2,0x4(%esp)
084661e2 +0x92:  mov    %eax,(%esp)
084661e5 +0x95:  call   08461c5a <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE>  ; WongWork::CDeathTower::CStage::setState(WongWork::CDeathTower::ENUM_STAGE_STATE)
084661ea +0x9a:  xor    $0x1,%eax
084661ed +0x9d:  test   %al,%al
084661ef +0x9f:  je     084661ff <+0xaf>
084661f1 +0xa1:  mov    $0x1,%eax
084661f6 +0xa6:  jmp    08466205 <+0xb5>
084661f8 +0xa8:  mov    $0x0,%eax
084661fd +0xad:  jmp    08466205 <+0xb5>
084661ff +0xaf:  nop
08466200 +0xb0:  mov    $0x1,%eax
08466205 +0xb5:  leave
08466206 +0xb6:  ret
08466207 +0xb7:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::handleStageCommand @ 0x8466150

/* WongWork::CDeathTower::handleStageCommand(CUser*, unsigned char) */

undefined4 __thiscall
WongWork::CDeathTower::handleStageCommand(CDeathTower *this,CUser *param_1,uchar param_2)

{
  char cVar1;
  CUser *pCVar2;
  
  pCVar2 = (CUser *)CParty::getManager(*(CParty **)this);
  if (pCVar2 != param_1) {
    return 0;
  }
  if (param_2 == '\x01') {
    cVar1 = CStage::setState((CStage *)(this + 0x14),1);
    if (cVar1 != '\x01') {
      return 1;
    }
    cVar1 = _checkMemberDie(this);
    if (cVar1 != '\0') {
      return 1;
    }
    _onStartStage(this);
  }
  else {
    if (param_2 != '\x02') {
      return 0;
    }
    cVar1 = CStage::setState((CStage *)(this + 0x14),2);
    if (cVar1 != '\x01') {
      return 1;
    }
  }
  return 1;
}
```
