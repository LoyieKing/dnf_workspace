# IsWhiteAccount

`_ZN4ARAD16AradWhiteAccount14IsWhiteAccountEj`

`ARAD::AradWhiteAccount::IsWhiteAccount(unsigned int)`

| 类 | 地址 |
|---|---|
| `ARAD::AradWhiteAccount` | `0x081ab59c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ab59c  _ZN4ARAD16AradWhiteAccount14IsWhiteAccountEj
#           ARAD::AradWhiteAccount::IsWhiteAccount(unsigned int)
# range [0x081ab59c, 0x081ab5f7]
081ab59c +0x00:  push   %ebp
081ab59d +0x01:  mov    %esp,%ebp
081ab59f +0x03:  sub    $0x28,%esp
081ab5a2 +0x06:  mov    0x8(%ebp),%edx
081ab5a5 +0x09:  lea    -0x10(%ebp),%eax
081ab5a8 +0x0c:  lea    0xc(%ebp),%ecx
081ab5ab +0x0f:  mov    %ecx,0x8(%esp)
081ab5af +0x13:  mov    %edx,0x4(%esp)
081ab5b3 +0x17:  mov    %eax,(%esp)
081ab5b6 +0x1a:  call   08111332 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x844>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x844
081ab5bb +0x1f:  sub    $0x4,%esp
081ab5be +0x22:  mov    0x8(%ebp),%edx
081ab5c1 +0x25:  lea    -0xc(%ebp),%eax
081ab5c4 +0x28:  mov    %edx,0x4(%esp)
081ab5c8 +0x2c:  mov    %eax,(%esp)
081ab5cb +0x2f:  call   08111278 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x78a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x78a
081ab5d0 +0x34:  sub    $0x4,%esp
081ab5d3 +0x37:  lea    -0xc(%ebp),%eax
081ab5d6 +0x3a:  mov    %eax,0x4(%esp)
081ab5da +0x3e:  lea    -0x10(%ebp),%eax
081ab5dd +0x41:  mov    %eax,(%esp)
081ab5e0 +0x44:  call   081ab76c <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xbe>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xbe
081ab5e5 +0x49:  test   %al,%al
081ab5e7 +0x4b:  je     081ab5f0 <+0x54>
081ab5e9 +0x4d:  mov    $0x0,%eax
081ab5ee +0x52:  jmp    081ab5f5 <+0x59>
081ab5f0 +0x54:  mov    $0x1,%eax
081ab5f5 +0x59:  leave
081ab5f6 +0x5a:  ret
081ab5f7 +0x5b:  nop
```

## 反编译 C

```c
// ARAD::AradWhiteAccount::IsWhiteAccount @ 0x81ab59c

/* ARAD::AradWhiteAccount::IsWhiteAccount(unsigned int) */

bool ARAD::AradWhiteAccount::IsWhiteAccount(uint param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<unsigned_int> local_14 [4];
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_10 [12];
  
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
            ((uint *)local_14);
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<unsigned_int>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  return cVar1 == '\0';
}
```
