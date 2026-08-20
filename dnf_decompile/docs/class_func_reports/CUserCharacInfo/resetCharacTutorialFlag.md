# resetCharacTutorialFlag

`_ZN15CUserCharacInfo23resetCharacTutorialFlagEv`

`CUserCharacInfo::resetCharacTutorialFlag()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864739a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864739a  _ZN15CUserCharacInfo23resetCharacTutorialFlagEv
#           CUserCharacInfo::resetCharacTutorialFlag()
# range [0x0864739a, 0x086473e5]
0864739a +0x00:  push   %ebp
0864739b +0x01:  mov    %esp,%ebp
0864739d +0x03:  sub    $0x18,%esp
086473a0 +0x06:  mov    0x8(%ebp),%eax
086473a3 +0x09:  mov    0x10(%eax),%eax
086473a6 +0x0c:  test   %eax,%eax
086473a8 +0x0e:  je     086473e3 <+0x49>
086473aa +0x10:  mov    0x8(%ebp),%eax
086473ad +0x13:  mov    %eax,(%esp)
086473b0 +0x16:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
086473b5 +0x1b:  mov    0x8(%ebp),%eax
086473b8 +0x1e:  mov    0x10(%eax),%eax
086473bb +0x21:  movl   $0x0,0x51(%eax)
086473c2 +0x28:  mov    0x8(%ebp),%eax
086473c5 +0x2b:  mov    0x10(%eax),%eax
086473c8 +0x2e:  add    $0x55,%eax
086473cb +0x31:  movl   $0x10,0x8(%esp)
086473d3 +0x39:  movl   $0x0,0x4(%esp)
086473db +0x41:  mov    %eax,(%esp)
086473de +0x44:  call   0807dcc0 <_init+0x5b8>
086473e3 +0x49:  leave
086473e4 +0x4a:  ret
086473e5 +0x4b:  nop
```

## 反编译 C

```c
// CUserCharacInfo::resetCharacTutorialFlag @ 0x864739a

/* CUserCharacInfo::resetCharacTutorialFlag() */

void __thiscall CUserCharacInfo::resetCharacTutorialFlag(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(undefined4 *)(*(int *)(this + 0x10) + 0x51) = 0;
    memset((void *)(*(int *)(this + 0x10) + 0x55),0,0x10);
  }
  return;
}
```
