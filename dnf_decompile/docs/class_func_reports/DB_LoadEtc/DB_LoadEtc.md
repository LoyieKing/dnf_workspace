# DB_LoadEtc

`_ZN10DB_LoadEtcC1Ev`

`DB_LoadEtc::DB_LoadEtc()`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08403b84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403b84  _ZN10DB_LoadEtcC1Ev
#           DB_LoadEtc::DB_LoadEtc()
# range [0x08403b84, 0x08403b9f]
08403b84 +0x00:  push   %ebp
08403b85 +0x01:  mov    %esp,%ebp
08403b87 +0x03:  sub    $0x18,%esp
08403b8a +0x06:  mov    0x8(%ebp),%eax
08403b8d +0x09:  mov    %eax,(%esp)
08403b90 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08403b95 +0x11:  mov    0x8(%ebp),%eax
08403b98 +0x14:  movl   $&_ZTV10DB_LoadEtc+0x8,(%eax)
08403b9e +0x1a:  leave
08403b9f +0x1b:  ret
```

## 反编译 C

```c
// DB_LoadEtc::DB_LoadEtc @ 0x8403b84

/* DB_LoadEtc::DB_LoadEtc() */

void __thiscall DB_LoadEtc::DB_LoadEtc(DB_LoadEtc *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc00;
  return;
}
```
