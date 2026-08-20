# Remove_Mission

`_ZN5CUser14Remove_MissionEs`

`CUser::Remove_Mission(short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866273c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866273c  _ZN5CUser14Remove_MissionEs
#           CUser::Remove_Mission(short)
# range [0x0866273c, 0x08662773]
0866273c +0x00:  push   %ebp
0866273d +0x01:  mov    %esp,%ebp
0866273f +0x03:  sub    $0x38,%esp
08662742 +0x06:  mov    0xc(%ebp),%eax
08662745 +0x09:  mov    %ax,-0x1c(%ebp)
08662749 +0x0d:  movl   $0x8,0x4(%esp)
08662751 +0x15:  mov    0x8(%ebp),%eax
08662754 +0x18:  mov    %eax,(%esp)
08662757 +0x1b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0866275c +0x20:  mov    %eax,-0xc(%ebp)
0866275f +0x23:  movswl -0x1c(%ebp),%eax
08662763 +0x27:  mov    %eax,0x4(%esp)
08662767 +0x2b:  mov    -0xc(%ebp),%eax
0866276a +0x2e:  mov    %eax,(%esp)
0866276d +0x31:  call   085e4bec <_ZN19CMissionList_Charac14Remove_MissionEi>  ; CMissionList_Charac::Remove_Mission(int)
08662772 +0x36:  leave
08662773 +0x37:  ret
```

## 反编译 C

```c
// CUser::Remove_Mission @ 0x866273c

/* CUser::Remove_Mission(short) */

void __thiscall CUser::Remove_Mission(CUser *this,short param_1)

{
  CMissionList_Charac *this_00;
  
  this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
  CMissionList_Charac::Remove_Mission(this_00,(int)param_1);
  return;
}
```
