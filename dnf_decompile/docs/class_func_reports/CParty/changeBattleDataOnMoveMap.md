# changeBattleDataOnMoveMap

`_ZN6CParty25changeBattleDataOnMoveMapEb`

`CParty::changeBattleDataOnMoveMap(bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a8ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a8ee0  _ZN6CParty25changeBattleDataOnMoveMapEb
#           CParty::changeBattleDataOnMoveMap(bool)
# range [0x085a8ee0, 0x085a8f4d]
085a8ee0 +0x00:  push   %ebp
085a8ee1 +0x01:  mov    %esp,%ebp
085a8ee3 +0x03:  sub    $0x28,%esp
085a8ee6 +0x06:  mov    0xc(%ebp),%eax
085a8ee9 +0x09:  mov    %al,-0xc(%ebp)
085a8eec +0x0c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085a8ef3 +0x13:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
085a8ef8 +0x18:  mov    $0x0,%edx
085a8efd +0x1d:  mov    0x8(%ebp),%ecx
085a8f00 +0x20:  mov    %eax,0x360(%ecx)
085a8f06 +0x26:  mov    %edx,0x364(%ecx)
085a8f0c +0x2c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085a8f13 +0x33:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
085a8f18 +0x38:  mov    $0x0,%edx
085a8f1d +0x3d:  mov    0x8(%ebp),%ecx
085a8f20 +0x40:  mov    %eax,0x344(%ecx)
085a8f26 +0x46:  mov    %edx,0x348(%ecx)
085a8f2c +0x4c:  movzbl -0xc(%ebp),%eax
085a8f30 +0x50:  xor    $0x1,%eax
085a8f33 +0x53:  test   %al,%al
085a8f35 +0x55:  je     085a8f4c <+0x6c>
085a8f37 +0x57:  mov    0x8(%ebp),%eax
085a8f3a +0x5a:  mov    0x9b8(%eax),%eax
085a8f40 +0x60:  lea    0x1(%eax),%edx
085a8f43 +0x63:  mov    0x8(%ebp),%eax
085a8f46 +0x66:  mov    %edx,0x9b8(%eax)
085a8f4c +0x6c:  leave
085a8f4d +0x6d:  ret
```

## 反编译 C

```c
// CParty::changeBattleDataOnMoveMap @ 0x85a8ee0

/* CParty::changeBattleDataOnMoveMap(bool) */

void __thiscall CParty::changeBattleDataOnMoveMap(CParty *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x360) = uVar1;
  *(undefined4 *)(this + 0x364) = 0;
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x344) = uVar1;
  *(undefined4 *)(this + 0x348) = 0;
  if (!param_1) {
    *(int *)(this + 0x9b8) = *(int *)(this + 0x9b8) + 1;
  }
  return;
}
```
