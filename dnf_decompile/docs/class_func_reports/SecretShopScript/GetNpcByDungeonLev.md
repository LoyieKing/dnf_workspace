# GetNpcByDungeonLev

`_ZN16SecretShopScript18GetNpcByDungeonLevERiii`

`SecretShopScript::GetNpcByDungeonLev(int&, int, int)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a8293c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8293c  _ZN16SecretShopScript18GetNpcByDungeonLevERiii
#           SecretShopScript::GetNpcByDungeonLev(int&, int, int)
# range [0x08a8293c, 0x08a82997]
08a8293c +0x00:  push   %ebp
08a8293d +0x01:  mov    %esp,%ebp
08a8293f +0x03:  sub    $0x28,%esp
08a82942 +0x06:  mov    0x14(%ebp),%eax
08a82945 +0x09:  mov    %eax,0x4(%esp)
08a82949 +0x0d:  mov    0x8(%ebp),%eax
08a8294c +0x10:  mov    %eax,(%esp)
08a8294f +0x13:  call   08a830e2 <_ZN16SecretShopScript11GetLevelIdxEi>  ; SecretShopScript::GetLevelIdx(int)
08a82954 +0x18:  mov    %eax,-0xc(%ebp)
08a82957 +0x1b:  mov    0x8(%ebp),%eax
08a8295a +0x1e:  lea    0x18(%eax),%ecx
08a8295d +0x21:  lea    -0x14(%ebp),%eax
08a82960 +0x24:  lea    -0xc(%ebp),%edx
08a82963 +0x27:  mov    %edx,0x8(%esp)
08a82967 +0x2b:  mov    %ecx,0x4(%esp)
08a8296b +0x2f:  mov    %eax,(%esp)
08a8296e +0x32:  call   08a83798 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x50a>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x50a
08a82973 +0x37:  sub    $0x4,%esp
08a82976 +0x3a:  lea    -0x14(%ebp),%eax
08a82979 +0x3d:  mov    %eax,0xc(%esp)
08a8297d +0x41:  mov    0x10(%ebp),%eax
08a82980 +0x44:  mov    %eax,0x8(%esp)
08a82984 +0x48:  mov    0xc(%ebp),%eax
08a82987 +0x4b:  mov    %eax,0x4(%esp)
08a8298b +0x4f:  mov    0x8(%ebp),%eax
08a8298e +0x52:  mov    %eax,(%esp)
08a82991 +0x55:  call   08a82998 <_ZN16SecretShopScript9GetNpcIdxERiiRSt4pairISt17_Rb_tree_iteratorIS1_IKi12stDungeonNpcEES6_E>  ; SecretShopScript::GetNpcIdx(int&, int, std::pair<std::_Rb_tree_iterator<std::pair<int const, stDungeonNpc> >, std::_Rb_tree_iterator<std::pair<int const, stDungeonNpc> > >&)
08a82996 +0x5a:  leave
08a82997 +0x5b:  ret
```

## 反编译 C

```c
// SecretShopScript::GetNpcByDungeonLev @ 0x8a8293c

/* SecretShopScript::GetNpcByDungeonLev(int&, int, int) */

void __thiscall
SecretShopScript::GetNpcByDungeonLev(SecretShopScript *this,int *param_1,int param_2,int param_3)

{
  int local_18 [2];
  undefined4 local_10;
  
  local_10 = GetLevelIdx(this,param_3);
  std::multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>::
  equal_range(local_18);
  GetNpcIdx(this,param_1,param_2,(pair *)local_18);
  return;
}
```
