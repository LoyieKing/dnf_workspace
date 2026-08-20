# DB_LoadDungeonClear

`_ZN19DB_LoadDungeonClearC1Ev`

`DB_LoadDungeonClear::DB_LoadDungeonClear()`

| 类 | 地址 |
|---|---|
| `DB_LoadDungeonClear` | `0x08419852` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08419852  _ZN19DB_LoadDungeonClearC1Ev
#           DB_LoadDungeonClear::DB_LoadDungeonClear()
# range [0x08419852, 0x0841986d]
08419852 +0x00:  push   %ebp
08419853 +0x01:  mov    %esp,%ebp
08419855 +0x03:  sub    $0x18,%esp
08419858 +0x06:  mov    0x8(%ebp),%eax
0841985b +0x09:  mov    %eax,(%esp)
0841985e +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08419863 +0x11:  mov    0x8(%ebp),%eax
08419866 +0x14:  movl   $&_ZTV19DB_LoadDungeonClear+0x8,(%eax)
0841986c +0x1a:  leave
0841986d +0x1b:  ret
```

## 反编译 C

```c
// DB_LoadDungeonClear::DB_LoadDungeonClear @ 0x8419852

/* DB_LoadDungeonClear::DB_LoadDungeonClear() */

void __thiscall DB_LoadDungeonClear::DB_LoadDungeonClear(DB_LoadDungeonClear *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f960;
  return;
}
```
