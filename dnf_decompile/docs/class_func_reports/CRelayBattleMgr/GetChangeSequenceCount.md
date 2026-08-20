# GetChangeSequenceCount

`_ZN15CRelayBattleMgr22GetChangeSequenceCountEi`

`CRelayBattleMgr::GetChangeSequenceCount(int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de474` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de474  _ZN15CRelayBattleMgr22GetChangeSequenceCountEi
#           CRelayBattleMgr::GetChangeSequenceCount(int)
# range [0x085de474, 0x085de497]
085de474 +0x00:  push   %ebp
085de475 +0x01:  mov    %esp,%ebp
085de477 +0x03:  cmpl   $0x0,0xc(%ebp)
085de47b +0x07:  jle    085de483 <+0xf>
085de47d +0x09:  cmpl   $0x2,0xc(%ebp)
085de481 +0x0d:  jle    085de48a <+0x16>
085de483 +0x0f:  mov    $0x0,%eax
085de488 +0x14:  jmp    085de496 <+0x22>
085de48a +0x16:  mov    0xc(%ebp),%edx
085de48d +0x19:  mov    0x8(%ebp),%eax
085de490 +0x1c:  add    $0x18,%edx
085de493 +0x1f:  mov    (%eax,%edx,4),%eax
085de496 +0x22:  pop    %ebp
085de497 +0x23:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::GetChangeSequenceCount @ 0x85de474

/* CRelayBattleMgr::GetChangeSequenceCount(int) */

undefined4 __thiscall CRelayBattleMgr::GetChangeSequenceCount(CRelayBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (2 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x18) * 4);
  }
  return uVar1;
}
```
