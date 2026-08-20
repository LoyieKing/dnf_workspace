# GetMoneyCharacCreate

`_ZN8WongWork9CEventMgr20GetMoneyCharacCreateEv`

`WongWork::CEventMgr::GetMoneyCharacCreate()`

| 类 | 地址 |
|---|---|
| `WongWork::CEventMgr` | `0x0848f06e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f06e  _ZN8WongWork9CEventMgr20GetMoneyCharacCreateEv
#           WongWork::CEventMgr::GetMoneyCharacCreate()
# range [0x0848f06e, 0x0848f077]
0848f06e +0x00:  push   %ebp
0848f06f +0x01:  mov    %esp,%ebp
0848f071 +0x03:  mov    $0x0,%eax
0848f076 +0x08:  pop    %ebp
0848f077 +0x09:  ret
```

## 反编译 C

```c
// WongWork::CEventMgr::GetMoneyCharacCreate @ 0x848f06e

/* WongWork::CEventMgr::GetMoneyCharacCreate() */

undefined4 WongWork::CEventMgr::GetMoneyCharacCreate(void)

{
  return 0;
}
```
