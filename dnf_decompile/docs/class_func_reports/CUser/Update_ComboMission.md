# Update_ComboMission

`_ZN5CUser19Update_ComboMissionEis`

`CUser::Update_ComboMission(int, short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866280a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866280a  _ZN5CUser19Update_ComboMissionEis
#           CUser::Update_ComboMission(int, short)
# range [0x0866280a, 0x0866285b]
0866280a +0x00:  push   %ebp
0866280b +0x01:  mov    %esp,%ebp
0866280d +0x03:  sub    $0x38,%esp
08662810 +0x06:  mov    0x10(%ebp),%eax
08662813 +0x09:  mov    %ax,-0x1c(%ebp)
08662817 +0x0d:  movl   $0x8,0x4(%esp)
0866281f +0x15:  mov    0x8(%ebp),%eax
08662822 +0x18:  mov    %eax,(%esp)
08662825 +0x1b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0866282a +0x20:  mov    %eax,-0xc(%ebp)
0866282d +0x23:  movswl -0x1c(%ebp),%eax
08662831 +0x27:  mov    %eax,0xc(%esp)
08662835 +0x2b:  mov    0xc(%ebp),%eax
08662838 +0x2e:  mov    %eax,0x8(%esp)
0866283c +0x32:  mov    0x8(%ebp),%eax
0866283f +0x35:  mov    %eax,0x4(%esp)
08662843 +0x39:  mov    -0xc(%ebp),%eax
08662846 +0x3c:  mov    %eax,(%esp)
08662849 +0x3f:  call   085e6654 <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris>  ; CMissionList_Charac::Update_ComboMission_Event(CUser&, int, short)
0866284e +0x44:  mov    0x8(%ebp),%eax
08662851 +0x47:  mov    %eax,(%esp)
08662854 +0x4a:  call   08662528 <_ZN5CUser16send_MissionListEv>  ; CUser::send_MissionList()
08662859 +0x4f:  leave
0866285a +0x50:  ret
0866285b +0x51:  nop
```

## 反编译 C

```c
// CUser::Update_ComboMission @ 0x866280a

/* CUser::Update_ComboMission(int, short) */

void __thiscall CUser::Update_ComboMission(CUser *this,int param_1,short param_2)

{
  CMissionList_Charac *this_00;
  
  this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
  CMissionList_Charac::Update_ComboMission_Event(this_00,this,param_1,param_2);
  send_MissionList(this);
  return;
}
```
