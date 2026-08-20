# Return_Mercenary_Charac

`_ZN5CUser23Return_Mercenary_CharacEjR25competition_reward_result`

`CUser::Return_Mercenary_Charac(unsigned int, competition_reward_result&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868e692` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e692  _ZN5CUser23Return_Mercenary_CharacEjR25competition_reward_result
#           CUser::Return_Mercenary_Charac(unsigned int, competition_reward_result&)
# range [0x0868e692, 0x0868e6bf]
0868e692 +0x00:  push   %ebp
0868e693 +0x01:  mov    %esp,%ebp
0868e695 +0x03:  sub    $0x18,%esp
0868e698 +0x06:  mov    0x8(%ebp),%eax
0868e69b +0x09:  lea    0x6ef6c(%eax),%edx
0868e6a1 +0x0f:  mov    0x10(%ebp),%eax
0868e6a4 +0x12:  mov    %eax,0xc(%esp)
0868e6a8 +0x16:  mov    0xc(%ebp),%eax
0868e6ab +0x19:  mov    %eax,0x8(%esp)
0868e6af +0x1d:  mov    0x8(%ebp),%eax
0868e6b2 +0x20:  mov    %eax,0x4(%esp)
0868e6b6 +0x24:  mov    %edx,(%esp)
0868e6b9 +0x27:  call   081b44c0 <_ZN20UserMercenaryInfoMgr12ReturnCharacEP5CUserjR25competition_reward_result>  ; UserMercenaryInfoMgr::ReturnCharac(CUser*, unsigned int, competition_reward_result&)
0868e6be +0x2c:  leave
0868e6bf +0x2d:  ret
```

## 反编译 C

```c
// CUser::Return_Mercenary_Charac @ 0x868e692

/* CUser::Return_Mercenary_Charac(unsigned int, competition_reward_result&) */

void __thiscall
CUser::Return_Mercenary_Charac(CUser *this,uint param_1,competition_reward_result *param_2)

{
  UserMercenaryInfoMgr::ReturnCharac((UserMercenaryInfoMgr *)(this + 0x6ef6c),this,param_1,param_2);
  return;
}
```
