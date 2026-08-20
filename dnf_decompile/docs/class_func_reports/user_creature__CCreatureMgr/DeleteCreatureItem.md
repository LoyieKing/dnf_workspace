# DeleteCreatureItem

`_ZN13user_creature12CCreatureMgr18DeleteCreatureItemEii`

`user_creature::CCreatureMgr::DeleteCreatureItem(int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833b606` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833b606  _ZN13user_creature12CCreatureMgr18DeleteCreatureItemEii
#           user_creature::CCreatureMgr::DeleteCreatureItem(int, int)
# range [0x0833b606, 0x0833b61f]
0833b606 +0x00:  push   %ebp
0833b607 +0x01:  mov    %esp,%ebp
0833b609 +0x03:  sub    $0x18,%esp
0833b60c +0x06:  mov    0xc(%ebp),%eax
0833b60f +0x09:  mov    %eax,0x4(%esp)
0833b613 +0x0d:  mov    0x8(%ebp),%eax
0833b616 +0x10:  mov    %eax,(%esp)
0833b619 +0x13:  call   0833a854 <_ZN13user_creature12CCreatureMgr22UnregisterCreatureItemEi>  ; user_creature::CCreatureMgr::UnregisterCreatureItem(int)
0833b61e +0x18:  leave
0833b61f +0x19:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::DeleteCreatureItem @ 0x833b606

/* user_creature::CCreatureMgr::DeleteCreatureItem(int, int) */

void user_creature::CCreatureMgr::DeleteCreatureItem(int param_1,int param_2)

{
  UnregisterCreatureItem((CCreatureMgr *)param_1,param_2);
  return;
}
```
