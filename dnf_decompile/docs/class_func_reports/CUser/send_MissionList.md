# send_MissionList

`_ZN5CUser16send_MissionListEv`

`CUser::send_MissionList()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08662528` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08662528  _ZN5CUser16send_MissionListEv
#           CUser::send_MissionList()
# range [0x08662528, 0x08662557]
08662528 +0x00:  push   %ebp
08662529 +0x01:  mov    %esp,%ebp
0866252b +0x03:  sub    $0x28,%esp
0866252e +0x06:  movl   $0x8,0x4(%esp)
08662536 +0x0e:  mov    0x8(%ebp),%eax
08662539 +0x11:  mov    %eax,(%esp)
0866253c +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08662541 +0x19:  mov    %eax,-0xc(%ebp)
08662544 +0x1c:  mov    0x8(%ebp),%eax
08662547 +0x1f:  mov    %eax,0x4(%esp)
0866254b +0x23:  mov    -0xc(%ebp),%eax
0866254e +0x26:  mov    %eax,(%esp)
08662551 +0x29:  call   085e52a8 <_ZN19CMissionList_Charac16Send_MissionListER5CUser>  ; CMissionList_Charac::Send_MissionList(CUser&)
08662556 +0x2e:  leave
08662557 +0x2f:  ret
```

## 反编译 C

```c
// CUser::send_MissionList @ 0x8662528

/* CUser::send_MissionList() */

void __thiscall CUser::send_MissionList(CUser *this)

{
  CMissionList_Charac *this_00;
  
  this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
  CMissionList_Charac::Send_MissionList(this_00,this);
  return;
}
```
