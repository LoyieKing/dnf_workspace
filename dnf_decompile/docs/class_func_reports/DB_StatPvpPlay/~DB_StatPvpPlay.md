# ~DB_StatPvpPlay

`_ZN14DB_StatPvpPlayD1Ev`

`DB_StatPvpPlay::~DB_StatPvpPlay()`

| 类 | 地址 |
|---|---|
| `DB_StatPvpPlay` | `0x08417e74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417e74  _ZN14DB_StatPvpPlayD1Ev
#           DB_StatPvpPlay::~DB_StatPvpPlay()
# range [0x08417e74, 0x08417ea3]
08417e74 +0x00:  push   %ebp
08417e75 +0x01:  mov    %esp,%ebp
08417e77 +0x03:  sub    $0x18,%esp
08417e7a +0x06:  mov    0x8(%ebp),%eax
08417e7d +0x09:  movl   $&_ZTV14DB_StatPvpPlay+0x8,(%eax)
08417e83 +0x0f:  mov    0x8(%ebp),%eax
08417e86 +0x12:  mov    %eax,(%esp)
08417e89 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08417e8e +0x1a:  mov    $0x0,%eax
08417e93 +0x1f:  test   %al,%al
08417e95 +0x21:  je     08417ea2 <+0x2e>
08417e97 +0x23:  mov    0x8(%ebp),%eax
08417e9a +0x26:  mov    %eax,(%esp)
08417e9d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417ea2 +0x2e:  leave
08417ea3 +0x2f:  ret
```

## 反编译 C

```c
// DB_StatPvpPlay::~DB_StatPvpPlay @ 0x8417e74

/* WARNING: Removing unreachable block (ram,0x08417e97) */
/* DB_StatPvpPlay::~DB_StatPvpPlay() */

void __thiscall DB_StatPvpPlay::~DB_StatPvpPlay(DB_StatPvpPlay *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa08;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
