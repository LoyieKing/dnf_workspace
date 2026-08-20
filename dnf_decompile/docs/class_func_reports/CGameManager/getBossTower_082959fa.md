# getBossTower

`_ZN12CGameManager12getBossTowerEi`

`CGameManager::getBossTower(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082959fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082959fa  _ZN12CGameManager12getBossTowerEi
#           CGameManager::getBossTower(int)
# range [0x082959fa, 0x08295a69]
082959fa +0x00:  push   %ebp
082959fb +0x01:  mov    %esp,%ebp
082959fd +0x03:  sub    $0x28,%esp
08295a00 +0x06:  mov    0x8(%ebp),%eax
08295a03 +0x09:  lea    0x2ac(%eax),%ecx
08295a09 +0x0f:  lea    -0x18(%ebp),%eax
08295a0c +0x12:  lea    0xc(%ebp),%edx
08295a0f +0x15:  mov    %edx,0x8(%esp)
08295a13 +0x19:  mov    %ecx,0x4(%esp)
08295a17 +0x1d:  mov    %eax,(%esp)
08295a1a +0x20:  call   082b233a <_GLOBAL__I__ZN4CLog5this_E+0xe761>  ; global constructors keyed to CLog::this_+0xe761
08295a1f +0x25:  sub    $0x4,%esp
08295a22 +0x28:  mov    0x8(%ebp),%eax
08295a25 +0x2b:  lea    0x2ac(%eax),%edx
08295a2b +0x31:  lea    -0x10(%ebp),%eax
08295a2e +0x34:  mov    %edx,0x4(%esp)
08295a32 +0x38:  mov    %eax,(%esp)
08295a35 +0x3b:  call   082b2366 <_GLOBAL__I__ZN4CLog5this_E+0xe78d>  ; global constructors keyed to CLog::this_+0xe78d
08295a3a +0x40:  sub    $0x4,%esp
08295a3d +0x43:  lea    -0x10(%ebp),%eax
08295a40 +0x46:  mov    %eax,0x4(%esp)
08295a44 +0x4a:  lea    -0x18(%ebp),%eax
08295a47 +0x4d:  mov    %eax,(%esp)
08295a4a +0x50:  call   082b238c <_GLOBAL__I__ZN4CLog5this_E+0xe7b3>  ; global constructors keyed to CLog::this_+0xe7b3
08295a4f +0x55:  test   %al,%al
08295a51 +0x57:  je     08295a5a <+0x60>
08295a53 +0x59:  mov    $0x0,%eax
08295a58 +0x5e:  jmp    08295a68 <+0x6e>
08295a5a +0x60:  lea    -0x18(%ebp),%eax
08295a5d +0x63:  mov    %eax,(%esp)
08295a60 +0x66:  call   082b23de <_GLOBAL__I__ZN4CLog5this_E+0xe805>  ; global constructors keyed to CLog::this_+0xe805
08295a65 +0x6b:  mov    0x4(%eax),%eax
08295a68 +0x6e:  leave
08295a69 +0x6f:  ret
```

## 反编译 C

```c
// CGameManager::getBossTower @ 0x82959fa

/* CGameManager::getBossTower(int) */

undefined4 CGameManager::getBossTower(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_1c [8];
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  ::find((int *)local_1c);
  __gnu_cxx::
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
