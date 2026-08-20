# ResetMissionList

`_ZN19CMissionList_Charac16ResetMissionListER5CUser`

`CMissionList_Charac::ResetMissionList(CUser&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e6628` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e6628  _ZN19CMissionList_Charac16ResetMissionListER5CUser
#           CMissionList_Charac::ResetMissionList(CUser&)
# range [0x085e6628, 0x085e6653]
085e6628 +0x00:  push   %ebp
085e6629 +0x01:  mov    %esp,%ebp
085e662b +0x03:  sub    $0x18,%esp
085e662e +0x06:  mov    0x8(%ebp),%eax
085e6631 +0x09:  mov    (%eax),%eax
085e6633 +0x0b:  add    $0x1c,%eax
085e6636 +0x0e:  mov    (%eax),%edx
085e6638 +0x10:  mov    0x8(%ebp),%eax
085e663b +0x13:  mov    %eax,(%esp)
085e663e +0x16:  call   *%edx
085e6640 +0x18:  mov    0xc(%ebp),%eax
085e6643 +0x1b:  mov    %eax,0x4(%esp)
085e6647 +0x1f:  mov    0x8(%ebp),%eax
085e664a +0x22:  mov    %eax,(%esp)
085e664d +0x25:  call   085e4d14 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser>  ; CMissionList_Charac::MakeMissionList_forNewbies(CUser const&)
085e6652 +0x2a:  leave
085e6653 +0x2b:  ret
```

## 反编译 C

```c
// CMissionList_Charac::ResetMissionList @ 0x85e6628

/* CMissionList_Charac::ResetMissionList(CUser&) */

void __thiscall CMissionList_Charac::ResetMissionList(CMissionList_Charac *this,CUser *param_1)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  MakeMissionList_forNewbies(this,param_1);
  return;
}
```
