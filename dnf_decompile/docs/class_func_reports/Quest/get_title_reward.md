# get_title_reward

`_ZNK5Quest16get_title_rewardEv`

`Quest::get_title_reward() const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08353082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08353082  _ZNK5Quest16get_title_rewardEv
#           Quest::get_title_reward() const
# range [0x08353082, 0x083530d5]
08353082 +0x00:  push   %ebp
08353083 +0x01:  mov    %esp,%ebp
08353085 +0x03:  sub    $0x18,%esp
08353088 +0x06:  mov    0x8(%ebp),%eax
0835308b +0x09:  mov    0x8(%eax),%eax
0835308e +0x0c:  cmp    $0x7,%eax
08353091 +0x0f:  je     0835309a <+0x18>
08353093 +0x11:  mov    $0x0,%eax
08353098 +0x16:  jmp    083530d4 <+0x52>
0835309a +0x18:  mov    0x8(%ebp),%eax
0835309d +0x1b:  add    $0xc4,%eax
083530a2 +0x20:  mov    %eax,(%esp)
083530a5 +0x23:  call   08390e40 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208e0
083530aa +0x28:  test   %eax,%eax
083530ac +0x2a:  sete   %al
083530af +0x2d:  test   %al,%al
083530b1 +0x2f:  je     083530ba <+0x38>
083530b3 +0x31:  mov    $0x0,%eax
083530b8 +0x36:  jmp    083530d4 <+0x52>
083530ba +0x38:  mov    0x8(%ebp),%eax
083530bd +0x3b:  add    $0xc4,%eax
083530c2 +0x40:  movl   $0x0,0x4(%esp)
083530ca +0x48:  mov    %eax,(%esp)
083530cd +0x4b:  call   08390e5c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208fc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208fc
083530d2 +0x50:  mov    (%eax),%eax
083530d4 +0x52:  leave
083530d5 +0x53:  ret
```

## 反编译 C

```c
// Quest::get_title_reward @ 0x8353082

/* Quest::get_title_reward() const */

undefined4 __thiscall Quest::get_title_reward(Quest *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(this + 8) == 7) {
    iVar2 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::size
                      ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xc4));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = (undefined4 *)
               std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                         ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xc4),0);
      uVar1 = *puVar3;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
