# getTile

`_ZN23BlueMarbleScriptManager7getTileEi`

`BlueMarbleScriptManager::getTile(int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleScriptManager` | `0x088d6646` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d6646  _ZN23BlueMarbleScriptManager7getTileEi
#           BlueMarbleScriptManager::getTile(int)
# range [0x088d6646, 0x088d66b5]
088d6646 +0x00:  push   %ebp
088d6647 +0x01:  mov    %esp,%ebp
088d6649 +0x03:  sub    $0x28,%esp
088d664c +0x06:  mov    0x8(%ebp),%eax
088d664f +0x09:  lea    0xbc(%eax),%ecx
088d6655 +0x0f:  lea    -0x10(%ebp),%eax
088d6658 +0x12:  lea    0xc(%ebp),%edx
088d665b +0x15:  mov    %edx,0x8(%esp)
088d665f +0x19:  mov    %ecx,0x4(%esp)
088d6663 +0x1d:  mov    %eax,(%esp)
088d6666 +0x20:  call   088d6e88 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x70a>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x70a
088d666b +0x25:  sub    $0x4,%esp
088d666e +0x28:  mov    0x8(%ebp),%eax
088d6671 +0x2b:  lea    0xbc(%eax),%edx
088d6677 +0x31:  lea    -0xc(%ebp),%eax
088d667a +0x34:  mov    %edx,0x4(%esp)
088d667e +0x38:  mov    %eax,(%esp)
088d6681 +0x3b:  call   088d6eb4 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x736>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x736
088d6686 +0x40:  sub    $0x4,%esp
088d6689 +0x43:  lea    -0xc(%ebp),%eax
088d668c +0x46:  mov    %eax,0x4(%esp)
088d6690 +0x4a:  lea    -0x10(%ebp),%eax
088d6693 +0x4d:  mov    %eax,(%esp)
088d6696 +0x50:  call   088d6eda <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x75c>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x75c
088d669b +0x55:  test   %al,%al
088d669d +0x57:  je     088d66af <+0x69>
088d669f +0x59:  lea    -0x10(%ebp),%eax
088d66a2 +0x5c:  mov    %eax,(%esp)
088d66a5 +0x5f:  call   088d6eee <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x770>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x770
088d66aa +0x64:  mov    0x4(%eax),%eax
088d66ad +0x67:  jmp    088d66b4 <+0x6e>
088d66af +0x69:  mov    $0x0,%eax
088d66b4 +0x6e:  leave
088d66b5 +0x6f:  ret
```

## 反编译 C

```c
// BlueMarbleScriptManager::getTile @ 0x88d6646

/* BlueMarbleScriptManager::getTile(int) */

undefined4 BlueMarbleScriptManager::getTile(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,BlueMarbleTileScript*>> local_14 [4];
  map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
  local_10 [12];
  
  std::
  map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
  ::find((int *)local_14);
  std::
  map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,BlueMarbleTileScript*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,BlueMarbleTileScript*>>::operator->(local_14)
    ;
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
