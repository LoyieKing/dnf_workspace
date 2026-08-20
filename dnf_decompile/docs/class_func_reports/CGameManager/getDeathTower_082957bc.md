# getDeathTower

`_ZN12CGameManager13getDeathTowerEi`

`CGameManager::getDeathTower(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082957bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082957bc  _ZN12CGameManager13getDeathTowerEi
#           CGameManager::getDeathTower(int)
# range [0x082957bc, 0x0829582b]
082957bc +0x00:  push   %ebp
082957bd +0x01:  mov    %esp,%ebp
082957bf +0x03:  sub    $0x28,%esp
082957c2 +0x06:  mov    0x8(%ebp),%eax
082957c5 +0x09:  lea    0x298(%eax),%ecx
082957cb +0x0f:  lea    -0x18(%ebp),%eax
082957ce +0x12:  lea    0xc(%ebp),%edx
082957d1 +0x15:  mov    %edx,0x8(%esp)
082957d5 +0x19:  mov    %ecx,0x4(%esp)
082957d9 +0x1d:  mov    %eax,(%esp)
082957dc +0x20:  call   082b1e92 <_GLOBAL__I__ZN4CLog5this_E+0xe2b9>  ; global constructors keyed to CLog::this_+0xe2b9
082957e1 +0x25:  sub    $0x4,%esp
082957e4 +0x28:  mov    0x8(%ebp),%eax
082957e7 +0x2b:  lea    0x298(%eax),%edx
082957ed +0x31:  lea    -0x10(%ebp),%eax
082957f0 +0x34:  mov    %edx,0x4(%esp)
082957f4 +0x38:  mov    %eax,(%esp)
082957f7 +0x3b:  call   082b1ebe <_GLOBAL__I__ZN4CLog5this_E+0xe2e5>  ; global constructors keyed to CLog::this_+0xe2e5
082957fc +0x40:  sub    $0x4,%esp
082957ff +0x43:  lea    -0x10(%ebp),%eax
08295802 +0x46:  mov    %eax,0x4(%esp)
08295806 +0x4a:  lea    -0x18(%ebp),%eax
08295809 +0x4d:  mov    %eax,(%esp)
0829580c +0x50:  call   082b1ee4 <_GLOBAL__I__ZN4CLog5this_E+0xe30b>  ; global constructors keyed to CLog::this_+0xe30b
08295811 +0x55:  test   %al,%al
08295813 +0x57:  je     0829581c <+0x60>
08295815 +0x59:  mov    $0x0,%eax
0829581a +0x5e:  jmp    0829582a <+0x6e>
0829581c +0x60:  lea    -0x18(%ebp),%eax
0829581f +0x63:  mov    %eax,(%esp)
08295822 +0x66:  call   082b1f36 <_GLOBAL__I__ZN4CLog5this_E+0xe35d>  ; global constructors keyed to CLog::this_+0xe35d
08295827 +0x6b:  mov    0x4(%eax),%eax
0829582a +0x6e:  leave
0829582b +0x6f:  ret
```

## 反编译 C

```c
// CGameManager::getDeathTower @ 0x82957bc

/* CGameManager::getDeathTower(int) */

undefined4 CGameManager::getDeathTower(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_1c [8];
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  ::find((int *)local_1c);
  __gnu_cxx::
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
