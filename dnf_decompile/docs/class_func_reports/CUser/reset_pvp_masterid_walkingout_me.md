# reset_pvp_masterid_walkingout_me

`_ZN5CUser32reset_pvp_masterid_walkingout_meEv`

`CUser::reset_pvp_masterid_walkingout_me()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865cf6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865cf6c  _ZN5CUser32reset_pvp_masterid_walkingout_meEv
#           CUser::reset_pvp_masterid_walkingout_me()
# range [0x0865cf6c, 0x0865cf83]
0865cf6c +0x00:  push   %ebp
0865cf6d +0x01:  mov    %esp,%ebp
0865cf6f +0x03:  sub    $0x18,%esp
0865cf72 +0x06:  mov    0x8(%ebp),%eax
0865cf75 +0x09:  add    $0x8cfe4,%eax
0865cf7a +0x0e:  mov    %eax,(%esp)
0865cf7d +0x11:  call   081ab758 <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xaa>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xaa
0865cf82 +0x16:  leave
0865cf83 +0x17:  ret
```

## 反编译 C

```c
// CUser::reset_pvp_masterid_walkingout_me @ 0x865cf6c

/* CUser::reset_pvp_masterid_walkingout_me() */

void __thiscall CUser::reset_pvp_masterid_walkingout_me(CUser *this)

{
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::clear
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)
             (this + 0x8cfe4));
  return;
}
```
