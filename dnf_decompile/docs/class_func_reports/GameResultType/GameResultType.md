# GameResultType

`_ZN14GameResultTypeC1Ev`

`GameResultType::GameResultType()`

| 类 | 地址 |
|---|---|
| `GameResultType` | `0x084b73d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b73d4  _ZN14GameResultTypeC1Ev
#           GameResultType::GameResultType()
# range [0x084b73d4, 0x084b7415]
084b73d4 +0x00:  push   %ebp
084b73d5 +0x01:  mov    %esp,%ebp
084b73d7 +0x03:  push   %esi
084b73d8 +0x04:  push   %ebx
084b73d9 +0x05:  sub    $0x10,%esp
084b73dc +0x08:  mov    0x8(%ebp),%eax
084b73df +0x0b:  add    $0x14,%eax
084b73e2 +0x0e:  mov    %eax,%ebx
084b73e4 +0x10:  mov    $0x3,%esi
084b73e9 +0x15:  jmp    084b73f9 <+0x25>
084b73eb +0x17:  mov    %ebx,(%esp)
084b73ee +0x1a:  call   084b766a <_GLOBAL__I__ZN14GameResultTypeC2Ev+0x1d>  ; global constructors keyed to GameResultType::GameResultType()+0x1d
084b73f3 +0x1f:  add    $0x8,%ebx
084b73f6 +0x22:  sub    $0x1,%esi
084b73f9 +0x25:  cmp    $0xffffffff,%esi
084b73fc +0x28:  setne  %al
084b73ff +0x2b:  test   %al,%al
084b7401 +0x2d:  jne    084b73eb <+0x17>
084b7403 +0x2f:  mov    0x8(%ebp),%eax
084b7406 +0x32:  mov    %eax,(%esp)
084b7409 +0x35:  call   084b7442 <_ZN14GameResultType5ClearEv>  ; GameResultType::Clear()
084b740e +0x3a:  add    $0x10,%esp
084b7411 +0x3d:  pop    %ebx
084b7412 +0x3e:  pop    %esi
084b7413 +0x3f:  pop    %ebp
084b7414 +0x40:  ret
084b7415 +0x41:  nop
```

## 反编译 C

```c
// GameResultType::GameResultType @ 0x84b73d4

/* GameResultType::GameResultType() */

void __thiscall GameResultType::GameResultType(GameResultType *this)

{
  DungeonUserShotCount *this_00;
  int iVar1;
  
  this_00 = (DungeonUserShotCount *)(this + 0x14);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
    DungeonUserShotCount::DungeonUserShotCount(this_00);
    this_00 = this_00 + 8;
  }
  Clear(this);
  return;
}
```
