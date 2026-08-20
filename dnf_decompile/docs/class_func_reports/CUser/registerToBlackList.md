# registerToBlackList

`_ZN5CUser19registerToBlackListEj`

`CUser::registerToBlackList(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867efae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867efae  _ZN5CUser19registerToBlackListEj
#           CUser::registerToBlackList(unsigned int)
# range [0x0867efae, 0x0867f03f]
0867efae +0x00:  push   %ebp
0867efaf +0x01:  mov    %esp,%ebp
0867efb1 +0x03:  sub    $0x28,%esp
0867efb4 +0x06:  mov    0x8(%ebp),%eax
0867efb7 +0x09:  add    $0x8cef4,%eax
0867efbc +0x0e:  mov    %eax,(%esp)
0867efbf +0x11:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
0867efc4 +0x16:  cmp    $0x9,%eax
0867efc7 +0x19:  seta   %al
0867efca +0x1c:  test   %al,%al
0867efcc +0x1e:  je     0867f001 <+0x53>
0867efce +0x20:  movl   $"vt_black_list_.size() >= BLACKLIST_CNT_LIMIT",0x10(%esp)
0867efd6 +0x28:  movl   $0x7d62,0xc(%esp)
0867efde +0x30:  movl   $&_ZZN5CUser19registerToBlackListEjE19__PRETTY_FUNCTION__,0x8(%esp)
0867efe6 +0x38:  movl   $"user.cpp",0x4(%esp)
0867efee +0x40:  movl   $0x1,(%esp)
0867eff5 +0x47:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0867effa +0x4c:  mov    $0x0,%eax
0867efff +0x51:  jmp    0867f03e <+0x90>
0867f001 +0x53:  mov    0xc(%ebp),%eax
0867f004 +0x56:  mov    %eax,0x4(%esp)
0867f008 +0x5a:  mov    0x8(%ebp),%eax
0867f00b +0x5d:  mov    %eax,(%esp)
0867f00e +0x60:  call   0867f104 <_ZN5CUser11isBlackUserEj>  ; CUser::isBlackUser(unsigned int)
0867f013 +0x65:  xor    $0x1,%eax
0867f016 +0x68:  test   %al,%al
0867f018 +0x6a:  je     0867f039 <+0x8b>
0867f01a +0x6c:  mov    0x8(%ebp),%eax
0867f01d +0x6f:  lea    0x8cef4(%eax),%edx
0867f023 +0x75:  lea    0xc(%ebp),%eax
0867f026 +0x78:  mov    %eax,0x4(%esp)
0867f02a +0x7c:  mov    %edx,(%esp)
0867f02d +0x7f:  call   080e24f0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x296>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x296
0867f032 +0x84:  mov    $0x1,%eax
0867f037 +0x89:  jmp    0867f03e <+0x90>
0867f039 +0x8b:  mov    $0x0,%eax
0867f03e +0x90:  leave
0867f03f +0x91:  ret
```

## 反编译 C

```c
// CUser::registerToBlackList @ 0x867efae

/* CUser::registerToBlackList(unsigned int) */

undefined4 __thiscall CUser::registerToBlackList(CUser *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x8cef4));
  if (uVar2 < 10) {
    cVar1 = isBlackUser(this,param_1);
    if (cVar1 == '\x01') {
      uVar3 = 0;
    }
    else {
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x8cef4),&param_1);
      uVar3 = 1;
    }
  }
  else {
    LogManager::logFormat
              (1,"user.cpp","bool CUser::registerToBlackList(unsigned int)",0x7d62,
               "vt_black_list_.size() >= BLACKLIST_CNT_LIMIT");
    uVar3 = 0;
  }
  return uVar3;
}
```
