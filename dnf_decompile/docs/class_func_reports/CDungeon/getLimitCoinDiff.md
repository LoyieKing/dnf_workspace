# getLimitCoinDiff

`_ZNK8CDungeon16getLimitCoinDiffEiRi`

`CDungeon::getLimitCoinDiff(int, int&) const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x08365316` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365316  _ZNK8CDungeon16getLimitCoinDiffEiRi
#           CDungeon::getLimitCoinDiff(int, int&) const
# range [0x08365316, 0x083653af]
08365316 +0x00:  push   %ebp
08365317 +0x01:  mov    %esp,%ebp
08365319 +0x03:  sub    $0x28,%esp
0836531c +0x06:  mov    0x8(%ebp),%eax
0836531f +0x09:  add    $0x91c,%eax
08365324 +0x0e:  mov    %eax,(%esp)
08365327 +0x11:  call   08395bc8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25668>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25668
0836532c +0x16:  test   %eax,%eax
0836532e +0x18:  sete   %al
08365331 +0x1b:  test   %al,%al
08365333 +0x1d:  je     0836533c <+0x26>
08365335 +0x1f:  mov    $0x0,%eax
0836533a +0x24:  jmp    083653ae <+0x98>
0836533c +0x26:  mov    0x8(%ebp),%eax
0836533f +0x29:  lea    0x91c(%eax),%ecx
08365345 +0x2f:  lea    -0x10(%ebp),%eax
08365348 +0x32:  lea    0xc(%ebp),%edx
0836534b +0x35:  mov    %edx,0x8(%esp)
0836534f +0x39:  mov    %ecx,0x4(%esp)
08365353 +0x3d:  mov    %eax,(%esp)
08365356 +0x40:  call   08395b54 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255f4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255f4
0836535b +0x45:  sub    $0x4,%esp
0836535e +0x48:  mov    0x8(%ebp),%eax
08365361 +0x4b:  lea    0x91c(%eax),%edx
08365367 +0x51:  lea    -0xc(%ebp),%eax
0836536a +0x54:  mov    %edx,0x4(%esp)
0836536e +0x58:  mov    %eax,(%esp)
08365371 +0x5b:  call   08395b80 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25620>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25620
08365376 +0x60:  sub    $0x4,%esp
08365379 +0x63:  lea    -0xc(%ebp),%eax
0836537c +0x66:  mov    %eax,0x4(%esp)
08365380 +0x6a:  lea    -0x10(%ebp),%eax
08365383 +0x6d:  mov    %eax,(%esp)
08365386 +0x70:  call   08395ba6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25646>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25646
0836538b +0x75:  test   %al,%al
0836538d +0x77:  je     083653a9 <+0x93>
0836538f +0x79:  lea    -0x10(%ebp),%eax
08365392 +0x7c:  mov    %eax,(%esp)
08365395 +0x7f:  call   08395bba <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2565a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2565a
0836539a +0x84:  mov    0x4(%eax),%edx
0836539d +0x87:  mov    0x10(%ebp),%eax
083653a0 +0x8a:  mov    %edx,(%eax)
083653a2 +0x8c:  mov    $0x1,%eax
083653a7 +0x91:  jmp    083653ae <+0x98>
083653a9 +0x93:  mov    $0x0,%eax
083653ae +0x98:  leave
083653af +0x99:  ret
```

## 反编译 C

```c
// CDungeon::getLimitCoinDiff @ 0x8365316

/* CDungeon::getLimitCoinDiff(int, int&) const */

undefined4 __thiscall CDungeon::getLimitCoinDiff(CDungeon *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>> local_14 [4];
  map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
  local_10 [12];
  
  iVar2 = std::
          map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
          ::size((map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
                  *)(this + 0x91c));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    std::
    map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
    ::find((int *)local_14);
    std::
    map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>>::operator!=
                      (local_14,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>>::operator->
                        (local_14);
      *param_2 = *(int *)(iVar2 + 4);
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
