# IsOpenScheduleQuest

`_ZNK5Quest19IsOpenScheduleQuestEv`

`Quest::IsOpenScheduleQuest() const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08353776` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08353776  _ZNK5Quest19IsOpenScheduleQuestEv
#           Quest::IsOpenScheduleQuest() const
# range [0x08353776, 0x083537c1]
08353776 +0x00:  push   %ebp
08353777 +0x01:  mov    %esp,%ebp
08353779 +0x03:  sub    $0x28,%esp
0835377c +0x06:  movl   $0x0,-0x10(%ebp)
08353783 +0x0d:  mov    0x8(%ebp),%eax
08353786 +0x10:  mov    0x4(%eax),%eax
08353789 +0x13:  mov    %eax,%edx
0835378b +0x15:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
08353790 +0x1a:  mov    %edx,0x8(%esp)
08353794 +0x1e:  movl   $0x1,0x4(%esp)
0835379c +0x26:  mov    %eax,(%esp)
0835379f +0x29:  call   081266e2 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej>  ; CDailyScheduleManager::GetScheduleState(_DailyScheduleType, unsigned int) const
083537a4 +0x2e:  mov    %eax,-0xc(%ebp)
083537a7 +0x31:  cmpl   $0x1,-0xc(%ebp)
083537ab +0x35:  je     083537b3 <+0x3d>
083537ad +0x37:  cmpl   $0x2,-0xc(%ebp)
083537b1 +0x3b:  jne    083537ba <+0x44>
083537b3 +0x3d:  mov    $0x1,%eax
083537b8 +0x42:  jmp    083537bf <+0x49>
083537ba +0x44:  mov    $0x0,%eax
083537bf +0x49:  leave
083537c0 +0x4a:  ret
083537c1 +0x4b:  nop
```

## 反编译 C

```c
// Quest::IsOpenScheduleQuest @ 0x8353776

/* Quest::IsOpenScheduleQuest() const */

undefined4 __thiscall Quest::IsOpenScheduleQuest(Quest *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CDailyScheduleManager::GetScheduleState
                    (GlobalData::s_DailyScheduleManager,1,*(undefined4 *)(this + 4));
  if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
