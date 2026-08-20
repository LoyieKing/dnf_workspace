# getRequireQuickPartyMinCount

`_ZN10QuickParty24CQuickPartyRewardManager28getRequireQuickPartyMinCountEii`

`QuickParty::CQuickPartyRewardManager::getRequireQuickPartyMinCount(int, int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartyRewardManager` | `0x0826d8a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d8a2  _ZN10QuickParty24CQuickPartyRewardManager28getRequireQuickPartyMinCountEii
#           QuickParty::CQuickPartyRewardManager::getRequireQuickPartyMinCount(int, int)
# range [0x0826d8a2, 0x0826d8e1]
0826d8a2 +0x00:  push   %ebp
0826d8a3 +0x01:  mov    %esp,%ebp
0826d8a5 +0x03:  cmpl   $0x0,0xc(%ebp)
0826d8a9 +0x07:  js     0826d8b1 <+0xf>
0826d8ab +0x09:  cmpl   $0x1,0xc(%ebp)
0826d8af +0x0d:  jle    0826d8b8 <+0x16>
0826d8b1 +0x0f:  mov    $0xffffffff,%eax
0826d8b6 +0x14:  jmp    0826d8e0 <+0x3e>
0826d8b8 +0x16:  cmpl   $0x0,0x10(%ebp)
0826d8bc +0x1a:  js     0826d8c4 <+0x22>
0826d8be +0x1c:  cmpl   $0x3,0x10(%ebp)
0826d8c2 +0x20:  jle    0826d8cb <+0x29>
0826d8c4 +0x22:  mov    $0xffffffff,%eax
0826d8c9 +0x27:  jmp    0826d8e0 <+0x3e>
0826d8cb +0x29:  mov    0xc(%ebp),%ecx
0826d8ce +0x2c:  mov    0x10(%ebp),%edx
0826d8d1 +0x2f:  mov    0x8(%ebp),%eax
0826d8d4 +0x32:  shl    $0x2,%ecx
0826d8d7 +0x35:  lea    (%ecx,%edx,1),%edx
0826d8da +0x38:  add    $0x68,%edx
0826d8dd +0x3b:  mov    (%eax,%edx,4),%eax
0826d8e0 +0x3e:  pop    %ebp
0826d8e1 +0x3f:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartyRewardManager::getRequireQuickPartyMinCount @ 0x826d8a2

/* QuickParty::CQuickPartyRewardManager::getRequireQuickPartyMinCount(int, int) */

undefined4 __thiscall
QuickParty::CQuickPartyRewardManager::getRequireQuickPartyMinCount
          (CQuickPartyRewardManager *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (1 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 < 0) || (3 < param_2)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 * 4 + param_2 + 0x68) * 4);
  }
  return uVar1;
}
```
