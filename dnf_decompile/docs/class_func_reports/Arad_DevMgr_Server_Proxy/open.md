# open

`_ZN24Arad_DevMgr_Server_Proxy4openEv`

`Arad_DevMgr_Server_Proxy::open()`

| 类 | 地址 |
|---|---|
| `Arad_DevMgr_Server_Proxy` | `0x0818ddac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ddac  _ZN24Arad_DevMgr_Server_Proxy4openEv
#           Arad_DevMgr_Server_Proxy::open()
# range [0x0818ddac, 0x0818ddb5]
0818ddac +0x00:  push   %ebp
0818ddad +0x01:  mov    %esp,%ebp
0818ddaf +0x03:  mov    $0x1,%eax
0818ddb4 +0x08:  pop    %ebp
0818ddb5 +0x09:  ret
```

## 反编译 C

```c
// Arad_DevMgr_Server_Proxy::open @ 0x818ddac

/* Arad_DevMgr_Server_Proxy::open() */

undefined4 Arad_DevMgr_Server_Proxy::open(void)

{
  return 1;
}
```
