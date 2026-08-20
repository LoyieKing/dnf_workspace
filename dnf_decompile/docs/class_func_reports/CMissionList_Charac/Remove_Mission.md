# Remove_Mission

`_ZN19CMissionList_Charac14Remove_MissionEi`

`CMissionList_Charac::Remove_Mission(int)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e4bec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4bec  _ZN19CMissionList_Charac14Remove_MissionEi
#           CMissionList_Charac::Remove_Mission(int)
# range [0x085e4bec, 0x085e4c6b]
085e4bec +0x00:  push   %ebp
085e4bed +0x01:  mov    %esp,%ebp
085e4bef +0x03:  sub    $0x18,%esp
085e4bf2 +0x06:  cmpl   $0x0,0xc(%ebp)
085e4bf6 +0x0a:  jle    085e4c65 <+0x79>
085e4bf8 +0x0c:  cmpl   $0x23,0xc(%ebp)
085e4bfc +0x10:  jg     085e4c68 <+0x7c>
085e4bfe +0x12:  mov    0x8(%ebp),%eax
085e4c01 +0x15:  mov    0x154(%eax),%eax
085e4c07 +0x1b:  test   %eax,%eax
085e4c09 +0x1d:  je     085e4c44 <+0x58>
085e4c0b +0x1f:  mov    0xc(%ebp),%edx
085e4c0e +0x22:  mov    0x8(%ebp),%eax
085e4c11 +0x25:  movzwl 0x7(%eax,%edx,8),%eax
085e4c16 +0x2a:  movswl %ax,%edx
085e4c19 +0x2d:  mov    0xc(%ebp),%ecx
085e4c1c +0x30:  mov    0x8(%ebp),%eax
085e4c1f +0x33:  movzwl 0x5(%eax,%ecx,8),%eax
085e4c24 +0x38:  cwtl
085e4c25 +0x39:  mov    0x8(%ebp),%ecx
085e4c28 +0x3c:  mov    0x154(%ecx),%ecx
085e4c2e +0x42:  add    $0x79700,%ecx
085e4c34 +0x48:  mov    %edx,0x8(%esp)
085e4c38 +0x4c:  mov    %eax,0x4(%esp)
085e4c3c +0x50:  mov    %ecx,(%esp)
085e4c3f +0x53:  call   08686a22 <_ZN15cUserHistoryLog13pvpMissionDelEii>  ; cUserHistoryLog::pvpMissionDel(int, int)
085e4c44 +0x58:  mov    0xc(%ebp),%eax
085e4c47 +0x5b:  shl    $0x3,%eax
085e4c4a +0x5e:  add    0x8(%ebp),%eax
085e4c4d +0x61:  add    $0x5,%eax
085e4c50 +0x64:  mov    %eax,(%esp)
085e4c53 +0x67:  call   085e68b6 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x3e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x3e
085e4c58 +0x6c:  mov    0x8(%ebp),%eax
085e4c5b +0x6f:  mov    %eax,(%esp)
085e4c5e +0x72:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e4c63 +0x77:  jmp    085e4c69 <+0x7d>
085e4c65 +0x79:  nop
085e4c66 +0x7a:  jmp    085e4c69 <+0x7d>
085e4c68 +0x7c:  nop
085e4c69 +0x7d:  leave
085e4c6a +0x7e:  ret
085e4c6b +0x7f:  nop
```

## 反编译 C

```c
// CMissionList_Charac::Remove_Mission @ 0x85e4bec

/* CMissionList_Charac::Remove_Mission(int) */

void __thiscall CMissionList_Charac::Remove_Mission(CMissionList_Charac *this,int param_1)

{
  if ((0 < param_1) && (param_1 < 0x24)) {
    if (*(int *)(this + 0x154) != 0) {
      cUserHistoryLog::pvpMissionDel
                ((cUserHistoryLog *)(*(int *)(this + 0x154) + 0x79700),
                 (int)*(short *)(this + param_1 * 8 + 5),(int)*(short *)(this + param_1 * 8 + 7));
    }
    MissionInfo::clear((MissionInfo *)(this + param_1 * 8 + 5));
    charac_expand::CData::alter((CData *)this);
  }
  return;
}
```
