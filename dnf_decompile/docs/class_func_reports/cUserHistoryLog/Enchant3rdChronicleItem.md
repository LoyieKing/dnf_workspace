# Enchant3rdChronicleItem

`_ZN15cUserHistoryLog23Enchant3rdChronicleItemEbiiii`

`cUserHistoryLog::Enchant3rdChronicleItem(bool, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684c28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684c28  _ZN15cUserHistoryLog23Enchant3rdChronicleItemEbiiii
#           cUserHistoryLog::Enchant3rdChronicleItem(bool, int, int, int, int)
# range [0x08684c28, 0x08684c9f]
08684c28 +0x00:  push   %ebp
08684c29 +0x01:  mov    %esp,%ebp
08684c2b +0x03:  sub    $0x38,%esp
08684c2e +0x06:  mov    0xc(%ebp),%eax
08684c31 +0x09:  mov    %al,-0xc(%ebp)
08684c34 +0x0c:  cmpb   $0x0,-0xc(%ebp)
08684c38 +0x10:  je     08684c6d <+0x45>
08684c3a +0x12:  mov    0x8(%ebp),%eax
08684c3d +0x15:  mov    (%eax),%eax
08684c3f +0x17:  mov    0x1c(%ebp),%edx
08684c42 +0x1a:  mov    %edx,0x14(%esp)
08684c46 +0x1e:  mov    0x18(%ebp),%edx
08684c49 +0x21:  mov    %edx,0x10(%esp)
08684c4d +0x25:  mov    0x14(%ebp),%edx
08684c50 +0x28:  mov    %edx,0xc(%esp)
08684c54 +0x2c:  mov    0x10(%ebp),%edx
08684c57 +0x2f:  mov    %edx,0x8(%esp)
08684c5b +0x33:  movl   $"3rdEnchant+,%d,%d,%d,%d",0x4(%esp)
08684c63 +0x3b:  mov    %eax,(%esp)
08684c66 +0x3e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684c6b +0x43:  jmp    08684c9e <+0x76>
08684c6d +0x45:  mov    0x8(%ebp),%eax
08684c70 +0x48:  mov    (%eax),%eax
08684c72 +0x4a:  mov    0x1c(%ebp),%edx
08684c75 +0x4d:  mov    %edx,0x14(%esp)
08684c79 +0x51:  mov    0x18(%ebp),%edx
08684c7c +0x54:  mov    %edx,0x10(%esp)
08684c80 +0x58:  mov    0x14(%ebp),%edx
08684c83 +0x5b:  mov    %edx,0xc(%esp)
08684c87 +0x5f:  mov    0x10(%ebp),%edx
08684c8a +0x62:  mov    %edx,0x8(%esp)
08684c8e +0x66:  movl   $"3rdEnchant-,%d,%d,%d,%d",0x4(%esp)
08684c96 +0x6e:  mov    %eax,(%esp)
08684c99 +0x71:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684c9e +0x76:  leave
08684c9f +0x77:  ret
```

## 反编译 C

```c
// cUserHistoryLog::Enchant3rdChronicleItem @ 0x8684c28

/* cUserHistoryLog::Enchant3rdChronicleItem(bool, int, int, int, int) */

void __thiscall
cUserHistoryLog::Enchant3rdChronicleItem
          (cUserHistoryLog *this,bool param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_1) {
    CUser::LogHistory(*(CUser **)this,"3rdEnchant+,%d,%d,%d,%d",param_2,param_3,param_4,param_5);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"3rdEnchant-,%d,%d,%d,%d",param_2,param_3,param_4,param_5);
  }
  return;
}
```
