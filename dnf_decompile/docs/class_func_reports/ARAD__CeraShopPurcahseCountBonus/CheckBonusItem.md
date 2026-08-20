# CheckBonusItem

`_ZN4ARAD26CeraShopPurcahseCountBonus14CheckBonusItemEi`

`ARAD::CeraShopPurcahseCountBonus::CheckBonusItem(int)`

| 类 | 地址 |
|---|---|
| `ARAD::CeraShopPurcahseCountBonus` | `0x081abff0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081abff0  _ZN4ARAD26CeraShopPurcahseCountBonus14CheckBonusItemEi
#           ARAD::CeraShopPurcahseCountBonus::CheckBonusItem(int)
# range [0x081abff0, 0x081ac04b]
081abff0 +0x00:  push   %ebp
081abff1 +0x01:  mov    %esp,%ebp
081abff3 +0x03:  sub    $0x28,%esp
081abff6 +0x06:  mov    0x8(%ebp),%edx
081abff9 +0x09:  lea    -0x10(%ebp),%eax
081abffc +0x0c:  lea    0xc(%ebp),%ecx
081abfff +0x0f:  mov    %ecx,0x8(%esp)
081ac003 +0x13:  mov    %edx,0x4(%esp)
081ac007 +0x17:  mov    %eax,(%esp)
081ac00a +0x1a:  call   081ac748 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x54>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x54
081ac00f +0x1f:  sub    $0x4,%esp
081ac012 +0x22:  mov    0x8(%ebp),%edx
081ac015 +0x25:  lea    -0xc(%ebp),%eax
081ac018 +0x28:  mov    %edx,0x4(%esp)
081ac01c +0x2c:  mov    %eax,(%esp)
081ac01f +0x2f:  call   081ac782 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x8e>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x8e
081ac024 +0x34:  sub    $0x4,%esp
081ac027 +0x37:  lea    -0xc(%ebp),%eax
081ac02a +0x3a:  mov    %eax,0x4(%esp)
081ac02e +0x3e:  lea    -0x10(%ebp),%eax
081ac031 +0x41:  mov    %eax,(%esp)
081ac034 +0x44:  call   081ac7a8 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0xb4>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0xb4
081ac039 +0x49:  test   %al,%al
081ac03b +0x4b:  je     081ac044 <+0x54>
081ac03d +0x4d:  mov    $0x0,%eax
081ac042 +0x52:  jmp    081ac049 <+0x59>
081ac044 +0x54:  mov    $0x1,%eax
081ac049 +0x59:  leave
081ac04a +0x5a:  ret
081ac04b +0x5b:  nop
```

## 反编译 C

```c
// ARAD::CeraShopPurcahseCountBonus::CheckBonusItem @ 0x81abff0

/* ARAD::CeraShopPurcahseCountBonus::CheckBonusItem(int) */

bool ARAD::CeraShopPurcahseCountBonus::CheckBonusItem(int param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
  local_14 [4];
  map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
  local_10 [12];
  
  std::
  map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
  ::find((int *)local_14);
  std::
  map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
          ::operator==(local_14,(_Rb_tree_iterator *)local_10);
  return cVar1 == '\0';
}
```
