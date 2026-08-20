# ~CDelivery

`_ZN9CDeliveryD1Ev`

`CDelivery::~CDelivery()`

| 类 | 地址 |
|---|---|
| `CDelivery` | `0x0811639a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811639a  _ZN9CDeliveryD1Ev
#           CDelivery::~CDelivery()
# range [0x0811639a, 0x081163db]
0811639a +0x00:  push   %ebp
0811639b +0x01:  mov    %esp,%ebp
0811639d +0x03:  push   %esi
0811639e +0x04:  push   %ebx
0811639f +0x05:  sub    $0x10,%esp
081163a2 +0x08:  mov    0x8(%ebp),%eax
081163a5 +0x0b:  mov    %eax,(%esp)
081163a8 +0x0e:  call   08117b4c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1261>  ; global constructors keyed to CEventManager::CEventManager()+0x1261
081163ad +0x13:  jmp    081163ca <+0x30>
081163af +0x15:  mov    %edx,%ebx
081163b1 +0x17:  mov    %eax,%esi
081163b3 +0x19:  mov    0x8(%ebp),%eax
081163b6 +0x1c:  mov    %eax,(%esp)
081163b9 +0x1f:  call   081178c8 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xfdd>  ; global constructors keyed to CEventManager::CEventManager()+0xfdd
081163be +0x24:  mov    %esi,%eax
081163c0 +0x26:  mov    %ebx,%edx
081163c2 +0x28:  mov    %eax,(%esp)
081163c5 +0x2b:  call   08ae3750 <_Unwind_Resume>
081163ca +0x30:  mov    0x8(%ebp),%eax
081163cd +0x33:  mov    %eax,(%esp)
081163d0 +0x36:  call   081178c8 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xfdd>  ; global constructors keyed to CEventManager::CEventManager()+0xfdd
081163d5 +0x3b:  add    $0x10,%esp
081163d8 +0x3e:  pop    %ebx
081163d9 +0x3f:  pop    %esi
081163da +0x40:  pop    %ebp
081163db +0x41:  ret
```

## 反编译 C

```c
// CDelivery::~CDelivery @ 0x811639a

/* CDelivery::~CDelivery() */

void __thiscall CDelivery::~CDelivery(CDelivery *this)

{
                    /* try { // try from 081163a8 to 081163ac has its CatchHandler @ 081163af */
  std::
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  ::clear((map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
           *)this);
  std::
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  ::~map((map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
          *)this);
  return;
}
```
