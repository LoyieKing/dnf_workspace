# SetCurCharacChaosResponTime

`_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi`

`CUserCharacInfo::SetCurCharacChaosResponTime(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868eef4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868eef4  _ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi
#           CUserCharacInfo::SetCurCharacChaosResponTime(int)
# range [0x0868eef4, 0x0868ef1f]
0868eef4 +0x00:  push   %ebp
0868eef5 +0x01:  mov    %esp,%ebp
0868eef7 +0x03:  sub    $0x18,%esp
0868eefa +0x06:  mov    0x8(%ebp),%eax
0868eefd +0x09:  mov    0x10(%eax),%eax
0868ef00 +0x0c:  test   %eax,%eax
0868ef02 +0x0e:  je     0868ef1e <+0x2a>
0868ef04 +0x10:  mov    0x8(%ebp),%eax
0868ef07 +0x13:  mov    %eax,(%esp)
0868ef0a +0x16:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
0868ef0f +0x1b:  mov    0x8(%ebp),%eax
0868ef12 +0x1e:  mov    0x10(%eax),%eax
0868ef15 +0x21:  mov    0xc(%ebp),%edx
0868ef18 +0x24:  mov    %edx,0x12ad(%eax)
0868ef1e +0x2a:  leave
0868ef1f +0x2b:  ret
```

## 反编译 C

```c
// CUserCharacInfo::SetCurCharacChaosResponTime @ 0x868eef4

/* CUserCharacInfo::SetCurCharacChaosResponTime(int) */

void __thiscall CUserCharacInfo::SetCurCharacChaosResponTime(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(int *)(*(int *)(this + 0x10) + 0x12ad) = param_1;
  }
  return;
}
```
