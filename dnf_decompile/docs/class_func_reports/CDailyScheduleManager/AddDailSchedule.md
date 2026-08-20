# AddDailSchedule

`_ZN21CDailyScheduleManager15AddDailScheduleERKSt6vectorI14_DailyScheduleSaIS1_EE`

`CDailyScheduleManager::AddDailSchedule(std::vector<_DailySchedule, std::allocator<_DailySchedule> > const&)`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08125c3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08125c3c  _ZN21CDailyScheduleManager15AddDailScheduleERKSt6vectorI14_DailyScheduleSaIS1_EE
#           CDailyScheduleManager::AddDailSchedule(std::vector<_DailySchedule, std::allocator<_DailySchedule> > const&)
# range [0x08125c3c, 0x08125c93]
08125c3c +0x00:  push   %ebp
08125c3d +0x01:  mov    %esp,%ebp
08125c3f +0x03:  sub    $0x28,%esp
08125c42 +0x06:  mov    0xc(%ebp),%eax
08125c45 +0x09:  mov    %eax,(%esp)
08125c48 +0x0c:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
08125c4d +0x11:  mov    %eax,-0x10(%ebp)
08125c50 +0x14:  movl   $0x0,-0xc(%ebp)
08125c57 +0x1b:  jmp    08125c84 <+0x48>
08125c59 +0x1d:  mov    -0xc(%ebp),%eax
08125c5c +0x20:  mov    %eax,0x4(%esp)
08125c60 +0x24:  mov    0xc(%ebp),%eax
08125c63 +0x27:  mov    %eax,(%esp)
08125c66 +0x2a:  call   08127328 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0xb1>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0xb1
08125c6b +0x2f:  mov    0x8(%ebp),%edx
08125c6e +0x32:  add    $0xd8,%edx
08125c74 +0x38:  mov    %eax,0x4(%esp)
08125c78 +0x3c:  mov    %edx,(%esp)
08125c7b +0x3f:  call   08127342 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0xcb>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0xcb
08125c80 +0x44:  addl   $0x1,-0xc(%ebp)
08125c84 +0x48:  mov    -0xc(%ebp),%eax
08125c87 +0x4b:  cmp    -0x10(%ebp),%eax
08125c8a +0x4e:  setb   %al
08125c8d +0x51:  test   %al,%al
08125c8f +0x53:  jne    08125c59 <+0x1d>
08125c91 +0x55:  leave
08125c92 +0x56:  ret
08125c93 +0x57:  nop
```

## 反编译 C

```c
// CDailyScheduleManager::AddDailSchedule @ 0x8125c3c

/* CDailyScheduleManager::AddDailSchedule(std::vector<_DailySchedule, std::allocator<_DailySchedule>
   > const&) */

void __thiscall CDailyScheduleManager::AddDailSchedule(CDailyScheduleManager *this,vector *param_1)

{
  uint uVar1;
  _DailySchedule *p_Var2;
  uint local_10;
  
  uVar1 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                    ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)param_1);
  for (local_10 = 0; local_10 < uVar1; local_10 = local_10 + 1) {
    p_Var2 = (_DailySchedule *)
             std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                       ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)param_1,local_10);
    std::vector<_DailySchedule,std::allocator<_DailySchedule>>::push_back
              ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),p_Var2);
  }
  return;
}
```
