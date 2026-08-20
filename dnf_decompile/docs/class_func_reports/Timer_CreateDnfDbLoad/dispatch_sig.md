# dispatch_sig

`_ZN21Timer_CreateDnfDbLoad12dispatch_sigEiij`

`Timer_CreateDnfDbLoad::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_CreateDnfDbLoad` | `0x0863ba46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863ba46  _ZN21Timer_CreateDnfDbLoad12dispatch_sigEiij
#           Timer_CreateDnfDbLoad::dispatch_sig(int, int, unsigned int)
# range [0x0863ba46, 0x0863baae]
0863ba46 +0x00:  push   %ebp
0863ba47 +0x01:  mov    %esp,%ebp
0863ba49 +0x03:  sub    $0x28,%esp
0863ba4c +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0863ba51 +0x0b:  movl   $0xa0,0x4(%esp)
0863ba59 +0x13:  mov    %eax,(%esp)
0863ba5c +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0863ba61 +0x1b:  mov    %eax,-0xc(%ebp)
0863ba64 +0x1e:  cmpl   $0x0,-0xc(%ebp)
0863ba68 +0x22:  je     0863ba8f <+0x49>
0863ba6a +0x24:  mov    -0xc(%ebp),%eax
0863ba6d +0x27:  mov    (%eax),%eax
0863ba6f +0x29:  add    $0x34,%eax
0863ba72 +0x2c:  mov    (%eax),%edx
0863ba74 +0x2e:  mov    -0xc(%ebp),%eax
0863ba77 +0x31:  movl   $0x0,0x4(%esp)
0863ba7f +0x39:  mov    %eax,(%esp)
0863ba82 +0x3c:  call   *%edx
0863ba84 +0x3e:  test   %al,%al
0863ba86 +0x40:  je     0863ba8f <+0x49>
0863ba88 +0x42:  mov    $0x1,%eax
0863ba8d +0x47:  jmp    0863ba94 <+0x4e>
0863ba8f +0x49:  mov    $0x0,%eax
0863ba94 +0x4e:  test   %al,%al
0863ba96 +0x50:  je     0863baa3 <+0x5d>
0863ba98 +0x52:  mov    -0xc(%ebp),%eax
0863ba9b +0x55:  mov    %eax,(%esp)
0863ba9e +0x58:  call   08163d4c <_ZN15CEventCreateDnf15RegistNextTimerEv>  ; CEventCreateDnf::RegistNextTimer()
0863baa3 +0x5d:  call   0815ba94 <_ZN26DBSelectCreateDnfEventInfo11makeRequestEv>  ; DBSelectCreateDnfEventInfo::makeRequest()
0863baa8 +0x62:  mov    $0x1,%eax
0863baad +0x67:  leave
0863baae +0x68:  ret
```

## 反编译 C

```c
// Timer_CreateDnfDbLoad::dispatch_sig @ 0x863ba46

/* Timer_CreateDnfDbLoad::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_CreateDnfDbLoad::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  CEventCreateDnf *this;
  
  this = (CEventCreateDnf *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
  if (this != (CEventCreateDnf *)0x0) {
    cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0863ba94;
    }
  }
  bVar1 = false;
LAB_0863ba94:
  if (bVar1) {
    CEventCreateDnf::RegistNextTimer(this);
  }
  DBSelectCreateDnfEventInfo::makeRequest();
  return 1;
}
```
