# getDispatcher

`_ZN24TaiwanInternalDispatcher13getDispatcherEN18TaiwanInternalPack1TE`

`TaiwanInternalDispatcher::getDispatcher(TaiwanInternalPack::T)`

| 类 | 地址 |
|---|---|
| `TaiwanInternalDispatcher` | `0x0816069a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816069a  _ZN24TaiwanInternalDispatcher13getDispatcherEN18TaiwanInternalPack1TE
#           TaiwanInternalDispatcher::getDispatcher(TaiwanInternalPack::T)
# range [0x0816069a, 0x081606fd]
0816069a +0x00:  push   %ebp
0816069b +0x01:  mov    %esp,%ebp
0816069d +0x03:  sub    $0x28,%esp
081606a0 +0x06:  mov    0x8(%ebp),%edx
081606a3 +0x09:  lea    -0x10(%ebp),%eax
081606a6 +0x0c:  lea    0xc(%ebp),%ecx
081606a9 +0x0f:  mov    %ecx,0x8(%esp)
081606ad +0x13:  mov    %edx,0x4(%esp)
081606b1 +0x17:  mov    %eax,(%esp)
081606b4 +0x1a:  call   08162488 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x6f6>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x6f6
081606b9 +0x1f:  sub    $0x4,%esp
081606bc +0x22:  mov    0x8(%ebp),%edx
081606bf +0x25:  lea    -0xc(%ebp),%eax
081606c2 +0x28:  mov    %edx,0x4(%esp)
081606c6 +0x2c:  mov    %eax,(%esp)
081606c9 +0x2f:  call   08162412 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x680>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x680
081606ce +0x34:  sub    $0x4,%esp
081606d1 +0x37:  lea    -0xc(%ebp),%eax
081606d4 +0x3a:  mov    %eax,0x4(%esp)
081606d8 +0x3e:  lea    -0x10(%ebp),%eax
081606db +0x41:  mov    %eax,(%esp)
081606de +0x44:  call   081624b4 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x722>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x722
081606e3 +0x49:  test   %al,%al
081606e5 +0x4b:  je     081606f7 <+0x5d>
081606e7 +0x4d:  lea    -0x10(%ebp),%eax
081606ea +0x50:  mov    %eax,(%esp)
081606ed +0x53:  call   081624c8 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x736>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x736
081606f2 +0x58:  mov    0x4(%eax),%eax
081606f5 +0x5b:  jmp    081606fc <+0x62>
081606f7 +0x5d:  mov    $0x0,%eax
081606fc +0x62:  leave
081606fd +0x63:  ret
```

## 反编译 C

```c
// TaiwanInternalDispatcher::getDispatcher @ 0x816069a

/* TaiwanInternalDispatcher::getDispatcher(TaiwanInternalPack::T) */

undefined4 TaiwanInternalDispatcher::getDispatcher(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>
  local_14 [4];
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  local_10 [12];
  
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::find(local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>
            ::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
