# DieUser

`_ZN11pvp_assault13CAssaultPlace7DieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER`

`pvp_assault::CAssaultPlace::DieUser(CUser*, int, MSG_DIE_ASSAULT_PLAYER&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ed3fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ed3fe  _ZN11pvp_assault13CAssaultPlace7DieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER
#           pvp_assault::CAssaultPlace::DieUser(CUser*, int, MSG_DIE_ASSAULT_PLAYER&)
# range [0x082ed3fe, 0x082ed43d]
082ed3fe +0x00:  push   %ebp
082ed3ff +0x01:  mov    %esp,%ebp
082ed401 +0x03:  sub    $0x18,%esp
082ed404 +0x06:  movl   $0x1,0x8(%esp)
082ed40c +0x0e:  mov    0xc(%ebp),%eax
082ed40f +0x11:  mov    %eax,0x4(%esp)
082ed413 +0x15:  mov    0x8(%ebp),%eax
082ed416 +0x18:  mov    %eax,(%esp)
082ed419 +0x1b:  call   082e849a <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb>  ; pvp_assault::CAssaultPlace::_GetUserIndex(CUser*, bool)
082ed41e +0x20:  mov    0x14(%ebp),%edx
082ed421 +0x23:  mov    %edx,0xc(%esp)
082ed425 +0x27:  mov    0x10(%ebp),%edx
082ed428 +0x2a:  mov    %edx,0x8(%esp)
082ed42c +0x2e:  mov    %eax,0x4(%esp)
082ed430 +0x32:  mov    0x8(%ebp),%eax
082ed433 +0x35:  mov    %eax,(%esp)
082ed436 +0x38:  call   082ebda6 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER>  ; pvp_assault::CAssaultPlace::DieUser(int, int, MSG_DIE_ASSAULT_PLAYER&)
082ed43b +0x3d:  leave
082ed43c +0x3e:  ret
082ed43d +0x3f:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::DieUser @ 0x82ed3fe

/* pvp_assault::CAssaultPlace::DieUser(CUser*, int, MSG_DIE_ASSAULT_PLAYER&) */

void __thiscall
pvp_assault::CAssaultPlace::DieUser
          (CAssaultPlace *this,CUser *param_1,int param_2,MSG_DIE_ASSAULT_PLAYER *param_3)

{
  int iVar1;
  
  iVar1 = _GetUserIndex(this,param_1,true);
  DieUser(this,iVar1,param_2,param_3);
  return;
}
```
