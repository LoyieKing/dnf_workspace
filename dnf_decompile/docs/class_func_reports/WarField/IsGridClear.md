# IsGridClear

`_ZN8WarField11IsGridClearEv`

`WarField::IsGridClear()`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086b954c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b954c  _ZN8WarField11IsGridClearEv
#           WarField::IsGridClear()
# range [0x086b954c, 0x086b9577]
086b954c +0x00:  push   %ebp
086b954d +0x01:  mov    %esp,%ebp
086b954f +0x03:  sub    $0x18,%esp
086b9552 +0x06:  mov    0x8(%ebp),%eax
086b9555 +0x09:  add    $0x14,%eax
086b9558 +0x0c:  mov    %eax,(%esp)
086b955b +0x0f:  call   08152966 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x229b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x229b
086b9560 +0x14:  test   %eax,%eax
086b9562 +0x16:  setne  %al
086b9565 +0x19:  test   %al,%al
086b9567 +0x1b:  je     086b9570 <+0x24>
086b9569 +0x1d:  mov    $0x0,%eax
086b956e +0x22:  jmp    086b9575 <+0x29>
086b9570 +0x24:  mov    $0x1,%eax
086b9575 +0x29:  leave
086b9576 +0x2a:  ret
086b9577 +0x2b:  nop
```

## 反编译 C

```c
// WarField::IsGridClear @ 0x86b954c

/* WarField::IsGridClear() */

bool __thiscall WarField::IsGridClear(WarField *this)

{
  int iVar1;
  
  iVar1 = std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0x14));
  return iVar1 == 0;
}
```
