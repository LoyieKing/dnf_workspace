# useEmblem

`_ZN15cUserHistoryLog9useEmblemEmmjPKcj`

`cUserHistoryLog::useEmblem(unsigned long, unsigned long, unsigned int, char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685a08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685a08  _ZN15cUserHistoryLog9useEmblemEmmjPKcj
#           cUserHistoryLog::useEmblem(unsigned long, unsigned long, unsigned int, char const*, unsigned int)
# range [0x08685a08, 0x08685a47]
08685a08 +0x00:  push   %ebp
08685a09 +0x01:  mov    %esp,%ebp
08685a0b +0x03:  sub    $0x28,%esp
08685a0e +0x06:  mov    0x8(%ebp),%eax
08685a11 +0x09:  mov    (%eax),%eax
08685a13 +0x0b:  mov    0x1c(%ebp),%edx
08685a16 +0x0e:  mov    %edx,0x18(%esp)
08685a1a +0x12:  mov    0x18(%ebp),%edx
08685a1d +0x15:  mov    %edx,0x14(%esp)
08685a21 +0x19:  mov    0x14(%ebp),%edx
08685a24 +0x1c:  mov    %edx,0x10(%esp)
08685a28 +0x20:  mov    0x10(%ebp),%edx
08685a2b +0x23:  mov    %edx,0xc(%esp)
08685a2f +0x27:  mov    0xc(%ebp),%edx
08685a32 +0x2a:  mov    %edx,0x8(%esp)
08685a36 +0x2e:  movl   $"UseEmblem,%d,%d,%d,%s,%d",0x4(%esp)
08685a3e +0x36:  mov    %eax,(%esp)
08685a41 +0x39:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685a46 +0x3e:  leave
08685a47 +0x3f:  ret
```

## 反编译 C

```c
// cUserHistoryLog::useEmblem @ 0x8685a08

/* cUserHistoryLog::useEmblem(unsigned long, unsigned long, unsigned int, char const*, unsigned int)
    */

void __thiscall
cUserHistoryLog::useEmblem
          (cUserHistoryLog *this,ulong param_1,ulong param_2,uint param_3,char *param_4,uint param_5
          )

{
  CUser::LogHistory(*(CUser **)this,"UseEmblem,%d,%d,%d,%s,%d",param_1,param_2,param_3,param_4,
                    param_5);
  return;
}
```
