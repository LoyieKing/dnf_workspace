# processGrowthCreatureEvent

`_ZN13Inter_LoadEtc26processGrowthCreatureEventER5CUser`

`Inter_LoadEtc::processGrowthCreatureEvent(CUser&)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084e83c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e83c2  _ZN13Inter_LoadEtc26processGrowthCreatureEventER5CUser
#           Inter_LoadEtc::processGrowthCreatureEvent(CUser&)
# range [0x084e83c2, 0x084e8427]
084e83c2 +0x00:  push   %ebp
084e83c3 +0x01:  mov    %esp,%ebp
084e83c5 +0x03:  sub    $0x28,%esp
084e83c8 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084e83cd +0x0b:  movl   $0x67,0x4(%esp)
084e83d5 +0x13:  mov    %eax,(%esp)
084e83d8 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084e83dd +0x1b:  mov    (%eax),%edx
084e83df +0x1d:  add    $0x34,%edx
084e83e2 +0x20:  mov    (%edx),%edx
084e83e4 +0x22:  movl   $0x0,0x4(%esp)
084e83ec +0x2a:  mov    %eax,(%esp)
084e83ef +0x2d:  call   *%edx
084e83f1 +0x2f:  test   %al,%al
084e83f3 +0x31:  je     084e8425 <+0x63>
084e83f5 +0x33:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084e83fa +0x38:  movl   $0x67,0x4(%esp)
084e8402 +0x40:  mov    %eax,(%esp)
084e8405 +0x43:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084e840a +0x48:  mov    %eax,-0xc(%ebp)
084e840d +0x4b:  cmpl   $0x0,-0xc(%ebp)
084e8411 +0x4f:  je     084e8425 <+0x63>
084e8413 +0x51:  mov    0xc(%ebp),%eax
084e8416 +0x54:  mov    %eax,0x4(%esp)
084e841a +0x58:  mov    -0xc(%ebp),%eax
084e841d +0x5b:  mov    %eax,(%esp)
084e8420 +0x5e:  call   081b6b70 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser>  ; GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(CUser&)
084e8425 +0x63:  leave
084e8426 +0x64:  ret
084e8427 +0x65:  nop
```

## 反编译 C

```c
// Inter_LoadEtc::processGrowthCreatureEvent @ 0x84e83c2

/* Inter_LoadEtc::processGrowthCreatureEvent(CUser&) */

void __thiscall Inter_LoadEtc::processGrowthCreatureEvent(Inter_LoadEtc *this,CUser *param_1)

{
  char cVar1;
  int *piVar2;
  GiveGrowCreatureEvent *this_00;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    this_00 = (GiveGrowCreatureEvent *)
              CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
    if (this_00 != (GiveGrowCreatureEvent *)0x0) {
      GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(this_00,param_1);
    }
  }
  return;
}
```
