# GetScheduleState

`_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej`

`CDailyScheduleManager::GetScheduleState(_DailyScheduleType, unsigned int) const`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x081266e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081266e2  _ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej
#           CDailyScheduleManager::GetScheduleState(_DailyScheduleType, unsigned int) const
# range [0x081266e2, 0x081267bb]
081266e2 +0x00:  push   %ebp
081266e3 +0x01:  mov    %esp,%ebp
081266e5 +0x03:  push   %ebx
081266e6 +0x04:  sub    $0x24,%esp
081266e9 +0x07:  mov    0x8(%ebp),%eax
081266ec +0x0a:  add    $0xd8,%eax
081266f1 +0x0f:  mov    %eax,(%esp)
081266f4 +0x12:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
081266f9 +0x17:  mov    %eax,-0x10(%ebp)
081266fc +0x1a:  movl   $0x0,-0xc(%ebp)
08126703 +0x21:  jmp    081267a0 <+0xbe>
08126708 +0x26:  mov    0x8(%ebp),%eax
0812670b +0x29:  lea    0xd8(%eax),%edx
08126711 +0x2f:  mov    -0xc(%ebp),%eax
08126714 +0x32:  mov    %eax,0x4(%esp)
08126718 +0x36:  mov    %edx,(%esp)
0812671b +0x39:  call   08127328 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0xb1>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0xb1
08126720 +0x3e:  mov    0x8(%eax),%eax
08126723 +0x41:  cmp    0x10(%ebp),%eax
08126726 +0x44:  jne    08126751 <+0x6f>
08126728 +0x46:  mov    0xc(%ebp),%ebx
0812672b +0x49:  mov    0x8(%ebp),%eax
0812672e +0x4c:  lea    0xd8(%eax),%edx
08126734 +0x52:  mov    -0xc(%ebp),%eax
08126737 +0x55:  mov    %eax,0x4(%esp)
0812673b +0x59:  mov    %edx,(%esp)
0812673e +0x5c:  call   08127328 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0xb1>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0xb1
08126743 +0x61:  mov    0x4(%eax),%eax
08126746 +0x64:  cmp    %eax,%ebx
08126748 +0x66:  jne    08126751 <+0x6f>
0812674a +0x68:  mov    $0x1,%eax
0812674f +0x6d:  jmp    08126756 <+0x74>
08126751 +0x6f:  mov    $0x0,%eax
08126756 +0x74:  test   %al,%al
08126758 +0x76:  je     0812679c <+0xba>
0812675a +0x78:  mov    0x8(%ebp),%eax
0812675d +0x7b:  lea    0xd8(%eax),%edx
08126763 +0x81:  mov    -0xc(%ebp),%eax
08126766 +0x84:  mov    %eax,0x4(%esp)
0812676a +0x88:  mov    %edx,(%esp)
0812676d +0x8b:  call   08127328 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0xb1>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0xb1
08126772 +0x90:  mov    0x20(%eax),%eax
08126775 +0x93:  cmp    $0x1,%eax
08126778 +0x96:  sete   %al
0812677b +0x99:  test   %al,%al
0812677d +0x9b:  je     0812679c <+0xba>
0812677f +0x9d:  mov    0x8(%ebp),%eax
08126782 +0xa0:  lea    0xd8(%eax),%edx
08126788 +0xa6:  mov    -0xc(%ebp),%eax
0812678b +0xa9:  mov    %eax,0x4(%esp)
0812678f +0xad:  mov    %edx,(%esp)
08126792 +0xb0:  call   08127328 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0xb1>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0xb1
08126797 +0xb5:  mov    0x20(%eax),%eax
0812679a +0xb8:  jmp    081267b6 <+0xd4>
0812679c +0xba:  addl   $0x1,-0xc(%ebp)
081267a0 +0xbe:  mov    -0xc(%ebp),%eax
081267a3 +0xc1:  cmp    -0x10(%ebp),%eax
081267a6 +0xc4:  setb   %al
081267a9 +0xc7:  test   %al,%al
081267ab +0xc9:  jne    08126708 <+0x26>
081267b1 +0xcf:  mov    $0x0,%eax
081267b6 +0xd4:  add    $0x24,%esp
081267b9 +0xd7:  pop    %ebx
081267ba +0xd8:  pop    %ebp
081267bb +0xd9:  ret
```

## 反编译 C

```c
// CDailyScheduleManager::GetScheduleState @ 0x81266e2

/* CDailyScheduleManager::GetScheduleState(_DailyScheduleType, unsigned int) const */

undefined4 __thiscall
CDailyScheduleManager::GetScheduleState(CDailyScheduleManager *this,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint local_10;
  
  uVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size
                    ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8));
  local_10 = 0;
  while( true ) {
    if (uVar2 <= local_10) {
      return 0;
    }
    iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                      ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                       local_10);
    if ((*(int *)(iVar3 + 8) == param_3) &&
       (iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_10), param_2 == *(int *)(iVar3 + 4))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) &&
       (iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                          ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),
                           local_10), *(int *)(iVar3 + 0x20) == 1)) break;
    local_10 = local_10 + 1;
  }
  iVar3 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::operator[]
                    ((vector<_DailySchedule,std::allocator<_DailySchedule>> *)(this + 0xd8),local_10
                    );
  return *(undefined4 *)(iVar3 + 0x20);
}
```
