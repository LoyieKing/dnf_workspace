# dispatch_sig

`_ZN23TimerInsertUserPlayTime12dispatch_sigEiij`

`TimerInsertUserPlayTime::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerInsertUserPlayTime` | `0x08636d0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636d0a  _ZN23TimerInsertUserPlayTime12dispatch_sigEiij
#           TimerInsertUserPlayTime::dispatch_sig(int, int, unsigned int)
# range [0x08636d0a, 0x08636d43]
08636d0a +0x00:  push   %ebp
08636d0b +0x01:  mov    %esp,%ebp
08636d0d +0x03:  sub    $0x28,%esp
08636d10 +0x06:  call   0860cba5 <_Z35GetInstanceUserPlayTimeStatisticMgrv>  ; GetInstanceUserPlayTimeStatisticMgr()
08636d15 +0x0b:  mov    %eax,(%esp)
08636d18 +0x0e:  call   0860cd14 <_ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv>  ; CUserPlayTimeStatisticMgr::InsertUserPlayTime()
08636d1d +0x13:  mov    0x8(%ebp),%eax
08636d20 +0x16:  mov    %eax,(%esp)
08636d23 +0x19:  call   08636d44 <_ZN23TimerInsertUserPlayTime15RegistNextTimerEv>  ; TimerInsertUserPlayTime::RegistNextTimer()
08636d28 +0x1e:  mov    %al,-0x9(%ebp)
08636d2b +0x21:  movzbl -0x9(%ebp),%eax
08636d2f +0x25:  xor    $0x1,%eax
08636d32 +0x28:  test   %al,%al
08636d34 +0x2a:  je     08636d3d <+0x33>
08636d36 +0x2c:  mov    $0x0,%eax
08636d3b +0x31:  jmp    08636d42 <+0x38>
08636d3d +0x33:  mov    $0x1,%eax
08636d42 +0x38:  leave
08636d43 +0x39:  ret
```

## 反编译 C

```c
// TimerInsertUserPlayTime::dispatch_sig @ 0x8636d0a

/* TimerInsertUserPlayTime::dispatch_sig(int, int, unsigned int) */

bool TimerInsertUserPlayTime::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  CUserPlayTimeStatisticMgr *this;
  
  this = (CUserPlayTimeStatisticMgr *)GetInstanceUserPlayTimeStatisticMgr();
  CUserPlayTimeStatisticMgr::InsertUserPlayTime(this);
  cVar1 = RegistNextTimer();
  return cVar1 == '\x01';
}
```
