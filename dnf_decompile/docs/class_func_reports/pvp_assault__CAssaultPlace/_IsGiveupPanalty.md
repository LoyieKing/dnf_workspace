# _IsGiveupPanalty

`_ZN11pvp_assault13CAssaultPlace16_IsGiveupPanaltyEb`

`pvp_assault::CAssaultPlace::_IsGiveupPanalty(bool)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082eacf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eacf4  _ZN11pvp_assault13CAssaultPlace16_IsGiveupPanaltyEb
#           pvp_assault::CAssaultPlace::_IsGiveupPanalty(bool)
# range [0x082eacf4, 0x082ead69]
082eacf4 +0x00:  push   %ebp
082eacf5 +0x01:  mov    %esp,%ebp
082eacf7 +0x03:  sub    $0x28,%esp
082eacfa +0x06:  mov    0xc(%ebp),%eax
082eacfd +0x09:  mov    %al,-0xc(%ebp)
082ead00 +0x0c:  mov    &_ZN10GlobalData15s_event_managerE,%eax
082ead05 +0x11:  movl   $0x20,0x4(%esp)
082ead0d +0x19:  mov    %eax,(%esp)
082ead10 +0x1c:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
082ead15 +0x21:  mov    (%eax),%edx
082ead17 +0x23:  add    $0x34,%edx
082ead1a +0x26:  mov    (%edx),%edx
082ead1c +0x28:  movl   $0x0,0x4(%esp)
082ead24 +0x30:  mov    %eax,(%esp)
082ead27 +0x33:  call   *%edx
082ead29 +0x35:  test   %al,%al
082ead2b +0x37:  je     082ead34 <+0x40>
082ead2d +0x39:  mov    $0x0,%eax
082ead32 +0x3e:  jmp    082ead67 <+0x73>
082ead34 +0x40:  mov    0x8(%ebp),%eax
082ead37 +0x43:  mov    0x10c(%eax),%eax
082ead3d +0x49:  cmp    $0x1,%eax
082ead40 +0x4c:  jle    082ead62 <+0x6e>
082ead42 +0x4e:  mov    0x8(%ebp),%eax
082ead45 +0x51:  mov    0x10c(%eax),%eax
082ead4b +0x57:  cmp    $0x4,%eax
082ead4e +0x5a:  jg     082ead62 <+0x6e>
082ead50 +0x5c:  movzbl -0xc(%ebp),%eax
082ead54 +0x60:  xor    $0x1,%eax
082ead57 +0x63:  test   %al,%al
082ead59 +0x65:  je     082ead62 <+0x6e>
082ead5b +0x67:  mov    $0x1,%eax
082ead60 +0x6c:  jmp    082ead67 <+0x73>
082ead62 +0x6e:  mov    $0x0,%eax
082ead67 +0x73:  leave
082ead68 +0x74:  ret
082ead69 +0x75:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_IsGiveupPanalty @ 0x82eacf4

/* pvp_assault::CAssaultPlace::_IsGiveupPanalty(bool) */

undefined4 __thiscall pvp_assault::CAssaultPlace::_IsGiveupPanalty(CAssaultPlace *this,bool param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x20);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\0') {
    if (((*(int *)(this + 0x10c) < 2) || (4 < *(int *)(this + 0x10c))) || (param_1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
