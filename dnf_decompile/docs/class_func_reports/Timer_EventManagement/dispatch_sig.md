# dispatch_sig

`_ZN21Timer_EventManagement12dispatch_sigEiij`

`Timer_EventManagement::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_EventManagement` | `0x0863ab92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863ab92  _ZN21Timer_EventManagement12dispatch_sigEiij
#           Timer_EventManagement::dispatch_sig(int, int, unsigned int)
# range [0x0863ab92, 0x0863abd3]
0863ab92 +0x00:  push   %ebp
0863ab93 +0x01:  mov    %esp,%ebp
0863ab95 +0x03:  push   %ebx
0863ab96 +0x04:  sub    $0x14,%esp
0863ab99 +0x07:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0863ab9e +0x0c:  mov    0x37c(%eax),%ebx
0863aba4 +0x12:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0863aba9 +0x17:  mov    %eax,(%esp)
0863abac +0x1a:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
0863abb1 +0x1f:  mov    %ebx,0x4(%esp)
0863abb5 +0x23:  mov    %eax,(%esp)
0863abb8 +0x26:  call   0810c5d2 <_ZN13EventClassify15CEventScriptMng18update_time_valuesEi>  ; EventClassify::CEventScriptMng::update_time_values(int)
0863abbd +0x2b:  movl   $0x3c,(%esp)
0863abc4 +0x32:  call   0863abd4 <_ZN21Timer_EventManagement15RegistNextTimerEi>  ; Timer_EventManagement::RegistNextTimer(int)
0863abc9 +0x37:  mov    $0x1,%eax
0863abce +0x3c:  add    $0x14,%esp
0863abd1 +0x3f:  pop    %ebx
0863abd2 +0x40:  pop    %ebp
0863abd3 +0x41:  ret
```

## 反编译 C

```c
// Timer_EventManagement::dispatch_sig @ 0x863ab92

/* Timer_EventManagement::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_EventManagement::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  CDataManager *this;
  CEventScriptMng *this_00;
  
  iVar1 = G_CEnvironment();
  iVar1 = *(int *)(iVar1 + 0x37c);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  EventClassify::CEventScriptMng::update_time_values(this_00,iVar1);
  RegistNextTimer(0x3c);
  return 1;
}
```
