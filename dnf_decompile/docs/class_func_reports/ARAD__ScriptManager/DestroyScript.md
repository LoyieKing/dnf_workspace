# DestroyScript

`_ZN4ARAD13ScriptManager13DestroyScriptEv`

`ARAD::ScriptManager::DestroyScript()`

| 类 | 地址 |
|---|---|
| `ARAD::ScriptManager` | `0x081a12f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a12f8  _ZN4ARAD13ScriptManager13DestroyScriptEv
#           ARAD::ScriptManager::DestroyScript()
# range [0x081a12f8, 0x081a136b]
081a12f8 +0x00:  push   %ebp
081a12f9 +0x01:  mov    %esp,%ebp
081a12fb +0x03:  sub    $0x28,%esp
081a12fe +0x06:  mov    0x8(%ebp),%edx
081a1301 +0x09:  lea    -0xc(%ebp),%eax
081a1304 +0x0c:  mov    %edx,0x4(%esp)
081a1308 +0x10:  mov    %eax,(%esp)
081a130b +0x13:  call   081a1556 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x1c>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x1c
081a1310 +0x18:  sub    $0x4,%esp
081a1313 +0x1b:  mov    0x8(%ebp),%edx
081a1316 +0x1e:  lea    -0x10(%ebp),%eax
081a1319 +0x21:  mov    %edx,0x4(%esp)
081a131d +0x25:  mov    %eax,(%esp)
081a1320 +0x28:  call   081a157c <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x42>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x42
081a1325 +0x2d:  sub    $0x4,%esp
081a1328 +0x30:  jmp    081a134e <+0x56>
081a132a +0x32:  lea    -0xc(%ebp),%eax
081a132d +0x35:  mov    %eax,(%esp)
081a1330 +0x38:  call   081a15b6 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x7c>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x7c
081a1335 +0x3d:  mov    (%eax),%eax
081a1337 +0x3f:  mov    (%eax),%edx
081a1339 +0x41:  add    $0x4,%edx
081a133c +0x44:  mov    (%edx),%edx
081a133e +0x46:  mov    %eax,(%esp)
081a1341 +0x49:  call   *%edx
081a1343 +0x4b:  lea    -0xc(%ebp),%eax
081a1346 +0x4e:  mov    %eax,(%esp)
081a1349 +0x51:  call   081a15c4 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x8a>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x8a
081a134e +0x56:  lea    -0x10(%ebp),%eax
081a1351 +0x59:  mov    %eax,0x4(%esp)
081a1355 +0x5d:  lea    -0xc(%ebp),%eax
081a1358 +0x60:  mov    %eax,(%esp)
081a135b +0x63:  call   081a15a2 <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x68>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x68
081a1360 +0x68:  test   %al,%al
081a1362 +0x6a:  jne    081a132a <+0x32>
081a1364 +0x6c:  mov    $0x1,%eax
081a1369 +0x71:  leave
081a136a +0x72:  ret
081a136b +0x73:  nop
```

## 反编译 C

```c
// ARAD::ScriptManager::DestroyScript @ 0x81a12f8

/* ARAD::ScriptManager::DestroyScript() */

undefined4 ARAD::ScriptManager::DestroyScript(void)

{
  char cVar1;
  undefined4 *puVar2;
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  local_14 [4];
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  local_10 [12];
  
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::begin(local_10);
  std::
  set<ARAD::ScriptInterface*,std::less<ARAD::ScriptInterface*>,std::allocator<ARAD::ScriptInterface*>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator!=
                      ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_10,
                       (_Rb_tree_const_iterator *)local_14);
    if (cVar1 == '\0') break;
    puVar2 = (undefined4 *)
             std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator*
                       ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_10);
    (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2);
    std::_Rb_tree_const_iterator<ARAD::ScriptInterface*>::operator++
              ((_Rb_tree_const_iterator<ARAD::ScriptInterface*> *)local_10);
  }
  return 1;
}
```
