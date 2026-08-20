# CreateDnfEventSciprt

`_ZN20CreateDnfEventSciprtC1Ev`

`CreateDnfEventSciprt::CreateDnfEventSciprt()`

| 类 | 地址 |
|---|---|
| `CreateDnfEventSciprt` | `0x08ac000c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac000c  _ZN20CreateDnfEventSciprtC1Ev
#           CreateDnfEventSciprt::CreateDnfEventSciprt()
# range [0x08ac000c, 0x08ac001f]
08ac000c +0x00:  push   %ebp
08ac000d +0x01:  mov    %esp,%ebp
08ac000f +0x03:  sub    $0x18,%esp
08ac0012 +0x06:  mov    0x8(%ebp),%eax
08ac0015 +0x09:  mov    %eax,(%esp)
08ac0018 +0x0c:  call   08ac066c <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x4b>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x4b
08ac001d +0x11:  leave
08ac001e +0x12:  ret
08ac001f +0x13:  nop
```

## 反编译 C

```c
// CreateDnfEventSciprt::CreateDnfEventSciprt @ 0x8ac000c

/* CreateDnfEventSciprt::CreateDnfEventSciprt() */

void __thiscall CreateDnfEventSciprt::CreateDnfEventSciprt(CreateDnfEventSciprt *this)

{
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::map((map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
         *)this);
  return;
}
```
