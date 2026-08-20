# detach

`_ZN9CDelivery6detachEiP10CEventBase`

`CDelivery::detach(int, CEventBase*)`

| 类 | 地址 |
|---|---|
| `CDelivery` | `0x081165fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081165fa  _ZN9CDelivery6detachEiP10CEventBase
#           CDelivery::detach(int, CEventBase*)
# range [0x081165fa, 0x08116681]
081165fa +0x00:  push   %ebp
081165fb +0x01:  mov    %esp,%ebp
081165fd +0x03:  sub    $0x28,%esp
08116600 +0x06:  mov    0xc(%ebp),%eax
08116603 +0x09:  mov    %eax,0x4(%esp)
08116607 +0x0d:  mov    0x8(%ebp),%eax
0811660a +0x10:  mov    %eax,(%esp)
0811660d +0x13:  call   081163dc <_ZN9CDelivery12checkAddressEi>  ; CDelivery::checkAddress(int)
08116612 +0x18:  xor    $0x1,%eax
08116615 +0x1b:  test   %al,%al
08116617 +0x1d:  jne    0811667f <+0x85>
08116619 +0x1f:  mov    0x8(%ebp),%edx
0811661c +0x22:  lea    -0x10(%ebp),%eax
0811661f +0x25:  lea    0xc(%ebp),%ecx
08116622 +0x28:  mov    %ecx,0x8(%esp)
08116626 +0x2c:  mov    %edx,0x4(%esp)
0811662a +0x30:  mov    %eax,(%esp)
0811662d +0x33:  call   08117b60 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1275>  ; global constructors keyed to CEventManager::CEventManager()+0x1275
08116632 +0x38:  sub    $0x4,%esp
08116635 +0x3b:  mov    0x8(%ebp),%edx
08116638 +0x3e:  lea    -0xc(%ebp),%eax
0811663b +0x41:  mov    %edx,0x4(%esp)
0811663f +0x45:  mov    %eax,(%esp)
08116642 +0x48:  call   08117b8c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12a1>  ; global constructors keyed to CEventManager::CEventManager()+0x12a1
08116647 +0x4d:  sub    $0x4,%esp
0811664a +0x50:  lea    -0xc(%ebp),%eax
0811664d +0x53:  mov    %eax,0x4(%esp)
08116651 +0x57:  lea    -0x10(%ebp),%eax
08116654 +0x5a:  mov    %eax,(%esp)
08116657 +0x5d:  call   08117bb2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12c7>  ; global constructors keyed to CEventManager::CEventManager()+0x12c7
0811665c +0x62:  test   %al,%al
0811665e +0x64:  je     08116680 <+0x86>
08116660 +0x66:  lea    -0x10(%ebp),%eax
08116663 +0x69:  mov    %eax,(%esp)
08116666 +0x6c:  call   08117bc6 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12db>  ; global constructors keyed to CEventManager::CEventManager()+0x12db
0811666b +0x71:  lea    0x4(%eax),%edx
0811666e +0x74:  lea    0x10(%ebp),%eax
08116671 +0x77:  mov    %eax,0x4(%esp)
08116675 +0x7b:  mov    %edx,(%esp)
08116678 +0x7e:  call   08117eaa <_GLOBAL__I__ZN13CEventManagerC2Ev+0x15bf>  ; global constructors keyed to CEventManager::CEventManager()+0x15bf
0811667d +0x83:  jmp    08116680 <+0x86>
0811667f +0x85:  nop
08116680 +0x86:  leave
08116681 +0x87:  ret
```

## 反编译 C

```c
// CDelivery::detach @ 0x81165fa

/* CDelivery::detach(int, CEventBase*) */

void CDelivery::detach(int param_1,CEventBase *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
  local_14 [4];
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  local_10 [12];
  
  cVar1 = checkAddress((CDelivery *)param_1,(int)param_2);
  if (cVar1 == '\x01') {
    std::
    map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
    ::find((int *)local_14);
    std::
    map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
            ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
              ::operator->(local_14);
      std::list<CEventBase*,std::allocator<CEventBase*>>::remove
                ((list<CEventBase*,std::allocator<CEventBase*>> *)(iVar2 + 4),
                 (CEventBase **)&stack0x0000000c);
    }
  }
  return;
}
```
