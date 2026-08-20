# GetQuickParty

`_ZN12CGameManager13GetQuickPartyEi`

`CGameManager::GetQuickParty(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295572` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295572  _ZN12CGameManager13GetQuickPartyEi
#           CGameManager::GetQuickParty(int)
# range [0x08295572, 0x082955e1]
08295572 +0x00:  push   %ebp
08295573 +0x01:  mov    %esp,%ebp
08295575 +0x03:  sub    $0x28,%esp
08295578 +0x06:  mov    0x8(%ebp),%eax
0829557b +0x09:  lea    0x2d4(%eax),%ecx
08295581 +0x0f:  lea    -0x18(%ebp),%eax
08295584 +0x12:  lea    0xc(%ebp),%edx
08295587 +0x15:  mov    %edx,0x8(%esp)
0829558b +0x19:  mov    %ecx,0x4(%esp)
0829558f +0x1d:  mov    %eax,(%esp)
08295592 +0x20:  call   082b19fc <_GLOBAL__I__ZN4CLog5this_E+0xde23>  ; global constructors keyed to CLog::this_+0xde23
08295597 +0x25:  sub    $0x4,%esp
0829559a +0x28:  mov    0x8(%ebp),%eax
0829559d +0x2b:  lea    0x2d4(%eax),%edx
082955a3 +0x31:  lea    -0x10(%ebp),%eax
082955a6 +0x34:  mov    %edx,0x4(%esp)
082955aa +0x38:  mov    %eax,(%esp)
082955ad +0x3b:  call   082b1a28 <_GLOBAL__I__ZN4CLog5this_E+0xde4f>  ; global constructors keyed to CLog::this_+0xde4f
082955b2 +0x40:  sub    $0x4,%esp
082955b5 +0x43:  lea    -0x10(%ebp),%eax
082955b8 +0x46:  mov    %eax,0x4(%esp)
082955bc +0x4a:  lea    -0x18(%ebp),%eax
082955bf +0x4d:  mov    %eax,(%esp)
082955c2 +0x50:  call   082b1a4e <_GLOBAL__I__ZN4CLog5this_E+0xde75>  ; global constructors keyed to CLog::this_+0xde75
082955c7 +0x55:  test   %al,%al
082955c9 +0x57:  je     082955d2 <+0x60>
082955cb +0x59:  mov    $0x0,%eax
082955d0 +0x5e:  jmp    082955e0 <+0x6e>
082955d2 +0x60:  lea    -0x18(%ebp),%eax
082955d5 +0x63:  mov    %eax,(%esp)
082955d8 +0x66:  call   082b1aa0 <_GLOBAL__I__ZN4CLog5this_E+0xdec7>  ; global constructors keyed to CLog::this_+0xdec7
082955dd +0x6b:  mov    0x4(%eax),%eax
082955e0 +0x6e:  leave
082955e1 +0x6f:  ret
```

## 反编译 C

```c
// CGameManager::GetQuickParty @ 0x8295572

/* CGameManager::GetQuickParty(int) */

undefined4 CGameManager::GetQuickParty(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_1c [8];
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  ::find((int *)local_1c);
  __gnu_cxx::
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
