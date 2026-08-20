# resetGuildDBInfo

`_ZN5CUser16resetGuildDBInfoEv`

`CUser::resetGuildDBInfo()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866c196` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866c196  _ZN5CUser16resetGuildDBInfoEv
#           CUser::resetGuildDBInfo()
# range [0x0866c196, 0x0866c1c9]
0866c196 +0x00:  push   %ebp
0866c197 +0x01:  mov    %esp,%ebp
0866c199 +0x03:  sub    $0x18,%esp
0866c19c +0x06:  mov    0x8(%ebp),%eax
0866c19f +0x09:  mov    %eax,(%esp)
0866c1a2 +0x0c:  call   0866c11e <_ZN15CUserCharacInfo18resetCharGuildInfoEv>  ; CUserCharacInfo::resetCharGuildInfo()
0866c1a7 +0x11:  mov    0x8(%ebp),%eax
0866c1aa +0x14:  add    $0x8d020,%eax
0866c1af +0x19:  movl   $0xbd,0x8(%esp)
0866c1b7 +0x21:  movl   $0x0,0x4(%esp)
0866c1bf +0x29:  mov    %eax,(%esp)
0866c1c2 +0x2c:  call   0807dcc0 <_init+0x5b8>
0866c1c7 +0x31:  leave
0866c1c8 +0x32:  ret
0866c1c9 +0x33:  nop
```

## 反编译 C

```c
// CUser::resetGuildDBInfo @ 0x866c196

/* CUser::resetGuildDBInfo() */

void __thiscall CUser::resetGuildDBInfo(CUser *this)

{
  CUserCharacInfo::resetCharGuildInfo((CUserCharacInfo *)this);
  memset(this + 0x8d020,0,0xbd);
  return;
}
```
