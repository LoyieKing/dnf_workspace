# ~DB_UpdateLogout

`_ZN15DB_UpdateLogoutD1Ev`

`DB_UpdateLogout::~DB_UpdateLogout()`

| 类 | 地址 |
|---|---|
| `DB_UpdateLogout` | `0x084183f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084183f4  _ZN15DB_UpdateLogoutD1Ev
#           DB_UpdateLogout::~DB_UpdateLogout()
# range [0x084183f4, 0x08418423]
084183f4 +0x00:  push   %ebp
084183f5 +0x01:  mov    %esp,%ebp
084183f7 +0x03:  sub    $0x18,%esp
084183fa +0x06:  mov    0x8(%ebp),%eax
084183fd +0x09:  movl   $&_ZTV15DB_UpdateLogout+0x8,(%eax)
08418403 +0x0f:  mov    0x8(%ebp),%eax
08418406 +0x12:  mov    %eax,(%esp)
08418409 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
0841840e +0x1a:  mov    $0x0,%eax
08418413 +0x1f:  test   %al,%al
08418415 +0x21:  je     08418422 <+0x2e>
08418417 +0x23:  mov    0x8(%ebp),%eax
0841841a +0x26:  mov    %eax,(%esp)
0841841d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08418422 +0x2e:  leave
08418423 +0x2f:  ret
```

## 反编译 C

```c
// DB_UpdateLogout::~DB_UpdateLogout @ 0x84183f4

/* WARNING: Removing unreachable block (ram,0x08418417) */
/* DB_UpdateLogout::~DB_UpdateLogout() */

void __thiscall DB_UpdateLogout::~DB_UpdateLogout(DB_UpdateLogout *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f9a8;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
