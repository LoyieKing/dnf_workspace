# process

`_ZN29Dispatcher_Cancel_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Cancel_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Cancel_Quick_Party` | `0x081de1f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de1f8  _ZN29Dispatcher_Cancel_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Cancel_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081de1f8, 0x081de297]
081de1f8 +0x00:  push   %ebp
081de1f9 +0x01:  mov    %esp,%ebp
081de1fb +0x03:  push   %ebx
081de1fc +0x04:  sub    $0x24,%esp
081de1ff +0x07:  mov    0x14(%ebp),%eax
081de202 +0x0a:  mov    %eax,0xc(%esp)
081de206 +0x0e:  mov    0x10(%ebp),%eax
081de209 +0x11:  mov    %eax,0x8(%esp)
081de20d +0x15:  mov    0xc(%ebp),%eax
081de210 +0x18:  mov    %eax,0x4(%esp)
081de214 +0x1c:  mov    0x8(%ebp),%eax
081de217 +0x1f:  mov    %eax,(%esp)
081de21a +0x22:  call   081de1b4 <_ZN29Dispatcher_Cancel_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_Cancel_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&)
081de21f +0x27:  mov    %eax,-0x14(%ebp)
081de222 +0x2a:  cmpl   $0x0,-0x14(%ebp)
081de226 +0x2e:  jle    081de22d <+0x35>
081de228 +0x30:  mov    -0x14(%ebp),%eax
081de22b +0x33:  jmp    081de291 <+0x99>
081de22d +0x35:  cmpl   $0x0,-0x14(%ebp)
081de231 +0x39:  jns    081de23a <+0x42>
081de233 +0x3b:  mov    $0xffffffff,%eax
081de238 +0x40:  jmp    081de291 <+0x99>
081de23a +0x42:  mov    0x10(%ebp),%eax
081de23d +0x45:  mov    %eax,-0x10(%ebp)
081de240 +0x48:  mov    0x14(%ebp),%eax
081de243 +0x4b:  mov    %eax,-0xc(%ebp)
081de246 +0x4e:  mov    0xc(%ebp),%eax
081de249 +0x51:  mov    %eax,(%esp)
081de24c +0x54:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081de251 +0x59:  mov    %eax,%ebx
081de253 +0x5b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081de258 +0x60:  mov    %eax,(%esp)
081de25b +0x63:  call   08298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>  ; CGameManager::GetQuickPartySystemManager()
081de260 +0x68:  mov    0xc(%ebp),%edx
081de263 +0x6b:  mov    %edx,0xc(%esp)
081de267 +0x6f:  movl   $0x1,0x8(%esp)
081de26f +0x77:  mov    %ebx,0x4(%esp)
081de273 +0x7b:  mov    %eax,(%esp)
081de276 +0x7e:  call   0826a386 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser>  ; QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)
081de27b +0x83:  xor    $0x1,%eax
081de27e +0x86:  test   %al,%al
081de280 +0x88:  je     081de28c <+0x94>
081de282 +0x8a:  mov    -0xc(%ebp),%eax
081de285 +0x8d:  movl   $0x1,0x4(%eax)
081de28c +0x94:  mov    $0x0,%eax
081de291 +0x99:  add    $0x24,%esp
081de294 +0x9c:  pop    %ebx
081de295 +0x9d:  pop    %ebp
081de296 +0x9e:  ret
081de297 +0x9f:  nop
```

## 反编译 C

```c
// Dispatcher_Cancel_Quick_Party::process @ 0x81de1f8

/* Dispatcher_Cancel_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_Cancel_Quick_Party::process
          (Dispatcher_Cancel_Quick_Party *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  
  iVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      pCVar3 = (CParty *)CUser::GetParty(param_1);
      this_00 = (CGameManager *)G_CGameManager();
      this_01 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_00);
      cVar1 = QuickParty::CQuickPartySystemManager::cancel_quick_party(this_01,pCVar3,true,param_1);
      if (cVar1 != '\x01') {
        *(undefined4 *)(param_3 + 4) = 1;
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}
```
