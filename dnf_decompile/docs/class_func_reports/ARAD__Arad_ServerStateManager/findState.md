# findState

`_ZN4ARAD23Arad_ServerStateManager9findStateE23ENUM_GLOBAL_EFFECT_ARADR22AradServerStateMessage`

`ARAD::Arad_ServerStateManager::findState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage&)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a9c2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a9c2a  _ZN4ARAD23Arad_ServerStateManager9findStateE23ENUM_GLOBAL_EFFECT_ARADR22AradServerStateMessage
#           ARAD::Arad_ServerStateManager::findState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage&)
# range [0x081a9c2a, 0x081a9cc4]
081a9c2a +0x00:  push   %ebp
081a9c2b +0x01:  mov    %esp,%ebp
081a9c2d +0x03:  sub    $0x28,%esp
081a9c30 +0x06:  mov    0x8(%ebp),%eax
081a9c33 +0x09:  lea    0x1c(%eax),%ecx
081a9c36 +0x0c:  lea    -0x10(%ebp),%eax
081a9c39 +0x0f:  lea    0xc(%ebp),%edx
081a9c3c +0x12:  mov    %edx,0x8(%esp)
081a9c40 +0x16:  mov    %ecx,0x4(%esp)
081a9c44 +0x1a:  mov    %eax,(%esp)
081a9c47 +0x1d:  call   081aa0d4 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x3cf>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x3cf
081a9c4c +0x22:  sub    $0x4,%esp
081a9c4f +0x25:  mov    0x8(%ebp),%eax
081a9c52 +0x28:  lea    0x1c(%eax),%edx
081a9c55 +0x2b:  lea    -0xc(%ebp),%eax
081a9c58 +0x2e:  mov    %edx,0x4(%esp)
081a9c5c +0x32:  mov    %eax,(%esp)
081a9c5f +0x35:  call   081a9ec0 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x1bb>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x1bb
081a9c64 +0x3a:  sub    $0x4,%esp
081a9c67 +0x3d:  lea    -0xc(%ebp),%eax
081a9c6a +0x40:  mov    %eax,0x4(%esp)
081a9c6e +0x44:  lea    -0x10(%ebp),%eax
081a9c71 +0x47:  mov    %eax,(%esp)
081a9c74 +0x4a:  call   081a9f42 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x23d>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x23d
081a9c79 +0x4f:  test   %al,%al
081a9c7b +0x51:  je     081a9ca3 <+0x79>
081a9c7d +0x53:  lea    -0x10(%ebp),%eax
081a9c80 +0x56:  mov    %eax,(%esp)
081a9c83 +0x59:  call   081a9f56 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x251>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x251
081a9c88 +0x5e:  mov    0x10(%ebp),%edx
081a9c8b +0x61:  mov    0x4(%eax),%ecx
081a9c8e +0x64:  mov    %ecx,(%edx)
081a9c90 +0x66:  mov    0x8(%eax),%ecx
081a9c93 +0x69:  mov    %ecx,0x4(%edx)
081a9c96 +0x6c:  mov    0xc(%eax),%eax
081a9c99 +0x6f:  mov    %eax,0x8(%edx)
081a9c9c +0x72:  mov    $0x1,%eax
081a9ca1 +0x77:  jmp    081a9cc3 <+0x99>
081a9ca3 +0x79:  movl   $0xc,0x8(%esp)
081a9cab +0x81:  movl   $0x0,0x4(%esp)
081a9cb3 +0x89:  mov    0x10(%ebp),%eax
081a9cb6 +0x8c:  mov    %eax,(%esp)
081a9cb9 +0x8f:  call   0807dcc0 <_init+0x5b8>
081a9cbe +0x94:  mov    $0x0,%eax
081a9cc3 +0x99:  leave
081a9cc4 +0x9a:  ret
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::findState @ 0x81a9c2a

/* ARAD::Arad_ServerStateManager::findState(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage&) */

bool __thiscall
ARAD::Arad_ServerStateManager::findState(undefined4 this,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>> local_14 [4];
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  local_10 [12];
  
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::find(local_14);
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    memset(param_3,0,0xc);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
            ::operator->(local_14);
    *param_3 = *(undefined4 *)(iVar2 + 4);
    param_3[1] = *(undefined4 *)(iVar2 + 8);
    param_3[2] = *(undefined4 *)(iVar2 + 0xc);
  }
  return cVar1 != '\0';
}
```
