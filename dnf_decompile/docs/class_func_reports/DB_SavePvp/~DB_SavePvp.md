# ~DB_SavePvp

`_ZN10DB_SavePvpD1Ev`

`DB_SavePvp::~DB_SavePvp()`

| 类 | 地址 |
|---|---|
| `DB_SavePvp` | `0x0841722a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841722a  _ZN10DB_SavePvpD1Ev
#           DB_SavePvp::~DB_SavePvp()
# range [0x0841722a, 0x08417259]
0841722a +0x00:  push   %ebp
0841722b +0x01:  mov    %esp,%ebp
0841722d +0x03:  sub    $0x18,%esp
08417230 +0x06:  mov    0x8(%ebp),%eax
08417233 +0x09:  movl   $&_ZTV10DB_SavePvp+0x8,(%eax)
08417239 +0x0f:  mov    0x8(%ebp),%eax
0841723c +0x12:  mov    %eax,(%esp)
0841723f +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08417244 +0x1a:  mov    $0x0,%eax
08417249 +0x1f:  test   %al,%al
0841724b +0x21:  je     08417258 <+0x2e>
0841724d +0x23:  mov    0x8(%ebp),%eax
08417250 +0x26:  mov    %eax,(%esp)
08417253 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417258 +0x2e:  leave
08417259 +0x2f:  ret
```

## 反编译 C

```c
// DB_SavePvp::~DB_SavePvp @ 0x841722a

/* WARNING: Removing unreachable block (ram,0x0841724d) */
/* DB_SavePvp::~DB_SavePvp() */

void __thiscall DB_SavePvp::~DB_SavePvp(DB_SavePvp *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fac8;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
