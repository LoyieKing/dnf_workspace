# insert_pvp_masterid_walkingout_me

`_ZN5CUser33insert_pvp_masterid_walkingout_meEj`

`CUser::insert_pvp_masterid_walkingout_me(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865cf42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865cf42  _ZN5CUser33insert_pvp_masterid_walkingout_meEj
#           CUser::insert_pvp_masterid_walkingout_me(unsigned int)
# range [0x0865cf42, 0x0865cf6b]
0865cf42 +0x00:  push   %ebp
0865cf43 +0x01:  mov    %esp,%ebp
0865cf45 +0x03:  sub    $0x28,%esp
0865cf48 +0x06:  mov    0x8(%ebp),%eax
0865cf4b +0x09:  lea    0x8cfe4(%eax),%ecx
0865cf51 +0x0f:  lea    -0x10(%ebp),%eax
0865cf54 +0x12:  lea    0xc(%ebp),%edx
0865cf57 +0x15:  mov    %edx,0x8(%esp)
0865cf5b +0x19:  mov    %ecx,0x4(%esp)
0865cf5f +0x1d:  mov    %eax,(%esp)
0865cf62 +0x20:  call   081ab780 <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xd2>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xd2
0865cf67 +0x25:  sub    $0x4,%esp
0865cf6a +0x28:  leave
0865cf6b +0x29:  ret
```

## 反编译 C

```c
// CUser::insert_pvp_masterid_walkingout_me @ 0x865cf42

/* CUser::insert_pvp_masterid_walkingout_me(unsigned int) */

void CUser::insert_pvp_masterid_walkingout_me(uint param_1)

{
  uint local_14 [4];
  
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert(local_14);
  return;
}
```
