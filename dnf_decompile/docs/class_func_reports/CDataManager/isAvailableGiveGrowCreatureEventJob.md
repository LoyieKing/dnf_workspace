# isAvailableGiveGrowCreatureEventJob

`_ZN12CDataManager35isAvailableGiveGrowCreatureEventJobEii`

`CDataManager::isAvailableGiveGrowCreatureEventJob(int, int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365afa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365afa  _ZN12CDataManager35isAvailableGiveGrowCreatureEventJobEii
#           CDataManager::isAvailableGiveGrowCreatureEventJob(int, int)
# range [0x08365afa, 0x08365b97]
08365afa +0x00:  push   %ebp
08365afb +0x01:  mov    %esp,%ebp
08365afd +0x03:  sub    $0x28,%esp
08365b00 +0x06:  mov    0x8(%ebp),%eax
08365b03 +0x09:  lea    0x4c04(%eax),%ecx
08365b09 +0x0f:  lea    -0x10(%ebp),%eax
08365b0c +0x12:  lea    0xc(%ebp),%edx
08365b0f +0x15:  mov    %edx,0x8(%esp)
08365b13 +0x19:  mov    %ecx,0x4(%esp)
08365b17 +0x1d:  mov    %eax,(%esp)
08365b1a +0x20:  call   08395d82 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25822>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25822
08365b1f +0x25:  sub    $0x4,%esp
08365b22 +0x28:  mov    0x8(%ebp),%eax
08365b25 +0x2b:  lea    0x4c04(%eax),%edx
08365b2b +0x31:  lea    -0xc(%ebp),%eax
08365b2e +0x34:  mov    %edx,0x4(%esp)
08365b32 +0x38:  mov    %eax,(%esp)
08365b35 +0x3b:  call   081b74c0 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x13f>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x13f
08365b3a +0x40:  sub    $0x4,%esp
08365b3d +0x43:  lea    -0xc(%ebp),%eax
08365b40 +0x46:  mov    %eax,0x4(%esp)
08365b44 +0x4a:  lea    -0x10(%ebp),%eax
08365b47 +0x4d:  mov    %eax,(%esp)
08365b4a +0x50:  call   081b74e6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x165>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x165
08365b4f +0x55:  test   %al,%al
08365b51 +0x57:  je     08365b90 <+0x96>
08365b53 +0x59:  lea    -0x10(%ebp),%eax
08365b56 +0x5c:  mov    %eax,(%esp)
08365b59 +0x5f:  call   081b7538 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1b7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1b7
08365b5e +0x64:  mov    0x4(%eax),%eax
08365b61 +0x67:  cmp    0x10(%ebp),%eax
08365b64 +0x6a:  jge    08365b80 <+0x86>
08365b66 +0x6c:  lea    -0x10(%ebp),%eax
08365b69 +0x6f:  mov    %eax,(%esp)
08365b6c +0x72:  call   081b7538 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1b7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1b7
08365b71 +0x77:  mov    0x8(%eax),%eax
08365b74 +0x7a:  cmp    0x10(%ebp),%eax
08365b77 +0x7d:  jle    08365b80 <+0x86>
08365b79 +0x7f:  mov    $0x1,%eax
08365b7e +0x84:  jmp    08365b85 <+0x8b>
08365b80 +0x86:  mov    $0x0,%eax
08365b85 +0x8b:  test   %al,%al
08365b87 +0x8d:  je     08365b90 <+0x96>
08365b89 +0x8f:  mov    $0x1,%eax
08365b8e +0x94:  jmp    08365b95 <+0x9b>
08365b90 +0x96:  mov    $0x0,%eax
08365b95 +0x9b:  leave
08365b96 +0x9c:  ret
08365b97 +0x9d:  nop
```

## 反编译 C

```c
// CDataManager::isAvailableGiveGrowCreatureEventJob @ 0x8365afa

/* CDataManager::isAvailableGiveGrowCreatureEventJob(int, int) */

undefined4 __thiscall
CDataManager::isAvailableGiveGrowCreatureEventJob(CDataManager *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>> local_14 [4];
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  local_10 [12];
  
  std::
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  ::find((int *)local_14);
  std::
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
            ::operator->(local_14);
    if ((*(int *)(iVar3 + 4) < param_2) &&
       (iVar3 = std::
                _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                ::operator->(local_14), param_2 < *(int *)(iVar3 + 8))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}
```
