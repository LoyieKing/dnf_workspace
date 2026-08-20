# ClearMissionKind

`_ZN5CUser16ClearMissionKindEs`

`CUser::ClearMissionKind(short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086626a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086626a0  _ZN5CUser16ClearMissionKindEs
#           CUser::ClearMissionKind(short)
# range [0x086626a0, 0x086626df]
086626a0 +0x00:  push   %ebp
086626a1 +0x01:  mov    %esp,%ebp
086626a3 +0x03:  sub    $0x38,%esp
086626a6 +0x06:  mov    0xc(%ebp),%eax
086626a9 +0x09:  mov    %ax,-0x1c(%ebp)
086626ad +0x0d:  movl   $0x8,0x4(%esp)
086626b5 +0x15:  mov    0x8(%ebp),%eax
086626b8 +0x18:  mov    %eax,(%esp)
086626bb +0x1b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086626c0 +0x20:  mov    %eax,-0xc(%ebp)
086626c3 +0x23:  movswl -0x1c(%ebp),%eax
086626c7 +0x27:  mov    %eax,0x8(%esp)
086626cb +0x2b:  mov    0x8(%ebp),%eax
086626ce +0x2e:  mov    %eax,0x4(%esp)
086626d2 +0x32:  mov    -0xc(%ebp),%eax
086626d5 +0x35:  mov    %eax,(%esp)
086626d8 +0x38:  call   085e63d6 <_ZN19CMissionList_Charac16ClearMissionKindER5CUsers>  ; CMissionList_Charac::ClearMissionKind(CUser&, short)
086626dd +0x3d:  leave
086626de +0x3e:  ret
086626df +0x3f:  nop
```

## 反编译 C

```c
// CUser::ClearMissionKind @ 0x86626a0

/* CUser::ClearMissionKind(short) */

void __thiscall CUser::ClearMissionKind(CUser *this,short param_1)

{
  CMissionList_Charac *this_00;
  
  this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
  CMissionList_Charac::ClearMissionKind(this_00,this,param_1);
  return;
}
```
