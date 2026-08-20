# DB_StatCoinUse

`_ZN14DB_StatCoinUseC1Ev`

`DB_StatCoinUse::DB_StatCoinUse()`

| 类 | 地址 |
|---|---|
| `DB_StatCoinUse` | `0x08417b04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417b04  _ZN14DB_StatCoinUseC1Ev
#           DB_StatCoinUse::DB_StatCoinUse()
# range [0x08417b04, 0x08417b1f]
08417b04 +0x00:  push   %ebp
08417b05 +0x01:  mov    %esp,%ebp
08417b07 +0x03:  sub    $0x18,%esp
08417b0a +0x06:  mov    0x8(%ebp),%eax
08417b0d +0x09:  mov    %eax,(%esp)
08417b10 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08417b15 +0x11:  mov    0x8(%ebp),%eax
08417b18 +0x14:  movl   $&_ZTV14DB_StatCoinUse+0x8,(%eax)
08417b1e +0x1a:  leave
08417b1f +0x1b:  ret
```

## 反编译 C

```c
// DB_StatCoinUse::DB_StatCoinUse @ 0x8417b04

/* DB_StatCoinUse::DB_StatCoinUse() */

void __thiscall DB_StatCoinUse::DB_StatCoinUse(DB_StatCoinUse *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa68;
  return;
}
```
