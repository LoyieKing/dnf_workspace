# dispatch_sig

`_ZN36TimerStartExpEventAfterVillageAttack12dispatch_sigEiij`

`TimerStartExpEventAfterVillageAttack::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerStartExpEventAfterVillageAttack` | `0x0863949e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863949e  _ZN36TimerStartExpEventAfterVillageAttack12dispatch_sigEiij
#           TimerStartExpEventAfterVillageAttack::dispatch_sig(int, int, unsigned int)
# range [0x0863949e, 0x086394cd]
0863949e +0x00:  push   %ebp
0863949f +0x01:  mov    %esp,%ebp
086394a1 +0x03:  sub    $0x28,%esp
086394a4 +0x06:  movw   $0x64,-0xc(%ebp)
086394aa +0x0c:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086394af +0x11:  mov    -0xc(%ebp),%edx
086394b2 +0x14:  mov    %edx,0x8(%esp)
086394b6 +0x18:  movl   $0x3,0x4(%esp)
086394be +0x20:  mov    %eax,(%esp)
086394c1 +0x23:  call   08115cc6 <_ZN13CEventManager17TriggerEventStartEi10Word_Param>  ; CEventManager::TriggerEventStart(int, Word_Param)
086394c6 +0x28:  mov    $0x1,%eax
086394cb +0x2d:  leave
086394cc +0x2e:  ret
086394cd +0x2f:  nop
```

## 反编译 C

```c
// TimerStartExpEventAfterVillageAttack::dispatch_sig @ 0x863949e

/* TimerStartExpEventAfterVillageAttack::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStartExpEventAfterVillageAttack::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CEventManager::TriggerEventStart(GlobalData::s_event_manager,3,100);
  return 1;
}
```
