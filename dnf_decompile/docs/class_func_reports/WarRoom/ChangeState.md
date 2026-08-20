# ChangeState

`_ZN7WarRoom11ChangeStateE13WARROOM_STATE`

`WarRoom::ChangeState(WARROOM_STATE)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bb53c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bb53c  _ZN7WarRoom11ChangeStateE13WARROOM_STATE
#           WarRoom::ChangeState(WARROOM_STATE)
# range [0x086bb53c, 0x086bb581]
086bb53c +0x00:  push   %ebp
086bb53d +0x01:  mov    %esp,%ebp
086bb53f +0x03:  sub    $0x18,%esp
086bb542 +0x06:  mov    0x8(%ebp),%eax
086bb545 +0x09:  mov    0x144(%eax),%eax
086bb54b +0x0f:  mov    %eax,%edx
086bb54d +0x11:  mov    0xc(%ebp),%eax
086bb550 +0x14:  cmp    %eax,%edx
086bb552 +0x16:  je     086bb57f <+0x43>
086bb554 +0x18:  mov    0xc(%ebp),%eax
086bb557 +0x1b:  mov    %eax,0x4(%esp)
086bb55b +0x1f:  mov    0x8(%ebp),%eax
086bb55e +0x22:  mov    %eax,(%esp)
086bb561 +0x25:  call   086bcf14 <_ZN7WarRoom12OnLeaveStateE13WARROOM_STATE>  ; WarRoom::OnLeaveState(WARROOM_STATE)
086bb566 +0x2a:  mov    0x8(%ebp),%eax
086bb569 +0x2d:  mov    0xc(%ebp),%edx
086bb56c +0x30:  mov    %edx,0x144(%eax)
086bb572 +0x36:  mov    0x8(%ebp),%eax
086bb575 +0x39:  mov    %eax,(%esp)
086bb578 +0x3c:  call   086bb71c <_ZN7WarRoom12OnEnterStateEv>  ; WarRoom::OnEnterState()
086bb57d +0x41:  jmp    086bb580 <+0x44>
086bb57f +0x43:  nop
086bb580 +0x44:  leave
086bb581 +0x45:  ret
```

## 反编译 C

```c
// WarRoom::ChangeState @ 0x86bb53c

/* WarRoom::ChangeState(WARROOM_STATE) */

void __thiscall WarRoom::ChangeState(WarRoom *this,int param_2)

{
  if (*(int *)(this + 0x144) != param_2) {
    OnLeaveState(this,param_2);
    *(int *)(this + 0x144) = param_2;
    OnEnterState(this);
  }
  return;
}
```
