# GetBlackListCount

`_ZNK5CUser17GetBlackListCountEP19SIG_REQ_BLACK_COUNT`

`CUser::GetBlackListCount(SIG_REQ_BLACK_COUNT*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867f1d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867f1d4  _ZNK5CUser17GetBlackListCountEP19SIG_REQ_BLACK_COUNT
#           CUser::GetBlackListCount(SIG_REQ_BLACK_COUNT*) const
# range [0x0867f1d4, 0x0867f1fd]
0867f1d4 +0x00:  push   %ebp
0867f1d5 +0x01:  mov    %esp,%ebp
0867f1d7 +0x03:  sub    $0x18,%esp
0867f1da +0x06:  mov    0xc(%ebp),%eax
0867f1dd +0x09:  movl   $0x0,0x4(%eax)
0867f1e4 +0x10:  mov    0x8(%ebp),%eax
0867f1e7 +0x13:  mov    %eax,(%esp)
0867f1ea +0x16:  call   082f0960 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x6e4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x6e4
0867f1ef +0x1b:  mov    %eax,%edx
0867f1f1 +0x1d:  mov    0xc(%ebp),%eax
0867f1f4 +0x20:  mov    %edx,0x8(%eax)
0867f1f7 +0x23:  mov    $0x1,%eax
0867f1fc +0x28:  leave
0867f1fd +0x29:  ret
```

## 反编译 C

```c
// CUser::GetBlackListCount @ 0x867f1d4

/* CUser::GetBlackListCount(SIG_REQ_BLACK_COUNT*) const */

undefined4 __thiscall CUser::GetBlackListCount(CUser *this,SIG_REQ_BLACK_COUNT *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = CUserCharacInfo::getCurrCharacBlackCount((CUserCharacInfo *)this);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return 1;
}
```
