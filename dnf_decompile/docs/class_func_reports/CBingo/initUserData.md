# initUserData

`_ZN6CBingo12initUserDataER9BingoData`

`CBingo::initUserData(BingoData&)`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080cadd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cadd4  _ZN6CBingo12initUserDataER9BingoData
#           CBingo::initUserData(BingoData&)
# range [0x080cadd4, 0x080cadfd]
080cadd4 +0x00:  push   %ebp
080cadd5 +0x01:  mov    %esp,%ebp
080cadd7 +0x03:  sub    $0x18,%esp
080cadda +0x06:  mov    0xc(%ebp),%eax
080caddd +0x09:  mov    (%eax),%eax
080caddf +0x0b:  mov    %eax,0x4(%esp)
080cade3 +0x0f:  mov    0x8(%ebp),%eax
080cade6 +0x12:  mov    %eax,(%esp)
080cade9 +0x15:  call   080cab5a <_ZN6CBingo17calBoradMatchLineEi>  ; CBingo::calBoradMatchLine(int)
080cadee +0x1a:  mov    %eax,%edx
080cadf0 +0x1c:  mov    0xc(%ebp),%eax
080cadf3 +0x1f:  mov    %dl,0x4(%eax)
080cadf6 +0x22:  mov    $0x1,%eax
080cadfb +0x27:  leave
080cadfc +0x28:  ret
080cadfd +0x29:  nop
```

## 反编译 C

```c
// CBingo::initUserData @ 0x80cadd4

/* CBingo::initUserData(BingoData&) */

undefined4 __thiscall CBingo::initUserData(CBingo *this,BingoData *param_1)

{
  BingoData BVar1;
  
  BVar1 = (BingoData)calBoradMatchLine(this,*(int *)param_1);
  param_1[4] = BVar1;
  return 1;
}
```
