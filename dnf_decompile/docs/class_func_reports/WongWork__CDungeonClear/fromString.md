# fromString

`_ZN8WongWork13CDungeonClear10fromStringEP5CUserPc`

`WongWork::CDungeonClear::fromString(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDungeonClear` | `0x084843fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084843fa  _ZN8WongWork13CDungeonClear10fromStringEP5CUserPc
#           WongWork::CDungeonClear::fromString(CUser*, char*)
# range [0x084843fa, 0x0848441b]
084843fa +0x00:  push   %ebp
084843fb +0x01:  mov    %esp,%ebp
084843fd +0x03:  sub    $0x38,%esp
08484400 +0x06:  mov    0x10(%ebp),%eax
08484403 +0x09:  mov    %eax,0x8(%esp)
08484407 +0x0d:  mov    0xc(%ebp),%eax
0848440a +0x10:  mov    %eax,0x4(%esp)
0848440e +0x14:  mov    0x8(%ebp),%eax
08484411 +0x17:  mov    %eax,(%esp)
08484414 +0x1a:  call   08483fae <_ZN8WongWork13CDungeonClear14AradfromStringEP5CUserPKc>  ; WongWork::CDungeonClear::AradfromString(CUser*, char const*)
08484419 +0x1f:  leave
0848441a +0x20:  ret
0848441b +0x21:  nop
```

## 反编译 C

```c
// WongWork::CDungeonClear::fromString @ 0x84843fa

/* WongWork::CDungeonClear::fromString(CUser*, char*) */

void __thiscall
WongWork::CDungeonClear::fromString(CDungeonClear *this,CUser *param_1,char *param_2)

{
  AradfromString(this,param_1,param_2);
  return;
}
```
