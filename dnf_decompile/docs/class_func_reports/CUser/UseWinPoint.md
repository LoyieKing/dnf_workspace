# UseWinPoint

`_ZN5CUser11UseWinPointEi12eWPSubReason`

`CUser::UseWinPoint(int, eWPSubReason)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864fcc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864fcc6  _ZN5CUser11UseWinPointEi12eWPSubReason
#           CUser::UseWinPoint(int, eWPSubReason)
# range [0x0864fcc6, 0x0864fd2b]
0864fcc6 +0x00:  push   %ebp
0864fcc7 +0x01:  mov    %esp,%ebp
0864fcc9 +0x03:  sub    $0x18,%esp
0864fccc +0x06:  mov    0x8(%ebp),%eax
0864fccf +0x09:  mov    0x10(%ebp),%edx
0864fcd2 +0x0c:  mov    %edx,0x8(%esp)
0864fcd6 +0x10:  mov    0xc(%ebp),%edx
0864fcd9 +0x13:  mov    %edx,0x4(%esp)
0864fcdd +0x17:  mov    %eax,(%esp)
0864fce0 +0x1a:  call   0864e29c <_ZN15CUserCharacInfo11useWinPointEi12eWPSubReason>  ; CUserCharacInfo::useWinPoint(int, eWPSubReason)
0864fce5 +0x1f:  cmpl   $0x0,0xc(%ebp)
0864fce9 +0x23:  je     0864fd1c <+0x56>
0864fceb +0x25:  mov    0x8(%ebp),%eax
0864fcee +0x28:  mov    %eax,(%esp)
0864fcf1 +0x2b:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0864fcf6 +0x30:  mov    0x58(%eax),%eax
0864fcf9 +0x33:  mov    0x8(%ebp),%edx
0864fcfc +0x36:  lea    0x79700(%edx),%ecx
0864fd02 +0x3c:  mov    0x10(%ebp),%edx
0864fd05 +0x3f:  mov    %edx,0xc(%esp)
0864fd09 +0x43:  mov    0xc(%ebp),%edx
0864fd0c +0x46:  mov    %edx,0x8(%esp)
0864fd10 +0x4a:  mov    %eax,0x4(%esp)
0864fd14 +0x4e:  mov    %ecx,(%esp)
0864fd17 +0x51:  call   08682cc8 <_ZN15cUserHistoryLog5WPSubEii12eWPSubReason>  ; cUserHistoryLog::WPSub(int, int, eWPSubReason)
0864fd1c +0x56:  mov    0x8(%ebp),%eax
0864fd1f +0x59:  mov    %eax,(%esp)
0864fd22 +0x5c:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0864fd27 +0x61:  mov    0x58(%eax),%eax
0864fd2a +0x64:  leave
0864fd2b +0x65:  ret
```

## 反编译 C

```c
// CUser::UseWinPoint @ 0x864fcc6

/* CUser::UseWinPoint(int, eWPSubReason) */

undefined4 __thiscall CUser::UseWinPoint(CUser *this,int param_1,undefined4 param_3)

{
  int iVar1;
  
  CUserCharacInfo::useWinPoint(this,param_1,param_3);
  if (param_1 != 0) {
    iVar1 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
    cUserHistoryLog::WPSub
              ((cUserHistoryLog *)(this + 0x79700),*(undefined4 *)(iVar1 + 0x58),param_1,param_3);
  }
  iVar1 = CUserCharacInfo::getPVPResultR((CUserCharacInfo *)this);
  return *(undefined4 *)(iVar1 + 0x58);
}
```
