# CDBConnector

`_ZN12CDBConnectorC1EP5DBMgr`

`CDBConnector::CDBConnector(DBMgr*)`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080ec5fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec5fc  _ZN12CDBConnectorC1EP5DBMgr
#           CDBConnector::CDBConnector(DBMgr*)
# range [0x080ec5fc, 0x080ec619]
080ec5fc +0x00:  push   %ebp
080ec5fd +0x01:  mov    %esp,%ebp
080ec5ff +0x03:  sub    $0x18,%esp
080ec602 +0x06:  mov    0x8(%ebp),%eax
080ec605 +0x09:  mov    0xc(%ebp),%edx
080ec608 +0x0c:  mov    %edx,(%eax)
080ec60a +0x0e:  mov    0x8(%ebp),%eax
080ec60d +0x11:  add    $0x4,%eax
080ec610 +0x14:  mov    %eax,(%esp)
080ec613 +0x17:  call   080ecd38 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x1d>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x1d
080ec618 +0x1c:  leave
080ec619 +0x1d:  ret
```

## 反编译 C

```c
// CDBConnector::CDBConnector @ 0x80ec5fc

/* CDBConnector::CDBConnector(DBMgr*) */

void __thiscall CDBConnector::CDBConnector(CDBConnector *this,DBMgr *param_1)

{
  *(DBMgr **)this = param_1;
  STDBConnInfo::STDBConnInfo((STDBConnInfo *)(this + 4));
  return;
}
```
