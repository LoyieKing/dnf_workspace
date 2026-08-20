# returnDeathTower

`_ZN12CGameManager16returnDeathTowerEPN8WongWork11CDeathTowerE`

`CGameManager::returnDeathTower(WongWork::CDeathTower*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295852` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295852  _ZN12CGameManager16returnDeathTowerEPN8WongWork11CDeathTowerE
#           CGameManager::returnDeathTower(WongWork::CDeathTower*)
# range [0x08295852, 0x08295905]
08295852 +0x00:  push   %ebp
08295853 +0x01:  mov    %esp,%ebp
08295855 +0x03:  sub    $0x38,%esp
08295858 +0x06:  cmpl   $0x0,0xc(%ebp)
0829585c +0x0a:  je     08295903 <+0xb1>
08295862 +0x10:  mov    0xc(%ebp),%eax
08295865 +0x13:  mov    %eax,(%esp)
08295868 +0x16:  call   082a7586 <_GLOBAL__I__ZN4CLog5this_E+0x39ad>  ; global constructors keyed to CLog::this_+0x39ad
0829586d +0x1b:  mov    %eax,-0x18(%ebp)
08295870 +0x1e:  mov    0x8(%ebp),%eax
08295873 +0x21:  lea    0x298(%eax),%ecx
08295879 +0x27:  lea    -0x20(%ebp),%eax
0829587c +0x2a:  lea    -0x18(%ebp),%edx
0829587f +0x2d:  mov    %edx,0x8(%esp)
08295883 +0x31:  mov    %ecx,0x4(%esp)
08295887 +0x35:  mov    %eax,(%esp)
0829588a +0x38:  call   082b1e92 <_GLOBAL__I__ZN4CLog5this_E+0xe2b9>  ; global constructors keyed to CLog::this_+0xe2b9
0829588f +0x3d:  sub    $0x4,%esp
08295892 +0x40:  mov    0x8(%ebp),%eax
08295895 +0x43:  lea    0x298(%eax),%edx
0829589b +0x49:  lea    -0x14(%ebp),%eax
0829589e +0x4c:  mov    %edx,0x4(%esp)
082958a2 +0x50:  mov    %eax,(%esp)
082958a5 +0x53:  call   082b1ebe <_GLOBAL__I__ZN4CLog5this_E+0xe2e5>  ; global constructors keyed to CLog::this_+0xe2e5
082958aa +0x58:  sub    $0x4,%esp
082958ad +0x5b:  lea    -0x14(%ebp),%eax
082958b0 +0x5e:  mov    %eax,0x4(%esp)
082958b4 +0x62:  lea    -0x20(%ebp),%eax
082958b7 +0x65:  mov    %eax,(%esp)
082958ba +0x68:  call   082b1f4a <_GLOBAL__I__ZN4CLog5this_E+0xe371>  ; global constructors keyed to CLog::this_+0xe371
082958bf +0x6d:  test   %al,%al
082958c1 +0x6f:  je     08295904 <+0xb2>
082958c3 +0x71:  mov    0xc(%ebp),%eax
082958c6 +0x74:  mov    %eax,(%esp)
082958c9 +0x77:  call   082a7586 <_GLOBAL__I__ZN4CLog5this_E+0x39ad>  ; global constructors keyed to CLog::this_+0x39ad
082958ce +0x7c:  mov    %eax,-0xc(%ebp)
082958d1 +0x7f:  mov    0x8(%ebp),%eax
082958d4 +0x82:  lea    0x298(%eax),%edx
082958da +0x88:  lea    -0xc(%ebp),%eax
082958dd +0x8b:  mov    %eax,0x4(%esp)
082958e1 +0x8f:  mov    %edx,(%esp)
082958e4 +0x92:  call   082b1f5e <_GLOBAL__I__ZN4CLog5this_E+0xe385>  ; global constructors keyed to CLog::this_+0xe385
082958e9 +0x97:  mov    0x8(%ebp),%eax
082958ec +0x9a:  lea    0x13c(%eax),%edx
082958f2 +0xa0:  mov    0xc(%ebp),%eax
082958f5 +0xa3:  mov    %eax,0x4(%esp)
082958f9 +0xa7:  mov    %edx,(%esp)
082958fc +0xaa:  call   082b1f78 <_GLOBAL__I__ZN4CLog5this_E+0xe39f>  ; global constructors keyed to CLog::this_+0xe39f
08295901 +0xaf:  jmp    08295904 <+0xb2>
08295903 +0xb1:  nop
08295904 +0xb2:  leave
08295905 +0xb3:  ret
```

## 反编译 C

```c
// CGameManager::returnDeathTower @ 0x8295852

/* CGameManager::returnDeathTower(WongWork::CDeathTower*) */

void __thiscall CGameManager::returnDeathTower(CGameManager *this,CDeathTower *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (CDeathTower *)0x0) {
    local_1c = WongWork::CDeathTower::getIdx(param_1);
    __gnu_cxx::
    hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
    ::find((int *)local_24);
    __gnu_cxx::
    hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
    ::end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = WongWork::CDeathTower::getIdx(param_1);
      __gnu_cxx::
      hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
      ::erase((hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
               *)(this + 0x298),local_10);
      StaticPool<WongWork::CDeathTower,600>::Free
                ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c),param_1);
    }
  }
  return;
}
```
