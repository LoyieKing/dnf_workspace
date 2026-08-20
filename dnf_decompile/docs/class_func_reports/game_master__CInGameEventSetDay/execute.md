# execute

`_ZN11game_master18CInGameEventSetDay7executeEv`

`game_master::CInGameEventSetDay::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CInGameEventSetDay` | `0x084b0a08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0a08  _ZN11game_master18CInGameEventSetDay7executeEv
#           game_master::CInGameEventSetDay::execute()
# range [0x084b0a08, 0x084b0a33]
084b0a08 +0x00:  push   %ebp
084b0a09 +0x01:  mov    %esp,%ebp
084b0a0b +0x03:  push   %ebx
084b0a0c +0x04:  sub    $0x14,%esp
084b0a0f +0x07:  mov    0x8(%ebp),%eax
084b0a12 +0x0a:  mov    0x8(%eax),%ebx
084b0a15 +0x0d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b0a1a +0x12:  mov    %eax,(%esp)
084b0a1d +0x15:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084b0a22 +0x1a:  mov    %ebx,0x4(%esp)
084b0a26 +0x1e:  mov    %eax,(%esp)
084b0a29 +0x21:  call   0810cc70 <_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi>  ; EventClassify::CEventScriptMng::test_process_change_day(int)
084b0a2e +0x26:  add    $0x14,%esp
084b0a31 +0x29:  pop    %ebx
084b0a32 +0x2a:  pop    %ebp
084b0a33 +0x2b:  ret
```

## 反编译 C

```c
// game_master::CInGameEventSetDay::execute @ 0x84b0a08

/* game_master::CInGameEventSetDay::execute() */

void __thiscall game_master::CInGameEventSetDay::execute(CInGameEventSetDay *this)

{
  int iVar1;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  
  iVar1 = *(int *)(this + 8);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  EventClassify::CEventScriptMng::test_process_change_day(this_01,iVar1);
  return;
}
```
