# SendResult

`_ZN16DB_LoadInventory10SendResultEiiP18SIG_LOAD_INVENTORY`

`DB_LoadInventory::SendResult(int, int, SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840da6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840da6e  _ZN16DB_LoadInventory10SendResultEiiP18SIG_LOAD_INVENTORY
#           DB_LoadInventory::SendResult(int, int, SIG_LOAD_INVENTORY*)
# range [0x0840da6e, 0x0840da95]
0840da6e +0x00:  push   %ebp
0840da6f +0x01:  mov    %esp,%ebp
0840da71 +0x03:  sub    $0x28,%esp
0840da74 +0x06:  mov    0x14(%ebp),%eax
0840da77 +0x09:  mov    %eax,0xc(%esp)
0840da7b +0x0d:  mov    0x10(%ebp),%eax
0840da7e +0x10:  mov    %eax,0x8(%esp)
0840da82 +0x14:  mov    0xc(%ebp),%eax
0840da85 +0x17:  mov    %eax,0x4(%esp)
0840da89 +0x1b:  mov    0x8(%ebp),%eax
0840da8c +0x1e:  mov    %eax,(%esp)
0840da8f +0x21:  call   0840d98c <_ZN16DB_LoadInventory19SendResult_forchinaEiiP18SIG_LOAD_INVENTORY>  ; DB_LoadInventory::SendResult_forchina(int, int, SIG_LOAD_INVENTORY*)
0840da94 +0x26:  leave
0840da95 +0x27:  ret
```

## 反编译 C

```c
// DB_LoadInventory::SendResult @ 0x840da6e

/* DB_LoadInventory::SendResult(int, int, SIG_LOAD_INVENTORY*) */

void __thiscall
DB_LoadInventory::SendResult
          (DB_LoadInventory *this,int param_1,int param_2,SIG_LOAD_INVENTORY *param_3)

{
  SendResult_forchina(this,param_1,param_2,param_3);
  return;
}
```
