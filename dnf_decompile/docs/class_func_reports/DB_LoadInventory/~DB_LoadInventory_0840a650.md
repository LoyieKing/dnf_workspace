# ~DB_LoadInventory

`_ZN16DB_LoadInventoryD0Ev`

`DB_LoadInventory::~DB_LoadInventory()`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840a650` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840a650  _ZN16DB_LoadInventoryD0Ev
#           DB_LoadInventory::~DB_LoadInventory()
# range [0x0840a650, 0x0840a66d]
0840a650 +0x00:  push   %ebp
0840a651 +0x01:  mov    %esp,%ebp
0840a653 +0x03:  sub    $0x18,%esp
0840a656 +0x06:  mov    0x8(%ebp),%eax
0840a659 +0x09:  mov    %eax,(%esp)
0840a65c +0x0c:  call   0840a620 <_ZN16DB_LoadInventoryD1Ev>  ; DB_LoadInventory::~DB_LoadInventory()
0840a661 +0x11:  mov    0x8(%ebp),%eax
0840a664 +0x14:  mov    %eax,(%esp)
0840a667 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0840a66c +0x1c:  leave
0840a66d +0x1d:  ret
```

## 反编译 C

```c
// DB_LoadInventory::~DB_LoadInventory @ 0x840a650

/* DB_LoadInventory::~DB_LoadInventory() */

void __thiscall DB_LoadInventory::~DB_LoadInventory(DB_LoadInventory *this)

{
  ~DB_LoadInventory(this);
  operator_delete(this);
  return;
}
```
