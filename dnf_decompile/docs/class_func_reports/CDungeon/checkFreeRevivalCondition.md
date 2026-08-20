# checkFreeRevivalCondition

`_ZNK8CDungeon25checkFreeRevivalConditionEi`

`CDungeon::checkFreeRevivalCondition(int) const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x08365298` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365298  _ZNK8CDungeon25checkFreeRevivalConditionEi
#           CDungeon::checkFreeRevivalCondition(int) const
# range [0x08365298, 0x08365315]
08365298 +0x00:  push   %ebp
08365299 +0x01:  mov    %esp,%ebp
0836529b +0x03:  sub    $0x28,%esp
0836529e +0x06:  mov    0x8(%ebp),%eax
083652a1 +0x09:  lea    0x91c(%eax),%ecx
083652a7 +0x0f:  lea    -0x10(%ebp),%eax
083652aa +0x12:  lea    0xc(%ebp),%edx
083652ad +0x15:  mov    %edx,0x8(%esp)
083652b1 +0x19:  mov    %ecx,0x4(%esp)
083652b5 +0x1d:  mov    %eax,(%esp)
083652b8 +0x20:  call   08395b54 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255f4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255f4
083652bd +0x25:  sub    $0x4,%esp
083652c0 +0x28:  mov    0x8(%ebp),%eax
083652c3 +0x2b:  lea    0x91c(%eax),%edx
083652c9 +0x31:  lea    -0xc(%ebp),%eax
083652cc +0x34:  mov    %edx,0x4(%esp)
083652d0 +0x38:  mov    %eax,(%esp)
083652d3 +0x3b:  call   08395b80 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25620>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25620
083652d8 +0x40:  sub    $0x4,%esp
083652db +0x43:  lea    -0xc(%ebp),%eax
083652de +0x46:  mov    %eax,0x4(%esp)
083652e2 +0x4a:  lea    -0x10(%ebp),%eax
083652e5 +0x4d:  mov    %eax,(%esp)
083652e8 +0x50:  call   08395ba6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25646>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25646
083652ed +0x55:  test   %al,%al
083652ef +0x57:  je     0836530e <+0x76>
083652f1 +0x59:  lea    -0x10(%ebp),%eax
083652f4 +0x5c:  mov    %eax,(%esp)
083652f7 +0x5f:  call   08395bba <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2565a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2565a
083652fc +0x64:  movzbl 0x8(%eax),%eax
08365300 +0x68:  xor    $0x1,%eax
08365303 +0x6b:  test   %al,%al
08365305 +0x6d:  je     0836530e <+0x76>
08365307 +0x6f:  mov    $0x1,%eax
0836530c +0x74:  jmp    08365313 <+0x7b>
0836530e +0x76:  mov    $0x0,%eax
08365313 +0x7b:  leave
08365314 +0x7c:  ret
08365315 +0x7d:  nop
```

## 反编译 C

```c
// CDungeon::checkFreeRevivalCondition @ 0x8365298

/* CDungeon::checkFreeRevivalCondition(int) const */

undefined4 CDungeon::checkFreeRevivalCondition(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>> local_14 [4];
  map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
  local_10 [12];
  
  std::
  map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
  ::find((int *)local_14);
  std::
  map<int,UseCoinDungeonDiff,std::less<int>,std::allocator<std::pair<int_const,UseCoinDungeonDiff>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if ((cVar1 != '\0') &&
     (iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,UseCoinDungeonDiff>>::operator->
                        (local_14), *(char *)(iVar2 + 8) != '\x01')) {
    return 1;
  }
  return 0;
}
```
