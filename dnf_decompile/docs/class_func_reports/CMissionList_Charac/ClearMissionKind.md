# ClearMissionKind

`_ZN19CMissionList_Charac16ClearMissionKindER5CUsers`

`CMissionList_Charac::ClearMissionKind(CUser&, short)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e63d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e63d6  _ZN19CMissionList_Charac16ClearMissionKindER5CUsers
#           CMissionList_Charac::ClearMissionKind(CUser&, short)
# range [0x085e63d6, 0x085e641b]
085e63d6 +0x00:  push   %ebp
085e63d7 +0x01:  mov    %esp,%ebp
085e63d9 +0x03:  sub    $0x28,%esp
085e63dc +0x06:  mov    0x10(%ebp),%eax
085e63df +0x09:  mov    %ax,-0xc(%ebp)
085e63e3 +0x0d:  cmpw   $0x0,-0xc(%ebp)
085e63e8 +0x12:  jle    085e6416 <+0x40>
085e63ea +0x14:  cmpw   $0x23,-0xc(%ebp)
085e63ef +0x19:  jg     085e6419 <+0x43>
085e63f1 +0x1b:  movswl -0xc(%ebp),%edx
085e63f5 +0x1f:  mov    0x8(%ebp),%eax
085e63f8 +0x22:  movzwl 0x7(%eax,%edx,8),%eax
085e63fd +0x27:  cwtl
085e63fe +0x28:  mov    %eax,0x8(%esp)
085e6402 +0x2c:  mov    0xc(%ebp),%eax
085e6405 +0x2f:  mov    %eax,0x4(%esp)
085e6409 +0x33:  mov    0x8(%ebp),%eax
085e640c +0x36:  mov    %eax,(%esp)
085e640f +0x39:  call   085e641c <_ZN19CMissionList_Charac12ClearMissionER5CUsers>  ; CMissionList_Charac::ClearMission(CUser&, short)
085e6414 +0x3e:  jmp    085e641a <+0x44>
085e6416 +0x40:  nop
085e6417 +0x41:  jmp    085e641a <+0x44>
085e6419 +0x43:  nop
085e641a +0x44:  leave
085e641b +0x45:  ret
```

## 反编译 C

```c
// CMissionList_Charac::ClearMissionKind @ 0x85e63d6

/* CMissionList_Charac::ClearMissionKind(CUser&, short) */

void __thiscall
CMissionList_Charac::ClearMissionKind(CMissionList_Charac *this,CUser *param_1,short param_2)

{
  if ((0 < param_2) && (param_2 < 0x24)) {
    ClearMission(this,param_1,*(short *)(this + param_2 * 8 + 7));
  }
  return;
}
```
