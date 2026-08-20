# ProcessGiveUp

`_ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty`

`CSpecialItemRoutingManager::ProcessGiveUp(CParty*)`

| 类 | 地址 |
|---|---|
| `CSpecialItemRoutingManager` | `0x0860b2c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b2c2  _ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty
#           CSpecialItemRoutingManager::ProcessGiveUp(CParty*)
# range [0x0860b2c2, 0x0860b331]
0860b2c2 +0x00:  push   %ebp
0860b2c3 +0x01:  mov    %esp,%ebp
0860b2c5 +0x03:  sub    $0x18,%esp
0860b2c8 +0x06:  cmpl   $0x0,0xc(%ebp)
0860b2cc +0x0a:  je     0860b32e <+0x6c>
0860b2ce +0x0c:  mov    0xc(%ebp),%eax
0860b2d1 +0x0f:  mov    %eax,(%esp)
0860b2d4 +0x12:  call   08145840 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2c3
0860b2d9 +0x17:  test   %al,%al
0860b2db +0x19:  je     0860b311 <+0x4f>
0860b2dd +0x1b:  mov    0xc(%ebp),%eax
0860b2e0 +0x1e:  mov    %eax,(%esp)
0860b2e3 +0x21:  call   085ba1c0 <_ZN6CParty21HasAllMemberSelectionEv>  ; CParty::HasAllMemberSelection()
0860b2e8 +0x26:  test   %al,%al
0860b2ea +0x28:  je     0860b311 <+0x4f>
0860b2ec +0x2a:  mov    0xc(%ebp),%eax
0860b2ef +0x2d:  mov    %eax,(%esp)
0860b2f2 +0x30:  call   085ba574 <_ZN6CParty24GetFirstValidMemberStateEv>  ; CParty::GetFirstValidMemberState()
0860b2f7 +0x35:  cmp    $0x5,%al
0860b2f9 +0x37:  je     0860b30a <+0x48>
0860b2fb +0x39:  mov    0xc(%ebp),%eax
0860b2fe +0x3c:  mov    %eax,(%esp)
0860b301 +0x3f:  call   085ba574 <_ZN6CParty24GetFirstValidMemberStateEv>  ; CParty::GetFirstValidMemberState()
0860b306 +0x44:  cmp    $0xc,%al
0860b308 +0x46:  jne    0860b311 <+0x4f>
0860b30a +0x48:  mov    $0x1,%eax
0860b30f +0x4d:  jmp    0860b316 <+0x54>
0860b311 +0x4f:  mov    $0x0,%eax
0860b316 +0x54:  test   %al,%al
0860b318 +0x56:  je     0860b32f <+0x6d>
0860b31a +0x58:  mov    0xc(%ebp),%eax
0860b31d +0x5b:  mov    %eax,0x4(%esp)
0860b321 +0x5f:  mov    0x8(%ebp),%eax
0860b324 +0x62:  mov    %eax,(%esp)
0860b327 +0x65:  call   0860ac6a <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty>  ; CSpecialItemRoutingManager::processRouting(CParty*)
0860b32c +0x6a:  jmp    0860b32f <+0x6d>
0860b32e +0x6c:  nop
0860b32f +0x6d:  leave
0860b330 +0x6e:  ret
0860b331 +0x6f:  nop
```

## 反编译 C

```c
// CSpecialItemRoutingManager::ProcessGiveUp @ 0x860b2c2

/* CSpecialItemRoutingManager::ProcessGiveUp(CParty*) */

void __thiscall
CSpecialItemRoutingManager::ProcessGiveUp(CSpecialItemRoutingManager *this,CParty *param_1)

{
  bool bVar1;
  char cVar2;
  
  if (param_1 != (CParty *)0x0) {
    cVar2 = CParty::IsRoutingState(param_1);
    if (((cVar2 == '\0') || (cVar2 = CParty::HasAllMemberSelection(param_1), cVar2 == '\0')) ||
       ((cVar2 = CParty::GetFirstValidMemberState(param_1), cVar2 != '\x05' &&
        (cVar2 = CParty::GetFirstValidMemberState(param_1), cVar2 != '\f')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      processRouting(this,param_1);
    }
    return;
  }
  return;
}
```
