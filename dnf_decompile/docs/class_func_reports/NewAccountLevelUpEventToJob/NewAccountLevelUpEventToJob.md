# NewAccountLevelUpEventToJob

`_ZN27NewAccountLevelUpEventToJobC1Ev`

`NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()`

| 类 | 地址 |
|---|---|
| `NewAccountLevelUpEventToJob` | `0x081b8170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b8170  _ZN27NewAccountLevelUpEventToJobC1Ev
#           NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()
# range [0x081b8170, 0x081b818b]
081b8170 +0x00:  push   %ebp
081b8171 +0x01:  mov    %esp,%ebp
081b8173 +0x03:  sub    $0x18,%esp
081b8176 +0x06:  mov    0x8(%ebp),%eax
081b8179 +0x09:  mov    %eax,(%esp)
081b817c +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081b8181 +0x11:  mov    0x8(%ebp),%eax
081b8184 +0x14:  movl   $&_ZTV27NewAccountLevelUpEventToJob+0x8,(%eax)
081b818a +0x1a:  leave
081b818b +0x1b:  ret
```

## 反编译 C

```c
// NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob @ 0x81b8170

/* NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob() */

void __thiscall
NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob(NewAccountLevelUpEventToJob *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__NewAccountLevelUpEventToJob_08bbc948;
  return;
}
```
