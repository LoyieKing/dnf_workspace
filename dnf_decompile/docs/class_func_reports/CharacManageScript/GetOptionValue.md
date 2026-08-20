# GetOptionValue

`_ZN18CharacManageScript14GetOptionValueEi`

`CharacManageScript::GetOptionValue(int)`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e11fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e11fc  _ZN18CharacManageScript14GetOptionValueEi
#           CharacManageScript::GetOptionValue(int)
# range [0x088e11fc, 0x088e1265]
088e11fc +0x00:  push   %ebp
088e11fd +0x01:  mov    %esp,%ebp
088e11ff +0x03:  sub    $0x28,%esp
088e1202 +0x06:  mov    0x8(%ebp),%eax
088e1205 +0x09:  lea    0x64(%eax),%ecx
088e1208 +0x0c:  lea    -0x10(%ebp),%eax
088e120b +0x0f:  lea    0xc(%ebp),%edx
088e120e +0x12:  mov    %edx,0x8(%esp)
088e1212 +0x16:  mov    %ecx,0x4(%esp)
088e1216 +0x1a:  mov    %eax,(%esp)
088e1219 +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088e121e +0x22:  sub    $0x4,%esp
088e1221 +0x25:  mov    0x8(%ebp),%eax
088e1224 +0x28:  lea    0x64(%eax),%edx
088e1227 +0x2b:  lea    -0xc(%ebp),%eax
088e122a +0x2e:  mov    %edx,0x4(%esp)
088e122e +0x32:  mov    %eax,(%esp)
088e1231 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088e1236 +0x3a:  sub    $0x4,%esp
088e1239 +0x3d:  lea    -0xc(%ebp),%eax
088e123c +0x40:  mov    %eax,0x4(%esp)
088e1240 +0x44:  lea    -0x10(%ebp),%eax
088e1243 +0x47:  mov    %eax,(%esp)
088e1246 +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
088e124b +0x4f:  test   %al,%al
088e124d +0x51:  je     088e125f <+0x63>
088e124f +0x53:  lea    -0x10(%ebp),%eax
088e1252 +0x56:  mov    %eax,(%esp)
088e1255 +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
088e125a +0x5e:  mov    0x4(%eax),%eax
088e125d +0x61:  jmp    088e1264 <+0x68>
088e125f +0x63:  mov    $0x0,%eax
088e1264 +0x68:  leave
088e1265 +0x69:  ret
```

## 反编译 C

```c
// CharacManageScript::GetOptionValue @ 0x88e11fc

/* CharacManageScript::GetOptionValue(int) */

undefined4 CharacManageScript::GetOptionValue(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
