# ~Arad_StatisticsEventItemList

`_ZN4ARAD28Arad_StatisticsEventItemListD1Ev`

`ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_StatisticsEventItemList` | `0x0819ccac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819ccac  _ZN4ARAD28Arad_StatisticsEventItemListD1Ev
#           ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList()
# range [0x0819ccac, 0x0819cd0d]
0819ccac +0x00:  push   %ebp
0819ccad +0x01:  mov    %esp,%ebp
0819ccaf +0x03:  push   %esi
0819ccb0 +0x04:  push   %ebx
0819ccb1 +0x05:  sub    $0x10,%esp
0819ccb4 +0x08:  mov    0x8(%ebp),%eax
0819ccb7 +0x0b:  movl   $&_ZTVN4ARAD28Arad_StatisticsEventItemListE+0x8,(%eax)
0819ccbd +0x11:  mov    0x8(%ebp),%eax
0819ccc0 +0x14:  add    $0x8,%eax
0819ccc3 +0x17:  mov    %eax,(%esp)
0819ccc6 +0x1a:  call   080f53d6 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x387>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x387
0819cccb +0x1f:  jmp    0819cce8 <+0x3c>
0819cccd +0x21:  mov    %edx,%ebx
0819cccf +0x23:  mov    %eax,%esi
0819ccd1 +0x25:  mov    0x8(%ebp),%eax
0819ccd4 +0x28:  mov    %eax,(%esp)
0819ccd7 +0x2b:  call   08195c82 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x42>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x42
0819ccdc +0x30:  mov    %esi,%eax
0819ccde +0x32:  mov    %ebx,%edx
0819cce0 +0x34:  mov    %eax,(%esp)
0819cce3 +0x37:  call   08ae3750 <_Unwind_Resume>
0819cce8 +0x3c:  mov    0x8(%ebp),%eax
0819cceb +0x3f:  mov    %eax,(%esp)
0819ccee +0x42:  call   08195c82 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x42>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x42
0819ccf3 +0x47:  mov    $0x0,%eax
0819ccf8 +0x4c:  test   %al,%al
0819ccfa +0x4e:  je     0819cd07 <+0x5b>
0819ccfc +0x50:  mov    0x8(%ebp),%eax
0819ccff +0x53:  mov    %eax,(%esp)
0819cd02 +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0819cd07 +0x5b:  add    $0x10,%esp
0819cd0a +0x5e:  pop    %ebx
0819cd0b +0x5f:  pop    %esi
0819cd0c +0x60:  pop    %ebp
0819cd0d +0x61:  ret
```

## 反编译 C

```c
// ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList @ 0x819ccac

/* WARNING: Removing unreachable block (ram,0x0819ccfc) */
/* ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList() */

void __thiscall
ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList
          (Arad_StatisticsEventItemList *this)

{
  *(undefined ***)this = &PTR__Arad_StatisticsEventItemList_08ba5a80;
                    /* try { // try from 0819ccc6 to 0819ccca has its CatchHandler @ 0819cccd */
  std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8));
  Arad_InterfaceGameScript::~Arad_InterfaceGameScript((Arad_InterfaceGameScript *)this);
  return;
}
```
