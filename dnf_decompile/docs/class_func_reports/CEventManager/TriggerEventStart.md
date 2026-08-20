# TriggerEventStart

`_ZN13CEventManager17TriggerEventStartEi10Word_Param`

`CEventManager::TriggerEventStart(int, Word_Param)`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08115cc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08115cc6  _ZN13CEventManager17TriggerEventStartEi10Word_Param
#           CEventManager::TriggerEventStart(int, Word_Param)
# range [0x08115cc6, 0x08115d5f]
08115cc6 +0x00:  push   %ebp
08115cc7 +0x01:  mov    %esp,%ebp
08115cc9 +0x03:  sub    $0x28,%esp
08115ccc +0x06:  mov    0xc(%ebp),%eax
08115ccf +0x09:  mov    %eax,(%esp)
08115cd2 +0x0c:  call   08115bf4 <_Z11filterEventi>  ; filterEvent(int)
08115cd7 +0x11:  test   %al,%al
08115cd9 +0x13:  je     08115ce2 <+0x1c>
08115cdb +0x15:  mov    $0x1,%eax
08115ce0 +0x1a:  jmp    08115d5e <+0x98>
08115ce2 +0x1c:  mov    0xc(%ebp),%eax
08115ce5 +0x1f:  mov    %eax,0x4(%esp)
08115ce9 +0x23:  mov    0x8(%ebp),%eax
08115cec +0x26:  mov    %eax,(%esp)
08115cef +0x29:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08115cf4 +0x2e:  mov    %eax,-0xc(%ebp)
08115cf7 +0x31:  cmpl   $0x0,-0xc(%ebp)
08115cfb +0x35:  je     08115d59 <+0x93>
08115cfd +0x37:  mov    -0xc(%ebp),%eax
08115d00 +0x3a:  mov    (%eax),%eax
08115d02 +0x3c:  add    $0x10,%eax
08115d05 +0x3f:  mov    (%eax),%edx
08115d07 +0x41:  mov    0x10(%ebp),%eax
08115d0a +0x44:  mov    %eax,0x4(%esp)
08115d0e +0x48:  mov    -0xc(%ebp),%eax
08115d11 +0x4b:  mov    %eax,(%esp)
08115d14 +0x4e:  call   *%edx
08115d16 +0x50:  mov    0x8(%ebp),%eax
08115d19 +0x53:  mov    %eax,(%esp)
08115d1c +0x56:  call   08116108 <_ZN13CEventManager18BroadcastEventInfoEv>  ; CEventManager::BroadcastEventInfo()
08115d21 +0x5b:  mov    -0xc(%ebp),%eax
08115d24 +0x5e:  mov    (%eax),%eax
08115d26 +0x60:  add    $0x28,%eax
08115d29 +0x63:  mov    (%eax),%edx
08115d2b +0x65:  mov    0x8(%ebp),%eax
08115d2e +0x68:  mov    0x298(%eax),%eax
08115d34 +0x6e:  mov    %eax,0x4(%esp)
08115d38 +0x72:  mov    -0xc(%ebp),%eax
08115d3b +0x75:  mov    %eax,(%esp)
08115d3e +0x78:  call   *%edx
08115d40 +0x7a:  mov    -0xc(%ebp),%eax
08115d43 +0x7d:  mov    (%eax),%eax
08115d45 +0x7f:  add    $0x14,%eax
08115d48 +0x82:  mov    (%eax),%edx
08115d4a +0x84:  mov    -0xc(%ebp),%eax
08115d4d +0x87:  mov    %eax,(%esp)
08115d50 +0x8a:  call   *%edx
08115d52 +0x8c:  mov    $0x1,%eax
08115d57 +0x91:  jmp    08115d5e <+0x98>
08115d59 +0x93:  mov    $0x0,%eax
08115d5e +0x98:  leave
08115d5f +0x99:  ret
```

## 反编译 C

```c
// CEventManager::TriggerEventStart @ 0x8115cc6

/* CEventManager::TriggerEventStart(int, Word_Param) */

undefined4 __thiscall
CEventManager::TriggerEventStart(CEventManager *this,int param_1,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  
  cVar1 = filterEvent(param_1);
  if (cVar1 == '\0') {
    piVar3 = (int *)GetRepeatEvent(this,param_1);
    if (piVar3 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      (**(code **)(*piVar3 + 0x10))(piVar3,param_3);
      BroadcastEventInfo(this);
      (**(code **)(*piVar3 + 0x28))(piVar3,*(undefined4 *)(this + 0x298));
      (**(code **)(*piVar3 + 0x14))(piVar3);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
