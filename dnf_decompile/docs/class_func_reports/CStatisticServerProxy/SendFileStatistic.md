# SendFileStatistic

`_ZN21CStatisticServerProxy17SendFileStatisticEPKc`

`CStatisticServerProxy::SendFileStatistic(char const*)`

| 类 | 地址 |
|---|---|
| `CStatisticServerProxy` | `0x08472092` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08472092  _ZN21CStatisticServerProxy17SendFileStatisticEPKc
#           CStatisticServerProxy::SendFileStatistic(char const*)
# range [0x08472092, 0x084720b3]
08472092 +0x00:  push   %ebp
08472093 +0x01:  mov    %esp,%ebp
08472095 +0x03:  sub    $0x18,%esp
08472098 +0x06:  movl   $"",0x8(%esp)
084720a0 +0x0e:  mov    0xc(%ebp),%eax
084720a3 +0x11:  mov    %eax,0x4(%esp)
084720a7 +0x15:  mov    0x8(%ebp),%eax
084720aa +0x18:  mov    %eax,(%esp)
084720ad +0x1b:  call   084720b4 <_ZN21CStatisticServerProxy17SendFileStatisticEPKcS1_>  ; CStatisticServerProxy::SendFileStatistic(char const*, char const*)
084720b2 +0x20:  leave
084720b3 +0x21:  ret
```

## 反编译 C

```c
// CStatisticServerProxy::SendFileStatistic @ 0x8472092

/* CStatisticServerProxy::SendFileStatistic(char const*) */

void __thiscall CStatisticServerProxy::SendFileStatistic(CStatisticServerProxy *this,char *param_1)

{
  SendFileStatistic(this,param_1,"");
  return;
}
```
