# ChangeItemLimitCount

`_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii`

`cUserHistoryLog::ChangeItemLimitCount(int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686d54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686d54  _ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii
#           cUserHistoryLog::ChangeItemLimitCount(int, int, int, int, int)
# range [0x08686d54, 0x08686d9f]
08686d54 +0x00:  push   %ebp
08686d55 +0x01:  mov    %esp,%ebp
08686d57 +0x03:  sub    $0x28,%esp
08686d5a +0x06:  mov    0x8(%ebp),%eax
08686d5d +0x09:  mov    (%eax),%eax
08686d5f +0x0b:  test   %eax,%eax
08686d61 +0x0d:  je     08686d9d <+0x49>
08686d63 +0x0f:  mov    0x8(%ebp),%eax
08686d66 +0x12:  mov    (%eax),%eax
08686d68 +0x14:  mov    0x1c(%ebp),%edx
08686d6b +0x17:  mov    %edx,0x18(%esp)
08686d6f +0x1b:  mov    0x18(%ebp),%edx
08686d72 +0x1e:  mov    %edx,0x14(%esp)
08686d76 +0x22:  mov    0x14(%ebp),%edx
08686d79 +0x25:  mov    %edx,0x10(%esp)
08686d7d +0x29:  mov    0x10(%ebp),%edx
08686d80 +0x2c:  mov    %edx,0xc(%esp)
08686d84 +0x30:  mov    0xc(%ebp),%edx
08686d87 +0x33:  mov    %edx,0x8(%esp)
08686d8b +0x37:  movl   $"ChangeItemTradeLimitCount,%d,%d,%d,%d,%d",0x4(%esp)
08686d93 +0x3f:  mov    %eax,(%esp)
08686d96 +0x42:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686d9b +0x47:  jmp    08686d9e <+0x4a>
08686d9d +0x49:  nop
08686d9e +0x4a:  leave
08686d9f +0x4b:  ret
```

## 反编译 C

```c
// cUserHistoryLog::ChangeItemLimitCount @ 0x8686d54

/* cUserHistoryLog::ChangeItemLimitCount(int, int, int, int, int) */

void __thiscall
cUserHistoryLog::ChangeItemLimitCount
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (*(int *)this != 0) {
    CUser::LogHistory(*(CUser **)this,"ChangeItemTradeLimitCount,%d,%d,%d,%d,%d",param_1,param_2,
                      param_3,param_4,param_5);
  }
  return;
}
```
