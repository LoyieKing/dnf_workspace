# GetNpcIdx

`_ZN16SecretShopScript9GetNpcIdxERiiRSt4pairISt17_Rb_tree_iteratorIS1_IKi12stDungeonNpcEES6_E`

`SecretShopScript::GetNpcIdx(int&, int, std::pair<std::_Rb_tree_iterator<std::pair<int const, stDungeonNpc> >, std::_Rb_tree_iterator<std::pair<int const, stDungeonNpc> > >&)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a82998` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a82998  _ZN16SecretShopScript9GetNpcIdxERiiRSt4pairISt17_Rb_tree_iteratorIS1_IKi12stDungeonNpcEES6_E
#           SecretShopScript::GetNpcIdx(int&, int, std::pair<std::_Rb_tree_iterator<std::pair<int const, stDungeonNpc> >, std::_Rb_tree_iterator<std::pair<int const, stDungeonNpc> > >&)
# range [0x08a82998, 0x08a82a0d]
08a82998 +0x00:  push   %ebp
08a82999 +0x01:  mov    %esp,%ebp
08a8299b +0x03:  sub    $0x28,%esp
08a8299e +0x06:  movl   $0x0,-0x10(%ebp)
08a829a5 +0x0d:  mov    0x14(%ebp),%eax
08a829a8 +0x10:  mov    (%eax),%eax
08a829aa +0x12:  mov    %eax,-0x14(%ebp)
08a829ad +0x15:  jmp    08a829ee <+0x56>
08a829af +0x17:  lea    -0x14(%ebp),%eax
08a829b2 +0x1a:  mov    %eax,(%esp)
08a829b5 +0x1d:  call   08a8378a <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x4fc>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x4fc
08a829ba +0x22:  add    $0x4,%eax
08a829bd +0x25:  mov    %eax,-0xc(%ebp)
08a829c0 +0x28:  mov    -0xc(%ebp),%eax
08a829c3 +0x2b:  mov    0x8(%eax),%eax
08a829c6 +0x2e:  add    %eax,-0x10(%ebp)
08a829c9 +0x31:  mov    -0x10(%ebp),%eax
08a829cc +0x34:  cmp    0x10(%ebp),%eax
08a829cf +0x37:  jle    08a829e3 <+0x4b>
08a829d1 +0x39:  mov    -0xc(%ebp),%eax
08a829d4 +0x3c:  mov    0x4(%eax),%edx
08a829d7 +0x3f:  mov    0xc(%ebp),%eax
08a829da +0x42:  mov    %edx,(%eax)
08a829dc +0x44:  mov    $0x1,%eax
08a829e1 +0x49:  jmp    08a82a0c <+0x74>
08a829e3 +0x4b:  lea    -0x14(%ebp),%eax
08a829e6 +0x4e:  mov    %eax,(%esp)
08a829e9 +0x51:  call   08a837c4 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x536>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x536
08a829ee +0x56:  mov    0x14(%ebp),%eax
08a829f1 +0x59:  add    $0x4,%eax
08a829f4 +0x5c:  mov    %eax,0x4(%esp)
08a829f8 +0x60:  lea    -0x14(%ebp),%eax
08a829fb +0x63:  mov    %eax,(%esp)
08a829fe +0x66:  call   08a83776 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x4e8>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x4e8
08a82a03 +0x6b:  test   %al,%al
08a82a05 +0x6d:  jne    08a829af <+0x17>
08a82a07 +0x6f:  mov    $0x0,%eax
08a82a0c +0x74:  leave
08a82a0d +0x75:  ret
```

## 反编译 C

```c
// SecretShopScript::GetNpcIdx @ 0x8a82998

/* SecretShopScript::GetNpcIdx(int&, int, std::pair<std::_Rb_tree_iterator<std::pair<int const,
   stDungeonNpc> >, std::_Rb_tree_iterator<std::pair<int const, stDungeonNpc> > >&) */

undefined4 __thiscall
SecretShopScript::GetNpcIdx(SecretShopScript *this,int *param_1,int param_2,pair *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_18 = *(undefined4 *)param_3;
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_18,
                       (_Rb_tree_iterator *)(param_3 + 4));
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_18);
    local_10 = iVar2 + 4;
    local_14 = local_14 + *(int *)(iVar2 + 0xc);
    if (param_2 < local_14) break;
    std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_18);
  }
  *param_1 = *(int *)(iVar2 + 8);
  return 1;
}
```
