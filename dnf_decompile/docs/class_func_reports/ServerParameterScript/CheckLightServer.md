# CheckLightServer

`_ZN21ServerParameterScript16CheckLightServerEi`

`ServerParameterScript::CheckLightServer(int)`

| 类 | 地址 |
|---|---|
| `ServerParameterScript` | `0x08a8c372` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8c372  _ZN21ServerParameterScript16CheckLightServerEi
#           ServerParameterScript::CheckLightServer(int)
# range [0x08a8c372, 0x08a8c3ed]
08a8c372 +0x00:  push   %ebp
08a8c373 +0x01:  mov    %esp,%ebp
08a8c375 +0x03:  sub    $0x28,%esp
08a8c378 +0x06:  movb   $0x0,-0x9(%ebp)
08a8c37c +0x0a:  mov    0x8(%ebp),%eax
08a8c37f +0x0d:  lea    0x24(%eax),%ecx
08a8c382 +0x10:  lea    -0x14(%ebp),%eax
08a8c385 +0x13:  lea    0xc(%ebp),%edx
08a8c388 +0x16:  mov    %edx,0x8(%esp)
08a8c38c +0x1a:  mov    %ecx,0x4(%esp)
08a8c390 +0x1e:  mov    %eax,(%esp)
08a8c393 +0x21:  call   084f114a <_GLOBAL__I__Z7getUserj+0x80fc>  ; global constructors keyed to getUser(unsigned int)+0x80fc
08a8c398 +0x26:  sub    $0x4,%esp
08a8c39b +0x29:  mov    0x8(%ebp),%eax
08a8c39e +0x2c:  lea    0x24(%eax),%edx
08a8c3a1 +0x2f:  lea    -0x10(%ebp),%eax
08a8c3a4 +0x32:  mov    %edx,0x4(%esp)
08a8c3a8 +0x36:  mov    %eax,(%esp)
08a8c3ab +0x39:  call   084f1176 <_GLOBAL__I__Z7getUserj+0x8128>  ; global constructors keyed to getUser(unsigned int)+0x8128
08a8c3b0 +0x3e:  sub    $0x4,%esp
08a8c3b3 +0x41:  lea    -0x10(%ebp),%eax
08a8c3b6 +0x44:  mov    %eax,0x4(%esp)
08a8c3ba +0x48:  lea    -0x14(%ebp),%eax
08a8c3bd +0x4b:  mov    %eax,(%esp)
08a8c3c0 +0x4e:  call   084f119c <_GLOBAL__I__Z7getUserj+0x814e>  ; global constructors keyed to getUser(unsigned int)+0x814e
08a8c3c5 +0x53:  test   %al,%al
08a8c3c7 +0x55:  je     08a8c3e7 <+0x75>
08a8c3c9 +0x57:  lea    -0x14(%ebp),%eax
08a8c3cc +0x5a:  mov    %eax,(%esp)
08a8c3cf +0x5d:  call   08a8da72 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xee9>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xee9
08a8c3d4 +0x62:  movzbl 0x4(%eax),%eax
08a8c3d8 +0x66:  mov    %al,-0x9(%ebp)
08a8c3db +0x69:  movzbl -0x9(%ebp),%eax
08a8c3df +0x6d:  mov    %eax,(%esp)
08a8c3e2 +0x70:  call   08a8cba5 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1c>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1c
08a8c3e7 +0x75:  movzbl -0x9(%ebp),%eax
08a8c3eb +0x79:  leave
08a8c3ec +0x7a:  ret
08a8c3ed +0x7b:  nop
```

## 反编译 C

```c
// ServerParameterScript::CheckLightServer @ 0x8a8c372

/* ServerParameterScript::CheckLightServer(int) */

undefined1 ServerParameterScript::CheckLightServer(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,bool>> local_18 [4];
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> local_14 [7];
  undefined1 local_d;
  
  local_d = 0;
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::find((int *)local_18)
  ;
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,bool>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,bool>>::operator->(local_18);
    local_d = *(undefined1 *)(iVar2 + 4);
    SetLightServerFlag((bool)local_d);
  }
  return local_d;
}
```
