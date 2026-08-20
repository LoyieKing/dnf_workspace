# DB_StatPvpPlay

`_ZN14DB_StatPvpPlayC1Ev`

`DB_StatPvpPlay::DB_StatPvpPlay()`

| 类 | 地址 |
|---|---|
| `DB_StatPvpPlay` | `0x08417e58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417e58  _ZN14DB_StatPvpPlayC1Ev
#           DB_StatPvpPlay::DB_StatPvpPlay()
# range [0x08417e58, 0x08417e73]
08417e58 +0x00:  push   %ebp
08417e59 +0x01:  mov    %esp,%ebp
08417e5b +0x03:  sub    $0x18,%esp
08417e5e +0x06:  mov    0x8(%ebp),%eax
08417e61 +0x09:  mov    %eax,(%esp)
08417e64 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08417e69 +0x11:  mov    0x8(%ebp),%eax
08417e6c +0x14:  movl   $&_ZTV14DB_StatPvpPlay+0x8,(%eax)
08417e72 +0x1a:  leave
08417e73 +0x1b:  ret
```

## 反编译 C

```c
// DB_StatPvpPlay::DB_StatPvpPlay @ 0x8417e58

/* DB_StatPvpPlay::DB_StatPvpPlay() */

void __thiscall DB_StatPvpPlay::DB_StatPvpPlay(DB_StatPvpPlay *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa08;
  return;
}
```
