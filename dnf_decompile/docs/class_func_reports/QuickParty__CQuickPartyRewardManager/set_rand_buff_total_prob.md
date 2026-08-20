# set_rand_buff_total_prob

`_ZN10QuickParty24CQuickPartyRewardManager24set_rand_buff_total_probEv`

`QuickParty::CQuickPartyRewardManager::set_rand_buff_total_prob()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartyRewardManager` | `0x0826d91a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d91a  _ZN10QuickParty24CQuickPartyRewardManager24set_rand_buff_total_probEv
#           QuickParty::CQuickPartyRewardManager::set_rand_buff_total_prob()
# range [0x0826d91a, 0x0826d993]
0826d91a +0x00:  push   %ebp
0826d91b +0x01:  mov    %esp,%ebp
0826d91d +0x03:  push   %ebx
0826d91e +0x04:  sub    $0x10,%esp
0826d921 +0x07:  movl   $0x0,-0x10(%ebp)
0826d928 +0x0e:  jmp    0826d983 <+0x69>
0826d92a +0x10:  movl   $0x0,-0xc(%ebp)
0826d931 +0x17:  movl   $0x0,-0x8(%ebp)
0826d938 +0x1e:  jmp    0826d959 <+0x3f>
0826d93a +0x20:  mov    -0x8(%ebp),%edx
0826d93d +0x23:  mov    -0x10(%ebp),%ebx
0826d940 +0x26:  mov    0x8(%ebp),%ecx
0826d943 +0x29:  mov    %edx,%eax
0826d945 +0x2b:  shl    $0x3,%eax
0826d948 +0x2e:  sub    %edx,%eax
0826d94a +0x30:  add    %ebx,%eax
0826d94c +0x32:  add    $0x14,%eax
0826d94f +0x35:  mov    (%ecx,%eax,4),%eax
0826d952 +0x38:  add    %eax,-0xc(%ebp)
0826d955 +0x3b:  addl   $0x1,-0x8(%ebp)
0826d959 +0x3f:  cmpl   $0xa,-0x8(%ebp)
0826d95d +0x43:  setle  %al
0826d960 +0x46:  test   %al,%al
0826d962 +0x48:  jne    0826d93a <+0x20>
0826d964 +0x4a:  mov    -0x8(%ebp),%edx
0826d967 +0x4d:  mov    -0x10(%ebp),%ebx
0826d96a +0x50:  mov    0x8(%ebp),%ecx
0826d96d +0x53:  mov    %edx,%eax
0826d96f +0x55:  shl    $0x3,%eax
0826d972 +0x58:  sub    %edx,%eax
0826d974 +0x5a:  add    %ebx,%eax
0826d976 +0x5c:  lea    0x14(%eax),%edx
0826d979 +0x5f:  mov    -0xc(%ebp),%eax
0826d97c +0x62:  mov    %eax,(%ecx,%edx,4)
0826d97f +0x65:  addl   $0x1,-0x10(%ebp)
0826d983 +0x69:  cmpl   $0x6,-0x10(%ebp)
0826d987 +0x6d:  setle  %al
0826d98a +0x70:  test   %al,%al
0826d98c +0x72:  jne    0826d92a <+0x10>
0826d98e +0x74:  add    $0x10,%esp
0826d991 +0x77:  pop    %ebx
0826d992 +0x78:  pop    %ebp
0826d993 +0x79:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartyRewardManager::set_rand_buff_total_prob @ 0x826d91a

/* QuickParty::CQuickPartyRewardManager::set_rand_buff_total_prob() */

void __thiscall
QuickParty::CQuickPartyRewardManager::set_rand_buff_total_prob(CQuickPartyRewardManager *this)

{
  int local_14;
  int local_10;
  int local_c;
  
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    local_10 = 0;
    for (local_c = 0; local_c < 0xb; local_c = local_c + 1) {
      local_10 = local_10 + *(int *)(this + (local_c * 7 + local_14 + 0x14) * 4);
    }
    *(int *)(this + (local_c * 7 + local_14 + 0x14) * 4) = local_10;
  }
  return;
}
```
