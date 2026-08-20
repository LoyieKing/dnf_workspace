# ResetMissionList

`_ZN5CUser16ResetMissionListEv`

`CUser::ResetMissionList()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866265a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866265a  _ZN5CUser16ResetMissionListEv
#           CUser::ResetMissionList()
# range [0x0866265a, 0x0866269f]
0866265a +0x00:  push   %ebp
0866265b +0x01:  mov    %esp,%ebp
0866265d +0x03:  sub    $0x28,%esp
08662660 +0x06:  mov    0x8(%ebp),%eax
08662663 +0x09:  mov    %eax,(%esp)
08662666 +0x0c:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0866266b +0x11:  xor    $0x1,%eax
0866266e +0x14:  test   %al,%al
08662670 +0x16:  jne    0866269c <+0x42>
08662672 +0x18:  movl   $0x8,0x4(%esp)
0866267a +0x20:  mov    0x8(%ebp),%eax
0866267d +0x23:  mov    %eax,(%esp)
08662680 +0x26:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08662685 +0x2b:  mov    %eax,-0xc(%ebp)
08662688 +0x2e:  mov    0x8(%ebp),%eax
0866268b +0x31:  mov    %eax,0x4(%esp)
0866268f +0x35:  mov    -0xc(%ebp),%eax
08662692 +0x38:  mov    %eax,(%esp)
08662695 +0x3b:  call   085e6628 <_ZN19CMissionList_Charac16ResetMissionListER5CUser>  ; CMissionList_Charac::ResetMissionList(CUser&)
0866269a +0x40:  jmp    0866269d <+0x43>
0866269c +0x42:  nop
0866269d +0x43:  leave
0866269e +0x44:  ret
0866269f +0x45:  nop
```

## 反编译 C

```c
// CUser::ResetMissionList @ 0x866265a

/* CUser::ResetMissionList() */

void __thiscall CUser::ResetMissionList(CUser *this)

{
  char cVar1;
  CMissionList_Charac *this_00;
  
  cVar1 = isGMUser(this);
  if (cVar1 == '\x01') {
    this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
    CMissionList_Charac::ResetMissionList(this_00,this);
  }
  return;
}
```
