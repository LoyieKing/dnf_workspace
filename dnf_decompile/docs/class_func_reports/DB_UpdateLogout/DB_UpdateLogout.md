# DB_UpdateLogout

`_ZN15DB_UpdateLogoutC1Ev`

`DB_UpdateLogout::DB_UpdateLogout()`

| 类 | 地址 |
|---|---|
| `DB_UpdateLogout` | `0x084183d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084183d8  _ZN15DB_UpdateLogoutC1Ev
#           DB_UpdateLogout::DB_UpdateLogout()
# range [0x084183d8, 0x084183f3]
084183d8 +0x00:  push   %ebp
084183d9 +0x01:  mov    %esp,%ebp
084183db +0x03:  sub    $0x18,%esp
084183de +0x06:  mov    0x8(%ebp),%eax
084183e1 +0x09:  mov    %eax,(%esp)
084183e4 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
084183e9 +0x11:  mov    0x8(%ebp),%eax
084183ec +0x14:  movl   $&_ZTV15DB_UpdateLogout+0x8,(%eax)
084183f2 +0x1a:  leave
084183f3 +0x1b:  ret
```

## 反编译 C

```c
// DB_UpdateLogout::DB_UpdateLogout @ 0x84183d8

/* DB_UpdateLogout::DB_UpdateLogout() */

void __thiscall DB_UpdateLogout::DB_UpdateLogout(DB_UpdateLogout *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f9a8;
  return;
}
```
