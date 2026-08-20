# DB_Login

`_ZN8DB_LoginC1Ev`

`DB_Login::DB_Login()`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0840f48e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840f48e  _ZN8DB_LoginC1Ev
#           DB_Login::DB_Login()
# range [0x0840f48e, 0x0840f4a9]
0840f48e +0x00:  push   %ebp
0840f48f +0x01:  mov    %esp,%ebp
0840f491 +0x03:  sub    $0x18,%esp
0840f494 +0x06:  mov    0x8(%ebp),%eax
0840f497 +0x09:  mov    %eax,(%esp)
0840f49a +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
0840f49f +0x11:  mov    0x8(%ebp),%eax
0840f4a2 +0x14:  movl   $&_ZTV8DB_Login+0x8,(%eax)
0840f4a8 +0x1a:  leave
0840f4a9 +0x1b:  ret
```

## 反编译 C

```c
// DB_Login::DB_Login @ 0x840f48e

/* DB_Login::DB_Login() */

void __thiscall DB_Login::DB_Login(DB_Login *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fb10;
  return;
}
```
