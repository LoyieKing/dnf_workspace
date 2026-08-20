# GetMaxRewardStep

`_ZN22CConditionEventManager16GetMaxRewardStepEs`

`CConditionEventManager::GetMaxRewardStep(short)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x083354f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083354f0  _ZN22CConditionEventManager16GetMaxRewardStepEs
#           CConditionEventManager::GetMaxRewardStep(short)
# range [0x083354f0, 0x08335565]
083354f0 +0x00:  push   %ebp
083354f1 +0x01:  mov    %esp,%ebp
083354f3 +0x03:  sub    $0x38,%esp
083354f6 +0x06:  mov    0xc(%ebp),%eax
083354f9 +0x09:  mov    %ax,-0x1c(%ebp)
083354fd +0x0d:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08335502 +0x12:  movl   $0x71,0x4(%esp)
0833550a +0x1a:  mov    %eax,(%esp)
0833550d +0x1d:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08335512 +0x22:  mov    (%eax),%edx
08335514 +0x24:  add    $0x34,%edx
08335517 +0x27:  mov    (%edx),%edx
08335519 +0x29:  movl   $0x0,0x4(%esp)
08335521 +0x31:  mov    %eax,(%esp)
08335524 +0x34:  call   *%edx
08335526 +0x36:  xor    $0x1,%eax
08335529 +0x39:  test   %al,%al
0833552b +0x3b:  je     08335534 <+0x44>
0833552d +0x3d:  mov    $0x0,%eax
08335532 +0x42:  jmp    08335564 <+0x74>
08335534 +0x44:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08335539 +0x49:  mov    0x4d98(%eax),%eax
0833553f +0x4f:  mov    %eax,-0xc(%ebp)
08335542 +0x52:  movswl -0x1c(%ebp),%eax
08335546 +0x56:  cmp    -0xc(%ebp),%eax
08335549 +0x59:  je     08335552 <+0x62>
0833554b +0x5b:  mov    $0x0,%eax
08335550 +0x60:  jmp    08335564 <+0x74>
08335552 +0x62:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08335557 +0x67:  add    $0x4da0,%eax
0833555c +0x6c:  mov    %eax,(%esp)
0833555f +0x6f:  call   081119d0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xee2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xee2
08335564 +0x74:  leave
08335565 +0x75:  ret
```

## 反编译 C

```c
// CConditionEventManager::GetMaxRewardStep @ 0x83354f0

/* CConditionEventManager::GetMaxRewardStep(short) */

undefined4 __thiscall
CConditionEventManager::GetMaxRewardStep(CConditionEventManager *this,short param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    iVar4 = G_CDataManager();
    if ((int)param_1 == *(int *)(iVar4 + 0x4d98)) {
      iVar4 = G_CDataManager();
      uVar3 = std::
              map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
              ::size((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
                      *)(iVar4 + 0x4da0));
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
