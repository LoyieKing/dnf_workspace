# MercenaryReturn

`_ZN15cUserHistoryLog15MercenaryReturnEjiiiii`

`cUserHistoryLog::MercenaryReturn(unsigned int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686b0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686b0a  _ZN15cUserHistoryLog15MercenaryReturnEjiiiii
#           cUserHistoryLog::MercenaryReturn(unsigned int, int, int, int, int, int)
# range [0x08686b0a, 0x08686b51]
08686b0a +0x00:  push   %ebp
08686b0b +0x01:  mov    %esp,%ebp
08686b0d +0x03:  sub    $0x28,%esp
08686b10 +0x06:  mov    0x8(%ebp),%eax
08686b13 +0x09:  mov    (%eax),%eax
08686b15 +0x0b:  mov    0x20(%ebp),%edx
08686b18 +0x0e:  mov    %edx,0x1c(%esp)
08686b1c +0x12:  mov    0x1c(%ebp),%edx
08686b1f +0x15:  mov    %edx,0x18(%esp)
08686b23 +0x19:  mov    0x18(%ebp),%edx
08686b26 +0x1c:  mov    %edx,0x14(%esp)
08686b2a +0x20:  mov    0x14(%ebp),%edx
08686b2d +0x23:  mov    %edx,0x10(%esp)
08686b31 +0x27:  mov    0x10(%ebp),%edx
08686b34 +0x2a:  mov    %edx,0xc(%esp)
08686b38 +0x2e:  mov    0xc(%ebp),%edx
08686b3b +0x31:  mov    %edx,0x8(%esp)
08686b3f +0x35:  movl   $"MecenaryReturn,%u,%d,%d,%d,%d,%d",0x4(%esp)
08686b47 +0x3d:  mov    %eax,(%esp)
08686b4a +0x40:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686b4f +0x45:  leave
08686b50 +0x46:  ret
08686b51 +0x47:  nop
```

## 反编译 C

```c
// cUserHistoryLog::MercenaryReturn @ 0x8686b0a

/* cUserHistoryLog::MercenaryReturn(unsigned int, int, int, int, int, int) */

void __thiscall
cUserHistoryLog::MercenaryReturn
          (cUserHistoryLog *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  CUser::LogHistory(*(CUser **)this,"MecenaryReturn,%u,%d,%d,%d,%d,%d",param_1,param_2,param_3,
                    param_4,param_5,param_6);
  return;
}
```
