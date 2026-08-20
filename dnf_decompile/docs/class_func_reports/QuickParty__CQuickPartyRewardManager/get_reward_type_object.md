# get_reward_type_object

`_ZN10QuickParty24CQuickPartyRewardManager22get_reward_type_objectENS_16ENUM_REWARD_TYPEEj`

`QuickParty::CQuickPartyRewardManager::get_reward_type_object(QuickParty::ENUM_REWARD_TYPE, unsigned int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartyRewardManager` | `0x0826d8e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d8e2  _ZN10QuickParty24CQuickPartyRewardManager22get_reward_type_objectENS_16ENUM_REWARD_TYPEEj
#           QuickParty::CQuickPartyRewardManager::get_reward_type_object(QuickParty::ENUM_REWARD_TYPE, unsigned int)
# range [0x0826d8e2, 0x0826d919]
0826d8e2 +0x00:  push   %ebp
0826d8e3 +0x01:  mov    %esp,%ebp
0826d8e5 +0x03:  push   %ebx
0826d8e6 +0x04:  mov    0xc(%ebp),%eax
0826d8e9 +0x07:  cmp    $0x1,%eax
0826d8ec +0x0a:  jg     0826d8f4 <+0x12>
0826d8ee +0x0c:  cmpl   $0xc,0x10(%ebp)
0826d8f2 +0x10:  jbe    0826d8fb <+0x19>
0826d8f4 +0x12:  mov    $0x0,%eax
0826d8f9 +0x17:  jmp    0826d917 <+0x35>
0826d8fb +0x19:  mov    0xc(%ebp),%edx
0826d8fe +0x1c:  mov    0x10(%ebp),%ebx
0826d901 +0x1f:  mov    0x8(%ebp),%ecx
0826d904 +0x22:  mov    %edx,%eax
0826d906 +0x24:  add    %eax,%eax
0826d908 +0x26:  add    %edx,%eax
0826d90a +0x28:  shl    $0x2,%eax
0826d90d +0x2b:  add    %edx,%eax
0826d90f +0x2d:  add    %ebx,%eax
0826d911 +0x2f:  add    $0x70,%eax
0826d914 +0x32:  mov    (%ecx,%eax,4),%eax
0826d917 +0x35:  pop    %ebx
0826d918 +0x36:  pop    %ebp
0826d919 +0x37:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartyRewardManager::get_reward_type_object @ 0x826d8e2

/* QuickParty::CQuickPartyRewardManager::get_reward_type_object(QuickParty::ENUM_REWARD_TYPE,
   unsigned int) */

undefined4 __thiscall
QuickParty::CQuickPartyRewardManager::get_reward_type_object
          (CQuickPartyRewardManager *this,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 2) && (param_3 < 0xd)) {
    uVar1 = *(undefined4 *)(this + (param_2 * 0xd + param_3 + 0x70) * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
