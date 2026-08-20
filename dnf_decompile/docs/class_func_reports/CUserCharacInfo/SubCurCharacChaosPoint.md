# SubCurCharacChaosPoint

`_ZN15CUserCharacInfo22SubCurCharacChaosPointEi`

`CUserCharacInfo::SubCurCharacChaosPoint(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645fb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645fb8  _ZN15CUserCharacInfo22SubCurCharacChaosPointEi
#           CUserCharacInfo::SubCurCharacChaosPoint(int)
# range [0x08645fb8, 0x0864600f]
08645fb8 +0x00:  push   %ebp
08645fb9 +0x01:  mov    %esp,%ebp
08645fbb +0x03:  sub    $0x18,%esp
08645fbe +0x06:  mov    0x8(%ebp),%eax
08645fc1 +0x09:  mov    0x10(%eax),%eax
08645fc4 +0x0c:  test   %eax,%eax
08645fc6 +0x0e:  je     0864600e <+0x56>
08645fc8 +0x10:  mov    0x8(%ebp),%eax
08645fcb +0x13:  mov    %eax,(%esp)
08645fce +0x16:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
08645fd3 +0x1b:  mov    0x8(%ebp),%eax
08645fd6 +0x1e:  mov    0x10(%eax),%eax
08645fd9 +0x21:  mov    0x8(%ebp),%edx
08645fdc +0x24:  mov    0x10(%edx),%edx
08645fdf +0x27:  mov    0xe49(%edx),%edx
08645fe5 +0x2d:  sub    0xc(%ebp),%edx
08645fe8 +0x30:  mov    %edx,0xe49(%eax)
08645fee +0x36:  mov    0x8(%ebp),%eax
08645ff1 +0x39:  mov    0x10(%eax),%eax
08645ff4 +0x3c:  mov    0xe49(%eax),%eax
08645ffa +0x42:  test   %eax,%eax
08645ffc +0x44:  jns    0864600e <+0x56>
08645ffe +0x46:  mov    0x8(%ebp),%eax
08646001 +0x49:  mov    0x10(%eax),%eax
08646004 +0x4c:  movl   $0x0,0xe49(%eax)
0864600e +0x56:  leave
0864600f +0x57:  ret
```

## 反编译 C

```c
// CUserCharacInfo::SubCurCharacChaosPoint @ 0x8645fb8

/* CUserCharacInfo::SubCurCharacChaosPoint(int) */

void __thiscall CUserCharacInfo::SubCurCharacChaosPoint(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(int *)(*(int *)(this + 0x10) + 0xe49) = *(int *)(*(int *)(this + 0x10) + 0xe49) - param_1;
    if (*(int *)(*(int *)(this + 0x10) + 0xe49) < 0) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe49) = 0;
    }
  }
  return;
}
```
