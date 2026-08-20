# IsEventing

`_ZN21CFirstServerOpenEvent10IsEventingEP5CUser`

`CFirstServerOpenEvent::IsEventing(CUser*)`

| 类 | 地址 |
|---|---|
| `CFirstServerOpenEvent` | `0x0811cbd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cbd8  _ZN21CFirstServerOpenEvent10IsEventingEP5CUser
#           CFirstServerOpenEvent::IsEventing(CUser*)
# range [0x0811cbd8, 0x0811cc05]
0811cbd8 +0x00:  push   %ebp
0811cbd9 +0x01:  mov    %esp,%ebp
0811cbdb +0x03:  sub    $0x18,%esp
0811cbde +0x06:  mov    0x8(%ebp),%eax
0811cbe1 +0x09:  movl   $0x0,0x4(%esp)
0811cbe9 +0x11:  mov    %eax,(%esp)
0811cbec +0x14:  call   080c84fa <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x52>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x52
0811cbf1 +0x19:  xor    $0x1,%eax
0811cbf4 +0x1c:  test   %al,%al
0811cbf6 +0x1e:  je     0811cbff <+0x27>
0811cbf8 +0x20:  mov    $0x0,%eax
0811cbfd +0x25:  jmp    0811cc04 <+0x2c>
0811cbff +0x27:  mov    $0x1,%eax
0811cc04 +0x2c:  leave
0811cc05 +0x2d:  ret
```

## 反编译 C

```c
// CFirstServerOpenEvent::IsEventing @ 0x811cbd8

/* CFirstServerOpenEvent::IsEventing(CUser*) */

bool CFirstServerOpenEvent::IsEventing(CUser *param_1)

{
  char cVar1;
  
  cVar1 = CEventBase::IsEventing(param_1);
  return cVar1 == '\x01';
}
```
