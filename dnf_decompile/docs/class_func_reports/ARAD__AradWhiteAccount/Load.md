# Load

`_ZN4ARAD16AradWhiteAccount4LoadEv`

`ARAD::AradWhiteAccount::Load()`

| 类 | 地址 |
|---|---|
| `ARAD::AradWhiteAccount` | `0x081ab5f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ab5f8  _ZN4ARAD16AradWhiteAccount4LoadEv
#           ARAD::AradWhiteAccount::Load()
# range [0x081ab5f8, 0x081ab66d]
081ab5f8 +0x00:  push   %ebp
081ab5f9 +0x01:  mov    %esp,%ebp
081ab5fb +0x03:  sub    $0x48,%esp
081ab5fe +0x06:  movl   $0x27fa70,-0x24(%ebp)
081ab605 +0x0d:  mov    0x8(%ebp),%edx
081ab608 +0x10:  lea    -0x2c(%ebp),%eax
081ab60b +0x13:  lea    -0x24(%ebp),%ecx
081ab60e +0x16:  mov    %ecx,0x8(%esp)
081ab612 +0x1a:  mov    %edx,0x4(%esp)
081ab616 +0x1e:  mov    %eax,(%esp)
081ab619 +0x21:  call   081ab780 <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xd2>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xd2
081ab61e +0x26:  sub    $0x4,%esp
081ab621 +0x29:  movl   $0x27fa74,-0x18(%ebp)
081ab628 +0x30:  mov    0x8(%ebp),%edx
081ab62b +0x33:  lea    -0x20(%ebp),%eax
081ab62e +0x36:  lea    -0x18(%ebp),%ecx
081ab631 +0x39:  mov    %ecx,0x8(%esp)
081ab635 +0x3d:  mov    %edx,0x4(%esp)
081ab639 +0x41:  mov    %eax,(%esp)
081ab63c +0x44:  call   081ab780 <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xd2>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xd2
081ab641 +0x49:  sub    $0x4,%esp
081ab644 +0x4c:  movl   $0x27fa63,-0xc(%ebp)
081ab64b +0x53:  mov    0x8(%ebp),%edx
081ab64e +0x56:  lea    -0x14(%ebp),%eax
081ab651 +0x59:  lea    -0xc(%ebp),%ecx
081ab654 +0x5c:  mov    %ecx,0x8(%esp)
081ab658 +0x60:  mov    %edx,0x4(%esp)
081ab65c +0x64:  mov    %eax,(%esp)
081ab65f +0x67:  call   081ab780 <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xd2>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xd2
081ab664 +0x6c:  sub    $0x4,%esp
081ab667 +0x6f:  mov    $0x1,%eax
081ab66c +0x74:  leave
081ab66d +0x75:  ret
```

## 反编译 C

```c
// ARAD::AradWhiteAccount::Load @ 0x81ab5f8

/* ARAD::AradWhiteAccount::Load() */

undefined4 ARAD::AradWhiteAccount::Load(void)

{
  uint local_30 [2];
  undefined4 local_28;
  uint local_24 [2];
  undefined4 local_1c;
  uint local_18 [2];
  undefined4 local_10;
  
  local_28 = 0x27fa70;
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert(local_30);
  local_1c = 0x27fa74;
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert(local_24);
  local_10 = 0x27fa63;
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::insert(local_18);
  return 1;
}
```
