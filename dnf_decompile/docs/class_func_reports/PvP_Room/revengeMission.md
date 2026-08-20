# revengeMission

`_ZN8PvP_Room14revengeMissionEb`

`PvP_Room::revengeMission(bool)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085ddf36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ddf36  _ZN8PvP_Room14revengeMissionEb
#           PvP_Room::revengeMission(bool)
# range [0x085ddf36, 0x085ddfbd]
085ddf36 +0x00:  push   %ebp
085ddf37 +0x01:  mov    %esp,%ebp
085ddf39 +0x03:  push   %ebx
085ddf3a +0x04:  sub    $0x34,%esp
085ddf3d +0x07:  mov    0xc(%ebp),%eax
085ddf40 +0x0a:  mov    %al,-0x1c(%ebp)
085ddf43 +0x0d:  movl   $0x0,-0xc(%ebp)
085ddf4a +0x14:  jmp    085ddfac <+0x76>
085ddf4c +0x16:  mov    -0xc(%ebp),%edx
085ddf4f +0x19:  mov    0x8(%ebp),%eax
085ddf52 +0x1c:  add    $0xc,%edx
085ddf55 +0x1f:  mov    (%eax,%edx,4),%eax
085ddf58 +0x22:  test   %eax,%eax
085ddf5a +0x24:  je     085ddfa8 <+0x72>
085ddf5c +0x26:  mov    -0xc(%ebp),%edx
085ddf5f +0x29:  mov    0x8(%ebp),%eax
085ddf62 +0x2c:  add    $0xc,%edx
085ddf65 +0x2f:  mov    (%eax,%edx,4),%eax
085ddf68 +0x32:  movl   $0x8,0x4(%esp)
085ddf70 +0x3a:  mov    %eax,(%esp)
085ddf73 +0x3d:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085ddf78 +0x42:  mov    %eax,-0x10(%ebp)
085ddf7b +0x45:  movzbl -0x1c(%ebp),%ecx
085ddf7f +0x49:  mov    0x8(%ebp),%eax
085ddf82 +0x4c:  mov    0x4(%eax),%edx
085ddf85 +0x4f:  mov    -0xc(%ebp),%ebx
085ddf88 +0x52:  mov    0x8(%ebp),%eax
085ddf8b +0x55:  add    $0xc,%ebx
085ddf8e +0x58:  mov    (%eax,%ebx,4),%eax
085ddf91 +0x5b:  mov    %ecx,0xc(%esp)
085ddf95 +0x5f:  mov    %edx,0x8(%esp)
085ddf99 +0x63:  mov    %eax,0x4(%esp)
085ddf9d +0x67:  mov    -0x10(%ebp),%eax
085ddfa0 +0x6a:  mov    %eax,(%esp)
085ddfa3 +0x6d:  call   085e612e <_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb>  ; CMissionList_Charac::Update_Revenge_event(CUser&, PVP_BATTLE_MODE, bool)
085ddfa8 +0x72:  addl   $0x1,-0xc(%ebp)
085ddfac +0x76:  cmpl   $0x7,-0xc(%ebp)
085ddfb0 +0x7a:  setle  %al
085ddfb3 +0x7d:  test   %al,%al
085ddfb5 +0x7f:  jne    085ddf4c <+0x16>
085ddfb7 +0x81:  add    $0x34,%esp
085ddfba +0x84:  pop    %ebx
085ddfbb +0x85:  pop    %ebp
085ddfbc +0x86:  ret
085ddfbd +0x87:  nop
```

## 反编译 C

```c
// PvP_Room::revengeMission @ 0x85ddf36

/* PvP_Room::revengeMission(bool) */

void __thiscall PvP_Room::revengeMission(PvP_Room *this,bool param_1)

{
  CMissionList_Charac *pCVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
      pCVar1 = (CMissionList_Charac *)
               CUser::GetCharacExpandData(*(CUser **)(this + (local_10 + 0xc) * 4),8);
      CMissionList_Charac::Update_Revenge_event
                (pCVar1,*(undefined4 *)(this + (local_10 + 0xc) * 4),*(undefined4 *)(this + 4),
                 param_1);
    }
  }
  return;
}
```
