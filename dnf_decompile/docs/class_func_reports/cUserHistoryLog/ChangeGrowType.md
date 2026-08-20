# ChangeGrowType

`_ZN15cUserHistoryLog14ChangeGrowTypeEiiiii21eChangeGrowTypeReason`

`cUserHistoryLog::ChangeGrowType(int, int, int, int, int, eChangeGrowTypeReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868460a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868460a  _ZN15cUserHistoryLog14ChangeGrowTypeEiiiii21eChangeGrowTypeReason
#           cUserHistoryLog::ChangeGrowType(int, int, int, int, int, eChangeGrowTypeReason)
# range [0x0868460a, 0x08684651]
0868460a +0x00:  push   %ebp
0868460b +0x01:  mov    %esp,%ebp
0868460d +0x03:  sub    $0x28,%esp
08684610 +0x06:  mov    0x20(%ebp),%edx
08684613 +0x09:  mov    0x8(%ebp),%eax
08684616 +0x0c:  mov    (%eax),%eax
08684618 +0x0e:  mov    %edx,0x1c(%esp)
0868461c +0x12:  mov    0x1c(%ebp),%edx
0868461f +0x15:  mov    %edx,0x18(%esp)
08684623 +0x19:  mov    0x18(%ebp),%edx
08684626 +0x1c:  mov    %edx,0x14(%esp)
0868462a +0x20:  mov    0x14(%ebp),%edx
0868462d +0x23:  mov    %edx,0x10(%esp)
08684631 +0x27:  mov    0x10(%ebp),%edx
08684634 +0x2a:  mov    %edx,0xc(%esp)
08684638 +0x2e:  mov    0xc(%ebp),%edx
0868463b +0x31:  mov    %edx,0x8(%esp)
0868463f +0x35:  movl   $"CP,%d,%d,%d,%d,%d,%d",0x4(%esp)
08684647 +0x3d:  mov    %eax,(%esp)
0868464a +0x40:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868464f +0x45:  leave
08684650 +0x46:  ret
08684651 +0x47:  nop
```

## 反编译 C

```c
// cUserHistoryLog::ChangeGrowType @ 0x868460a

/* cUserHistoryLog::ChangeGrowType(int, int, int, int, int, eChangeGrowTypeReason) */

void __thiscall
cUserHistoryLog::ChangeGrowType
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_7)

{
  CUser::LogHistory(*(CUser **)this,"CP,%d,%d,%d,%d,%d,%d",param_1,param_2,param_3,param_4,param_5,
                    param_7);
  return;
}
```
