# _reset

`_ZN19CMissionList_Charac6_resetEv`

`CMissionList_Charac::_reset()`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e476c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e476c  _ZN19CMissionList_Charac6_resetEv
#           CMissionList_Charac::_reset()
# range [0x085e476c, 0x085e47dd]
085e476c +0x00:  push   %ebp
085e476d +0x01:  mov    %esp,%ebp
085e476f +0x03:  sub    $0x18,%esp
085e4772 +0x06:  mov    0x8(%ebp),%eax
085e4775 +0x09:  add    $0x5,%eax
085e4778 +0x0c:  movl   $0x120,0x8(%esp)
085e4780 +0x14:  movl   $0x0,0x4(%esp)
085e4788 +0x1c:  mov    %eax,(%esp)
085e478b +0x1f:  call   0807dcc0 <_init+0x5b8>
085e4790 +0x24:  mov    0x8(%ebp),%eax
085e4793 +0x27:  add    $0x128,%eax
085e4798 +0x2c:  mov    %eax,(%esp)
085e479b +0x2f:  call   085e806c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x17f4>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x17f4
085e47a0 +0x34:  mov    0x8(%ebp),%eax
085e47a3 +0x37:  movw   $0x0,0x148(%eax)
085e47ac +0x40:  mov    0x8(%ebp),%eax
085e47af +0x43:  movw   $0x0,0x14a(%eax)
085e47b8 +0x4c:  mov    0x8(%ebp),%eax
085e47bb +0x4f:  movw   $0x0,0x14c(%eax)
085e47c4 +0x58:  mov    0x8(%ebp),%eax
085e47c7 +0x5b:  movb   $0x0,0x14e(%eax)
085e47ce +0x62:  mov    0x8(%ebp),%eax
085e47d1 +0x65:  movl   $0x0,0x154(%eax)
085e47db +0x6f:  leave
085e47dc +0x70:  ret
085e47dd +0x71:  nop
```

## 反编译 C

```c
// CMissionList_Charac::_reset @ 0x85e476c

/* CMissionList_Charac::_reset() */

void __thiscall CMissionList_Charac::_reset(CMissionList_Charac *this)

{
  memset(this + 5,0,0x120);
  std::bitset<256u>::reset((bitset<256u> *)(this + 0x128));
  *(undefined2 *)(this + 0x148) = 0;
  *(undefined2 *)(this + 0x14a) = 0;
  *(undefined2 *)(this + 0x14c) = 0;
  this[0x14e] = (CMissionList_Charac)0x0;
  *(undefined4 *)(this + 0x154) = 0;
  return;
}
```
