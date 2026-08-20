# getAdvanceAltar

`_ZN12CGameManager15getAdvanceAltarEi`

`CGameManager::getAdvanceAltar(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295c38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295c38  _ZN12CGameManager15getAdvanceAltarEi
#           CGameManager::getAdvanceAltar(int)
# range [0x08295c38, 0x08295ca7]
08295c38 +0x00:  push   %ebp
08295c39 +0x01:  mov    %esp,%ebp
08295c3b +0x03:  sub    $0x28,%esp
08295c3e +0x06:  mov    0x8(%ebp),%eax
08295c41 +0x09:  lea    0x2c0(%eax),%ecx
08295c47 +0x0f:  lea    -0x18(%ebp),%eax
08295c4a +0x12:  lea    0xc(%ebp),%edx
08295c4d +0x15:  mov    %edx,0x8(%esp)
08295c51 +0x19:  mov    %ecx,0x4(%esp)
08295c55 +0x1d:  mov    %eax,(%esp)
08295c58 +0x20:  call   082b27e2 <_GLOBAL__I__ZN4CLog5this_E+0xec09>  ; global constructors keyed to CLog::this_+0xec09
08295c5d +0x25:  sub    $0x4,%esp
08295c60 +0x28:  mov    0x8(%ebp),%eax
08295c63 +0x2b:  lea    0x2c0(%eax),%edx
08295c69 +0x31:  lea    -0x10(%ebp),%eax
08295c6c +0x34:  mov    %edx,0x4(%esp)
08295c70 +0x38:  mov    %eax,(%esp)
08295c73 +0x3b:  call   082b280e <_GLOBAL__I__ZN4CLog5this_E+0xec35>  ; global constructors keyed to CLog::this_+0xec35
08295c78 +0x40:  sub    $0x4,%esp
08295c7b +0x43:  lea    -0x10(%ebp),%eax
08295c7e +0x46:  mov    %eax,0x4(%esp)
08295c82 +0x4a:  lea    -0x18(%ebp),%eax
08295c85 +0x4d:  mov    %eax,(%esp)
08295c88 +0x50:  call   082b2834 <_GLOBAL__I__ZN4CLog5this_E+0xec5b>  ; global constructors keyed to CLog::this_+0xec5b
08295c8d +0x55:  test   %al,%al
08295c8f +0x57:  je     08295c98 <+0x60>
08295c91 +0x59:  mov    $0x0,%eax
08295c96 +0x5e:  jmp    08295ca6 <+0x6e>
08295c98 +0x60:  lea    -0x18(%ebp),%eax
08295c9b +0x63:  mov    %eax,(%esp)
08295c9e +0x66:  call   082b2886 <_GLOBAL__I__ZN4CLog5this_E+0xecad>  ; global constructors keyed to CLog::this_+0xecad
08295ca3 +0x6b:  mov    0x4(%eax),%eax
08295ca6 +0x6e:  leave
08295ca7 +0x6f:  ret
```

## 反编译 C

```c
// CGameManager::getAdvanceAltar @ 0x8295c38

/* CGameManager::getAdvanceAltar(int) */

undefined4 CGameManager::getAdvanceAltar(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_1c [8];
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  ::find((int *)local_1c);
  __gnu_cxx::
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
