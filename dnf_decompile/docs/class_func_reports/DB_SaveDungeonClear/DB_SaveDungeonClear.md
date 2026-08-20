# DB_SaveDungeonClear

`_ZN19DB_SaveDungeonClearC1Ev`

`DB_SaveDungeonClear::DB_SaveDungeonClear()`

| 类 | 地址 |
|---|---|
| `DB_SaveDungeonClear` | `0x08419fec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08419fec  _ZN19DB_SaveDungeonClearC1Ev
#           DB_SaveDungeonClear::DB_SaveDungeonClear()
# range [0x08419fec, 0x0841a007]
08419fec +0x00:  push   %ebp
08419fed +0x01:  mov    %esp,%ebp
08419fef +0x03:  sub    $0x18,%esp
08419ff2 +0x06:  mov    0x8(%ebp),%eax
08419ff5 +0x09:  mov    %eax,(%esp)
08419ff8 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08419ffd +0x11:  mov    0x8(%ebp),%eax
0841a000 +0x14:  movl   $&_ZTV19DB_SaveDungeonClear+0x8,(%eax)
0841a006 +0x1a:  leave
0841a007 +0x1b:  ret
```

## 反编译 C

```c
// DB_SaveDungeonClear::DB_SaveDungeonClear @ 0x8419fec

/* DB_SaveDungeonClear::DB_SaveDungeonClear() */

void __thiscall DB_SaveDungeonClear::DB_SaveDungeonClear(DB_SaveDungeonClear *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f948;
  return;
}
```
