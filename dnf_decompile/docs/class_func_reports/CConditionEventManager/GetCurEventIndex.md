# GetCurEventIndex

`_ZN22CConditionEventManager16GetCurEventIndexEv`

`CConditionEventManager::GetCurEventIndex()`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x08335754` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08335754  _ZN22CConditionEventManager16GetCurEventIndexEv
#           CConditionEventManager::GetCurEventIndex()
# range [0x08335754, 0x0833579d]
08335754 +0x00:  push   %ebp
08335755 +0x01:  mov    %esp,%ebp
08335757 +0x03:  sub    $0x18,%esp
0833575a +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0833575f +0x0b:  movl   $0x71,0x4(%esp)
08335767 +0x13:  mov    %eax,(%esp)
0833576a +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0833576f +0x1b:  mov    (%eax),%edx
08335771 +0x1d:  add    $0x34,%edx
08335774 +0x20:  mov    (%edx),%edx
08335776 +0x22:  movl   $0x0,0x4(%esp)
0833577e +0x2a:  mov    %eax,(%esp)
08335781 +0x2d:  call   *%edx
08335783 +0x2f:  xor    $0x1,%eax
08335786 +0x32:  test   %al,%al
08335788 +0x34:  je     08335791 <+0x3d>
0833578a +0x36:  mov    $0x0,%eax
0833578f +0x3b:  jmp    0833579c <+0x48>
08335791 +0x3d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08335796 +0x42:  mov    0x4d98(%eax),%eax
0833579c +0x48:  leave
0833579d +0x49:  ret
```

## 反编译 C

```c
// CConditionEventManager::GetCurEventIndex @ 0x8335754

/* CConditionEventManager::GetCurEventIndex() */

undefined4 CConditionEventManager::GetCurEventIndex(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    iVar4 = G_CDataManager();
    uVar3 = *(undefined4 *)(iVar4 + 0x4d98);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
