# dispatch_sig

`_ZN22TimerItemUnlockWaiting12dispatch_sigEiij`

`TimerItemUnlockWaiting::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerItemUnlockWaiting` | `0x086390ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086390ea  _ZN22TimerItemUnlockWaiting12dispatch_sigEiij
#           TimerItemUnlockWaiting::dispatch_sig(int, int, unsigned int)
# range [0x086390ea, 0x08639173]
086390ea +0x00:  push   %ebp
086390eb +0x01:  mov    %esp,%ebp
086390ed +0x03:  sub    $0x28,%esp
086390f0 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086390f5 +0x0b:  movl   $0x2,0x8(%esp)
086390fd +0x13:  mov    0xc(%ebp),%edx
08639100 +0x16:  mov    %edx,0x4(%esp)
08639104 +0x1a:  mov    %eax,(%esp)
08639107 +0x1d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
0863910c +0x22:  mov    %eax,-0xc(%ebp)
0863910f +0x25:  cmpl   $0x0,-0xc(%ebp)
08639113 +0x29:  jne    0863911c <+0x32>
08639115 +0x2b:  mov    $0x0,%eax
0863911a +0x30:  jmp    08639171 <+0x87>
0863911c +0x32:  mov    -0xc(%ebp),%eax
0863911f +0x35:  mov    %eax,(%esp)
08639122 +0x38:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08639127 +0x3d:  test   %eax,%eax
08639129 +0x3f:  sete   %al
0863912c +0x42:  test   %al,%al
0863912e +0x44:  je     08639137 <+0x4d>
08639130 +0x46:  mov    $0x0,%eax
08639135 +0x4b:  jmp    08639171 <+0x87>
08639137 +0x4d:  mov    -0xc(%ebp),%eax
0863913a +0x50:  mov    %eax,(%esp)
0863913d +0x53:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08639142 +0x58:  cmp    0x14(%ebp),%eax
08639145 +0x5b:  setne  %al
08639148 +0x5e:  test   %al,%al
0863914a +0x60:  je     08639153 <+0x69>
0863914c +0x62:  mov    $0x0,%eax
08639151 +0x67:  jmp    08639171 <+0x87>
08639153 +0x69:  mov    0x14(%ebp),%eax
08639156 +0x6c:  mov    %eax,0x8(%esp)
0863915a +0x70:  mov    0x10(%ebp),%eax
0863915d +0x73:  mov    %eax,0x4(%esp)
08639161 +0x77:  mov    -0xc(%ebp),%eax
08639164 +0x7a:  mov    %eax,(%esp)
08639167 +0x7d:  call   08646912 <_ZN5CUser23OnItemUnlockWaitTimeoutEii>  ; CUser::OnItemUnlockWaitTimeout(int, int)
0863916c +0x82:  mov    $0x1,%eax
08639171 +0x87:  leave
08639172 +0x88:  ret
08639173 +0x89:  nop
```

## 反编译 C

```c
// TimerItemUnlockWaiting::dispatch_sig @ 0x86390ea

/* TimerItemUnlockWaiting::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerItemUnlockWaiting::dispatch_sig
          (TimerItemUnlockWaiting *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  CUserCharacInfo *this_00;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = G_CGameManager();
  this_00 = (CUserCharacInfo *)CGameManager::getUser(iVar1,param_1);
  if (this_00 == (CUserCharacInfo *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR(this_00);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacNo(this_00);
      if (uVar3 == param_3) {
        CUser::OnItemUnlockWaitTimeout((int)this_00,param_2);
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
