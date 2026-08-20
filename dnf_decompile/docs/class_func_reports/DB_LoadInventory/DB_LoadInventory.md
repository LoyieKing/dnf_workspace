# DB_LoadInventory

`_ZN16DB_LoadInventoryC1Ev`

`DB_LoadInventory::DB_LoadInventory()`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840a604` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840a604  _ZN16DB_LoadInventoryC1Ev
#           DB_LoadInventory::DB_LoadInventory()
# range [0x0840a604, 0x0840a61f]
0840a604 +0x00:  push   %ebp
0840a605 +0x01:  mov    %esp,%ebp
0840a607 +0x03:  sub    $0x18,%esp
0840a60a +0x06:  mov    0x8(%ebp),%eax
0840a60d +0x09:  mov    %eax,(%esp)
0840a610 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
0840a615 +0x11:  mov    0x8(%ebp),%eax
0840a618 +0x14:  movl   $&_ZTV16DB_LoadInventory+0x8,(%eax)
0840a61e +0x1a:  leave
0840a61f +0x1b:  ret
```

## 反编译 C

```c
// DB_LoadInventory::DB_LoadInventory @ 0x840a604

/* DB_LoadInventory::DB_LoadInventory() */

void __thiscall DB_LoadInventory::DB_LoadInventory(DB_LoadInventory *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fba0;
  return;
}
```
