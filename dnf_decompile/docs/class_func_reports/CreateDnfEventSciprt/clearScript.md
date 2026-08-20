# clearScript

`_ZN20CreateDnfEventSciprt11clearScriptEv`

`CreateDnfEventSciprt::clearScript()`

| 类 | 地址 |
|---|---|
| `CreateDnfEventSciprt` | `0x08ac032a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac032a  _ZN20CreateDnfEventSciprt11clearScriptEv
#           CreateDnfEventSciprt::clearScript()
# range [0x08ac032a, 0x08ac03a5]
08ac032a +0x00:  push   %ebp
08ac032b +0x01:  mov    %esp,%ebp
08ac032d +0x03:  push   %ebx
08ac032e +0x04:  sub    $0x24,%esp
08ac0331 +0x07:  mov    0x8(%ebp),%edx
08ac0334 +0x0a:  lea    -0xc(%ebp),%eax
08ac0337 +0x0d:  mov    %edx,0x4(%esp)
08ac033b +0x11:  mov    %eax,(%esp)
08ac033e +0x14:  call   08ac08ae <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x28d>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x28d
08ac0343 +0x19:  sub    $0x4,%esp
08ac0346 +0x1c:  mov    0x8(%ebp),%edx
08ac0349 +0x1f:  lea    -0x10(%ebp),%eax
08ac034c +0x22:  mov    %edx,0x4(%esp)
08ac0350 +0x26:  mov    %eax,(%esp)
08ac0353 +0x29:  call   08ac07a6 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x185>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x185
08ac0358 +0x2e:  sub    $0x4,%esp
08ac035b +0x31:  jmp    08ac037f <+0x55>
08ac035d +0x33:  lea    -0xc(%ebp),%eax
08ac0360 +0x36:  mov    %eax,(%esp)
08ac0363 +0x39:  call   08ac08d4 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2b3>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2b3
08ac0368 +0x3e:  mov    0x4(%eax),%ebx
08ac036b +0x41:  test   %ebx,%ebx
08ac036d +0x43:  je     08ac037f <+0x55>
08ac036f +0x45:  mov    %ebx,(%esp)
08ac0372 +0x48:  call   08ac06fa <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0xd9>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0xd9
08ac0377 +0x4d:  mov    %ebx,(%esp)
08ac037a +0x50:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ac037f +0x55:  lea    -0x10(%ebp),%eax
08ac0382 +0x58:  mov    %eax,0x4(%esp)
08ac0386 +0x5c:  lea    -0xc(%ebp),%eax
08ac0389 +0x5f:  mov    %eax,(%esp)
08ac038c +0x62:  call   08ac07cc <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x1ab>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x1ab
08ac0391 +0x67:  test   %al,%al
08ac0393 +0x69:  jne    08ac035d <+0x33>
08ac0395 +0x6b:  mov    0x8(%ebp),%eax
08ac0398 +0x6e:  mov    %eax,(%esp)
08ac039b +0x71:  call   08ac08e2 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x2c1>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x2c1
08ac03a0 +0x76:  mov    -0x4(%ebp),%ebx
08ac03a3 +0x79:  leave
08ac03a4 +0x7a:  ret
08ac03a5 +0x7b:  nop
```

## 反编译 C

```c
// CreateDnfEventSciprt::clearScript @ 0x8ac032a

/* CreateDnfEventSciprt::clearScript() */

void __thiscall CreateDnfEventSciprt::clearScript(CreateDnfEventSciprt *this)

{
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *this_00;
  char cVar1;
  int iVar2;
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_14 [4];
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_10 [8];
  
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::begin(local_10);
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                          *)local_10,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                          *)local_10);
    this_00 = *(vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                **)(iVar2 + 4);
    if (this_00 !=
        (vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *)0x0
       ) {
      std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::
      ~vector(this_00);
      operator_delete(this_00);
    }
  }
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::clear((map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
           *)this);
  return;
}
```
