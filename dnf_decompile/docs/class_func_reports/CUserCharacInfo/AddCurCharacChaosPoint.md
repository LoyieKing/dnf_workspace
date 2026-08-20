# AddCurCharacChaosPoint

`_ZN15CUserCharacInfo22AddCurCharacChaosPointEi`

`CUserCharacInfo::AddCurCharacChaosPoint(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645f80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645f80  _ZN15CUserCharacInfo22AddCurCharacChaosPointEi
#           CUserCharacInfo::AddCurCharacChaosPoint(int)
# range [0x08645f80, 0x08645fb7]
08645f80 +0x00:  push   %ebp
08645f81 +0x01:  mov    %esp,%ebp
08645f83 +0x03:  sub    $0x18,%esp
08645f86 +0x06:  mov    0x8(%ebp),%eax
08645f89 +0x09:  mov    0x10(%eax),%eax
08645f8c +0x0c:  test   %eax,%eax
08645f8e +0x0e:  je     08645fb6 <+0x36>
08645f90 +0x10:  mov    0x8(%ebp),%eax
08645f93 +0x13:  mov    %eax,(%esp)
08645f96 +0x16:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
08645f9b +0x1b:  mov    0x8(%ebp),%eax
08645f9e +0x1e:  mov    0x10(%eax),%eax
08645fa1 +0x21:  mov    0x8(%ebp),%edx
08645fa4 +0x24:  mov    0x10(%edx),%edx
08645fa7 +0x27:  mov    0xe49(%edx),%edx
08645fad +0x2d:  add    0xc(%ebp),%edx
08645fb0 +0x30:  mov    %edx,0xe49(%eax)
08645fb6 +0x36:  leave
08645fb7 +0x37:  ret
```

## 反编译 C

```c
// CUserCharacInfo::AddCurCharacChaosPoint @ 0x8645f80

/* CUserCharacInfo::AddCurCharacChaosPoint(int) */

void __thiscall CUserCharacInfo::AddCurCharacChaosPoint(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(int *)(*(int *)(this + 0x10) + 0xe49) = *(int *)(*(int *)(this + 0x10) + 0xe49) + param_1;
  }
  return;
}
```
