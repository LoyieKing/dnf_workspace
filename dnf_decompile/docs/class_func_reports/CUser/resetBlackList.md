# resetBlackList

`_ZN5CUser14resetBlackListEv`

`CUser::resetBlackList()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867f1a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867f1a4  _ZN5CUser14resetBlackListEv
#           CUser::resetBlackList()
# range [0x0867f1a4, 0x0867f1d3]
0867f1a4 +0x00:  push   %ebp
0867f1a5 +0x01:  mov    %esp,%ebp
0867f1a7 +0x03:  sub    $0x18,%esp
0867f1aa +0x06:  mov    0x8(%ebp),%eax
0867f1ad +0x09:  add    $0x8cef4,%eax
0867f1b2 +0x0e:  mov    %eax,(%esp)
0867f1b5 +0x11:  call   080e286c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x612>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x612
0867f1ba +0x16:  test   %al,%al
0867f1bc +0x18:  jne    0867f1d0 <+0x2c>
0867f1be +0x1a:  mov    0x8(%ebp),%eax
0867f1c1 +0x1d:  add    $0x8cef4,%eax
0867f1c6 +0x22:  mov    %eax,(%esp)
0867f1c9 +0x25:  call   08557bb2 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x713>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x713
0867f1ce +0x2a:  jmp    0867f1d1 <+0x2d>
0867f1d0 +0x2c:  nop
0867f1d1 +0x2d:  leave
0867f1d2 +0x2e:  ret
0867f1d3 +0x2f:  nop
```

## 反编译 C

```c
// CUser::resetBlackList @ 0x867f1a4

/* CUser::resetBlackList() */

void __thiscall CUser::resetBlackList(CUser *this)

{
  char cVar1;
  
  cVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty();
  if (cVar1 == '\0') {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::clear
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x8cef4));
  }
  return;
}
```
