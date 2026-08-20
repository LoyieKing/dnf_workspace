# CharacDel

`_ZN15cUserHistoryLog9CharacDelEi`

`cUserHistoryLog::CharacDel(int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682ae0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682ae0  _ZN15cUserHistoryLog9CharacDelEi
#           cUserHistoryLog::CharacDel(int)
# range [0x08682ae0, 0x08682b2d]
08682ae0 +0x00:  push   %ebp
08682ae1 +0x01:  mov    %esp,%ebp
08682ae3 +0x03:  sub    $0x28,%esp
08682ae6 +0x06:  lea    -0x10(%ebp),%eax
08682ae9 +0x09:  mov    %eax,(%esp)
08682aec +0x0c:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
08682af1 +0x11:  mov    0xc(%ebp),%eax
08682af4 +0x14:  mov    0x8(%ebp),%edx
08682af7 +0x17:  mov    (%edx),%edx
08682af9 +0x19:  add    $0x796e8,%edx
08682aff +0x1f:  mov    %eax,0x4(%esp)
08682b03 +0x23:  mov    %edx,(%esp)
08682b06 +0x26:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08682b0b +0x2b:  movzbl 0x26(%eax),%eax
08682b0f +0x2f:  movsbl %al,%edx
08682b12 +0x32:  mov    0x8(%ebp),%eax
08682b15 +0x35:  mov    (%eax),%eax
08682b17 +0x37:  mov    %edx,0x8(%esp)
08682b1b +0x3b:  movl   $"Charac-,%d",0x4(%esp)
08682b23 +0x43:  mov    %eax,(%esp)
08682b26 +0x46:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682b2b +0x4b:  leave
08682b2c +0x4c:  ret
08682b2d +0x4d:  nop
```

## 反编译 C

```c
// cUserHistoryLog::CharacDel @ 0x8682ae0

/* cUserHistoryLog::CharacDel(int) */

void __thiscall cUserHistoryLog::CharacDel(cUserHistoryLog *this,int param_1)

{
  int iVar1;
  TimeLog_ local_14 [16];
  
  TimeLog_::setTime(local_14);
  iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(*(int *)this + 0x796e8),
                     param_1);
  CUser::LogHistory(*(CUser **)this,"Charac-,%d",(int)*(char *)(iVar1 + 0x26));
  return;
}
```
