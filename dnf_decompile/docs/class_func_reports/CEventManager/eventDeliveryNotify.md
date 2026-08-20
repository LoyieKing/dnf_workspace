# eventDeliveryNotify

`_ZN13CEventManager19eventDeliveryNotifyEiR11DeliveryMsg`

`CEventManager::eventDeliveryNotify(int, DeliveryMsg&)`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08116874` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08116874  _ZN13CEventManager19eventDeliveryNotifyEiR11DeliveryMsg
#           CEventManager::eventDeliveryNotify(int, DeliveryMsg&)
# range [0x08116874, 0x081168aa]
08116874 +0x00:  push   %ebp
08116875 +0x01:  mov    %esp,%ebp
08116877 +0x03:  sub    $0x18,%esp
0811687a +0x06:  mov    0x8(%ebp),%eax
0811687d +0x09:  mov    0x298(%eax),%eax
08116883 +0x0f:  test   %eax,%eax
08116885 +0x11:  je     081168a8 <+0x34>
08116887 +0x13:  mov    0x8(%ebp),%eax
0811688a +0x16:  mov    0x298(%eax),%eax
08116890 +0x1c:  mov    0x10(%ebp),%edx
08116893 +0x1f:  mov    %edx,0x8(%esp)
08116897 +0x23:  mov    0xc(%ebp),%edx
0811689a +0x26:  mov    %edx,0x4(%esp)
0811689e +0x2a:  mov    %eax,(%esp)
081168a1 +0x2d:  call   08116682 <_ZN9CDelivery6notifyEiR11DeliveryMsg>  ; CDelivery::notify(int, DeliveryMsg&)
081168a6 +0x32:  jmp    081168a9 <+0x35>
081168a8 +0x34:  nop
081168a9 +0x35:  leave
081168aa +0x36:  ret
```

## 反编译 C

```c
// CEventManager::eventDeliveryNotify @ 0x8116874

/* CEventManager::eventDeliveryNotify(int, DeliveryMsg&) */

void __thiscall
CEventManager::eventDeliveryNotify(CEventManager *this,int param_1,DeliveryMsg *param_2)

{
  if (*(int *)(this + 0x298) != 0) {
    CDelivery::notify(*(CDelivery **)(this + 0x298),param_1,param_2);
  }
  return;
}
```
