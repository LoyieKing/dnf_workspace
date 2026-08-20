# get_mob_reward

`_ZNK12CDataManager14get_mob_rewardEiRj`

`CDataManager::get_mob_reward(int, unsigned int&) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360a6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360a6e  _ZNK12CDataManager14get_mob_rewardEiRj
#           CDataManager::get_mob_reward(int, unsigned int&) const
# range [0x08360a6e, 0x08360aa1]
08360a6e +0x00:  push   %ebp
08360a6f +0x01:  mov    %esp,%ebp
08360a71 +0x03:  cmpl   $0x0,0xc(%ebp)
08360a75 +0x07:  jle    08360a80 <+0x12>
08360a77 +0x09:  cmpl   $0xc7,0xc(%ebp)
08360a7e +0x10:  jle    08360a8b <+0x1d>
08360a80 +0x12:  mov    0x10(%ebp),%eax
08360a83 +0x15:  movl   $0x0,(%eax)
08360a89 +0x1b:  jmp    08360aa0 <+0x32>
08360a8b +0x1d:  mov    0xc(%ebp),%edx
08360a8e +0x20:  mov    0x8(%ebp),%eax
08360a91 +0x23:  add    $0x2b68,%edx
08360a97 +0x29:  mov    0x4(%eax,%edx,4),%edx
08360a9b +0x2d:  mov    0x10(%ebp),%eax
08360a9e +0x30:  mov    %edx,(%eax)
08360aa0 +0x32:  pop    %ebp
08360aa1 +0x33:  ret
```

## 反编译 C

```c
// CDataManager::get_mob_reward @ 0x8360a6e

/* CDataManager::get_mob_reward(int, unsigned int&) const */

void __thiscall CDataManager::get_mob_reward(CDataManager *this,int param_1,uint *param_2)

{
  if ((param_1 < 1) || (199 < param_1)) {
    *param_2 = 0;
  }
  else {
    *param_2 = *(uint *)(this + (param_1 + 0x2b68) * 4 + 4);
  }
  return;
}
```
