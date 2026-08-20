# getVaildEventItem

`_ZN12CDataManager17getVaildEventItemEi`

`CDataManager::getVaildEventItem(int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083654ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083654ba  _ZN12CDataManager17getVaildEventItemEi
#           CDataManager::getVaildEventItem(int)
# range [0x083654ba, 0x08365519]
083654ba +0x00:  push   %ebp
083654bb +0x01:  mov    %esp,%ebp
083654bd +0x03:  sub    $0x28,%esp
083654c0 +0x06:  mov    0x8(%ebp),%eax
083654c3 +0x09:  lea    0x4b70(%eax),%edx
083654c9 +0x0f:  lea    -0x10(%ebp),%eax
083654cc +0x12:  mov    %edx,0x4(%esp)
083654d0 +0x16:  mov    %eax,(%esp)
083654d3 +0x19:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
083654d8 +0x1e:  sub    $0x4,%esp
083654db +0x21:  mov    0x8(%ebp),%eax
083654de +0x24:  lea    0x4b70(%eax),%edx
083654e4 +0x2a:  lea    -0xc(%ebp),%eax
083654e7 +0x2d:  mov    %edx,0x4(%esp)
083654eb +0x31:  mov    %eax,(%esp)
083654ee +0x34:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
083654f3 +0x39:  sub    $0x4,%esp
083654f6 +0x3c:  lea    -0xc(%ebp),%eax
083654f9 +0x3f:  mov    %eax,0x4(%esp)
083654fd +0x43:  lea    -0x10(%ebp),%eax
08365500 +0x46:  mov    %eax,(%esp)
08365503 +0x49:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08365508 +0x4e:  test   %al,%al
0836550a +0x50:  je     08365513 <+0x59>
0836550c +0x52:  mov    $0x1,%eax
08365511 +0x57:  jmp    08365518 <+0x5e>
08365513 +0x59:  mov    $0x0,%eax
08365518 +0x5e:  leave
08365519 +0x5f:  ret
```

## 反编译 C

```c
// CDataManager::getVaildEventItem @ 0x83654ba

/* CDataManager::getVaildEventItem(int) */

bool CDataManager::getVaildEventItem(int param_1)

{
  bool bVar1;
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator!=(local_14,local_10);
  return bVar1;
}
```
