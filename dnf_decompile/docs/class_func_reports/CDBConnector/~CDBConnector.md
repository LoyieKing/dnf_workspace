# ~CDBConnector

`_ZN12CDBConnectorD1Ev`

`CDBConnector::~CDBConnector()`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080ec61a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec61a  _ZN12CDBConnectorD1Ev
#           CDBConnector::~CDBConnector()
# range [0x080ec61a, 0x080ec61f]
080ec61a +0x00:  push   %ebp
080ec61b +0x01:  mov    %esp,%ebp
080ec61d +0x03:  pop    %ebp
080ec61e +0x04:  ret
080ec61f +0x05:  nop
```

## 反编译 C

```c
// CDBConnector::~CDBConnector @ 0x80ec61a

/* CDBConnector::~CDBConnector() */

void __thiscall CDBConnector::~CDBConnector(CDBConnector *this)

{
  return;
}
```
