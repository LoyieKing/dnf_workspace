# dispatch_sig

`_ZN16TimerNatTypeUser12dispatch_sigEiij`

`TimerNatTypeUser::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerNatTypeUser` | `0x08635caa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635caa  _ZN16TimerNatTypeUser12dispatch_sigEiij
#           TimerNatTypeUser::dispatch_sig(int, int, unsigned int)
# range [0x08635caa, 0x08635ccf]
08635caa +0x00:  push   %ebp
08635cab +0x01:  mov    %esp,%ebp
08635cad +0x03:  sub    $0x18,%esp
08635cb0 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08635cb5 +0x0b:  mov    %eax,(%esp)
08635cb8 +0x0e:  call   086cd2f6 <_ZN9GameWorld17UpdateNatTypeUserEv>  ; GameWorld::UpdateNatTypeUser()
08635cbd +0x13:  mov    0x8(%ebp),%eax
08635cc0 +0x16:  mov    %eax,(%esp)
08635cc3 +0x19:  call   08635cd0 <_ZN16TimerNatTypeUser15RegistNextTimerEv>  ; TimerNatTypeUser::RegistNextTimer()
08635cc8 +0x1e:  mov    $0x1,%eax
08635ccd +0x23:  leave
08635cce +0x24:  ret
08635ccf +0x25:  nop
```

## 反编译 C

```c
// TimerNatTypeUser::dispatch_sig @ 0x8635caa

/* TimerNatTypeUser::dispatch_sig(int, int, unsigned int) */

undefined4 TimerNatTypeUser::dispatch_sig(int param_1,int param_2,uint param_3)

{
  G_GameWorld();
  GameWorld::UpdateNatTypeUser();
  RegistNextTimer();
  return 1;
}
```
