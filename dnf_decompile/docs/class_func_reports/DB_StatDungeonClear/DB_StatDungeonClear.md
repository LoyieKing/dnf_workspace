# DB_StatDungeonClear

`_ZN19DB_StatDungeonClearC1Ev`

`DB_StatDungeonClear::DB_StatDungeonClear()`

| 类 | 地址 |
|---|---|
| `DB_StatDungeonClear` | `0x08417c74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417c74  _ZN19DB_StatDungeonClearC1Ev
#           DB_StatDungeonClear::DB_StatDungeonClear()
# range [0x08417c74, 0x08417c8f]
08417c74 +0x00:  push   %ebp
08417c75 +0x01:  mov    %esp,%ebp
08417c77 +0x03:  sub    $0x18,%esp
08417c7a +0x06:  mov    0x8(%ebp),%eax
08417c7d +0x09:  mov    %eax,(%esp)
08417c80 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08417c85 +0x11:  mov    0x8(%ebp),%eax
08417c88 +0x14:  movl   $&_ZTV19DB_StatDungeonClear+0x8,(%eax)
08417c8e +0x1a:  leave
08417c8f +0x1b:  ret
```

## 反编译 C

```c
// DB_StatDungeonClear::DB_StatDungeonClear @ 0x8417c74

/* DB_StatDungeonClear::DB_StatDungeonClear() */

void __thiscall DB_StatDungeonClear::DB_StatDungeonClear(DB_StatDungeonClear *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa38;
  return;
}
```
