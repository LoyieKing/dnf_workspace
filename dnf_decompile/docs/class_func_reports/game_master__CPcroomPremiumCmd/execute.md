# execute

`_ZN11game_master17CPcroomPremiumCmd7executeEv`

`game_master::CPcroomPremiumCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CPcroomPremiumCmd` | `0x084a9de8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9de8  _ZN11game_master17CPcroomPremiumCmd7executeEv
#           game_master::CPcroomPremiumCmd::execute()
# range [0x084a9de8, 0x084a9e33]
084a9de8 +0x00:  push   %ebp
084a9de9 +0x01:  mov    %esp,%ebp
084a9deb +0x03:  push   %esi
084a9dec +0x04:  push   %ebx
084a9ded +0x05:  sub    $0x20,%esp
084a9df0 +0x08:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084a9df7 +0x0f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084a9dfc +0x14:  mov    %eax,-0x10(%ebp)
084a9dff +0x17:  mov    0x8(%ebp),%eax
084a9e02 +0x1a:  mov    0x8(%eax),%eax
084a9e05 +0x1d:  add    -0x10(%ebp),%eax
084a9e08 +0x20:  mov    %eax,-0xc(%ebp)
084a9e0b +0x23:  mov    -0xc(%ebp),%esi
084a9e0e +0x26:  mov    -0x10(%ebp),%ebx
084a9e11 +0x29:  mov    0x8(%ebp),%eax
084a9e14 +0x2c:  mov    %eax,(%esp)
084a9e17 +0x2f:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9e1c +0x34:  mov    %esi,0x8(%esp)
084a9e20 +0x38:  mov    %ebx,0x4(%esp)
084a9e24 +0x3c:  mov    %eax,(%esp)
084a9e27 +0x3f:  call   086b02fe <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll>  ; WongWork::CHandlePremium::handleSetUserPCRoom(CUser*, long, long)
084a9e2c +0x44:  add    $0x20,%esp
084a9e2f +0x47:  pop    %ebx
084a9e30 +0x48:  pop    %esi
084a9e31 +0x49:  pop    %ebp
084a9e32 +0x4a:  ret
084a9e33 +0x4b:  nop
```

## 反编译 C

```c
// game_master::CPcroomPremiumCmd::execute @ 0x84a9de8

/* game_master::CPcroomPremiumCmd::execute() */

void __thiscall game_master::CPcroomPremiumCmd::execute(CPcroomPremiumCmd *this)

{
  int iVar1;
  int iVar2;
  CUser *pCVar3;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar1 = *(int *)(this + 8);
  pCVar3 = (CUser *)CCommand::GetUser((CCommand *)this);
  WongWork::CHandlePremium::handleSetUserPCRoom(pCVar3,iVar2,iVar1 + iVar2);
  return;
}
```
