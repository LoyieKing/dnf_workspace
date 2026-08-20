# CToolFileLog

`_ZN12CToolFileLogC1EPKci`

`CToolFileLog::CToolFileLog(char const*, int)`

| 类 | 地址 |
|---|---|
| `CToolFileLog` | `0x08107882` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08107882  _ZN12CToolFileLogC1EPKci
#           CToolFileLog::CToolFileLog(char const*, int)
# range [0x08107882, 0x08107897]
08107882 +0x00:  push   %ebp
08107883 +0x01:  mov    %esp,%ebp
08107885 +0x03:  mov    0x8(%ebp),%eax
08107888 +0x06:  mov    0xc(%ebp),%edx
0810788b +0x09:  mov    %edx,(%eax)
0810788d +0x0b:  mov    0x8(%ebp),%eax
08107890 +0x0e:  mov    0x10(%ebp),%edx
08107893 +0x11:  mov    %edx,0x4(%eax)
08107896 +0x14:  pop    %ebp
08107897 +0x15:  ret
```

## 反编译 C

```c
// CToolFileLog::CToolFileLog @ 0x8107882

/* CToolFileLog::CToolFileLog(char const*, int) */

void __thiscall CToolFileLog::CToolFileLog(CToolFileLog *this,char *param_1,int param_2)

{
  *(char **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}
```
