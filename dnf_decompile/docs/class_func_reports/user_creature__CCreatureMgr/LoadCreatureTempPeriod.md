# LoadCreatureTempPeriod

`_ZN13user_creature12CCreatureMgr22LoadCreatureTempPeriodEP31SIG_POSTAL_CREATURE_TEMP_PERIOD`

`user_creature::CCreatureMgr::LoadCreatureTempPeriod(SIG_POSTAL_CREATURE_TEMP_PERIOD*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833d9d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d9d8  _ZN13user_creature12CCreatureMgr22LoadCreatureTempPeriodEP31SIG_POSTAL_CREATURE_TEMP_PERIOD
#           user_creature::CCreatureMgr::LoadCreatureTempPeriod(SIG_POSTAL_CREATURE_TEMP_PERIOD*)
# range [0x0833d9d8, 0x0833da1d]
0833d9d8 +0x00:  push   %ebp
0833d9d9 +0x01:  mov    %esp,%ebp
0833d9db +0x03:  sub    $0x18,%esp
0833d9de +0x06:  mov    0xc(%ebp),%eax
0833d9e1 +0x09:  mov    0x4(%eax),%eax
0833d9e4 +0x0c:  cmp    $0xffffffff,%eax
0833d9e7 +0x0f:  je     0833da16 <+0x3e>
0833d9e9 +0x11:  mov    0xc(%ebp),%eax
0833d9ec +0x14:  mov    0x4(%eax),%edx
0833d9ef +0x17:  mov    0xc(%ebp),%eax
0833d9f2 +0x1a:  mov    (%eax),%eax
0833d9f4 +0x1c:  movl   $0x0,0xc(%esp)
0833d9fc +0x24:  mov    %edx,0x8(%esp)
0833da00 +0x28:  mov    %eax,0x4(%esp)
0833da04 +0x2c:  mov    0x8(%ebp),%eax
0833da07 +0x2f:  mov    %eax,(%esp)
0833da0a +0x32:  call   0833d7de <_ZN13user_creature12CCreatureMgr16RegistTempPeriodEiii>  ; user_creature::CCreatureMgr::RegistTempPeriod(int, int, int)
0833da0f +0x37:  mov    $0x1,%eax
0833da14 +0x3c:  jmp    0833da1b <+0x43>
0833da16 +0x3e:  mov    $0x0,%eax
0833da1b +0x43:  leave
0833da1c +0x44:  ret
0833da1d +0x45:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::LoadCreatureTempPeriod @ 0x833d9d8

/* user_creature::CCreatureMgr::LoadCreatureTempPeriod(SIG_POSTAL_CREATURE_TEMP_PERIOD*) */

bool __thiscall
user_creature::CCreatureMgr::LoadCreatureTempPeriod
          (CCreatureMgr *this,SIG_POSTAL_CREATURE_TEMP_PERIOD *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != -1) {
    RegistTempPeriod((int)this,*(int *)param_1,*(int *)(param_1 + 4));
  }
  return iVar1 != -1;
}
```
