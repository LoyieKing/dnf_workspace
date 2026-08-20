# ~DB_UpdateLogout

`_ZN15DB_UpdateLogoutD0Ev`

`DB_UpdateLogout::~DB_UpdateLogout()`

| 类 | 地址 |
|---|---|
| `DB_UpdateLogout` | `0x08418424` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418424  _ZN15DB_UpdateLogoutD0Ev
#           DB_UpdateLogout::~DB_UpdateLogout()
# range [0x08418424, 0x08418441]
08418424 +0x00:  push   %ebp
08418425 +0x01:  mov    %esp,%ebp
08418427 +0x03:  sub    $0x18,%esp
0841842a +0x06:  mov    0x8(%ebp),%eax
0841842d +0x09:  mov    %eax,(%esp)
08418430 +0x0c:  call   084183f4 <_ZN15DB_UpdateLogoutD1Ev>  ; DB_UpdateLogout::~DB_UpdateLogout()
08418435 +0x11:  mov    0x8(%ebp),%eax
08418438 +0x14:  mov    %eax,(%esp)
0841843b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08418440 +0x1c:  leave
08418441 +0x1d:  ret
```

## 反编译 C

```c
// DB_UpdateLogout::~DB_UpdateLogout @ 0x8418424

/* DB_UpdateLogout::~DB_UpdateLogout() */

void __thiscall DB_UpdateLogout::~DB_UpdateLogout(DB_UpdateLogout *this)

{
  ~DB_UpdateLogout(this);
  operator_delete(this);
  return;
}
```
