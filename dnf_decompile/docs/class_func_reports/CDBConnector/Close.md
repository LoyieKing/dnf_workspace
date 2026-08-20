# Close

`_ZN12CDBConnector5CloseEv`

`CDBConnector::Close()`

| 类 | 地址 |
|---|---|
| `CDBConnector` | `0x080ec668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec668  _ZN12CDBConnector5CloseEv
#           CDBConnector::Close()
# range [0x080ec668, 0x080ec67b]
080ec668 +0x00:  push   %ebp
080ec669 +0x01:  mov    %esp,%ebp
080ec66b +0x03:  sub    $0x18,%esp
080ec66e +0x06:  mov    0x8(%ebp),%eax
080ec671 +0x09:  mov    %eax,(%esp)
080ec674 +0x0c:  call   080ec6bc <_ZN12CDBConnector11CloseMasterEv>  ; CDBConnector::CloseMaster()
080ec679 +0x11:  leave
080ec67a +0x12:  ret
080ec67b +0x13:  nop
```

## 反编译 C

```c
// CDBConnector::Close @ 0x80ec668

/* CDBConnector::Close() */

void CDBConnector::Close(void)

{
  CloseMaster();
  return;
}
```
