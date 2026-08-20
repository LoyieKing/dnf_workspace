# HandleTimerTimeBomb

`_ZN7WarRoom19HandleTimerTimeBombEv`

`WarRoom::HandleTimerTimeBomb()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086c0512` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c0512  _ZN7WarRoom19HandleTimerTimeBombEv
#           WarRoom::HandleTimerTimeBomb()
# range [0x086c0512, 0x086c0573]
086c0512 +0x00:  push   %ebp
086c0513 +0x01:  mov    %esp,%ebp
086c0515 +0x03:  sub    $0x18,%esp
086c0518 +0x06:  mov    0x8(%ebp),%eax
086c051b +0x09:  add    $0x48,%eax
086c051e +0x0c:  mov    %eax,(%esp)
086c0521 +0x0f:  call   08152410 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d45>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d45
086c0526 +0x14:  mov    0x8(%ebp),%eax
086c0529 +0x17:  movb   $0x1,0x10(%eax)
086c052d +0x1b:  mov    0x8(%ebp),%eax
086c0530 +0x1e:  mov    0x128(%eax),%edx
086c0536 +0x24:  mov    0x8(%ebp),%eax
086c0539 +0x27:  mov    0x1d0(%eax),%eax
086c053f +0x2d:  mov    0x744(%eax),%eax
086c0545 +0x33:  cmp    %eax,%edx
086c0547 +0x35:  jne    086c055e <+0x4c>
086c0549 +0x37:  movl   $0x5,0x4(%esp)
086c0551 +0x3f:  mov    0x8(%ebp),%eax
086c0554 +0x42:  mov    %eax,(%esp)
086c0557 +0x45:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086c055c +0x4a:  jmp    086c0571 <+0x5f>
086c055e +0x4c:  movl   $0x4,0x4(%esp)
086c0566 +0x54:  mov    0x8(%ebp),%eax
086c0569 +0x57:  mov    %eax,(%esp)
086c056c +0x5a:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086c0571 +0x5f:  leave
086c0572 +0x60:  ret
086c0573 +0x61:  nop
```

## 反编译 C

```c
// WarRoom::HandleTimerTimeBomb @ 0x86c0512

/* WarRoom::HandleTimerTimeBomb() */

void __thiscall WarRoom::HandleTimerTimeBomb(WarRoom *this)

{
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::clear
            ((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> *
             )(this + 0x48));
  this[0x10] = (WarRoom)0x1;
  if (*(int *)(this + 0x128) == *(int *)(*(int *)(this + 0x1d0) + 0x744)) {
    ChangeState(this,5);
  }
  else {
    ChangeState(this,4);
  }
  return;
}
```
