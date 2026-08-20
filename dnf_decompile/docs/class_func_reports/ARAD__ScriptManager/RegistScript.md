# RegistScript

`_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi`

`ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::ScriptManager` | `0x081a136c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a136c  _ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi
#           ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)
# range [0x081a136c, 0x081a13f1]
081a136c +0x00:  push   %ebp
081a136d +0x01:  mov    %esp,%ebp
081a136f +0x03:  sub    $0x28,%esp
081a1372 +0x06:  mov    0x8(%ebp),%edx
081a1375 +0x09:  lea    -0x18(%ebp),%eax
081a1378 +0x0c:  mov    %edx,0x4(%esp)
081a137c +0x10:  mov    %eax,(%esp)
081a137f +0x13:  call   081a157c <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x42>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x42
081a1384 +0x18:  sub    $0x4,%esp
081a1387 +0x1b:  mov    0x8(%ebp),%edx
081a138a +0x1e:  lea    -0x14(%ebp),%eax
081a138d +0x21:  lea    0xc(%ebp),%ecx
081a1390 +0x24:  mov    %ecx,0x8(%esp)
081a1394 +0x28:  mov    %edx,0x4(%esp)
081a1398 +0x2c:  mov    %eax,(%esp)
081a139b +0x2f:  call   081a15e2 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0xa8>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0xa8
081a13a0 +0x34:  sub    $0x4,%esp
081a13a3 +0x37:  lea    -0x18(%ebp),%eax
081a13a6 +0x3a:  mov    %eax,0x4(%esp)
081a13aa +0x3e:  lea    -0x14(%ebp),%eax
081a13ad +0x41:  mov    %eax,(%esp)
081a13b0 +0x44:  call   081a1620 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0xe6>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0xe6
081a13b5 +0x49:  test   %al,%al
081a13b7 +0x4b:  je     081a13d7 <+0x6b>
081a13b9 +0x4d:  mov    0x8(%ebp),%edx
081a13bc +0x50:  lea    -0x10(%ebp),%eax
081a13bf +0x53:  lea    0xc(%ebp),%ecx
081a13c2 +0x56:  mov    %ecx,0x8(%esp)
081a13c6 +0x5a:  mov    %edx,0x4(%esp)
081a13ca +0x5e:  mov    %eax,(%esp)
081a13cd +0x61:  call   081a1634 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0xfa>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0xfa
081a13d2 +0x66:  sub    $0x4,%esp
081a13d5 +0x69:  leave
081a13d6 +0x6a:  ret
081a13d7 +0x6b:  mov    0x10(%ebp),%eax
081a13da +0x6e:  mov    %eax,0x4(%esp)
081a13de +0x72:  movl   $"Arad_ScriptManager::RegistScript() Duplicate Class : Line(%d)",(%esp)
081a13e5 +0x79:  call   0807db60 <_init+0x458>
081a13ea +0x7e:  movl   $0x0,(%esp)
081a13f1 +0x85:  call   0807e1c0 <_init+0xab8>
```

## 反编译 C

```c
// ARAD::ScriptManager::RegistScript @ 0x81a136c

/* ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int) */

void __thiscall
ARAD::ScriptManager::RegistScript(ScriptManager *this,ScriptInterface *param_1,int param_2)

{
  char cVar1;
  ScriptInterface **ppSVar2;
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  local_1c [4];
  _Rb_tree_const_iterator<ARAD::ScriptInterface*> local_18 [4];
  ScriptInterface *local_14 [4];
  
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::end(local_1c);
  ppSVar2 = &param_1;
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::find((ScriptInterface **)local_18);
  cVar1 = std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator==
                    (local_18,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 != '\0') {
    std::
    set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
    ::insert(local_14);
    return;
  }
  printf("Arad_ScriptManager::RegistScript() Duplicate Class : Line(%d)",param_2,ppSVar2);
                    /* WARNING: Subroutine does not return */
  exit(0);
}
```
