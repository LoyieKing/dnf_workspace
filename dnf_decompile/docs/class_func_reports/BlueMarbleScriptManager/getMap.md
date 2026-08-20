# getMap

`_ZN23BlueMarbleScriptManager6getMapEi`

`BlueMarbleScriptManager::getMap(int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleScriptManager` | `0x088d66b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d66b6  _ZN23BlueMarbleScriptManager6getMapEi
#           BlueMarbleScriptManager::getMap(int)
# range [0x088d66b6, 0x088d6725]
088d66b6 +0x00:  push   %ebp
088d66b7 +0x01:  mov    %esp,%ebp
088d66b9 +0x03:  sub    $0x28,%esp
088d66bc +0x06:  mov    0x8(%ebp),%eax
088d66bf +0x09:  lea    0xd4(%eax),%ecx
088d66c5 +0x0f:  lea    -0x10(%ebp),%eax
088d66c8 +0x12:  lea    0xc(%ebp),%edx
088d66cb +0x15:  mov    %edx,0x8(%esp)
088d66cf +0x19:  mov    %ecx,0x4(%esp)
088d66d3 +0x1d:  mov    %eax,(%esp)
088d66d6 +0x20:  call   088d6efc <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x77e>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x77e
088d66db +0x25:  sub    $0x4,%esp
088d66de +0x28:  mov    0x8(%ebp),%eax
088d66e1 +0x2b:  lea    0xd4(%eax),%edx
088d66e7 +0x31:  lea    -0xc(%ebp),%eax
088d66ea +0x34:  mov    %edx,0x4(%esp)
088d66ee +0x38:  mov    %eax,(%esp)
088d66f1 +0x3b:  call   088d6f28 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x7aa>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x7aa
088d66f6 +0x40:  sub    $0x4,%esp
088d66f9 +0x43:  lea    -0xc(%ebp),%eax
088d66fc +0x46:  mov    %eax,0x4(%esp)
088d6700 +0x4a:  lea    -0x10(%ebp),%eax
088d6703 +0x4d:  mov    %eax,(%esp)
088d6706 +0x50:  call   088d6f4e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x7d0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x7d0
088d670b +0x55:  test   %al,%al
088d670d +0x57:  je     088d671f <+0x69>
088d670f +0x59:  lea    -0x10(%ebp),%eax
088d6712 +0x5c:  mov    %eax,(%esp)
088d6715 +0x5f:  call   088d6f62 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x7e4>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x7e4
088d671a +0x64:  mov    0x4(%eax),%eax
088d671d +0x67:  jmp    088d6724 <+0x6e>
088d671f +0x69:  mov    $0x0,%eax
088d6724 +0x6e:  leave
088d6725 +0x6f:  ret
```

## 反编译 C

```c
// BlueMarbleScriptManager::getMap @ 0x88d66b6

/* BlueMarbleScriptManager::getMap(int) */

undefined4 BlueMarbleScriptManager::getMap(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,BlueMarbleMapScript*>> local_14 [4];
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  local_10 [12];
  
  std::
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  ::find((int *)local_14);
  std::
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,BlueMarbleMapScript*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,BlueMarbleMapScript*>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
