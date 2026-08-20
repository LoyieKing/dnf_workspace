# CFirstServerOpenEvent

`_ZN21CFirstServerOpenEventC1Ev`

`CFirstServerOpenEvent::CFirstServerOpenEvent()`

| 类 | 地址 |
|---|---|
| `CFirstServerOpenEvent` | `0x0811ca78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ca78  _ZN21CFirstServerOpenEventC1Ev
#           CFirstServerOpenEvent::CFirstServerOpenEvent()
# range [0x0811ca78, 0x0811ca93]
0811ca78 +0x00:  push   %ebp
0811ca79 +0x01:  mov    %esp,%ebp
0811ca7b +0x03:  sub    $0x18,%esp
0811ca7e +0x06:  mov    0x8(%ebp),%eax
0811ca81 +0x09:  mov    %eax,(%esp)
0811ca84 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0811ca89 +0x11:  mov    0x8(%ebp),%eax
0811ca8c +0x14:  movl   $&_ZTV21CFirstServerOpenEvent+0x8,(%eax)
0811ca92 +0x1a:  leave
0811ca93 +0x1b:  ret
```

## 反编译 C

```c
// CFirstServerOpenEvent::CFirstServerOpenEvent @ 0x811ca78

/* CFirstServerOpenEvent::CFirstServerOpenEvent() */

void __thiscall CFirstServerOpenEvent::CFirstServerOpenEvent(CFirstServerOpenEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CFirstServerOpenEvent_08b530e8;
  return;
}
```
