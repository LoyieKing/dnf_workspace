# ClearMission

`_ZN5CUser12ClearMissionEs`

`CUser::ClearMission(short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08662606` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08662606  _ZN5CUser12ClearMissionEs
#           CUser::ClearMission(short)
# range [0x08662606, 0x08662659]
08662606 +0x00:  push   %ebp
08662607 +0x01:  mov    %esp,%ebp
08662609 +0x03:  sub    $0x38,%esp
0866260c +0x06:  mov    0xc(%ebp),%eax
0866260f +0x09:  mov    %ax,-0x1c(%ebp)
08662613 +0x0d:  mov    0x8(%ebp),%eax
08662616 +0x10:  mov    %eax,(%esp)
08662619 +0x13:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0866261e +0x18:  xor    $0x1,%eax
08662621 +0x1b:  test   %al,%al
08662623 +0x1d:  jne    08662657 <+0x51>
08662625 +0x1f:  movl   $0x8,0x4(%esp)
0866262d +0x27:  mov    0x8(%ebp),%eax
08662630 +0x2a:  mov    %eax,(%esp)
08662633 +0x2d:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08662638 +0x32:  mov    %eax,-0xc(%ebp)
0866263b +0x35:  movswl -0x1c(%ebp),%eax
0866263f +0x39:  mov    %eax,0x8(%esp)
08662643 +0x3d:  mov    0x8(%ebp),%eax
08662646 +0x40:  mov    %eax,0x4(%esp)
0866264a +0x44:  mov    -0xc(%ebp),%eax
0866264d +0x47:  mov    %eax,(%esp)
08662650 +0x4a:  call   085e641c <_ZN19CMissionList_Charac12ClearMissionER5CUsers>  ; CMissionList_Charac::ClearMission(CUser&, short)
08662655 +0x4f:  jmp    08662658 <+0x52>
08662657 +0x51:  nop
08662658 +0x52:  leave
08662659 +0x53:  ret
```

## 反编译 C

```c
// CUser::ClearMission @ 0x8662606

/* CUser::ClearMission(short) */

void __thiscall CUser::ClearMission(CUser *this,short param_1)

{
  char cVar1;
  CMissionList_Charac *this_00;
  
  cVar1 = isGMUser(this);
  if (cVar1 == '\x01') {
    this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
    CMissionList_Charac::ClearMission(this_00,this,param_1);
  }
  return;
}
```
