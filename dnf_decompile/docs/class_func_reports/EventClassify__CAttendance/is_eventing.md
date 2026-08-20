# is_eventing

`_ZN13EventClassify11CAttendance11is_eventingEv`

`EventClassify::CAttendance::is_eventing()`

| 类 | 地址 |
|---|---|
| `EventClassify::CAttendance` | `0x0810e75c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e75c  _ZN13EventClassify11CAttendance11is_eventingEv
#           EventClassify::CAttendance::is_eventing()
# range [0x0810e75c, 0x0810e7cb]
0810e75c +0x00:  push   %ebp
0810e75d +0x01:  mov    %esp,%ebp
0810e75f +0x03:  sub    $0x28,%esp
0810e762 +0x06:  mov    0x8(%ebp),%eax
0810e765 +0x09:  mov    %eax,(%esp)
0810e768 +0x0c:  call   0810b016 <_ZN13EventClassify12CEventEntity11is_eventingEv>  ; EventClassify::CEventEntity::is_eventing()
0810e76d +0x11:  test   %al,%al
0810e76f +0x13:  je     0810e7c4 <+0x68>
0810e771 +0x15:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0810e776 +0x1a:  movl   $0x56,0x4(%esp)
0810e77e +0x22:  mov    %eax,(%esp)
0810e781 +0x25:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0810e786 +0x2a:  mov    %eax,-0xc(%ebp)
0810e789 +0x2d:  cmpl   $0x0,-0xc(%ebp)
0810e78d +0x31:  je     0810e7b4 <+0x58>
0810e78f +0x33:  mov    -0xc(%ebp),%eax
0810e792 +0x36:  mov    (%eax),%eax
0810e794 +0x38:  add    $0x34,%eax
0810e797 +0x3b:  mov    (%eax),%edx
0810e799 +0x3d:  mov    -0xc(%ebp),%eax
0810e79c +0x40:  movl   $0x0,0x4(%esp)
0810e7a4 +0x48:  mov    %eax,(%esp)
0810e7a7 +0x4b:  call   *%edx
0810e7a9 +0x4d:  test   %al,%al
0810e7ab +0x4f:  je     0810e7b4 <+0x58>
0810e7ad +0x51:  mov    $0x1,%eax
0810e7b2 +0x56:  jmp    0810e7b9 <+0x5d>
0810e7b4 +0x58:  mov    $0x0,%eax
0810e7b9 +0x5d:  test   %al,%al
0810e7bb +0x5f:  je     0810e7c4 <+0x68>
0810e7bd +0x61:  mov    $0x1,%eax
0810e7c2 +0x66:  jmp    0810e7c9 <+0x6d>
0810e7c4 +0x68:  mov    $0x0,%eax
0810e7c9 +0x6d:  leave
0810e7ca +0x6e:  ret
0810e7cb +0x6f:  nop
```

## 反编译 C

```c
// EventClassify::CAttendance::is_eventing @ 0x810e75c

/* EventClassify::CAttendance::is_eventing() */

undefined4 __thiscall EventClassify::CAttendance::is_eventing(CAttendance *this)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = CEventEntity::is_eventing((CEventEntity *)this);
  if (cVar2 != '\0') {
    piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x56);
    if ((piVar3 == (int *)0x0) || (cVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,0), cVar2 == '\0'))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}
```
