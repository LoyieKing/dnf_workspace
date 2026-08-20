# getAffectedRowCount

`_ZN10DbmwClient19getAffectedRowCountEv`

`DbmwClient::getAffectedRowCount()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08120dac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08120dac  _ZN10DbmwClient19getAffectedRowCountEv
#           DbmwClient::getAffectedRowCount()
# range [0x08120dac, 0x08120dbb]
08120dac +0x00:  push   %ebp
08120dad +0x01:  mov    %esp,%ebp
08120daf +0x03:  mov    0x8(%ebp),%eax
08120db2 +0x06:  mov    0x30(%eax),%eax
08120db5 +0x09:  mov    %eax,%edx
08120db7 +0x0b:  sar    $0x1f,%edx
08120dba +0x0e:  pop    %ebp
08120dbb +0x0f:  ret
```

## 反编译 C

```c
// DbmwClient::getAffectedRowCount @ 0x8120dac

/* DbmwClient::getAffectedRowCount() */

void DbmwClient::getAffectedRowCount(void)

{
  return;
}
```
