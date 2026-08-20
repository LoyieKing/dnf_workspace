# _processSepecialEffectContinuousItem

`_ZN21TimerFinishItemEffect36_processSepecialEffectContinuousItemEP5CUserj`

`TimerFinishItemEffect::_processSepecialEffectContinuousItem(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerFinishItemEffect` | `0x08637d64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637d64  _ZN21TimerFinishItemEffect36_processSepecialEffectContinuousItemEP5CUserj
#           TimerFinishItemEffect::_processSepecialEffectContinuousItem(CUser*, unsigned int)
# range [0x08637d64, 0x08637d91]
08637d64 +0x00:  push   %ebp
08637d65 +0x01:  mov    %esp,%ebp
08637d67 +0x03:  sub    $0x18,%esp
08637d6a +0x06:  mov    0x10(%ebp),%eax
08637d6d +0x09:  cmp    $0x1cd1,%eax
08637d72 +0x0e:  jne    08637d90 <+0x2c>
08637d74 +0x10:  mov    0xc(%ebp),%eax
08637d77 +0x13:  mov    $0x0,%edx
08637d7c +0x18:  mov    %edx,0x8(%esp)
08637d80 +0x1c:  movl   $0x0,0x4(%esp)
08637d88 +0x24:  mov    %eax,(%esp)
08637d8b +0x27:  call   0863be1c <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x32d>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x32d
08637d90 +0x2c:  leave
08637d91 +0x2d:  ret
```

## 反编译 C

```c
// TimerFinishItemEffect::_processSepecialEffectContinuousItem @ 0x8637d64

/* TimerFinishItemEffect::_processSepecialEffectContinuousItem(CUser*, unsigned int) */

void __thiscall
TimerFinishItemEffect::_processSepecialEffectContinuousItem
          (TimerFinishItemEffect *this,CUser *param_1,uint param_2)

{
  if (param_2 == 0x1cd1) {
    CUserCharacInfo::SetExpAffectItemEffect((CUserCharacInfo *)param_1,false,0.0);
  }
  return;
}
```
