# UpdateMissionCondition

`_ZN5CUser22UpdateMissionConditionERSt6vectorIsSaIsEERS0_IiSaIiEE`

`CUser::UpdateMissionCondition(std::vector<short, std::allocator<short> >&, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086625c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086625c8  _ZN5CUser22UpdateMissionConditionERSt6vectorIsSaIsEERS0_IiSaIiEE
#           CUser::UpdateMissionCondition(std::vector<short, std::allocator<short> >&, std::vector<int, std::allocator<int> >&)
# range [0x086625c8, 0x08662605]
086625c8 +0x00:  push   %ebp
086625c9 +0x01:  mov    %esp,%ebp
086625cb +0x03:  sub    $0x28,%esp
086625ce +0x06:  movl   $0x8,0x4(%esp)
086625d6 +0x0e:  mov    0x8(%ebp),%eax
086625d9 +0x11:  mov    %eax,(%esp)
086625dc +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086625e1 +0x19:  mov    %eax,-0xc(%ebp)
086625e4 +0x1c:  mov    0x10(%ebp),%eax
086625e7 +0x1f:  mov    %eax,0xc(%esp)
086625eb +0x23:  mov    0xc(%ebp),%eax
086625ee +0x26:  mov    %eax,0x8(%esp)
086625f2 +0x2a:  mov    0x8(%ebp),%eax
086625f5 +0x2d:  mov    %eax,0x4(%esp)
086625f9 +0x31:  mov    -0xc(%ebp),%eax
086625fc +0x34:  mov    %eax,(%esp)
086625ff +0x37:  call   085e5caa <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE>  ; CMissionList_Charac::Update_RecvPacket_event(CUser&, std::vector<short, std::allocator<short> >&, std::vector<int, std::allocator<int> >&)
08662604 +0x3c:  leave
08662605 +0x3d:  ret
```

## 反编译 C

```c
// CUser::UpdateMissionCondition @ 0x86625c8

/* CUser::UpdateMissionCondition(std::vector<short, std::allocator<short> >&, std::vector<int,
   std::allocator<int> >&) */

void __thiscall CUser::UpdateMissionCondition(CUser *this,vector *param_1,vector *param_2)

{
  CMissionList_Charac *this_00;
  
  this_00 = (CMissionList_Charac *)GetCharacExpandData(this,8);
  CMissionList_Charac::Update_RecvPacket_event(this_00,this,param_1,param_2);
  return;
}
```
