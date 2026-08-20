# update_pvp_rank

`_ZN5CUser15update_pvp_rankERK13PvpResultType`

`CUser::update_pvp_rank(PvpResultType const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865cf84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865cf84  _ZN5CUser15update_pvp_rankERK13PvpResultType
#           CUser::update_pvp_rank(PvpResultType const&)
# range [0x0865cf84, 0x0865cfab]
0865cf84 +0x00:  push   %ebp
0865cf85 +0x01:  mov    %esp,%ebp
0865cf87 +0x03:  sub    $0x18,%esp
0865cf8a +0x06:  mov    0x8(%ebp),%eax
0865cf8d +0x09:  mov    %eax,(%esp)
0865cf90 +0x0c:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865cf95 +0x11:  mov    0xc(%ebp),%edx
0865cf98 +0x14:  mov    %edx,0x4(%esp)
0865cf9c +0x18:  mov    %eax,(%esp)
0865cf9f +0x1b:  call   085d5944 <_ZN13PvpResultType12AddNewResultERKS_>  ; PvpResultType::AddNewResult(PvpResultType const&)
0865cfa4 +0x20:  mov    $0x1,%eax
0865cfa9 +0x25:  leave
0865cfaa +0x26:  ret
0865cfab +0x27:  nop
```

## 反编译 C

```c
// CUser::update_pvp_rank @ 0x865cf84

/* CUser::update_pvp_rank(PvpResultType const&) */

undefined4 __thiscall CUser::update_pvp_rank(CUser *this,PvpResultType *param_1)

{
  PvpResultType *this_00;
  
  this_00 = (PvpResultType *)CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
  PvpResultType::AddNewResult(this_00,param_1);
  return 1;
}
```
