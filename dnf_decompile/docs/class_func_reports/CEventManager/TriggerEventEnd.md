# TriggerEventEnd

`_ZN13CEventManager15TriggerEventEndEi`

`CEventManager::TriggerEventEnd(int)`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08115d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08115d60  _ZN13CEventManager15TriggerEventEndEi
#           CEventManager::TriggerEventEnd(int)
# range [0x08115d60, 0x08115de1]
08115d60 +0x00:  push   %ebp
08115d61 +0x01:  mov    %esp,%ebp
08115d63 +0x03:  sub    $0x28,%esp
08115d66 +0x06:  mov    0xc(%ebp),%eax
08115d69 +0x09:  mov    %eax,(%esp)
08115d6c +0x0c:  call   08115bf4 <_Z11filterEventi>  ; filterEvent(int)
08115d71 +0x11:  test   %al,%al
08115d73 +0x13:  je     08115d7c <+0x1c>
08115d75 +0x15:  mov    $0x1,%eax
08115d7a +0x1a:  jmp    08115ddf <+0x7f>
08115d7c +0x1c:  mov    0xc(%ebp),%eax
08115d7f +0x1f:  mov    %eax,0x4(%esp)
08115d83 +0x23:  mov    0x8(%ebp),%eax
08115d86 +0x26:  mov    %eax,(%esp)
08115d89 +0x29:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08115d8e +0x2e:  mov    %eax,-0xc(%ebp)
08115d91 +0x31:  cmpl   $0x0,-0xc(%ebp)
08115d95 +0x35:  je     08115dda <+0x7a>
08115d97 +0x37:  mov    -0xc(%ebp),%eax
08115d9a +0x3a:  mov    (%eax),%eax
08115d9c +0x3c:  add    $0x2c,%eax
08115d9f +0x3f:  mov    (%eax),%edx
08115da1 +0x41:  mov    0x8(%ebp),%eax
08115da4 +0x44:  mov    0x298(%eax),%eax
08115daa +0x4a:  mov    %eax,0x4(%esp)
08115dae +0x4e:  mov    -0xc(%ebp),%eax
08115db1 +0x51:  mov    %eax,(%esp)
08115db4 +0x54:  call   *%edx
08115db6 +0x56:  mov    0x8(%ebp),%eax
08115db9 +0x59:  mov    %eax,(%esp)
08115dbc +0x5c:  call   08116108 <_ZN13CEventManager18BroadcastEventInfoEv>  ; CEventManager::BroadcastEventInfo()
08115dc1 +0x61:  mov    -0xc(%ebp),%eax
08115dc4 +0x64:  mov    (%eax),%eax
08115dc6 +0x66:  add    $0xc,%eax
08115dc9 +0x69:  mov    (%eax),%edx
08115dcb +0x6b:  mov    -0xc(%ebp),%eax
08115dce +0x6e:  mov    %eax,(%esp)
08115dd1 +0x71:  call   *%edx
08115dd3 +0x73:  mov    $0x1,%eax
08115dd8 +0x78:  jmp    08115ddf <+0x7f>
08115dda +0x7a:  mov    $0x0,%eax
08115ddf +0x7f:  leave
08115de0 +0x80:  ret
08115de1 +0x81:  nop
```

## 反编译 C

```c
// CEventManager::TriggerEventEnd @ 0x8115d60

/* CEventManager::TriggerEventEnd(int) */

undefined4 __thiscall CEventManager::TriggerEventEnd(CEventManager *this,int param_1)

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
      (**(code **)(*piVar3 + 0x2c))(piVar3,*(undefined4 *)(this + 0x298));
      BroadcastEventInfo(this);
      (**(code **)(*piVar3 + 0xc))(piVar3);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
