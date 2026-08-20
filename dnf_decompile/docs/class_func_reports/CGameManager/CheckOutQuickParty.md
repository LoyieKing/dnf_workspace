# CheckOutQuickParty

`_ZN12CGameManager18CheckOutQuickPartyEP6CPartyb`

`CGameManager::CheckOutQuickParty(CParty*, bool)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082983fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082983fc  _ZN12CGameManager18CheckOutQuickPartyEP6CPartyb
#           CGameManager::CheckOutQuickParty(CParty*, bool)
# range [0x082983fc, 0x08298449]
082983fc +0x00:  push   %ebp
082983fd +0x01:  mov    %esp,%ebp
082983ff +0x03:  push   %ebx
08298400 +0x04:  sub    $0x24,%esp
08298403 +0x07:  mov    0x10(%ebp),%eax
08298406 +0x0a:  mov    %al,-0xc(%ebp)
08298409 +0x0d:  cmpl   $0x0,0xc(%ebp)
0829840d +0x11:  je     08298442 <+0x46>
0829840f +0x13:  movzbl -0xc(%ebp),%ebx
08298413 +0x17:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08298418 +0x1c:  mov    %eax,(%esp)
0829841b +0x1f:  call   08298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>  ; CGameManager::GetQuickPartySystemManager()
08298420 +0x24:  movl   $0x0,0xc(%esp)
08298428 +0x2c:  mov    %ebx,0x8(%esp)
0829842c +0x30:  mov    0xc(%ebp),%edx
0829842f +0x33:  mov    %edx,0x4(%esp)
08298433 +0x37:  mov    %eax,(%esp)
08298436 +0x3a:  call   0826a386 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser>  ; QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)
0829843b +0x3f:  xor    $0x1,%eax
0829843e +0x42:  test   %al,%al
08298440 +0x44:  jmp    08298443 <+0x47>
08298442 +0x46:  nop
08298443 +0x47:  add    $0x24,%esp
08298446 +0x4a:  pop    %ebx
08298447 +0x4b:  pop    %ebp
08298448 +0x4c:  ret
08298449 +0x4d:  nop
```

## 反编译 C

```c
// CGameManager::CheckOutQuickParty @ 0x82983fc

/* CGameManager::CheckOutQuickParty(CParty*, bool) */

uint __thiscall CGameManager::CheckOutQuickParty(CGameManager *this,CParty *param_1,bool param_2)

{
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  undefined3 in_stack_0000000d;
  
  if (param_1 != (CParty *)0x0) {
    this_00 = (CGameManager *)G_CGameManager();
    this_01 = (CQuickPartySystemManager *)GetQuickPartySystemManager(this_00);
    _param_2 = QuickParty::CQuickPartySystemManager::cancel_quick_party
                         (this_01,param_1,param_2,(CUser *)0x0);
    _param_2 = _param_2 ^ 1;
  }
  return _param_2;
}
```
